#pragma once

void __OSLockScheduler(void* obj = nullptr);
bool __OSHasSchedulerLock();
bool __OSTryLockScheduler(void* obj = nullptr);
void __OSUnlockScheduler(void* obj = nullptr);

// diagnostics (host-side)
uint32 __OSGetSchedulerLockOwnerTid();
uint32 __OSGetSchedulerLockHeld();
uint64 __OSGetSchedulerLockLastChangeTick();

uint64 __OSGetInterruptDisableCount(sint32 coreIndex);
uint64 __OSGetInterruptRestoreCount(sint32 coreIndex);
uint32 __OSGetLastCoreInterruptMask(sint32 coreIndex);
sint32 __OSGetLastRemainingCycles(sint32 coreIndex);

namespace coreinit
{
	uint32 OSIsInterruptEnabled();
	uint32 OSDisableInterrupts();
	uint32 OSRestoreInterrupts(uint32 interruptMask);
	uint32 OSEnableInterrupts();

	void InitializeSchedulerLock();
}