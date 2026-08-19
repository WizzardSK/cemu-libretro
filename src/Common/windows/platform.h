#pragma once

#ifndef NOMINMAX
#define NOMINMAX
#endif
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>

// MinGW builds land here too, and its CRT has no two-argument strcpy_s.
#include "Common/StringSafeFuncs.h"

#define AF_BLUETOOTH AF_BTH
#define BTPROTO_RFCOMM BT_PORT_ANY

class SlimRWLock
{
public:
	SlimRWLock();

	void LockRead();
	void UnlockRead();
	void LockWrite();
	void UnlockWrite();

private:
	/*SRWLOCK*/ void* m_lock;
};

uint32_t GetExceptionError();