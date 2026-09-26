// Loads a libretro core the way RetroArch starts one and reports what happens:
// every log line, where it crashes (module + offset), and what it leaves in the
// working directory.
#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "libretro.h"

static char g_sys[MAX_PATH], g_save[MAX_PATH];

static void log_cb(enum retro_log_level level, const char *fmt, ...)
{
	va_list ap; va_start(ap, fmt);
	printf("[core %d] ", level); vprintf(fmt, ap); fflush(stdout);
	va_end(ap);
}

static bool env_cb(unsigned cmd, void *data)
{
	switch (cmd)
	{
	case RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY: *(const char **)data = g_sys; return true;
	case RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY: *(const char **)data = g_save; return true;
	case RETRO_ENVIRONMENT_GET_LOG_INTERFACE: ((struct retro_log_callback *)data)->log = log_cb; return true;
	case RETRO_ENVIRONMENT_GET_VARIABLE: ((struct retro_variable *)data)->value = NULL; return false;
	case RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION: *(unsigned *)data = 2; return true;
	case RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE: *(bool *)data = false; return true;
	default:
		printf("[env] cmd 0x%X -> false\n", cmd); fflush(stdout);
		return false;
	}
}

static void describe(const char *what, EXCEPTION_POINTERS *ep)
{
	void *addr = ep->ExceptionRecord->ExceptionAddress;
	HMODULE mod = NULL; char name[MAX_PATH] = "?";
	GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)addr, &mod);
	if (mod) GetModuleFileNameA(mod, name, sizeof(name));
	printf("%s code 0x%08lX at %p = %s + 0x%llX\n", what, ep->ExceptionRecord->ExceptionCode, addr, name,
		(unsigned long long)((char *)addr - (char *)mod));
	for (DWORD i = 0; i < ep->ExceptionRecord->NumberParameters; i++)
		printf("  param %lu: 0x%llX\n", i, (unsigned long long)ep->ExceptionRecord->ExceptionInformation[i]);
	fflush(stdout);
}

// Unhandled: this is the crash. Print and end the process.
static LONG WINAPI on_crash(EXCEPTION_POINTERS *ep)
{
	describe("CRASH", ep);
	ExitProcess(3);
	return EXCEPTION_EXECUTE_HANDLER;
}

// First chance: log hardware faults as they happen (the core may catch C++
// exceptions itself, so those - MSVC 0xE06D7363, GCC 0x20474343 - are skipped)
// and let normal handling go on.
static LONG WINAPI on_first_chance(EXCEPTION_POINTERS *ep)
{
	DWORD c = ep->ExceptionRecord->ExceptionCode;
	if (c != 0xE06D7363 && c != 0x20474343 && c != 0x406D1388 && c != DBG_PRINTEXCEPTION_C && c != 0x4001000A)
		describe("first-chance", ep);
	return EXCEPTION_CONTINUE_SEARCH;
}

static void list_dir(const char *label)
{
	WIN32_FIND_DATAW fd; HANDLE h = FindFirstFileW(L"*", &fd);
	printf("--- %s: working directory contains:\n", label);
	if (h == INVALID_HANDLE_VALUE) return;
	do {
		printf("  %s ", (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? "DIR " : "FILE");
		for (wchar_t *p = fd.cFileName; *p; p++) printf("%04X ", (unsigned)*p);
		char u8[512]; WideCharToMultiByte(CP_UTF8, 0, fd.cFileName, -1, u8, sizeof(u8), NULL, NULL);
		printf(" \"%s\"\n", u8);
	} while (FindNextFileW(h, &fd));
	FindClose(h); fflush(stdout);
}

int main(int argc, char **argv)
{
	if (argc < 3) { fprintf(stderr, "usage: harness core.dll root [game]\n"); return 2; }
	SetUnhandledExceptionFilter(on_crash);
	AddVectoredExceptionHandler(1, on_first_chance);
	SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);
	snprintf(g_sys, sizeof g_sys, "%s\\system", argv[2]);
	snprintf(g_save, sizeof g_save, "%s\\saves", argv[2]);
	CreateDirectoryA(g_sys, NULL); CreateDirectoryA(g_save, NULL);
	SetCurrentDirectoryA(argv[2]);
	list_dir("before");
	HMODULE core = LoadLibraryA(argv[1]);
	if (!core) { printf("LoadLibrary failed: %lu\n", GetLastError()); return 1; }
	void (*set_env)(retro_environment_t) = (void *)GetProcAddress(core, "retro_set_environment");
	void (*init)(void) = (void *)GetProcAddress(core, "retro_init");
	void (*deinit)(void) = (void *)GetProcAddress(core, "retro_deinit");
	printf("stage: retro_set_environment\n"); fflush(stdout);
	set_env(env_cb);
	printf("stage: retro_init\n"); fflush(stdout);
	init();
	printf("stage: retro_init returned\n"); fflush(stdout);
	list_dir("after retro_init");
	printf("stage: retro_deinit\n"); fflush(stdout);
	deinit();
	list_dir("after retro_deinit");
	printf("done\n");
	return 0;
}
