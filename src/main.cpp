#include "WindowSystem.h"
#include "util/crypto/aes128.h"
#include "Cafe/OS/RPL/rpl.h"
#include "Cafe/OS/libs/gx2/GX2.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"
#include "Cafe/GameProfile/GameProfile.h"
#include "Cafe/GraphicPack/GraphicPack2.h"
#include "config/CemuConfig.h"
#include "config/NetworkSettings.h"
#include "config/LaunchSettings.h"
#include "input/InputManager.h"

#include "Cafe/CafeSystem.h"
#include "Cafe/TitleList/TitleList.h"
#include "Cafe/TitleList/SaveList.h"

#include "Common/ExceptionHandler/ExceptionHandler.h"
#include "Common/cpu_features.h"

#include "util/helpers/helpers.h"
#include "config/ActiveSettings.h"

#include "Cafe/IOSU/legacy/iosu_crypto.h"
#include "Cafe/OS/libs/vpad/vpad.h"

#include "audio/IAudioAPI.h"
#include "audio/IAudioInputAPI.h"
#if BOOST_OS_WINDOWS
#pragma comment(lib,"Dbghelp.lib")
#endif

#ifdef HAS_SDL
#define SDL_MAIN_HANDLED
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#endif

#if BOOST_OS_LINUX
#define _putenv(__s) putenv((char*)(__s))
#include <sys/sysinfo.h>
#elif BOOST_OS_MACOS || BOOST_OS_BSD
#define _putenv(__s) putenv((char*)(__s))
#include <sys/types.h>
#include <sys/sysctl.h>
#endif

#if BOOST_OS_WINDOWS
extern "C"
{
	__declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
	__declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
}
#endif

std::atomic_bool g_isGPUInitFinished = false;

std::wstring executablePath;

// some implementations of _putenv dont copy the string and instead only store a pointer
// thus we use a helper to keep a permanent copy
std::vector<std::string*> sPutEnvMap;

void _putenvSafe(const char* c)
{
    auto s = new std::string(c);
    sPutEnvMap.emplace_back(s);
    _putenv(s->c_str());
}

void reconfigureGLDrivers()
{
#ifdef ENABLE_OPENGL
	// reconfigure GL drivers to store
	const fs::path nvCacheDir = ActiveSettings::GetCachePath("shaderCache/driver/nvidia/");

	std::error_code err;
	fs::create_directories(nvCacheDir, err);

	std::string nvCacheDirEnvOption("__GL_SHADER_DISK_CACHE_PATH=");
	nvCacheDirEnvOption.append(_pathToUtf8(nvCacheDir));

#if BOOST_OS_WINDOWS
	std::wstring tmpW = boost::nowide::widen(nvCacheDirEnvOption);
	_wputenv(tmpW.c_str());
#else
    _putenvSafe(nvCacheDirEnvOption.c_str());
#endif
    _putenvSafe("__GL_SHADER_DISK_CACHE_SKIP_CLEANUP=1");
#endif
}

void reconfigureVkDrivers()
{
#ifdef ENABLE_VULKAN
    _putenvSafe("DISABLE_LAYER_AMD_SWITCHABLE_GRAPHICS_1=1");
    _putenvSafe("DISABLE_VK_LAYER_VALVE_steam_fossilize_1=1");
#endif
}

void WindowsInitCwd()
{
	#if BOOST_OS_WINDOWS
	executablePath.resize(4096);
	int i = GetModuleFileNameW(NULL, executablePath.data(), executablePath.size());
	if(i >= 0)
		executablePath.resize(i);
	else
		executablePath.clear();
	SetCurrentDirectoryW(executablePath.c_str());
	// set high priority
	SetPriorityClass(GetCurrentProcess(), ABOVE_NORMAL_PRIORITY_CLASS);
	#endif
}

#ifdef RETRO_CORE
// Defined by the libretro glue. Cemu's own log is created part-way through the
// init below, and a hard crash in the frontend's process can take the whole
// process down before anything reaches the disk - the frontend log is the only
// output that reliably survives, so every stage is announced there too.
void LibretroInitProgress(const char* stage);
#define CEMU_INIT_STAGE(stage) LibretroInitProgress(stage)
#else
#define CEMU_INIT_STAGE(stage) ((void)0)
#endif

