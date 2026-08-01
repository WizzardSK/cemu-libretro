#include "Fiber.h"
#include <atomic>
#include <cstdlib>

// bionic ships no ucontext functions - getcontext() and friends were never part
// of Android's libc - so the stack switching goes through Boost.Context's
// fcontext instead, which vcpkg already builds for the Android triplets.
#include <boost/context/detail/fcontext.hpp>

using boost::context::detail::fcontext_t;
using boost::context::detail::jump_fcontext;
using boost::context::detail::make_fcontext;
using boost::context::detail::transfer_t;

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
	};

	thread_local FiberImpl* sCurrentImpl{};

	constexpr size_t kFiberStackSize = 2 * 1024 * 1024;

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
} // namespace

thread_local Fiber* sCurrentFiber{};

Fiber::Fiber(void(*FiberEntryPoint)(void* userParam), void* userParam, void* privateData) : m_privateData(privateData)
{
	m_stackPtr = malloc(kFiberStackSize);

	FiberImpl* impl = new FiberImpl();
	impl->entryPoint = FiberEntryPoint;
	impl->userParam = userParam;
	// the stack grows down, so make_fcontext() takes its high end
	impl->ctx = make_fcontext((char*)m_stackPtr + kFiberStackSize, kFiberStackSize, &FiberTrampoline);
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
		free(m_stackPtr);
	delete static_cast<FiberImpl*>(m_implData);
}

Fiber* Fiber::PrepareCurrentThread(void* privateData)
{
	cemu_assert_debug(sCurrentFiber == nullptr);
	sCurrentFiber = new Fiber(privateData);
	sCurrentImpl = static_cast<FiberImpl*>(sCurrentFiber->m_implData);
	return sCurrentFiber;
}

void Fiber::Switch(Fiber& targetFiber)
{
	Fiber* leavingFiber = sCurrentFiber;
	sCurrentFiber = &targetFiber;
	FiberImpl* leavingImpl = static_cast<FiberImpl*>(leavingFiber->m_implData);
	FiberImpl* targetImpl = static_cast<FiberImpl*>(targetFiber.m_implData);
	sCurrentImpl = targetImpl;
	std::atomic_thread_fence(std::memory_order_seq_cst);
	StoreLeavingFiber(jump_fcontext(targetImpl->ctx, leavingImpl));
	std::atomic_thread_fence(std::memory_order_seq_cst);
}

void* Fiber::GetFiberPrivateData()
{
	return sCurrentFiber->m_privateData;
}
