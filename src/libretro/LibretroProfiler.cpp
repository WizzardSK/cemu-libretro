// Sampling profiler for the libretro core (branch flamegraph, sco8487): finds
// the code the busiest threads spend their time in, for a flamegraph.
//
// RetroArch from the Play Store cannot be profiled from outside (simpleperf
// needs a profileable or rooted app), so the core samples itself: a thread
// signals the busiest threads of the process 250 times a second, each one
// records its program counter and walks its frame-pointer chain (read with
// process_vm_readv, so a broken chain or a JIT frame without one cannot fault),
// and the samples are folded into "thread;outermost;...;innermost count" lines
// with each frame as library+offset, in system/Cemu/profile.folded. The core's
// offsets are symbolized against the build afterwards.

#include "LibretroProfiler.h"

#if defined(__linux__)

#include <algorithm>
#include <atomic>
#include <cerrno>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <dlfcn.h>
#include <fstream>
#include <map>
#include <signal.h>
#include <string>
#include <sys/syscall.h>
#include <sys/uio.h>
#include <thread>
#include <ucontext.h>
#include <unistd.h>
#include <unordered_map>
#include <vector>

namespace
{
	constexpr int kMaxDepth = 32;
	constexpr size_t kRingSize = 1 << 14;
	constexpr int kThreadsSampled = 10;
	constexpr int kSignal = SIGPROF;

	struct Sample
	{
		std::atomic<uint32_t> ready{0};
		pid_t tid = 0;
		uint32_t depth = 0;
		uintptr_t pc[kMaxDepth] = {};
	};

	Sample g_ring[kRingSize];
	std::atomic<uint64_t> g_write{0};
	std::atomic<bool> g_running{false};
	std::thread g_thread;
	std::string g_out_path;
	pid_t g_pid = 0;
	struct sigaction g_old_action;

	// Reads one word of this process's memory without faulting on a bad address
	bool safe_read(uintptr_t address, uintptr_t& value)
	{
		struct iovec local{&value, sizeof(value)};
		struct iovec remote{reinterpret_cast<void*>(address), sizeof(value)};
		return syscall(SYS_process_vm_readv, g_pid, &local, 1, &remote, 1, 0) == (ssize_t)sizeof(value);
	}

	void on_signal(int, siginfo_t*, void* context)
	{
		const int saved_errno = errno;
		const uint64_t slot = g_write.fetch_add(1, std::memory_order_relaxed) % kRingSize;
		Sample& s = g_ring[slot];
		if (s.ready.load(std::memory_order_acquire))
		{
			errno = saved_errno;
			return; // the writer is behind: drop this one
		}
		const ucontext_t* uc = static_cast<const ucontext_t*>(context);
		uint32_t depth = 0;
#if defined(__aarch64__)
		s.pc[depth++] = uc->uc_mcontext.pc;
		uintptr_t lr = uc->uc_mcontext.regs[30];
		uintptr_t fp = uc->uc_mcontext.regs[29];
		const uintptr_t sp = uc->uc_mcontext.sp;
		// The caller of a leaf that has not pushed a frame
		if (lr)
			s.pc[depth++] = lr;
#elif defined(__x86_64__)
		s.pc[depth++] = uc->uc_mcontext.gregs[REG_RIP];
		uintptr_t fp = uc->uc_mcontext.gregs[REG_RBP];
		const uintptr_t sp = uc->uc_mcontext.gregs[REG_RSP];
#else
		uintptr_t fp = 0;
		const uintptr_t sp = 0;
#endif
		// Frame records: [fp] = caller's fp, [fp + 8] = return address. A
		// chain that leaves the stack, or does not grow, ends the walk.
		while (depth < kMaxDepth && fp >= sp && fp - sp < (64u << 20) && !(fp & 7))
		{
			uintptr_t next = 0, ret = 0;
			if (!safe_read(fp, next) || !safe_read(fp + sizeof(uintptr_t), ret) || !ret)
				break;
			// The first record can repeat the link register taken above
			if (!(depth == 2 && ret == s.pc[1]))
				s.pc[depth++] = ret;
			if (next <= fp)
				break;
			fp = next;
		}
		s.tid = static_cast<pid_t>(syscall(SYS_gettid));
		s.depth = depth;
		s.ready.store(1, std::memory_order_release);
		errno = saved_errno;
	}

	struct ThreadInfo
	{
		std::string name;
		uint64_t cpu = 0;	  // utime + stime at the last look
		uint64_t busy = 0;	  // over the last second
	};

