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
#if defined(ENABLE_VULKAN) && defined(ENABLE_LIBRETRO)
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanRenderer.h"
#endif
#include "Cafe/HW/Latte/Core/LatteTexture.h"
#include "Cafe/HW/Latte/Core/LatteIndices.h"
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
// Set by the GPU thread as its first act, so a caller can tell "created but not
// running yet" from "running".
static std::atomic_bool sLatteThreadEntered{false};
// Freeing what this core built on the graphics context has exactly one safe
// moment, and it is while the context is still there. The frontend names that
// moment - context_destroy - and it is the last one: the close arrives after
// it, by which time the device is gone.
//
// So the teardown is asked for here and carried out by the GPU thread at the
// pause gate rather than by the caller. Not a detail: under OpenGL the objects
// belong to that thread's context and no other thread can free them, and under
// either API it is the thread that might otherwise still be using them.
static std::atomic_bool sTeardownForContextLoss{false};
static std::atomic_bool sTeardownForContextLossDone{false};
// Set for as long as there is deliberately no renderer. Without it the GPU
// thread reads a null g_renderer as "this run is over" and leaves - which is
// right when a title is closing and wrong here, because the context is coming
// back and the thread has to still be there when it does.
static std::atomic_bool sRendererRebuildPending{false};

void Latte_TeardownGpuState(const char* reason);
void Latte_RebuildRendererIfNeeded();
void Latte_InitRendererState();

void Latte_RequestGpuTeardownForContextLoss()
{
	sTeardownForContextLossDone.store(false, std::memory_order_release);
	sTeardownForContextLoss.store(true, std::memory_order_release);
}

bool Latte_GpuTeardownForContextLossDone()
{
	return sTeardownForContextLossDone.load(std::memory_order_acquire);
}

bool Latte_IsRendererRebuildPending()
{
	return sRendererRebuildPending.load(std::memory_order_acquire);
}

// Where the GPU thread is. Only ever set by that thread, and only to string
// literals, so reading it from another thread during a shutdown is safe. It
// exists because "the GPU thread would not stop" on its own says nothing about
// what to fix: parked in the ring buffer, still loading a shader cache and
// waiting for a title that is never going to start are three different bugs.
static std::atomic<const char*> sLatteThreadPhase{"not started"};

static void LatteThread_SetPhase(const char* phase)
{
	sLatteThreadPhase.store(phase, std::memory_order_release);
}

const char* Latte_GetThreadPhase()
{
	return sLatteThreadPhase.load(std::memory_order_acquire);
}
#endif

#ifdef ENABLE_LIBRETRO
// Defined at global scope by the libretro glue (src/libretro/CemuLibretro.cpp).
bool libretro_gpu_context_gone();
#endif

#ifdef ENABLE_LIBRETRO
static std::atomic_bool sGpuPauseRequested{false};
static std::atomic_bool sGpuParked{false};
// Set when the GPU thread has reached the gate, which is before it starts
// handing the context back. Parked is only true once that is finished, so
// without this the caller cannot tell a thread that never arrived from one
// that arrived and is still working - and those are different failures with
// very different budgets.
static std::atomic_bool sGpuAtPauseGate{false};
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

bool Latte_IsGpuAtPauseGate()
{
	return sGpuAtPauseGate.load(std::memory_order_acquire);
}

// Whether this thread may leave the gate and go back to work. Two reasons to
// stay: somebody asked for the pause and has not released it, or the renderer
// this thread works through is gone and the one replacing it is not here yet.
//
// The second is the one worth spelling out. The teardown below runs on this
// thread, at this gate, because it is the only thread that may free what was
// built on the graphics context - and it leaves g_renderer null. Everything
// past this point, the command processor first of all, works through that
// pointer. Letting the thread out with it null is how a close landing in this
// moment turned into a read of address 0 inside the command processor's idle
// path; guarding that one call would have fixed that one caller and left the
// next ordering to find the next one. So the answer is here: the thread that
// needs the renderer does not run without it, and the only ways out are a
// renderer to work with or a stop to obey.
static bool Latte_GpuMayLeaveGate()
{
	if (Latte_GetStopSignal())
		return true;
	if (sGpuPauseRequested.load(std::memory_order_acquire))
		return false;
	return !(sRendererRebuildPending.load(std::memory_order_acquire) && g_renderer == nullptr);
}

