#include "Fiber.h"
#include <atomic>
#include <cstdlib>
#include <string>
#include <sys/mman.h>
#include <sys/prctl.h>

// bionic ships no ucontext functions - getcontext() and friends were never part
// of Android's libc - so the stack switching goes through Boost.Context's
// fcontext instead, which vcpkg already builds for the Android triplets.
#include <boost/context/detail/fcontext.hpp>

using boost::context::detail::fcontext_t;
using boost::context::detail::jump_fcontext;
using boost::context::detail::make_fcontext;
using boost::context::detail::transfer_t;

// bionic's prctl.h does not declare these
#ifndef PR_SET_VMA
#define PR_SET_VMA 0x53564d41
#endif
#ifndef PR_SET_VMA_ANON_NAME
#define PR_SET_VMA_ANON_NAME 0
#endif

namespace
{
	struct FiberImpl
	{
		// Where this fiber resumes. Only meaningful while it is not running:
		// unlike swapcontext(), fcontext hands the resume point of the leaving
		// fiber to the one being entered, so it is stored on arrival rather
		// than on departure.
		fcontext_t ctx{};
		void (*entryPoint)(void* userParam){};
		void* userParam{};
		// Bounds of the fiber's own stack, so Switch() can tell a live resume
		// point from a stale one. Both zero for the fiber that wraps a host
		// thread, whose context sits on that thread's real stack and cannot be
		// checked from here.
		uintptr_t stackLow{};
		uintptr_t stackHigh{};
		bool running{};
		// Held for as long as the mapping is named: kernels before the
		// refcounted anon_vma_name keep the caller's pointer rather than a copy.
		std::string debugName;
	};

	thread_local FiberImpl* sCurrentImpl{};

	constexpr size_t kFiberStackSize = 2 * 1024 * 1024;
	constexpr size_t kGuardSize = 4096;

	// Records where the fiber that just switched to us has to be resumed.
	void StoreLeavingFiber(transfer_t t)
	{
		static_cast<FiberImpl*>(t.data)->ctx = t.fctx;
	}

	// Runs on the fiber's own stack the first time it is entered.
	void FiberTrampoline(transfer_t t)
	{
		StoreLeavingFiber(t);
		FiberImpl* self = sCurrentImpl;
		self->entryPoint(self->userParam);
		// Cemu's fiber entry points do not return. There is no context to go
		// back to if one does, so stop here instead of running off the stack.
		cemu_assert_unimplemented();
		std::abort();
	}

	// A jump into a context that no longer describes a suspended frame lands on
	// whatever the stack happens to hold, which shows up as a fault with pc
	// pointing into an anonymous rw- mapping and no usable backtrace, since the
	// frame that jumped is the one that no longer exists. Everything the report
	// would have needed is still here, so check it while it can still be named.
	void CheckSwitchTarget(FiberImpl* leaving, FiberImpl* target)
	{
		const char* problem = nullptr;
		if (!target->ctx)
			problem = "it has no saved context";
		else if (target->running)
			problem = "it is running on another host thread";
		else if (target->stackHigh != 0 &&
			((uintptr_t)target->ctx < target->stackLow || (uintptr_t)target->ctx >= target->stackHigh))
			problem = "its saved context is outside its own stack";
		if (!problem) [[likely]]
			return;
		cemuLog_log(LogType::Force,
			"[Fiber] refusing to switch to \"{}\": {}. leaving \"{}\", target ctx {:#x}, target stack {:#x}-{:#x}",
			target->debugName.empty() ? "unnamed" : target->debugName,
			problem,
			leaving->debugName.empty() ? "unnamed" : leaving->debugName,
			(uintptr_t)target->ctx, target->stackLow, target->stackHigh);
		cemuLog_waitForFlush();
		std::abort();
	}
} // namespace

thread_local Fiber* sCurrentFiber{};

