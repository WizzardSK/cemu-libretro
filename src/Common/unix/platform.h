#include <shared_mutex>

#if defined(__linux__)
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>

// glibc only grew a gettid() wrapper in 2.30, and the buildbot's x86_64 image
// is older than that ("'gettid' was not declared in this scope"), so go
// through the syscall it wraps.
inline pid_t cemu_gettid()
{
	return static_cast<pid_t>(syscall(SYS_gettid));
}
#endif

class SlimRWLock
{
public:
	void LockRead()
	{
		m_sm.lock_shared();
	}

	void UnlockRead()
	{
		m_sm.unlock_shared();
	}

	void LockWrite()
	{
		m_sm.lock();
	}

	void UnlockWrite()
	{
		m_sm.unlock();
	}

private:
	std::shared_mutex m_sm;
};

inline uint32_t GetExceptionError() 
{
    return errno;
}

#undef False
#undef True
#undef None
#undef Bool
#undef Status
#undef Success
#undef ClientMessage

// placeholder
uint32_t GetTickCount();

// strcpy_s and strcat_s implementations
template<size_t N> 
void strcpy_s(char (&dst)[N], const char* src)  
{
	if(N == 0)
		return;
	char* dstP = dst;
	const char* end = src + N - 1;
	while(src < end)
	{
		char c = *src;
		*dstP = c;
		if(c == '\0')
			return;
		dstP++;
		src++;
		c++;
	}
	*dstP = '\0';
	return;
}

template<size_t N> 
void strcat_s(char (&dst)[N], const char* src)  
{
	if(N == 0)
		return;
	char* dstP = dst;
	const char* end = dstP + N - 1;
	while(dstP < end && *dstP != '\0')
		dstP++;
	while(dstP < end)
	{
		char c = *src;
		*dstP = c;
		if(c == '\0')
			return;
		dstP++;
		src++;
		c++;
	}
	*dstP = '\0';
	return;
}
