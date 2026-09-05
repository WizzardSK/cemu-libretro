#include <condition_variable>
#include <mutex>
#include "Cafe/HW/Latte/ISA/RegDefines.h"
#include "Cafe/OS/libs/gx2/GX2.h" // todo - remove dependency
#include "Cafe/HW/Latte/Core/Latte.h"
#include "Cafe/HW/Latte/Core/LatteDraw.h"
#include "Cafe/HW/Latte/Core/LatteShader.h"
#include "Cafe/HW/Latte/Core/LatteAsyncCommands.h"
#include "Cafe/GameProfile/GameProfile.h"
#include "Cafe/GraphicPack/GraphicPack2.h"
#include "WindowSystem.h"

#include "Cafe/HW/Latte/Core/LatteBufferCache.h"

#include "Cafe/HW/Latte/Renderer/Renderer.h"
#include "Cafe/HW/Latte/Core/LatteTexture.h"
#include "util/helpers/helpers.h"

#include <imgui.h>
#include "config/ActiveSettings.h"

#include <cstdlib>

#include "Cafe/CafeSystem.h"

static bool LatteThread_libretro_debug_enabled()
{
	static int s_cached = -1;
	if (s_cached == -1)
	{
		const char* env = std::getenv("CEMU_LIBRETRO_DEBUG");
		s_cached = (env && env[0] != '\0' && env[0] != '0') ? 1 : 0;
	}
	return s_cached != 0;
}

LatteGPUState_t LatteGPUState = {};

std::atomic_bool sLatteThreadRunning = false;
#ifdef ENABLE_LIBRETRO
// Set by the GPU thread once it is past everything that touches the renderer,
// so Latte_Stop can tell "still tearing down" from "safe to join".
static std::atomic_bool sLatteThreadExited{false};
// Set when Latte_Stop had to give up and detach. The thread is then still alive
// and still rendering through the frontend's device, which is exactly the state
// in which nothing downstream may take that device apart.
static std::atomic_bool sLatteThreadAbandoned{false};

bool Latte_WasThreadAbandoned()
{
	return sLatteThreadAbandoned.load(std::memory_order_acquire);
}
#endif

#ifdef ENABLE_LIBRETRO
static std::atomic_bool sGpuPauseRequested{false};
static std::atomic_bool sGpuParked{false};
static std::mutex sGpuPauseMutex;
static std::condition_variable sGpuPauseCv;

void Latte_RequestGpuPause()
{
	sGpuPauseRequested.store(true, std::memory_order_release);
}

void Latte_ReleaseGpuPause()
{
	{
		std::lock_guard<std::mutex> lock(sGpuPauseMutex);
		sGpuPauseRequested.store(false, std::memory_order_release);
	}
	sGpuPauseCv.notify_all();
}

bool Latte_IsGpuParked()
{
	return sGpuParked.load(std::memory_order_acquire);
}

void Latte_GpuPauseGate()
{
	if (!sGpuPauseRequested.load(std::memory_order_acquire)) [[likely]]
		return;
	std::unique_lock<std::mutex> lock(sGpuPauseMutex);
	sGpuParked.store(true, std::memory_order_release);
	sGpuPauseCv.wait(lock, [] {
		return !sGpuPauseRequested.load(std::memory_order_acquire) || Latte_GetStopSignal();
	});
	sGpuParked.store(false, std::memory_order_release);
}
#endif
std::atomic_bool sLatteThreadFinishedInit = false;

void LatteThread_Exit();

void Latte_LoadInitialRegisters()
{
	LatteGPUState.contextNew.CB_TARGET_MASK.set_MASK(0xFFFFFFFF);
	LatteGPUState.contextNew.VGT_MULTI_PRIM_IB_RESET_INDX.set_RESTART_INDEX(0xFFFFFFFF);
	LatteGPUState.contextNew.VGT_DMA_NUM_INSTANCES.set_NUM_INSTANCES(1);
	LatteGPUState.contextRegister[Latte::REGADDR::PA_CL_CLIP_CNTL] = 0;
	*(float*)&LatteGPUState.contextRegister[mmDB_DEPTH_CLEAR] = 1.0f;
}

extern bool gx2WriteGatherInited;

LatteTextureView* osScreenTVTex[2] = { nullptr };
LatteTextureView* osScreenDRCTex[2] = { nullptr };

