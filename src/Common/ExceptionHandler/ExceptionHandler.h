#pragma once

void ExceptionHandler_Init();
// Puts back what ExceptionHandler_Init replaced, for a library that is about to
// be unloaded from a process that carries on (the libretro core).
void ExceptionHandler_Shutdown();
// For a library in a process that is not its own (the libretro core), called
// before ExceptionHandler_Init: a crash is logged as usual and then handed to
// the handler there was before, instead of ending the process here, so the
// frontend's or the system's crash report (Android's tombstone, Windows Error
// Reporting) names it; and Ctrl+C and SIGTERM stay the frontend's.
void ExceptionHandler_HandCrashesToPrevious();

bool CrashLog_Create();
void CrashLog_SetOutputChannels(bool writeToStdErr, bool writeToLogTxt);
void CrashLog_WriteLine(std::string_view text, bool newLine = true);
void CrashLog_WriteHeader(const char* header);

void ExceptionHandler_LogGeneralInfo();
