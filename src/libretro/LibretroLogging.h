#pragma once

#include "Cemu/Logging/CemuLogging.h"

// LibretroLoggingCallbacks - forwards Cemu logs to RetroArch
class LibretroLoggingCallbacks : public LoggingCallbacks
{
public:
	void Log(std::string_view filter, std::string_view message) override;
	void Log(std::string_view filter, std::wstring_view message) override;
};

void libretro_init_logging();
void libretro_shutdown_logging();