Fiber::Fiber(void(*FiberEntryPoint)(void* userParam), void* userParam, void* privateData) : m_privateData(privateData)
{
	FiberImpl* impl = new FiberImpl();
	impl->entryPoint = FiberEntryPoint;
	impl->userParam = userParam;

	// The stack is mapped rather than malloc()ed for two reasons: a PROT_NONE
	// guard page below it turns an overflow into a fault at the point of the
	// overflow, instead of quietly corrupting whatever the allocator placed
	// underneath, and a mapping can be named, so a crash report says which
	// fiber an address belongs to instead of just "[anon:scudo:secondary]".
	const size_t mappingSize = kGuardSize + kFiberStackSize;
	void* base = mmap(nullptr, mappingSize, PROT_NONE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
	if (base == MAP_FAILED)
	{
		// there is no way back from this - the caller is about to switch to a
		// fiber that has nowhere to run - so say so rather than fault later
		cemuLog_log(LogType::Force, "[Fiber] out of address space for a {} KiB stack", mappingSize / 1024);
		cemuLog_waitForFlush();
		std::abort();
	}
	void* stack = (char*)base + kGuardSize;
	if (mprotect(stack, kFiberStackSize, PROT_READ | PROT_WRITE) != 0)
	{
		munmap(base, mappingSize);
		cemuLog_log(LogType::Force, "[Fiber] could not make a {} KiB stack writable", kFiberStackSize / 1024);
		cemuLog_waitForFlush();
		std::abort();
	}
	m_stackPtr = base;
	impl->stackLow = (uintptr_t)stack;
	impl->stackHigh = impl->stackLow + kFiberStackSize;

	// the stack grows down, so make_fcontext() takes its high end
	impl->ctx = make_fcontext((char*)stack + kFiberStackSize, kFiberStackSize, &FiberTrampoline);
	this->m_implData = impl;
}

Fiber::Fiber(void* privateData) : m_privateData(privateData)
{
	// fiber for the current thread: it is running on its thread's own stack and
	// has no resume point until it switches away
	this->m_implData = new FiberImpl();
	m_stackPtr = nullptr;
}

Fiber::~Fiber()
{
	if(m_stackPtr)
		munmap(m_stackPtr, kGuardSize + kFiberStackSize);
	delete static_cast<FiberImpl*>(m_implData);
}

void Fiber::SetDebugName(const char* name)
{
	FiberImpl* impl = static_cast<FiberImpl*>(m_implData);
	impl->debugName = name ? name : "";
	if (!m_stackPtr || impl->debugName.empty())
		return;
	// best effort: needs CONFIG_ANON_VMA_NAME, and the kernel caps the name at
	// 80 characters and rejects most punctuation
	prctl(PR_SET_VMA, PR_SET_VMA_ANON_NAME, (void*)impl->stackLow, kFiberStackSize, impl->debugName.c_str());
}

Fiber* Fiber::PrepareCurrentThread(void* privateData)
{
	cemu_assert_debug(sCurrentFiber == nullptr);
	sCurrentFiber = new Fiber(privateData);
	sCurrentImpl = static_cast<FiberImpl*>(sCurrentFiber->m_implData);
	sCurrentImpl->running = true;
	return sCurrentFiber;
}

void Fiber::Switch(Fiber& targetFiber)
{
	Fiber* leavingFiber = sCurrentFiber;
	FiberImpl* leavingImpl = static_cast<FiberImpl*>(leavingFiber->m_implData);
	FiberImpl* targetImpl = static_cast<FiberImpl*>(targetFiber.m_implData);

	// The scheduler does switch a thread to itself: when a timeslice ends the
	// thread goes back on the run queue, and __OSGetNextRunableThread() can
	// hand it straight back if it is still the best candidate on that core.
	// swapcontext() absorbs that - it saves into the context it then restores
	// from, so the call returns and the thread simply carries on - and the
	// ucontext and Windows backends have always let it through. fcontext
	// cannot: the context was consumed on the way out and jumping to it lands
	// on whatever the stack now holds. Return instead, which is what the
	// callers already expect to happen.
	if (targetImpl == leavingImpl)
		return;

	CheckSwitchTarget(leavingImpl, targetImpl);
	sCurrentFiber = &targetFiber;
	sCurrentImpl = targetImpl;
	leavingImpl->running = false;
	targetImpl->running = true;
	std::atomic_thread_fence(std::memory_order_seq_cst);
	StoreLeavingFiber(jump_fcontext(targetImpl->ctx, leavingImpl));
	std::atomic_thread_fence(std::memory_order_seq_cst);
}

void* Fiber::GetFiberPrivateData()
{
	return sCurrentFiber->m_privateData;
}
