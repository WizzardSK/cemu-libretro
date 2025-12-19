#include "Cafe/OS/common/OSCommon.h"
#include "coreinit_Scheduler.h"

thread_local sint32 s_schedulerLockCount = 0;

static std::atomic<uint32> s_schedLockHeld{0};
static std::atomic<uint32> s_schedLockOwnerTid{0};
static std::atomic<uint64> s_schedLockLastChangeTick{0};

static std::atomic<uint64> s_intDisableCount[3]{};
static std::atomic<uint64> s_intRestoreCount[3]{};
static std::atomic<uint32> s_lastCoreInterruptMask[3]{};
static std::atomic<sint32> s_lastRemainingCycles[3]{};

#if BOOST_OS_WINDOWS
#include <synchapi.h>
CRITICAL_SECTION s_csSchedulerLock;
#else
#include <pthread.h>
pthread_mutex_t s_ptmSchedulerLock;
#endif

void __OSLockScheduler(void* obj)
{
#if BOOST_OS_WINDOWS
	EnterCriticalSection(&s_csSchedulerLock);
#else
	pthread_mutex_lock(&s_ptmSchedulerLock);
#endif
	s_schedulerLockCount++;
	cemu_assert_debug(s_schedulerLockCount <= 1); // >= 2 should not happen. Scheduler lock does not allow recursion
	s_schedLockHeld.store(1, std::memory_order_relaxed);
#if BOOST_OS_WINDOWS
	s_schedLockOwnerTid.store((uint32)GetCurrentThreadId(), std::memory_order_relaxed);
	s_schedLockLastChangeTick.store((uint64)GetTickCount64(), std::memory_order_relaxed);
#else
	s_schedLockOwnerTid.store(1, std::memory_order_relaxed);
	s_schedLockLastChangeTick.store(0, std::memory_order_relaxed);
#endif
}

bool __OSHasSchedulerLock()
{
	return s_schedulerLockCount > 0;
}

bool __OSTryLockScheduler(void* obj)
{
	bool r;
#if BOOST_OS_WINDOWS
	r = TryEnterCriticalSection(&s_csSchedulerLock);
#else
	r = pthread_mutex_trylock(&s_ptmSchedulerLock) == 0;
#endif
	if (r)
	{
		s_schedulerLockCount++;
		s_schedLockHeld.store(1, std::memory_order_relaxed);
#if BOOST_OS_WINDOWS
		s_schedLockOwnerTid.store((uint32)GetCurrentThreadId(), std::memory_order_relaxed);
		s_schedLockLastChangeTick.store((uint64)GetTickCount64(), std::memory_order_relaxed);
#else
		s_schedLockOwnerTid.store(1, std::memory_order_relaxed);
		s_schedLockLastChangeTick.store(0, std::memory_order_relaxed);
#endif
		return true;
	}
	return false;
}

void __OSUnlockScheduler(void* obj)
{
	s_schedulerLockCount--;
	cemu_assert_debug(s_schedulerLockCount >= 0);
	if (s_schedulerLockCount == 0)
	{
		s_schedLockHeld.store(0, std::memory_order_relaxed);
		s_schedLockOwnerTid.store(0, std::memory_order_relaxed);
#if BOOST_OS_WINDOWS
		s_schedLockLastChangeTick.store((uint64)GetTickCount64(), std::memory_order_relaxed);
#endif
	}
#if BOOST_OS_WINDOWS
	LeaveCriticalSection(&s_csSchedulerLock);
#else
	pthread_mutex_unlock(&s_ptmSchedulerLock);
#endif
}

uint32 __OSGetSchedulerLockOwnerTid()
{
	return s_schedLockOwnerTid.load(std::memory_order_relaxed);
}

uint32 __OSGetSchedulerLockHeld()
{
	return s_schedLockHeld.load(std::memory_order_relaxed);
}

uint64 __OSGetSchedulerLockLastChangeTick()
{
	return s_schedLockLastChangeTick.load(std::memory_order_relaxed);
}

uint64 __OSGetInterruptDisableCount(sint32 coreIndex)
{
	if (coreIndex < 0 || coreIndex >= 3)
		return 0;
	return s_intDisableCount[coreIndex].load(std::memory_order_relaxed);
}