	void read_threads(std::map<pid_t, ThreadInfo>& threads)
	{
		DIR* dir = opendir("/proc/self/task");
		if (!dir)
			return;
		std::map<pid_t, ThreadInfo> now;
		while (dirent* e = readdir(dir))
		{
			const pid_t tid = static_cast<pid_t>(atoi(e->d_name));
			if (tid <= 0)
				continue;
			char path[64];
			snprintf(path, sizeof(path), "/proc/self/task/%d/stat", tid);
			FILE* f = fopen(path, "r");
			if (!f)
				continue;
			char buf[1024];
			const size_t n = fread(buf, 1, sizeof(buf) - 1, f);
			fclose(f);
			buf[n] = 0;
			const char* open = strchr(buf, '(');
			const char* close = strrchr(buf, ')');
			if (!open || !close)
				continue;
			ThreadInfo info;
			info.name.assign(open + 1, close - open - 1);
			// utime and stime are fields 14 and 15; field 3 follows ") "
			unsigned long utime = 0, stime = 0;
			const char* p = close + 2;
			for (int field = 3; field < 14 && *p; ++p)
				if (*p == ' ')
					++field;
			sscanf(p, "%lu %lu", &utime, &stime);
			info.cpu = utime + stime;
			auto old = threads.find(tid);
			info.busy = old != threads.end() && info.cpu >= old->second.cpu ? info.cpu - old->second.cpu : 0;
			now[tid] = info;
		}
		closedir(dir);
		threads.swap(now);
	}

	std::string frame_name(uintptr_t pc, std::unordered_map<uintptr_t, std::string>& cache)
	{
		auto it = cache.find(pc);
		if (it != cache.end())
			return it->second;
		Dl_info info{};
		std::string name;
		if (dladdr(reinterpret_cast<void*>(pc), &info) && info.dli_fname)
		{
			const char* base = strrchr(info.dli_fname, '/');
			char text[256];
			snprintf(text, sizeof(text), "%s+0x%lx", base ? base + 1 : info.dli_fname,
				static_cast<unsigned long>(pc - reinterpret_cast<uintptr_t>(info.dli_fbase)));
			name = text;
		}
		else
			name = "[jit]";
		cache.emplace(pc, name);
		return name;
	}

	void run()
	{
		std::map<pid_t, ThreadInfo> threads;
		std::unordered_map<std::string, uint64_t> folded;
		std::unordered_map<uintptr_t, std::string> names;
		uint64_t read = 0, total = 0;
		auto last_threads = std::chrono::steady_clock::now() - std::chrono::seconds(2);
		auto last_write = std::chrono::steady_clock::now();
		std::vector<pid_t> targets;
		const pid_t self = static_cast<pid_t>(syscall(SYS_gettid));
		auto write_out = [&]() {
			std::ofstream out(g_out_path, std::ios::trunc);
			for (const auto& [stack, count] : folded)
				out << stack << ' ' << count << '\n';
		};
		while (g_running.load())
		{
			const auto now = std::chrono::steady_clock::now();
			if (now - last_threads >= std::chrono::seconds(1))
			{
				// The busiest threads of the last second
				read_threads(threads);
				std::vector<std::pair<uint64_t, pid_t>> busy;
				for (const auto& [tid, info] : threads)
					if (tid != self)
						busy.emplace_back(info.busy, tid);
				std::sort(busy.rbegin(), busy.rend());
				targets.clear();
				for (size_t i = 0; i < busy.size() && i < kThreadsSampled; ++i)
					targets.push_back(busy[i].second);
				last_threads = now;
			}
			for (pid_t tid : targets)
				syscall(SYS_tgkill, g_pid, tid, kSignal);
			std::this_thread::sleep_for(std::chrono::milliseconds(4));
			// Fold what came in
			const uint64_t written = g_write.load(std::memory_order_relaxed);
			for (; read < written; ++read)
			{
				Sample& s = g_ring[read % kRingSize];
				if (!s.ready.load(std::memory_order_acquire))
					break;
				auto t = threads.find(s.tid);
				std::string stack = t != threads.end() ? t->second.name : std::to_string(s.tid);
				for (int i = int(s.depth) - 1; i >= 0; --i)
					stack += ';' + frame_name(s.pc[i], names);
				folded[stack]++;
				total++;
				s.ready.store(0, std::memory_order_release);
			}
			if (now - last_write >= std::chrono::seconds(10))
			{
				write_out();
				last_write = now;
			}
		}
		write_out();
	}
}

void LibretroProfiler_Start(const std::string& out_path)
{
	if (g_running.load())
		return;
	g_pid = getpid();
	g_out_path = out_path;
	struct sigaction action{};
	action.sa_sigaction = on_signal;
	action.sa_flags = SA_SIGINFO | SA_RESTART;
	sigemptyset(&action.sa_mask);
	sigaction(kSignal, &action, &g_old_action);
	g_running.store(true);
	g_thread = std::thread(run);
}

void LibretroProfiler_Stop()
{
	if (!g_running.exchange(false))
		return;
	if (g_thread.joinable())
		g_thread.join();
	sigaction(kSignal, &g_old_action, nullptr);
}

#else

void LibretroProfiler_Start(const std::string&) {}
void LibretroProfiler_Stop() {}

#endif
