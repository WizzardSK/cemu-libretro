#include <signal.h>
#if defined(__linux__)
#include <sys/prctl.h>
#include <stdio.h>
#endif
#ifdef __ANDROID__
// bionic ships no execinfo.h, but it does ship the unwinder the C++ runtime
// uses, and dladdr to turn the addresses back into something readable.
#include <unwind.h>
#include <dlfcn.h>
#else
#include <execinfo.h>
#endif

// glibc only exposes TRAP_HWBKPT from 2.28 onwards, and the buildbot's x86_64
// image is older than that. The kernel constant it stands for is fixed by the
// uapi headers, so define it rather than lose hardware breakpoints there.
#ifndef TRAP_HWBKPT
#define TRAP_HWBKPT 4
#endif
#include <string.h>
#include <string>
#include "config/CemuConfig.h"
#include "util/helpers/StringHelpers.h"
#include "Cafe/HW/Espresso/PPCState.h"
#include "Cafe/HW/Espresso/PPCCallback.h"
#include "ExceptionHandler.h"

#include "Cafe/HW/Espresso/Debugger/GDBStub.h"
#include "Cafe/HW/Espresso/Debugger/GDBBreakpoints.h"

#if BOOST_OS_LINUX
#include "ELFSymbolTable.h"
#endif

#if defined(__linux__)
// Which mapping an address belongs to. A pc that lands in a stack or in an
// anonymous rw- region says "jumped into something that is not code", which is
// a different bug from a bad read, and the backtrace cannot tell them apart
// when the unwinder stops at the signal frame.
static std::string DescribeAddress(uintptr_t addr)
{
	if (addr == 0)
		return "null";
	FILE* maps = fopen("/proc/self/maps", "r");
	if (!maps)
		return "unknown";
	char line[512];
	std::string result = "unmapped";
	while (fgets(line, sizeof(line), maps))
	{
		unsigned long long start = 0, end = 0;
		if (sscanf(line, "%llx-%llx", &start, &end) != 2)
			continue;
		if (addr < start || addr >= end)
			continue;
		std::string text(line);
		while (!text.empty() && (text.back() == '\n' || text.back() == ' '))
			text.pop_back();
		result = fmt::format("{} (+0x{:x})", text, addr - static_cast<uintptr_t>(start));
		break;
	}
	fclose(maps);
	return result;
}

static std::string CurrentThreadName()
{
	char name[32] = {};
	if (prctl(PR_GET_NAME, name, 0, 0, 0) != 0)
		return "?";
	return std::string(name);
}
#endif // __linux__

#ifdef __ANDROID__
namespace
{
	struct AndroidUnwindState
	{
		void** frames;
		size_t count;
		size_t capacity;
	};

	_Unwind_Reason_Code AndroidUnwindFrame(struct _Unwind_Context* ctx, void* arg)
	{
		auto* state = static_cast<AndroidUnwindState*>(arg);
		const uintptr_t ip = _Unwind_GetIP(ctx);
		if (ip == 0)
			return _URC_NO_REASON;
		if (state->count >= state->capacity)
			return _URC_END_OF_STACK;
		state->frames[state->count++] = reinterpret_cast<void*>(ip);
		return _URC_NO_REASON;
	}
}

// Prints frames as module+offset, which is what addr2line against the unstripped
// .so wants - the loaded base is randomised, so the raw addresses are useless on
// their own.
static void PrintAndroidBacktrace(void** frames, size_t size)
{
	if (size == 0)
	{
		CrashLog_WriteLine("Backtrace unavailable (the unwinder returned no frames)");
		return;
	}
	for (size_t i = 0; i < size; i++)
	{
		const uintptr_t addr = reinterpret_cast<uintptr_t>(frames[i]);
		Dl_info info{};
		if (dladdr(frames[i], &info) != 0 && info.dli_fname != nullptr)
		{
			const uintptr_t base = reinterpret_cast<uintptr_t>(info.dli_fbase);
			std::string symbol;
			if (info.dli_sname != nullptr)
				symbol = fmt::format("  {}+0x{:x}", info.dli_sname,
					addr - reinterpret_cast<uintptr_t>(info.dli_saddr));
			CrashLog_WriteLine(fmt::format("#{:02} 0x{:016x}  {}+0x{:x}{}", i, addr, info.dli_fname,
				addr - base, symbol));
		}
		else
		{
			CrashLog_WriteLine(fmt::format("#{:02} 0x{:016x}  <unmapped>", i, addr));
		}
	}
}
#endif // __ANDROID__