uint64 __OSGetInterruptRestoreCount(sint32 coreIndex)
{
	if (coreIndex < 0 || coreIndex >= 3)
		return 0;
	return s_intRestoreCount[coreIndex].load(std::memory_order_relaxed);
}

uint32 __OSGetLastCoreInterruptMask(sint32 coreIndex)
{
	if (coreIndex < 0 || coreIndex >= 3)
		return 0;
	return s_lastCoreInterruptMask[coreIndex].load(std::memory_order_relaxed);
}

sint32 __OSGetLastRemainingCycles(sint32 coreIndex)
{
	if (coreIndex < 0 || coreIndex >= 3)
		return 0;
	return s_lastRemainingCycles[coreIndex].load(std::memory_order_relaxed);
}

namespace coreinit
{
	uint32 OSIsInterruptEnabled()
	{
		PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance();
		if (hCPU == nullptr)
			return 0;

		return hCPU->coreInterruptMask;
	}

	// disables interrupts and scheduling
	uint32 OSDisableInterrupts()
	{
		PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance();
		if (hCPU == nullptr)
			return 0;
		const sint32 coreIndex = (sint32)hCPU->spr.UPIR;
		if (coreIndex >= 0 && coreIndex < 3)
			s_intDisableCount[coreIndex].fetch_add(1, std::memory_order_relaxed);
		uint32 prevInterruptMask = hCPU->coreInterruptMask;
		if (hCPU->coreInterruptMask != 0)
		{
			// we have no efficient method to turn off scheduling completely, so instead we just increase the remaining cycles
			if (hCPU->remainingCycles >= 0x40000000)
				cemuLog_log(LogType::Force, "OSDisableInterrupts(): Warning - Interrupts already disabled but the mask was still set? remCycles {:08x} LR {:08x}", hCPU->remainingCycles, hCPU->spr.LR);
			hCPU->remainingCycles += 0x40000000;
		}
		hCPU->coreInterruptMask = 0;
		if (coreIndex >= 0 && coreIndex < 3)
		{
			s_lastCoreInterruptMask[coreIndex].store(hCPU->coreInterruptMask, std::memory_order_relaxed);
			s_lastRemainingCycles[coreIndex].store(hCPU->remainingCycles, std::memory_order_relaxed);
		}
		return prevInterruptMask;
	}

	uint32 OSRestoreInterrupts(uint32 interruptMask)
	{
		PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance();
		if (hCPU == nullptr)
			return 0;
		const sint32 coreIndex = (sint32)hCPU->spr.UPIR;
		if (coreIndex >= 0 && coreIndex < 3)
			s_intRestoreCount[coreIndex].fetch_add(1, std::memory_order_relaxed);
		uint32 prevInterruptMask = hCPU->coreInterruptMask;
		if (hCPU->coreInterruptMask == 0 && interruptMask != 0)
		{
			hCPU->remainingCycles -= 0x40000000;
		}
		hCPU->coreInterruptMask = interruptMask;
		if (coreIndex >= 0 && coreIndex < 3)
		{
			s_lastCoreInterruptMask[coreIndex].store(hCPU->coreInterruptMask, std::memory_order_relaxed);
			s_lastRemainingCycles[coreIndex].store(hCPU->remainingCycles, std::memory_order_relaxed);
		}
		return prevInterruptMask;
	}

	uint32 OSEnableInterrupts()
	{
		PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance();
		uint32 prevInterruptMask = hCPU->coreInterruptMask;
		OSRestoreInterrupts(1);
		return prevInterruptMask;
	}

	void InitializeSchedulerLock()
	{
#if BOOST_OS_WINDOWS
		InitializeCriticalSection(&s_csSchedulerLock);
#else
		pthread_mutexattr_t ma;
		pthread_mutexattr_init(&ma);
		pthread_mutexattr_settype(&ma, PTHREAD_MUTEX_RECURSIVE);
		pthread_mutex_init(&s_ptmSchedulerLock, &ma);
#endif
		cafeExportRegister("coreinit", __OSLockScheduler, LogType::Placeholder);
		cafeExportRegister("coreinit", __OSUnlockScheduler, LogType::Placeholder);

		cafeExportRegister("coreinit", OSDisableInterrupts, LogType::CoreinitThread);
		cafeExportRegister("coreinit", OSEnableInterrupts, LogType::CoreinitThread);
		cafeExportRegister("coreinit", OSRestoreInterrupts, LogType::CoreinitThread);
	}
};