LatteTextureView* LatteHandleOSScreen_getOrCreateScreenTex(MPTR physAddress, uint32 width, uint32 height, uint32 pitch)
{
	LatteTextureView* texView = LatteTextureViewLookupCache::lookup(physAddress, width, height, 1, pitch, 0, 1, 0, 1, Latte::E_GX2SURFFMT::R8_G8_B8_A8_UNORM, Latte::E_DIM::DIM_2D);
	if (texView)
		return texView;
	return LatteTexture_CreateTexture(Latte::E_DIM::DIM_2D, physAddress, 0, Latte::E_GX2SURFFMT::R8_G8_B8_A8_UNORM, width, height, 1, pitch, 1, 0, Latte::E_HWTILEMODE::TM_LINEAR_ALIGNED, false);
}

void LatteHandleOSScreen_prepareTextures()
{
	osScreenTVTex[0] = LatteHandleOSScreen_getOrCreateScreenTex(LatteGPUState.osScreen.screen[0].physPtr, 1280, 720, 1280);
	osScreenTVTex[1] = LatteHandleOSScreen_getOrCreateScreenTex(LatteGPUState.osScreen.screen[0].physPtr + 1280 * 720 * 4, 1280, 720, 1280);
	osScreenDRCTex[0] = LatteHandleOSScreen_getOrCreateScreenTex(LatteGPUState.osScreen.screen[1].physPtr, 854, 480, 0x380);
	osScreenDRCTex[1] = LatteHandleOSScreen_getOrCreateScreenTex(LatteGPUState.osScreen.screen[1].physPtr + 896 * 480 * 4, 854, 480, 0x380);
}

void LatteRenderTarget_copyToBackbuffer(LatteTextureView* textureView, bool isPadView);

bool LatteHandleOSScreen_TV()
{
	if (!LatteGPUState.osScreen.screen[0].isEnabled)
		return false;
	if (LatteGPUState.osScreen.screen[0].flipExecuteCount == LatteGPUState.osScreen.screen[0].flipRequestCount)
		return false;
	LatteHandleOSScreen_prepareTextures();

	sint32 bufferDisplayTV = (LatteGPUState.osScreen.screen[0].flipRequestCount & 1) ^ 1;
	sint32 bufferDisplayDRC = (LatteGPUState.osScreen.screen[1].flipRequestCount & 1) ^ 1;

	const uint32 bufferIndexTV = (bufferDisplayTV);
	const uint32 bufferIndexDRC = bufferDisplayDRC;

	LatteTexture_ReloadData(osScreenTVTex[bufferIndexTV]->baseTexture);

	// TV screen
	LatteRenderTarget_copyToBackbuffer(osScreenTVTex[bufferIndexTV]->baseTexture->baseView, false);
	
	if (LatteGPUState.osScreen.screen[0].flipExecuteCount != LatteGPUState.osScreen.screen[0].flipRequestCount)
		LatteGPUState.osScreen.screen[0].flipExecuteCount.store(LatteGPUState.osScreen.screen[0].flipRequestCount);
	return true;
}

bool LatteHandleOSScreen_DRC()
{
	if (!LatteGPUState.osScreen.screen[1].isEnabled)
		return false;
	if (LatteGPUState.osScreen.screen[1].flipExecuteCount == LatteGPUState.osScreen.screen[1].flipRequestCount)
		return false;
	LatteHandleOSScreen_prepareTextures();

	sint32 bufferDisplayDRC = (LatteGPUState.osScreen.screen[1].flipRequestCount & 1) ^ 1;

	const uint32 bufferIndexDRC = bufferDisplayDRC;

	LatteTexture_ReloadData(osScreenDRCTex[bufferIndexDRC]->baseTexture);

	// GamePad screen
	LatteRenderTarget_copyToBackbuffer(osScreenDRCTex[bufferIndexDRC]->baseTexture->baseView, true);

	if (LatteGPUState.osScreen.screen[1].flipExecuteCount != LatteGPUState.osScreen.screen[1].flipRequestCount)
		LatteGPUState.osScreen.screen[1].flipExecuteCount.store(LatteGPUState.osScreen.screen[1].flipRequestCount);
	return true;
}

void LatteThread_HandleOSScreen()
{
	bool swapTV = LatteHandleOSScreen_TV();
	bool swapDRC = LatteHandleOSScreen_DRC();
	if(swapTV || swapDRC)
		g_renderer->SwapBuffers(swapTV, swapDRC);
}

