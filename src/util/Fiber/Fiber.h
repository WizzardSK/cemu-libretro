#pragma once

#if BOOST_OS_WINDOWS

#endif

class Fiber
{
public:
	Fiber(void(*FiberEntryPoint)(void* userParam), void* userParam, void* privateData);
	~Fiber();

	static Fiber* PrepareCurrentThread(void* privateData = nullptr);
	static void Switch(Fiber& targetFiber);
	static void* GetFiberPrivateData();

	// Labels the fiber for crash reports. On Android this names the stack's
	// mapping, so /proc/self/maps - which the crash handler prints for pc, lr
	// and the fault address - identifies the fiber a wild jump landed in. The
	// other backends have nothing to hang a name on and ignore it.
	void SetDebugName(const char* name);
private:
	Fiber(void* privateData); // fiber from current thread

	void* m_implData{nullptr};
	void* m_privateData;
	void* m_stackPtr{ nullptr };
};