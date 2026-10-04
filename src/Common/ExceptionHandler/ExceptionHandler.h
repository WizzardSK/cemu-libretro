#pragma once

void ExceptionHandler_Init();
// Puts back what ExceptionHandler_Init replaced, for a library that is about to
// be unloaded from a process that carries on (the libretro core).
void ExceptionHandler_Shutdown();

bool CrashLog_Create();
void CrashLog_SetOutputChannels(bool writeToStdErr, bool writeToLogTxt);
void CrashLog_WriteLine(std::string_view text, bool newLine = true);
void CrashLog_WriteHeader(const char* header);

void ExceptionHandler_LogGeneralInfo();
