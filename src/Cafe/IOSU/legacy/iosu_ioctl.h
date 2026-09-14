#pragma once

struct OSThread_t;

typedef struct _ioBufferVector_t
{
	// the meaning of these values might be arbitrary? (up to the /dev/* handler to process them)
	//uint32 ukn00;
	MEMPTR<uint8> buffer;
	uint32be bufferSize;
	uint32 ukn08;
	//uint32 ukn0C;
	MEMPTR<uint8> unknownBuffer;
}ioBufferVector_t;

typedef struct
{
	bool isIoctlv; // false -> ioctl, true -> ioctlv
	bool isAsync;
	uint32 request;
	uint32 countIn;
	uint32 countOut;
	MEMPTR<ioBufferVector_t> bufferVectors;
	// info about submitter
	OSThread_t* ppcThread;
	//MPTR ppcThread;
	// result
	bool isCompleted;
	uint32 returnValue;
}ioQueueEntry_t;


#define IOS_PATH_SOCKET		"/dev/socket"
#define IOS_PATH_ODM		"/dev/odm"
#define IOS_PATH_ACT		"/dev/act"
#define IOS_PATH_FPD		"/dev/fpd"
#define IOS_PATH_ACP_MAIN	"/dev/acp_main"
#define IOS_PATH_MCP		"/dev/mcp"
#define IOS_PATH_BOSS		"/dev/boss"
#define IOS_PATH_NIM		"/dev/nim"
#define IOS_PATH_IOSUHAX	"/dev/iosuhax"

#define IOS_DEVICE_UKN		(0x1)
#define IOS_DEVICE_ODM		(0x2)
#define IOS_DEVICE_SOCKET	(0x3)
#define IOS_DEVICE_ACT		(0x4)
#define IOS_DEVICE_FPD		(0x5)
#define IOS_DEVICE_ACP_MAIN	(0x6)
#define IOS_DEVICE_MCP		(0x7)
#define IOS_DEVICE_BOSS		(0x8)
#define IOS_DEVICE_NIM		(0x9)

#define IOS_DEVICE_COUNT	10

void iosuIoctl_init();


// for use by IOSU
ioQueueEntry_t* iosuIoctl_getNextWithWait(uint32 deviceIndex); // nullptr once a shutdown was requested
// The stop protocol for the deprecated IOSU workers, and the reason it exists
// is the one the GPU thread taught: a thread nobody waits for is a thread that
// is still running when the next title starts, and what that costs arrives
// somewhere else entirely.
//
// Each worker counts itself in while it is alive and out on its way past the
// loop, so "have they stopped" is a question with an answer rather than the
// waiter count it used to be inferred from - that counted threads blocked in
// the semaphore, which is not the same as threads that have gone.
struct IosuIoctlWorkerScope
{
	IosuIoctlWorkerScope();
	~IosuIoctlWorkerScope();
};
// Waits for every worker to have left its loop. Returns false if they have not
// within the timeout, which the caller is expected to treat as fatal: there is
// nothing useful to do with a worker that will not stop except say so.
bool iosuIoctl_waitForWorkersToStop(int timeoutMs);
uint32 iosuIoctl_runningWorkerCount();
// Puts the queues and their semaphores back to how init left them. Only safe
// once the workers are confirmed gone, which is the whole reason the wait
// above had to become an answer rather than an estimate.
void iosuIoctl_resetAfterWorkersStopped();

// Wakes the deprecated IOSU threads so they can leave their wait, which they
// have to do before anything destroys the semaphores they are waiting on.
void iosuIoctl_requestShutdown();
void iosuIoctl_clearShutdown();
bool iosuIoctl_hasWaiters();
ioQueueEntry_t* iosuIoctl_getNextWithTimeout(uint32 deviceIndex, sint32 ms);
void iosuIoctl_completeRequest(ioQueueEntry_t* ioQueueEntry, uint32 returnValue);

// for use by PPC
sint32 iosuIoctl_pushAndWait(uint32 ioctlHandle, ioQueueEntry_t* ioQueueEntry);
