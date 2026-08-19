#pragma once

// The two-argument strcpy_s()/strcat_s() this code calls are the C++ array
// overloads out of MSVC's <string.h>. No other toolchain has them - not the
// Unixes, and not MinGW either, whose secure API only offers the three-argument
// C functions - so supply them everywhere but MSVC.

#if !defined(_MSC_VER)

#include <cstddef>

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

#endif