#if BOOST_OS_LINUX
void DemangleAndPrintBacktrace(char** backtrace, size_t size)
{
	ELFSymbolTable symTable;
	for (char** i = backtrace; i < backtrace + size; i++)
	{
		std::string_view traceLine{*i};

		// basic check to see if the backtrace line matches expected format
		size_t parenthesesOpen = traceLine.find_last_of('(');
		size_t parenthesesClose = traceLine.find_last_of(')');
		size_t offsetPlus = traceLine.find_last_of('+');
		if (!parenthesesOpen || !parenthesesClose || !offsetPlus ||
			 offsetPlus < parenthesesOpen || offsetPlus > parenthesesClose)
		{
			// fall back to default string
            CrashLog_WriteLine(traceLine);
			continue;
		}

		// attempt to resolve symbol from regular symbol table if missing from dynamic symbol table
		uint64 newOffset = -1;
		std::string_view symbolName = traceLine.substr(parenthesesOpen+1, offsetPlus-parenthesesOpen-1);
		if (symbolName.empty())
		{
			uint64 symbolOffset = StringHelpers::ToInt64(traceLine.substr(offsetPlus+1,offsetPlus+1-parenthesesClose-1));
			symbolName = symTable.OffsetToSymbol(symbolOffset, newOffset);
		}

        CrashLog_WriteLine(traceLine.substr(0, parenthesesOpen+1), false);

        CrashLog_WriteLine(boost::core::demangle(symbolName.empty() ? "" : symbolName.data()), false);

		// print relative or existing symbol offset.
        CrashLog_WriteLine("+", false);
		if (newOffset != -1)
		{
            CrashLog_WriteLine(fmt::format("0x{:x}", newOffset), false);
            CrashLog_WriteLine(traceLine.substr(parenthesesClose));
		}
		else
		{
            CrashLog_WriteLine(traceLine.substr(offsetPlus+1));
		}
	}
}
#endif