void CemuCommonInit()
{
	CEMU_INIT_STAGE("drivers");
	reconfigureGLDrivers();
	reconfigureVkDrivers();
	// crypto init
	CEMU_INIT_STAGE("crypto");
	AES128_init();
	// init PPC timer
	// call this as early as possible because it measures frequency of RDTSC using an asynchronous thread over 3 seconds
	CEMU_INIT_STAGE("PPC timer");
	PPCTimer_init();

	WindowsInitCwd();
	CEMU_INIT_STAGE("exception handler");
    ExceptionHandler_Init();
	// read config
	CEMU_INIT_STAGE("config");
	GetConfigHandle().Load();
	if (NetworkConfig::XMLExists())
		n_config.Load();
	// parallelize expensive init code
	CEMU_INIT_STAGE("audio API + graphic packs");
	std::future<int> futureInitAudioAPI = std::async(std::launch::async, []{ IAudioAPI::InitializeStatic(); IAudioInputAPI::InitializeStatic(); return 0; });
	std::future<int> futureInitGraphicPacks = std::async(std::launch::async, []{ GraphicPack2::LoadAll(); return 0; });
	CEMU_INIT_STAGE("input");
	InputManager::instance().load();
	futureInitAudioAPI.wait();
	futureInitGraphicPacks.wait();
	// init Cafe system
	CEMU_INIT_STAGE("Cafe system");
	CafeSystem::Initialize();
	// init title list
	CEMU_INIT_STAGE("title list");
	CafeTitleList::Initialize(ActiveSettings::GetUserDataPath("title_list_cache.xml"));
	for (auto& it : GetConfig().game_paths)
		CafeTitleList::AddScanPath(_utf8ToPath(it));
	fs::path mlcPath = ActiveSettings::GetMlcPath();
	if (!mlcPath.empty())
		CafeTitleList::SetMLCPath(mlcPath);
	CEMU_INIT_STAGE("title list scan");
	CafeTitleList::Refresh();
	// init save list
	CEMU_INIT_STAGE("save list");
	CafeSaveList::Initialize();
	if (!mlcPath.empty())
	{
		CafeSaveList::SetMLCPath(mlcPath);
		CafeSaveList::Refresh();
	}
	CEMU_INIT_STAGE("done");
}

void mainEmulatorLLE();
void ppcAsmTest();
void gx2CopySurfaceTest();
void ExpressionParser_test();
void FSTVolumeTest();
void CRCTest();

void UnitTests()
{
	ExpressionParser_test();
	gx2CopySurfaceTest();
	ppcAsmTest();
	FSTVolumeTest();
	CRCTest();
}

bool isConsoleConnected = false;
void requireConsole()
{
    #if BOOST_OS_WINDOWS
    if (isConsoleConnected)
        return;

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwFileType = GetFileType(hOut);

    if (dwFileType == FILE_TYPE_UNKNOWN || dwFileType == FILE_TYPE_CHAR)
    {
        if (AttachConsole(ATTACH_PARENT_PROCESS) != FALSE)
        {
            freopen("CONOUT$", "w", stdout);
            freopen("CONOUT$", "w", stderr);
            freopen("CONIN$", "r", stdin);
            isConsoleConnected = true;
        }
    }
    else
    {
        isConsoleConnected = true; 
    }
    #endif
}

void HandlePostUpdate()
{
	// finalize update process
	// delete update cemu.exe.backup if available
	const auto filename = ActiveSettings::GetExecutablePath().replace_extension("exe.backup");
	if (fs::exists(filename))
	{
#if BOOST_OS_WINDOWS
		HANDLE lock;
		do
		{
			lock = CreateMutexW(nullptr, TRUE, L"Global\\cemu_update_lock");
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
		} while (lock == nullptr);
		const DWORD wait_result = WaitForSingleObject(lock, 2000);
		CloseHandle(lock);

		if (wait_result == WAIT_OBJECT_0)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
			std::error_code ec;
			fs::remove(filename, ec);
		}
#else
		while (fs::exists(filename))
		{
			std::error_code ec;
			fs::remove(filename, ec);
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		}
#endif
	}
}

void ToolShaderCacheMerger();

#ifndef ENABLE_LIBRETRO
// Entry points are not needed for libretro core builds

#if BOOST_OS_WINDOWS

// entrypoint for release builds
int wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
	if (FAILED(CoInitializeEx(nullptr, COINIT_MULTITHREADED | COINIT_DISABLE_OLE1DDE)))
		cemuLog_log(LogType::Force, "CoInitializeEx() failed");
#ifdef HAS_SDL
	SDL_SetMainReady();
#endif
	auto parse_rc = LaunchSettings::HandleCommandline(lpCmdLine);
	if (parse_rc.has_value())
		return *parse_rc;
	WindowSystem::Create();
	return 0;
}

// entrypoint for debug builds with console
int main(int argc, char* argv[])
{
	if (FAILED(CoInitializeEx(nullptr, COINIT_MULTITHREADED | COINIT_DISABLE_OLE1DDE)))
		cemuLog_log(LogType::Force, "CoInitializeEx() failed");
#ifdef HAS_SDL
	SDL_SetMainReady();
#endif
	auto parse_rc = LaunchSettings::HandleCommandline(argc, argv);
	if (parse_rc.has_value())
		return *parse_rc;
	WindowSystem::Create();
	return 0;
}

#else

int BreathOfTheWildChildProcessMain();
int main(int argc, char *argv[])
{
#if BOOST_OS_LINUX && defined(ENABLE_VULKAN)
	if (getenv("CEMU_DETECT_RADV") != nullptr)
		return BreathOfTheWildChildProcessMain();
#endif

#if BOOST_OS_LINUX || BOOST_OS_BSD
    XInitThreads();
#endif
	auto parse_rc = LaunchSettings::HandleCommandline(argc, argv);
  if (parse_rc.has_value())
		return *parse_rc;
	WindowSystem::Create();
	return 0;
}
#endif

#endif // ENABLE_LIBRETRO

extern "C" DLLEXPORT uint64 gameMeta_getTitleId()
{
	return CafeSystem::GetForegroundTitleId();
}
