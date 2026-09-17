#include "Cafe/OS/common/OSCommon.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"
#include "iosu_ioctl.h"
#include "util/helpers/ringbuffer.h"

#include "util/helpers/Semaphore.h"

#include <atomic>
#include <thread>
#include <chrono>

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

// How many workers are inside their loop. Not the same as the waiter count
// above: that one counts threads blocked in the semaphore, and a thread that
// has been woken but has not yet reached the end of its function is in neither
// state. Stopping has to mean gone.
static std::atomic<uint32> sIoctlWorkersRunning{0};

IosuIoctlWorkerScope::IosuIoctlWorkerScope()
{
	sIoctlWorkersRunning.fetch_add(1, std::memory_order_acq_rel);
}

IosuIoctlWorkerScope::~IosuIoctlWorkerScope()
{
	sIoctlWorkersRunning.fetch_sub(1, std::memory_order_acq_rel);
}

uint32 iosuIoctl_runningWorkerCount()
{
	return sIoctlWorkersRunning.load(std::memory_order_acquire);
}

// The one wait in this core that still has a deadline, and it is the one whose
// threads cannot be joined: upstream detaches these and keeps no handle, which
// is a decision to leak them rather than to let them hold a shutdown up. So
// this cannot be a join, and an unbounded version of it would hand the frontend
// a hang in exchange for a worker that was never going to come back anyway.
bool iosuIoctl_waitForWorkersToStop(int timeoutMs)
{
	for (int i = 0; i < timeoutMs && sIoctlWorkersRunning.load(std::memory_order_acquire) != 0; i++)
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	return sIoctlWorkersRunning.load(std::memory_order_acquire) == 0;
}

// requestShutdown posts once per device to let each worker out, including the
// devices that never had one - so every shutdown leaves posts behind that
// nobody consumes, and they were still there for the next run to walk through.
// The next run coped with them instead of being spared them, which is the kind
// of thing worth removing rather than documenting.
//
// It can be removed now only because the wait above became an answer: a reset
// while a worker is inside decrementWithWait would be a race, and before there
// was no way to know whether one was.
void iosuIoctl_resetAfterWorkersStopped()
{
	cemu_assert_debug(sIoctlWorkersRunning.load(std::memory_order_acquire) == 0);
	for (sint32 i = 0; i < IOS_DEVICE_COUNT; i++)
	{
		_ioctlRingbufferSemaphore[i].reset();
		// Anything still queued belongs to a title that has ended, and the
		// emulated thread that put it there went with it.
		_ioctlRingbuffer[i].Clear();
	}
}

// The shutdown above is a latch, and a libretro core is asked to come back:
// the frontend deinitialises this core when content is closed and initialises
// it again for the next content, in the same process, without unloading the
// library. With the latch left set, every worker below had already left and
// the next title's requests went into queues nobody was reading - which is a
// title that boots and then stops dead in its first save call, for good.
void iosuIoctl_clearShutdown()
{
	sIoctlShuttingDown.store(false, std::memory_order_release);
}

ioQueueEntry_t* iosuIoctl_getNextWithWait(uint32 deviceIndex)
{
	while (true)
	{
		sIoctlWaiters.fetch_add(1, std::memory_order_acq_rel);
		_ioctlRingbufferSemaphore[deviceIndex].decrementWithWait();
		sIoctlWaiters.fetch_sub(1, std::memory_order_acq_rel);
		if (sIoctlShuttingDown.load(std::memory_order_acquire))
			return nullptr;
		if (_ioctlRingbuffer[deviceIndex].HasData())
			return _ioctlRingbuffer[deviceIndex].Pop();
		// Woken with nothing behind it, which after a clean shutdown should not
		// happen any more - the semaphores are reset once the workers are known
		// to be gone. Kept because a spurious wake is a spurious wake, and
		// popping an empty queue would be worse than waiting again.
	}
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