// handle signals that would dump core, print stacktrace and then dump depending on config
void handlerDumpingSignal(int sig, siginfo_t *info, void *context)
{
#if defined(ARCH_X86_64) && BOOST_OS_LINUX
	// Check for hardware breakpoints
	if (info->si_signo == SIGTRAP && info->si_code == TRAP_HWBKPT)
	{
		uint64 dr6 = _ReadDR6();
		g_gdbstub->HandleAccessException(dr6);
		return;
	}
#endif

    if(!CrashLog_Create())
        return; // give up if crashlog was already created

#if defined(__linux__) && defined(__aarch64__)
	// backtrace() cannot unwind past the signal frame here, so record the
	// registers that actually say where this came from: lr is the return
	// address of the call that faulted.
	{
		const mcontext_t& mc = static_cast<ucontext_t*>(context)->uc_mcontext;
		const uintptr_t fault = (uintptr_t)(info ? info->si_addr : nullptr);
		CrashLog_WriteLine(fmt::format("fault={:#x} pc={:#x} lr={:#x} sp={:#x}",
			(uint64)fault, (uint64)mc.pc, (uint64)mc.regs[30], (uint64)mc.sp));
		CrashLog_WriteLine(fmt::format("thread: {}", CurrentThreadName()));
		CrashLog_WriteLine(fmt::format("  pc in {}", DescribeAddress((uintptr_t)mc.pc)));
		CrashLog_WriteLine(fmt::format("  lr in {}", DescribeAddress((uintptr_t)mc.regs[30])));
		if (fault != (uintptr_t)mc.pc)
			CrashLog_WriteLine(fmt::format("  fault in {}", DescribeAddress(fault)));
	}
#endif

	// Written here for the same reason as the registers: the host backtrace
	// below can fault and take the rest of the report with it, and on a crash
	// that came out of emulated code this is the part that says where.
	if (PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance())
	{
		CrashLog_WriteLine(fmt::format("guest: IP {:08x} LR {:08x}",
			hCPU->instructionPointer, (uint32)hCPU->spr.LR));
	}
	else
	{
		CrashLog_WriteLine("guest: no PPC instance on this thread");
	}

    char* sigName = strsignal(sig);
	if (sigName)
	{
		printf("%s!\n", sigName);
	}
	else
	{
		// should never be the case
		printf("Unknown core dumping signal!\n");
	}

	void* backtraceArray[128];
	size_t size;

	// get void*'s for all entries on the stack
#ifdef __ANDROID__
	{
		AndroidUnwindState state{backtraceArray, 0, 128};
		_Unwind_Backtrace(&AndroidUnwindFrame, &state);
		size = state.count;
	}
#else
	size = backtrace(backtraceArray, 128);
#endif
    // replace the deepest entry with the actual crash address
#if defined(ARCH_X86_64) && BOOST_OS_LINUX > 0
    ucontext_t *uc = (ucontext_t *)context;
    backtraceArray[0] = (void *)uc->uc_mcontext.gregs[REG_RIP];
#endif

    CrashLog_WriteLine(fmt::format("Error: signal {}:", sig));

#if defined(__ANDROID__)
	PrintAndroidBacktrace(backtraceArray, size);
#elif BOOST_OS_LINUX
	char** symbol_trace = backtrace_symbols(backtraceArray, size);

	if (symbol_trace)
	{
        DemangleAndPrintBacktrace(symbol_trace, size);
		free(symbol_trace);
	}
	else
	{
        CrashLog_WriteLine("Failed to read backtrace");
	}
#else
	backtrace_symbols_fd(backtraceArray, size, STDERR_FILENO);
#endif

    std::cerr << fmt::format("\nStacktrace and additional info written to:") << std::endl;
    std::cerr << cemuLog_GetLogFilePath().generic_string() << std::endl;

    CrashLog_SetOutputChannels(false, true);
    ExceptionHandler_LogGeneralInfo();
    CrashLog_SetOutputChannels(true, true);

	if (GetConfig().crash_dump == CrashDump::Enabled)
	{
		// reset signal handler to default and re-raise signal to dump core
		signal(sig, SIG_DFL);
		raise(sig);
		return;
	}
	// exit process ignoring all issues
	_Exit(1);
}

void handler_SIGINT(int sig)
{
	/*
	 * Received when pressing CTRL + C in a console
	 * Ideally should be exiting cleanly after saving settings but currently
	 * there's no clean exit pathway (at least on linux) and exiting the app
	 * by any mean ends up with a SIGABRT from the standard library destroying
	 * threads.
	 */
	_Exit(0);
}

void ExceptionHandler_Init()
{
	struct sigaction action;
	action.sa_flags = 0;
	sigfillset(&action.sa_mask); // don't allow signals to be interrupted

	action.sa_handler = handler_SIGINT;
	sigaction(SIGINT, &action, nullptr);
	sigaction(SIGTERM, &action, nullptr);

    action.sa_flags = SA_SIGINFO;
    action.sa_handler = nullptr;
	action.sa_sigaction = handlerDumpingSignal;
	sigaction(SIGABRT, &action, nullptr);
	sigaction(SIGBUS, &action, nullptr);
	sigaction(SIGFPE, &action, nullptr);
	sigaction(SIGILL, &action, nullptr);
	sigaction(SIGIOT, &action, nullptr);
	sigaction(SIGQUIT, &action, nullptr);
	sigaction(SIGSEGV, &action, nullptr);
	sigaction(SIGSYS, &action, nullptr);
	sigaction(SIGTRAP, &action, nullptr);
}
