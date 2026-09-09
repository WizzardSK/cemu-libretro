#include "Cafe/OS/common/OSCommon.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"
#include "iosu_ioctl.h"
#include "util/helpers/ringbuffer.h"

#include "util/helpers/Semaphore.h"

#include <atomic>

// deprecated IOCTL handling code

RingBuffer<ioQueueEntry_t*, 256> _ioctlRingbuffer[IOS_DEVICE_COUNT];
CounterSemaphore _ioctlRingbufferSemaphore[IOS_DEVICE_COUNT];

std::mutex ioctlMutex;

sint32 iosuIoctl_pushAndWait(uint32 ioctlHandle, ioQueueEntry_t* ioQueueEntry)
{
	if (ioctlHandle != IOS_DEVICE_ACT && ioctlHandle != IOS_DEVICE_ACP_MAIN && ioctlHandle != IOS_DEVICE_MCP && ioctlHandle != IOS_DEVICE_BOSS && ioctlHandle != IOS_DEVICE_NIM && ioctlHandle != IOS_DEVICE_FPD)
	{
		cemuLog_logDebug(LogType::Force, "Unsupported IOSU device {}", ioctlHandle);
		cemu_assert_debug(false);
		return 0;
	}
	__OSLockScheduler();
	ioctlMutex.lock();
	ioQueueEntry->ppcThread = coreinit::OSGetCurrentThread();
	
	_ioctlRingbuffer[ioctlHandle].Push(ioQueueEntry);
	ioctlMutex.unlock();
	_ioctlRingbufferSemaphore[ioctlHandle].increment();
	coreinit::__OSSuspendThreadInternal(coreinit::OSGetCurrentThread());
	if (ioQueueEntry->isCompleted == false)
		assert_dbg();
	__OSUnlockScheduler();
	return ioQueueEntry->returnValue;
}

// The deprecated IOSU threads below park in decrementWithWait() and have no way
// out: they are detached and their loops never end. In a process that simply
// exits that is invisible, but a libretro core gets unloaded, and the semaphore
// array's own destructor then blocks in pthread_cond_destroy() for as long as a
// thread is still waiting on it - a frontend that unloads the core and hangs.
static std::atomic_bool sIoctlShuttingDown{false};
// How many of them are inside the wait right now, which is what the destructor
// of the semaphore array cannot tolerate.
static std::atomic<int> sIoctlWaiters{0};

void iosuIoctl_requestShutdown()
{
	sIoctlShuttingDown.store(true, std::memory_order_release);
	// One post per device is enough: each has a single waiter.
	for (uint32 i = 0; i < IOS_DEVICE_COUNT; i++)
		_ioctlRingbufferSemaphore[i].increment();
}

bool iosuIoctl_hasWaiters()
{
	return sIoctlWaiters.load(std::memory_order_acquire) > 0;
}

ioQueueEntry_t* iosuIoctl_getNextWithWait(uint32 deviceIndex)
{
	sIoctlWaiters.fetch_add(1, std::memory_order_acq_rel);
	_ioctlRingbufferSemaphore[deviceIndex].decrementWithWait();
	sIoctlWaiters.fetch_sub(1, std::memory_order_acq_rel);
	if (sIoctlShuttingDown.load(std::memory_order_acquire))
		return nullptr;
	if (_ioctlRingbuffer[deviceIndex].HasData() == false)
		assert_dbg();
	return _ioctlRingbuffer[deviceIndex].Pop();
}

ioQueueEntry_t* iosuIoctl_getNextWithTimeout(uint32 deviceIndex, sint32 ms)
{
	if (!_ioctlRingbufferSemaphore[deviceIndex].decrementWithWaitAndTimeout(ms))
		return nullptr; // timeout or spurious wake up
	if (_ioctlRingbuffer[deviceIndex].HasData() == false)
		return nullptr;
	return _ioctlRingbuffer[deviceIndex].Pop();
}

void iosuIoctl_completeRequest(ioQueueEntry_t* ioQueueEntry, uint32 returnValue)
{
	ioQueueEntry->returnValue = returnValue;
	ioQueueEntry->isCompleted = true;
	coreinit::OSResumeThread(ioQueueEntry->ppcThread);
}

void iosuIoctl_init()
{
	for (sint32 i = 0; i < IOS_DEVICE_COUNT; i++)
	{
		_ioctlRingbuffer[i].Clear();
	}
}
