#pragma once

#include <boost/predef/os.h>
#include <cstdint>

#if BOOST_OS_WINDOWS
#include "Common/windows/platform.h"
#elif BOOST_OS_LINUX || BOOST_OS_BSD
#if BOOST_OS_LINUX
#include <byteswap.h>
#elif BOOST_OS_BSD
#include <endian.h>
#endif
#if !defined(__ANDROID__) && !defined(WEBOS)
// Android and webOS are BOOST_OS_LINUX as well, and have no X11.
#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>
#include <X11/Xutil.h>
#endif
#include "Common/unix/platform.h"
#elif defined(__APPLE__)
// Every Apple platform, not only the desktop one. BOOST_OS_MACOS is macOS
// alone, and BOOST_OS_IOS does not answer for tvOS either (boost.predef keys it
// off __ENVIRONMENT_IPHONE_OS_VERSION_MIN_REQUIRED__, which a tvOS build does
// not define), so an iOS or tvOS build fell through every branch here and got
// no platform header at all - which surfaces a few hundred includes later as
// "unknown type name 'SlimRWLock'".
#include <libkern/OSByteOrder.h>
#include "Common/unix/platform.h"
#endif