int Latte_ThreadEntry()
{
	SetThreadName("LatteThread");
	sint32 w,h;
	WindowSystem::GetWindowPhysSize(w,h);

	// renderer
	g_renderer->Initialize();
	RendererOutputShader::InitializeStatic();

	LatteTiming_Init();
	LatteTexture_init();
	LatteTC_Init();
	LatteBufferCache_init(164 * 1024 * 1024);
	LatteQuery_Init();
	LatteSHRC_Init();
	LatteStreamout_InitCache();

	g_renderer->renderTarget_setViewport(0, 0, w, h, 0.0f, 1.0f);
	
	// enable GLSL gl_PointSize support
	// glEnable(GL_PROGRAM_POINT_SIZE); // breaks shader caching on AMD (as of 2018)
	
	LatteGPUState.glVendor = GLVENDOR_UNKNOWN;
	switch(g_renderer->GetVendor())
	{
	case GfxVendor::AMD: 
		LatteGPUState.glVendor = GLVENDOR_AMD;
		break;
	case GfxVendor::Intel:
		LatteGPUState.glVendor = GLVENDOR_INTEL; 
		break;
	case GfxVendor::Nvidia: 
		LatteGPUState.glVendor = GLVENDOR_NVIDIA; 
		break;
	case GfxVendor::Apple:
		LatteGPUState.glVendor = GLVENDOR_APPLE;
	default:
		break;
	}

	sLatteThreadFinishedInit = true;

	// register debug handler
	if (cemuLog_isLoggingEnabled(LogType::OpenGLLogging))
		g_renderer->EnableDebugMode();

	// wait till a game is started
	while( true )
	{
		if( CafeSystem::IsTitleRunning() )
			break;

		g_renderer->DrawEmptyFrame(true);
		g_renderer->DrawEmptyFrame(false);
		g_renderer->CancelScreenshotRequest(); // keep the screenshot request queue empty
		std::this_thread::sleep_for(std::chrono::milliseconds(1000/60));
	}

	g_renderer->DrawEmptyFrame(true);

	// before doing anything with game specific shaders, we need to wait for graphic packs to finish loading
	GraphicPack2::WaitUntilReady();
	// if legacy packs are enabled we cannot use the colorbuffer resolution optimization
	LatteGPUState.allowFramebufferSizeOptimization = true;
	for(auto& pack : GraphicPack2::GetActiveGraphicPacks())
	{
		if(pack->AllowRendertargetSizeOptimization())
			continue;
		for(auto& rule : pack->GetTextureRules())
		{
			if(rule.filter_settings.width >= 0 || rule.filter_settings.height >= 0 || rule.filter_settings.depth >= 0 ||
				rule.overwrite_settings.width >= 0 || rule.overwrite_settings.height >= 0 || rule.overwrite_settings.depth >= 0)
			{
				LatteGPUState.allowFramebufferSizeOptimization = false;
				cemuLog_log(LogType::Force, "Graphic pack \"{}\" prevents rendertarget size optimization. This warning can be ignored and is intended for graphic pack developers", pack->GetName());
				break;
			}
		}
	}
	// load disk shader cache
    LatteShaderCache_Load();
	// init registers
	Latte_LoadInitialRegisters();
	// let CPU thread know the GPU is done initializing
	g_isGPUInitFinished = true;
	cemuLog_log(LogType::Force, "LatteThread: GPU init finished, waiting for GX2Init...");
	// wait until CPU has called GX2Init()
	{
		int waitCount = 0;
		while (LatteGPUState.gx2InitCalled == 0)
		{
			std::this_thread::yield();
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
			LatteThread_HandleOSScreen();
			if (Latte_GetStopSignal())
				LatteThread_Exit();
			waitCount++;
			if (waitCount == 5000) // 5 seconds
				cemuLog_log(LogType::Force, "LatteThread: Still waiting for GX2Init after 5s...");
			if (waitCount == 30000) // 30 seconds
				cemuLog_log(LogType::Force, "LatteThread: Still waiting for GX2Init after 30s...");
		}
	}
	cemuLog_log(LogType::Force, "LatteThread: GX2Init called, entering command processor");
	LatteCP_ProcessRingbuffer();
	cemu_assert_debug(false); // should never reach
	return 0;
}

std::thread sLatteThread;
std::mutex sLatteThreadStateMutex;

// initializes GPU thread which in turn also activates graphic packs
// does not return until the thread finished initialization
void Latte_Start()
{
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] Latte_Start begin running={} finishedInit={}", sLatteThreadRunning.load() ? 1 : 0, sLatteThreadFinishedInit.load() ? 1 : 0);
	std::unique_lock _lock(sLatteThreadStateMutex);
	cemu_assert_debug(!sLatteThreadRunning);
#ifdef ENABLE_LIBRETRO
	sLatteThreadExited.store(false, std::memory_order_release);
	sLatteThreadAbandoned.store(false, std::memory_order_release);
