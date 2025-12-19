#include "LibretroLogging.h"
#include "libretro/libretro.h"
#include <string>

extern retro_log_printf_t s_log_cb;

static LibretroLoggingCallbacks* s_libretro_logging = nullptr;

void LibretroLoggingCallbacks::Log(std::string_view filter, std::string_view message)
{
	if (!s_log_cb)
		return;

	// Map Cemu log types to RetroArch log levels
	retro_log_level level = RETRO_LOG_INFO;
	
	// Check for error/warning keywords
	if (message.find("error") != std::string_view::npos || 
	    message.find("Error") != std::string_view::npos ||
	    message.find("ERROR") != std::string_view::npos ||
	    message.find("failed") != std::string_view::npos ||
	    message.find("Failed") != std::string_view::npos)
	{
		level = RETRO_LOG_ERROR;
	}
	else if (message.find("warning") != std::string_view::npos || 
	         message.find("Warning") != std::string_view::npos ||
	         message.find("WARN") != std::string_view::npos)
	{
		level = RETRO_LOG_WARN;
	}

	// Format: [Cemu:filter] message
	if (!filter.empty())
		s_log_cb(level, "[Cemu:%.*s] %.*s\n", (int)filter.size(), filter.data(), (int)message.size(), message.data());
	else
		s_log_cb(level, "[Cemu] %.*s\n", (int)message.size(), message.data());
}

void LibretroLoggingCallbacks::Log(std::string_view filter, std::wstring_view message)
{
	if (!s_log_cb)
		return;

	// Convert wstring to string for libretro logging
	std::string msg_str;
	msg_str.reserve(message.size());
	for (wchar_t c : message)
	{
		if (c < 128)
			msg_str.push_back((char)c);
		else
			msg_str.push_back('?'); // Replace non-ASCII with ?
	}

	Log(filter, msg_str);
}

void libretro_init_logging()
{
	if (!s_libretro_logging)
	{
		s_libretro_logging = new LibretroLoggingCallbacks();
		cemuLog_setCallbacks(s_libretro_logging);
		
		// Enable all logging flags for comprehensive output
		uint64 allFlags = 0;
		allFlags |= cemuLog_getFlag(LogType::Force);
		allFlags |= cemuLog_getFlag(LogType::APIErrors);
		allFlags |= cemuLog_getFlag(LogType::UnsupportedAPI);
		allFlags |= cemuLog_getFlag(LogType::CoreinitLogging);
		allFlags |= cemuLog_getFlag(LogType::GX2);
		allFlags |= cemuLog_getFlag(LogType::SoundAPI);
		allFlags |= cemuLog_getFlag(LogType::InputAPI);
		allFlags |= cemuLog_getFlag(LogType::TextureCache);
		allFlags |= cemuLog_getFlag(LogType::Patches);
		cemuLog_setActiveLoggingFlags(allFlags);
	}
}

void libretro_shutdown_logging()
{
	if (s_libretro_logging)
	{
		cemuLog_clearCallbacks();
		delete s_libretro_logging;
		s_libretro_logging = nullptr;
	}
}
