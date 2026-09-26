// Loads a libretro core the way RetroArch starts one and reports what happens:
// every log line, where it crashes (module + offset), and what it leaves in the
// working directory.
#include <windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "libretro.h"
#include <stdlib.h>
#include <io.h>

// A VFS like RetroArch's, which logs every path the core hands over - as text
// and as bytes, so a mangled one shows exactly how.
static void log_path(const char *op, const char *path)
{
	printf("[vfs] %s \"%s\" bytes:", op, path ? path : "(null)");
	if (path) for (const unsigned char *p = (const unsigned char *)path; *p && p - (const unsigned char *)path < 200; p++) printf(" %02X", *p);
	printf("\n"); fflush(stdout);
}
static wchar_t *widen(const char *u8)
{
	int n = MultiByteToWideChar(CP_UTF8, 0, u8, -1, NULL, 0);
	wchar_t *w = malloc(sizeof(wchar_t) * (n + 1));
	MultiByteToWideChar(CP_UTF8, 0, u8, -1, w, n);
	return w;
}
struct retro_vfs_file_handle { FILE *f; char *path; };
static const char *vfs_get_path(struct retro_vfs_file_handle *h) { return h->path; }
static struct retro_vfs_file_handle *vfs_open(const char *path, unsigned mode, unsigned hints)
{
	log_path(mode & RETRO_VFS_FILE_ACCESS_WRITE ? "open-w" : "open-r", path);
	const wchar_t *m = L"rb";
	if (mode == RETRO_VFS_FILE_ACCESS_WRITE) m = L"wb";
	else if (mode == RETRO_VFS_FILE_ACCESS_READ_WRITE) m = L"w+b";
	else if (mode == (RETRO_VFS_FILE_ACCESS_READ_WRITE | RETRO_VFS_FILE_ACCESS_UPDATE_EXISTING) || mode == (RETRO_VFS_FILE_ACCESS_WRITE | RETRO_VFS_FILE_ACCESS_UPDATE_EXISTING)) m = L"r+b";
	wchar_t *w = widen(path); FILE *f = _wfopen(w, m); free(w);
	if (!f) return NULL;
	struct retro_vfs_file_handle *h = malloc(sizeof *h); h->f = f; h->path = _strdup(path); return h;
}
static int vfs_close(struct retro_vfs_file_handle *h) { fclose(h->f); free(h->path); free(h); return 0; }
static int64_t vfs_size(struct retro_vfs_file_handle *h) { int64_t p = _ftelli64(h->f); _fseeki64(h->f, 0, SEEK_END); int64_t s = _ftelli64(h->f); _fseeki64(h->f, p, SEEK_SET); return s; }
static int64_t vfs_tell(struct retro_vfs_file_handle *h) { return _ftelli64(h->f); }
static int64_t vfs_seek(struct retro_vfs_file_handle *h, int64_t off, int pos) { return _fseeki64(h->f, off, pos == RETRO_VFS_SEEK_POSITION_START ? SEEK_SET : pos == RETRO_VFS_SEEK_POSITION_CURRENT ? SEEK_CUR : SEEK_END) == 0 ? _ftelli64(h->f) : -1; }
static int64_t vfs_read(struct retro_vfs_file_handle *h, void *b, uint64_t n) { return (int64_t)fread(b, 1, (size_t)n, h->f); }
static int64_t vfs_write(struct retro_vfs_file_handle *h, const void *b, uint64_t n) { return (int64_t)fwrite(b, 1, (size_t)n, h->f); }
static int vfs_flush(struct retro_vfs_file_handle *h) { return fflush(h->f); }
static int vfs_remove(const char *path) { log_path("remove", path); wchar_t *w = widen(path); int r = _wremove(w); free(w); return r; }
static int vfs_rename(const char *a, const char *b) { log_path("rename-from", a); log_path("rename-to", b); wchar_t *wa = widen(a), *wb = widen(b); int r = _wrename(wa, wb); free(wa); free(wb); return r; }
static int64_t vfs_truncate(struct retro_vfs_file_handle *h, int64_t len) { return _chsize_s(_fileno(h->f), len); }
static int vfs_stat(const char *path, int32_t *size)
{
	log_path("stat", path);
	wchar_t *w = widen(path); WIN32_FILE_ATTRIBUTE_DATA a; BOOL ok = GetFileAttributesExW(w, GetFileExInfoStandard, &a); free(w);
	if (!ok) return 0;
	if (size) *size = (int32_t)a.nFileSizeLow;
	return RETRO_VFS_STAT_IS_VALID | ((a.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) ? RETRO_VFS_STAT_IS_DIRECTORY : 0);
}
static int vfs_mkdir(const char *path)
{
	log_path("mkdir", path);
	wchar_t *w = widen(path); BOOL ok = CreateDirectoryW(w, NULL); DWORD e = GetLastError(); free(w);
	return ok ? 0 : (e == ERROR_ALREADY_EXISTS ? -2 : -1);
}
struct retro_vfs_dir_handle { int dummy; };
static struct retro_vfs_dir_handle *vfs_opendir(const char *path, bool hidden) { log_path("opendir", path); return NULL; }
static bool vfs_readdir(struct retro_vfs_dir_handle *d) { return false; }
static const char *vfs_dirent_get_name(struct retro_vfs_dir_handle *d) { return NULL; }
static bool vfs_dirent_is_dir(struct retro_vfs_dir_handle *d) { return false; }
static int vfs_closedir(struct retro_vfs_dir_handle *d) { return 0; }
static struct retro_vfs_interface g_vfs = {
	vfs_get_path, vfs_open, vfs_close, vfs_size, vfs_tell, vfs_seek, vfs_read, vfs_write, vfs_flush,
	vfs_remove, vfs_rename, vfs_truncate, vfs_stat, vfs_mkdir, vfs_opendir, vfs_readdir,
	vfs_dirent_get_name, vfs_dirent_is_dir, vfs_closedir
};

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
	case RETRO_ENVIRONMENT_GET_VFS_INTERFACE:
	{
		struct retro_vfs_interface_info *vi = data;
		printf("[env] VFS requested, version %u\n", vi->required_interface_version); fflush(stdout);
		if (vi->required_interface_version > 3) return false;
		vi->iface = &g_vfs; return true;
	}
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