#endif
	sLatteThreadRunning = true;
	sLatteThreadFinishedInit = false;
	sLatteThread = std::thread(Latte_ThreadEntry);
	// wait until initialized
	while (!sLatteThreadFinishedInit)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] Latte_Start end running={} finishedInit={}", sLatteThreadRunning.load() ? 1 : 0, sLatteThreadFinishedInit.load() ? 1 : 0);
}

void Latte_Stop()
{
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] Latte_Stop begin running={} finishedInit={}", sLatteThreadRunning.load() ? 1 : 0, sLatteThreadFinishedInit.load() ? 1 : 0);
	std::unique_lock _lock(sLatteThreadStateMutex);
	if (!sLatteThreadRunning)
		return;
	sLatteThreadRunning = false;
	_lock.unlock();
#ifdef ENABLE_LIBRETRO
	// Detaching here used to be unconditional, on the grounds that the GPU
	// thread can be blocked somewhere it will not see the stop signal. The cost
	// was that a "stopped" title still had a live GPU thread: it ran on through
	// its own teardown while the frontend went on to unload the core, and the
	// two raced over the renderer. What that looks like is a crash at exit in
	// LatteShaderCache_Load or RendererShaderVk::CreateVkShaderModule with a
	// null device - an in-flight shader compile finding the renderer gone.
	//
	// So: wait for the thread to finish its own teardown, then join it, and
	// fall back to the old detach if it does not get there. The wait is bounded
	// because a frontend frozen on exit would be worse than the race, and the
	// caller (ShutdownTitle) has its own timeout above this one.
	if (sLatteThread.joinable())
	{
		constexpr int kExitTimeoutMs = 5000;
		for (int i = 0; i < kExitTimeoutMs && !sLatteThreadExited.load(std::memory_order_acquire); i++)
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
		if (sLatteThreadExited.load(std::memory_order_acquire))
			sLatteThread.join();
		else
		{
			cemuLog_log(LogType::Force, "[LatteThread] GPU thread did not exit in time, detaching it");
			sLatteThreadAbandoned.store(true, std::memory_order_release);
			sLatteThread.detach();
		}
	}
#else
	sLatteThread.join();
#endif
}

bool Latte_GetStopSignal()
{
	return !sLatteThreadRunning;
}

#ifdef ENABLE_LIBRETRO
// Defined at global scope by the libretro glue (src/libretro/CemuLibretro.cpp).
bool libretro_gpu_context_gone();
#endif

void LatteThread_Exit()
{
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit begin renderer={}", g_renderer ? 1 : 0);
#ifdef ENABLE_LIBRETRO
	// Everything below this point talks to the GPU: the renderer's own shutdown,
	// the cache unloads that free their objects through it, and the destructor.
	// If the frontend has already destroyed the graphics context - which is the
	// order an exiting frontend uses - there is nothing left to talk to, and
	// each of those calls is a fault inside the driver. Let the objects go
	// unfreed instead; this thread is on its way out and so is the process.
	if (::libretro_gpu_context_gone())
	{
		cemuLog_log(LogType::Force, "[LatteThread] graphics context already gone, skipping GPU teardown");
		g_renderer.release();
		std::memset(&LatteGPUState, 0, sizeof(LatteGPUState));
		sLatteThreadExited.store(true, std::memory_order_release);
		#if BOOST_OS_WINDOWS
		ExitThread(0);
		#else
		pthread_exit(nullptr);
		#endif
	}
#endif
	if (g_renderer)
		g_renderer->Shutdown();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after renderer->Shutdown");
    // clean up vertex/uniform cache
    LatteBufferCache_UnloadAll();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after LatteBufferCache_UnloadAll");
	// clean up texture cache
	LatteTC_UnloadAllTextures();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after LatteTC_UnloadAllTextures");
	// clean up runtime shader cache
    LatteSHRC_UnloadAll();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after LatteSHRC_UnloadAll");
    // close disk cache
    LatteShaderCache_Close();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after LatteShaderCache_Close");
	RendererOutputShader::ShutdownStatic();
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after RendererOutputShader::ShutdownStatic");
    // destroy renderer but make sure that g_renderer remains valid until the destructor has finished
	if (g_renderer)
	{
		Renderer* renderer = g_renderer.get();
		delete renderer;
		g_renderer.release();
	}
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after renderer delete/release");
	// reset GPU7 state
	std::memset(&LatteGPUState, 0, sizeof(LatteGPUState));
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit end (ExitThread)\n");
#ifdef ENABLE_LIBRETRO
	sLatteThreadExited.store(true, std::memory_order_release);
#endif
	#if BOOST_OS_WINDOWS
	ExitThread(0);
	#else
	pthread_exit(nullptr);
	#endif
	cemu_assert_unimplemented();
}