void Latte_GpuPauseGate()
{
	if (Latte_GpuMayLeaveGate()) [[likely]]
		return;
	sGpuAtPauseGate.store(true, std::memory_order_release);
	// Below the gate is a command boundary, which makes this the one point in
	// the thread's life where it holds no half-finished GPU work - so it is
	// where the contents of the context can be handed back.
	if (sTeardownForContextLoss.exchange(false, std::memory_order_acq_rel))
	{
		sRendererRebuildPending.store(true, std::memory_order_release);
		Latte_TeardownGpuState("the graphics context is going away");
		sTeardownForContextLossDone.store(true, std::memory_order_release);
	}
	while (true)
	{
		{
			std::unique_lock<std::mutex> lock(sGpuPauseMutex);
			sGpuParked.store(true, std::memory_order_release);
			sGpuPauseCv.wait(lock, [] {
				return !sGpuPauseRequested.load(std::memory_order_acquire) || Latte_GetStopSignal();
			});
			sGpuParked.store(false, std::memory_order_release);
		}
		// The renderer comes back through here: context_reset builds one and
		// releases the pause, and this is the call that puts the title's shaders
		// and pipelines back on it.
		Latte_RebuildRendererIfNeeded();
		if (Latte_GpuMayLeaveGate())
			break;
		// No renderer yet and no stop: the frontend has taken its context away
		// and has not given one back. Nothing this thread does next is possible
		// without one, so it waits here rather than out there.
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
	sGpuAtPauseGate.store(false, std::memory_order_release);
}
#endif
std::atomic_bool sLatteThreadFinishedInit = false;

#ifdef ENABLE_LIBRETRO
// The stretch between the GPU thread starting and this turning true is the
// one part of its life where it is not in the command processor and cannot
// park - it is inside the renderer's own bring-up, calling into the driver
// the whole time. A frontend taking its graphics context apart has to know
// about that stretch, because waiting for a park that cannot happen just
// times out and pulls the device out from under those calls.
// Whether the GPU thread has begun running its own body. Latte_Start sets the
// running flag and creates the thread, and the thread may not be scheduled for
// a while after that - a window a close can land in, and one where nothing has
// touched the graphics context yet because the thread has not executed a line.
bool Latte_HasGpuThreadEntered()
{
	return sLatteThreadEntered.load(std::memory_order_acquire);
}

bool Latte_HasFinishedRendererInit()
{
	// No GPU thread means nothing is in the middle of a bring-up, so the answer
	// is yes rather than the flag's initial false - otherwise a context that
	// goes away before any title started waits out its whole deadline for a
	// thread that does not exist.
	if (!sLatteThreadRunning.load(std::memory_order_acquire))
		return true;
	return sLatteThreadFinishedInit.load(std::memory_order_acquire);
}
#endif

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
#ifdef ENABLE_LIBRETRO
	sLatteThreadEntered.store(true, std::memory_order_release);
#endif
	// renderer
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("renderer init");
	// Everything from here to sLatteThreadFinishedInit goes into the graphics
	// driver. If the frontend has already taken its context apart - a title
	// closed a second after it started gets here - then the device behind
	// those calls is gone, and on a Mali device that is a jump through a null
	// entry in the driver's own dispatch table: pc=0, with the return address
	// inside libGLES_mali.so and nothing of ours on the stack. Leave before
	// making the first of them. Init is reported as finished either way, or
	// Latte_Start waits for a thread that is already on its way out.
	if (::libretro_gpu_context_gone() || !g_renderer)
	{
		cemuLog_log(LogType::Force, "[LatteThread] the graphics context went away before the renderer came up - stopping without touching it");
		sLatteThreadFinishedInit = true;
		LatteThread_Exit();
		return 0;
	}
#endif
	Latte_InitRendererState();

	sLatteThreadFinishedInit = true;

	// register debug handler
	if (cemuLog_isLoggingEnabled(LogType::OpenGLLogging))
		g_renderer->EnableDebugMode();

	// wait till a game is started
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("waiting for a title to start");
#endif
	while( true )
	{
		if( CafeSystem::IsTitleRunning() )
			break;

#ifdef ENABLE_LIBRETRO
		// A stop that arrives before the title ever starts has to be seen here
		// too. Closing content while it is still being prepared used to leave
		// this loop spinning: Latte_Stop timed out, detached the thread, and the
		// frontend then unloaded the library out from under a thread that was
		// still running in it.
		if (Latte_GetStopSignal())
			LatteThread_Exit();
#endif
		g_renderer->DrawEmptyFrame(true);
		g_renderer->DrawEmptyFrame(false);
		g_renderer->CancelScreenshotRequest(); // keep the screenshot request queue empty
		std::this_thread::sleep_for(std::chrono::milliseconds(1000/60));
	}

	g_renderer->DrawEmptyFrame(true);

	// before doing anything with game specific shaders, we need to wait for graphic packs to finish loading
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("waiting for graphic packs");
	if (Latte_GetStopSignal())
		LatteThread_Exit();
#endif
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
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("loading the shader cache");
	if (Latte_GetStopSignal())
		LatteThread_Exit();
#endif
    LatteShaderCache_Load();
#ifdef ENABLE_LIBRETRO
	if (Latte_GetStopSignal())
		LatteThread_Exit();
#endif
	// init registers
	Latte_LoadInitialRegisters();
	// let CPU thread know the GPU is done initializing
	g_isGPUInitFinished = true;
	cemuLog_log(LogType::Force, "LatteThread: GPU init finished, waiting for GX2Init...");
	// wait until CPU has called GX2Init()
	{
#ifdef ENABLE_LIBRETRO
		LatteThread_SetPhase("waiting for GX2Init");
#endif
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
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("command processor");
#endif
	LatteCP_ProcessRingbuffer();
	cemu_assert_debug(false); // should never reach
	return 0;
}

// Hands back everything this core built on the graphics context, in the order
// that keeps each step's dependencies alive: the renderer's own shutdown, then
// the caches that free their objects through it, then the renderer itself.
//
// Only ever called on the GPU thread. Under OpenGL these objects belong to that
// thread's context and no other thread could free them; under Vulkan it is
// still the thread that would otherwise be using them.
void Latte_TeardownGpuState(const char* reason)
{
	cemuLog_log(LogType::Force, "[LatteThread] giving the graphics context its contents back - {}", reason);
	if (!g_renderer)
	{
		cemuLog_log(LogType::Force, "[LatteThread] there was no renderer to give anything back to");
		return;
	}
	g_renderer->Shutdown();
	// Before the renderer goes, because every one of these frees through it.
	// The index cache is on this list for the reason the last commit gives: its
	// entries are reservations belonging to this renderer's allocator, and an
	// entry that outlives it is handed to the next one's.
	LatteIndices_invalidateAll();
	LatteBufferCache_UnloadAll();
	LatteTC_UnloadAllTextures();
	LatteSHRC_UnloadAll();
	LatteShaderCache_Close();
	RendererOutputShader::ShutdownStatic();
	Renderer* renderer = g_renderer.get();
	delete renderer;
	g_renderer.release();
	cemuLog_log(LogType::Force, "[LatteThread] the graphics context has everything back and the renderer is gone");
}

// The other half: a context that went away has come back, the frontend has
// built a renderer on it, and everything the last one held has to exist again.
// The title itself never stopped, so its registers and its memory are still
// good - what has to be rebuilt is only what lived on the device.
void Latte_RebuildRendererIfNeeded()
{
	if (!sRendererRebuildPending.load(std::memory_order_acquire))
		return;
	// The context is gone and the new one is not here yet. Nothing to do but
	// come back; the caller is the pause gate, which is where this thread waits.
	if (!g_renderer)
		return;
	sRendererRebuildPending.store(false, std::memory_order_release);
	cemuLog_log(LogType::Force, "[LatteThread] the graphics context is back, building everything again");
	LatteThread_SetPhase("renderer init");
	Latte_InitRendererState();
	LatteThread_SetPhase("loading the shader cache");
	// Every shader the title had compiled went with the old device, so this is
	// not an optimisation - without it the first draw has nothing to draw with.
	LatteShaderCache_Load();
	LatteThread_SetPhase("command processor");
	cemuLog_log(LogType::Force, "[LatteThread] back in the command processor on the new context");
}

// Everything the renderer has to have before a single command is read, in one
// place because it is needed twice: once when the GPU thread starts, and once
// more when a lost graphics context comes back and the whole lot has to be
// built again on a new device.
void Latte_InitRendererState()
{
	sint32 w, h;
	WindowSystem::GetWindowPhysSize(w, h);
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
#endif
#ifdef ENABLE_LIBRETRO
	// The first thing the GPU thread does is call g_renderer->Initialize(), so
	// starting it without a renderer is a null dereference several seconds
	// later, on another thread, with nothing in the log to say why - which is
	// exactly the crash report that arrived from a Mali device. Refuse here
	// instead, and say so. The caller must not be left waiting on an init that
	// is never going to happen, so the flags are set as if the thread had come
	// and gone.
	if (!g_renderer)
	{
		cemuLog_log(LogType::Force, "[LatteThread] refusing to start: there is no renderer to run on. "
			"Something released it between the frontend creating one and the title starting.");
		sLatteThreadRunning = false;
		sLatteThreadFinishedInit = true;
		sLatteThreadExited.store(true, std::memory_order_release);
		return;
	}
#endif
	sLatteThreadRunning = true;
	sLatteThreadFinishedInit = false;
#ifdef ENABLE_LIBRETRO
	sLatteThreadEntered.store(false, std::memory_order_release);
#endif
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
	{
		// Nothing to stop, as far as this flag knows - but if a thread is still
		// alive out there, this is the line that says nobody ever waited for it.
		cemuLog_log(LogType::Force, "[LatteThread] Latte_Stop: the GPU thread was already marked stopped, not waiting for one");
		return;
	}
	sLatteThreadRunning = false;
	_lock.unlock();
#ifdef ENABLE_LIBRETRO
	// A thread parked at the pause gate is asleep on a condition variable whose
	// predicate does check the stop signal - but only when something wakes it,
	// and nothing did. A frontend destroys the graphics context before it
	// unloads, which is exactly when the gate is holding the GPU thread, so the
	// stop that followed was never seen and Latte_Stop timed out on a thread
	// that was one notify away from leaving.
	{
		std::lock_guard<std::mutex> lock(sGpuPauseMutex);
	}
	sGpuPauseCv.notify_all();

	// Wait for the thread to finish its own teardown, then join it. The wait is
	// bounded, and running out of it is not something to carry on from: a
	// "stopped" title with a live GPU thread runs on through its own teardown
	// while the frontend unloads the core, and the two race over the renderer -
	// a crash at exit in LatteShaderCache_Load or CreateVkShaderModule against
	// a null device. Detaching it here was how that used to be survived, and
	// surviving it is what made the next title's failure impossible to read.
	if (sLatteThread.joinable())
	{
		constexpr int kExitTimeoutMs = 5000;
		for (int i = 0; i < kExitTimeoutMs && !sLatteThreadExited.load(std::memory_order_acquire); i++)
			std::this_thread::sleep_for(std::chrono::milliseconds(1));
		if (!sLatteThreadExited.load(std::memory_order_acquire))
			Latte_FailGpuThread("the GPU thread did not exit within five seconds of being asked to");
		sLatteThread.join();
	}
#else
	sLatteThread.join();
#endif
}

bool Latte_GetStopSignal()
{
#ifdef ENABLE_LIBRETRO
	// A thread whose renderer is gone has nothing left to do. Nearly
	// everything this thread touches goes through g_renderer, so once the
	// unload path has dropped it every one of those is a fault at 0x0 - which
	// is what two crash reports in a row were, at two different call sites
	// (NotifyLatteCommandProcessorIdle, then occlusionQuery_updateState one
	// line further on). Null-checking them one at a time only moves the crash
	// to the next one, so the answer belongs here instead: there is no renderer,
	// therefore stop, and the checks the loops already make take the thread out
	// at the next command boundary.
	//
	// How it gets into that state: closing content parks the GPU thread at the
	// pause gate while the frontend takes its graphics context apart, and the
	// unload then releases the renderer with the thread still parked. Opening
	// content again releases the gate, and the thread wakes into a run that is
	// not its own with a renderer that no longer exists.
	//
	// g_renderer is only ever null between one run's teardown and the next
	// one's renderer being built, and no GPU thread is meant to be alive in
	// that window, so this cannot end a run that is still going.
	//
	// The one exception is a context that has gone and is coming back - a
	// fullscreen toggle - where the renderer is deliberately destroyed with the
	// title still running. There the thread has to wait rather than leave, so
	// the rebuild flag says which of the two nulls this is.
	if (!g_renderer && !sRendererRebuildPending.load(std::memory_order_acquire))
		return true;
#endif
	return !sLatteThreadRunning;
}


void LatteThread_Exit()
{
#ifdef ENABLE_LIBRETRO
	LatteThread_SetPhase("exiting");
#endif
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit begin renderer={}", g_renderer ? 1 : 0);
	// The same teardown a lost context gets, and the only one there is. On a
	// close the context took its contents back at the pause gate already and
	// this finds nothing left to give; on a reset the context never went away
	// and this is where it all happens.
	Latte_TeardownGpuState("the title is stopping");
	if (LatteThread_libretro_debug_enabled())
		cemuLog_log(LogType::Force, "[LatteThread] LatteThread_Exit after the GPU teardown");
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
