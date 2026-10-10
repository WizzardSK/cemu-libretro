// Cemu libretro core - main implementation
// Routes video/audio/input through libretro frontend callbacks

#include <algorithm>
#include <thread>
#include <chrono>
#include <deque>
#include <string>
#include <vector>
#include <cstring>
#include <cstdarg>
#include "libretro.h"

#include "config/CemuConfig.h"
#include "Cafe/Account/Account.h"
#include <openssl/crypto.h>
#include <boost/nowide/convert.hpp>
#include "config/ActiveSettings.h"
#include "config/LaunchSettings.h"
#include "config/NetworkSettings.h"

#include "Cafe/CafeSystem.h"
#include "Cafe/IOSU/legacy/iosu_act.h"
#include "Cafe/HW/Espresso/Recompiler/PPCRecompiler.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"
#include "Cafe/OS/common/OSCommon.h"
#include "Cafe/OS/RPL/rpl_structs.h"
#include <fstream>
#if defined(__MINGW32__)
#include <pthread.h>
#endif
#if BOOST_OS_MACOS || BOOST_OS_IOS
#include <mach/mach.h>
#include <pthread.h>
#endif
#include "Cemu/ncrypto/ncrypto.h"
#include "Cemu/FileCache/FileCache.h"
#include "Cafe/TitleList/TitleList.h"
#include "Cafe/TitleList/TitleInfo.h"
#include "Cafe/Filesystem/fsc.h"
#include "Cafe/TitleList/SaveList.h"
#include "Cafe/TitleList/TitleConverter.h"
#include "Cafe/TitleList/GameInfo.h"
#include "Cafe/HW/Latte/Core/Latte.h"
#include "Cafe/HW/Latte/Core/LatteTiming.h"
#include "Cafe/HW/Latte/Renderer/Renderer.h"
#ifdef ENABLE_OPENGL
#include "Cafe/HW/Latte/Renderer/OpenGL/OpenGLRenderer.h"
#endif
#ifdef ENABLE_VULKAN
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanRenderer.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanPipelineStableCache.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/RendererShaderVk.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanPipelineCompiler.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanAPI.h"
#include "libretro_vulkan.h"
#endif

#include "audio/IAudioAPI.h"
#include "input/InputManager.h"
#include "input/emulated/VPADController.h"
#include "input/emulated/WiimoteController.h"
#include "input/emulated/ProController.h"
#include "input/emulated/ClassicController.h"
#include "input/api/Libretro/LibretroController.h"

#include "Common/ExceptionHandler/ExceptionHandler.h"
#include "Common/cpu_features.h"
#include "Common/VFSFileStream.h"

#include "util/crypto/aes128.h"
#include "util/helpers/helpers.h"

#include "Cafe/Filesystem/FST/FST.h"
#include "Cafe/Filesystem/FST/KeyCache.h"

#include "Cafe/GraphicPack/GraphicPack2.h"
#include "Cafe/GameProfile/GameProfile.h"

#include "interface/WindowSystem.h"

#include "LibretroAudioAPI.h"

#include "Cafe/HW/MMU/MMU.h"
#include "LibretroVkQueue.h"
#include "libretro_core_options.h"

// GL function needed for framebuffer readback (glBindFramebuffer is in Cemu's glext.h)
#ifdef ENABLE_OPENGL
extern "C" {
extern void glReadPixels(int x, int y, int width, int height, unsigned int format, unsigned int type, void* pixels);
}
#endif
#ifndef GL_BGRA
#define GL_BGRA 0x80E1
#endif
#ifndef GL_READ_FRAMEBUFFER
#define GL_READ_FRAMEBUFFER 0x8CA8
#endif

#include <mutex>
#include <condition_variable>
#include <atomic>

// Shared context creation. Linux takes the frontend's GLX (X11) or EGL (Wayland)
// context; Windows takes its WGL one. Everything platform specific in this file
// sits behind _WIN32 from here on.
#ifdef _WIN32

#include <windows.h>

// RetroArch's context, and the one we create for Cemu's GPU thread to share with.
static HDC s_wgl_frontend_dc = nullptr;
static HGLRC s_wgl_frontend_context = nullptr;
static HGLRC s_wgl_shared_context = nullptr;

#else

// Everything from here to the end of this block talks to GLX or EGL. macOS has
// neither — Cemu's CMake defaults ENABLE_OPENGL to OFF there and builds Metal and
// Vulkan instead — so the GL context glue follows the same switch as the backend
// it exists for. The Vulkan handoff further down is untouched by this.
#ifdef ENABLE_OPENGL

#ifndef __ANDROID__
// X11 Bool conflicts with Cemu enums, so we define it before including GLX
#ifndef Bool
#define Bool int
#define CEMU_DEFINED_BOOL
#endif
#include <X11/Xlib.h>
#include <GL/glx.h>
#ifdef CEMU_DEFINED_BOOL
#undef Bool
#endif
#endif // __ANDROID__
#include <dlfcn.h>

// EGL fallback for Wayland sessions: RetroArch uses EGL there, so glXGetCurrentContext()
// returns NULL and the GLX path can't grab the frontend context.
#include <EGL/egl.h>
#ifndef EGL_CONTEXT_MAJOR_VERSION
#define EGL_CONTEXT_MAJOR_VERSION 0x3098
#endif
#ifndef EGL_CONTEXT_MINOR_VERSION
#define EGL_CONTEXT_MINOR_VERSION 0x30FB
#endif
#ifndef EGL_CONTEXT_OPENGL_PROFILE_MASK
#define EGL_CONTEXT_OPENGL_PROFILE_MASK 0x30FD
#endif
#ifndef EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT
#define EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT 0x00000001
#endif
// egl.h here only exposes EGL types (its prototypes sit behind EGL_EGL_PROTOTYPES,
// and another header pulled egl.h in first with them disabled). Declare the few EGL
// entry points we need ourselves — an identical redeclaration is harmless if visible.
// eglGetCurrentDisplay is already declared by another header in this TU; the rest were
// missing (egl.h's prototypes are gated off here), so declare them ourselves.
extern "C" {
EGLContext eglGetCurrentContext(void);
EGLSurface eglGetCurrentSurface(EGLint readdraw);
EGLBoolean eglBindAPI(EGLenum api);
EGLint     eglGetError(void);
EGLBoolean eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint* value);
EGLBoolean eglChooseConfig(EGLDisplay dpy, const EGLint* attrib_list, EGLConfig* configs, EGLint config_size, EGLint* num_config);
EGLContext eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint* attrib_list);
EGLBoolean eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
__eglMustCastToProperFunctionPointerType eglGetProcAddress(const char* procname);
}

// Shared GL context for Cemu GPU thread. Android has no GLX - it always goes
// through EGL, so the frontend context is captured there instead.
#ifndef __ANDROID__
static Display* s_glx_display = nullptr;
static GLXDrawable s_glx_drawable = 0;
static GLXContext s_glx_shared_context = nullptr;  // created for GPU thread
static GLXContext s_glx_frontend_context = nullptr; // RetroArch's context
#endif

// EGL equivalents (used when the frontend runs on EGL, e.g. Wayland)
static bool s_use_egl = false;
static EGLDisplay s_egl_display = EGL_NO_DISPLAY;
static EGLSurface s_egl_surface = EGL_NO_SURFACE;
static EGLContext s_egl_shared_context = EGL_NO_CONTEXT;  // created for GPU thread
static EGLContext s_egl_frontend_context = EGL_NO_CONTEXT; // RetroArch's context

// NOTE: Cemu's glFunctions.h declares `eglGetCurrentDisplay` as a global function
// POINTER (loaded lazily via dlsym in LoadOpenGLImports). At context_reset time that
// pointer is still null, so calling the name here would crash. Resolve the real libEGL
// symbol ourselves instead.
static EGLDisplay egl_current_display()
{
	typedef EGLDisplay (*PFN_egl_gcd)(void);
	static PFN_egl_gcd fn = nullptr;
	if (!fn)
	{
		void* libegl = dlopen("libEGL.so.1", RTLD_NOW | RTLD_GLOBAL);
		if (!libegl) libegl = dlopen("libEGL.so", RTLD_NOW | RTLD_GLOBAL);
		if (libegl) fn = (PFN_egl_gcd)dlsym(libegl, "eglGetCurrentDisplay");
	}
	return fn ? fn() : EGL_NO_DISPLAY;
}

#endif // ENABLE_OPENGL
#endif // _WIN32

// Set once the GPU thread has our shared context current.
static bool s_gpu_context_made_current = false;

// GL entry points are resolved through whichever loader the platform provides.
#ifdef ENABLE_OPENGL
static void* cemu_gl_get_proc(const char* name)
{
#ifdef _WIN32
	void* p = (void*)wglGetProcAddress(name);
	if (!p)
	{
		// wglGetProcAddress only knows extensions; core 1.1 entry points live in
		// the DLL itself.
		static HMODULE s_opengl32 = LoadLibraryA("opengl32.dll");
		if (s_opengl32)
			p = (void*)GetProcAddress(s_opengl32, name);
	}
	return p;
#elif defined(__ANDROID__)
	// No GLX; eglGetProcAddress covers both core and extension entry points here.
	return (void*)eglGetProcAddress(name);
#else
	return (void*)glXGetProcAddress((const GLubyte*)name);
#endif
}
#endif // ENABLE_OPENGL

// ============================================================================
// CafeSystem implementation for libretro
// ============================================================================

static std::atomic<bool> s_ppc_process_exited{false};

class LibretroSystemImplementation : public CafeSystem::SystemImplementation
{
public:
	void CafeRecreateCanvas() override
	{
		// In libretro, the canvas is managed by the frontend - nothing to do
	}

	void CafePPCProcessExit() override
	{
		// Called on the emulated PPC thread - only record it here and let
		// retro_run ask the frontend to unload us, the same reason upstream's
		// wx frontend queues an event instead of acting directly.
		s_ppc_process_exited.store(true, std::memory_order_release);
	}
};

static LibretroSystemImplementation s_systemImpl;

// ============================================================================
// Globals
// ============================================================================

#ifndef RETRO_ENVIRONMENT_GET_AUDIO_SAMPLE_BATCH_MULTI
// RetroArch's multi-channel audio (master since 10.9.2026)
#define RETRO_ENVIRONMENT_GET_AUDIO_SAMPLE_BATCH_MULTI (94 | RETRO_ENVIRONMENT_EXPERIMENTAL)
typedef size_t (RETRO_CALLCONV *retro_audio_sample_batch_multi_int16_t)(
	const int16_t* data, size_t frames, unsigned channels, unsigned layout);
typedef size_t (RETRO_CALLCONV *retro_audio_sample_batch_multi_float_t)(
	const float* data, size_t frames, unsigned channels, unsigned layout);
struct retro_audio_sample_multi_callback
{
	retro_audio_sample_batch_multi_int16_t batch_int16;
	retro_audio_sample_batch_multi_float_t batch_float;
};
#endif
static retro_environment_t environ_cb = nullptr;

// Defined further down, beside the cheat entry points they exist for.
static void libretro_publish_memory_maps();
static void libretro_clear_memory_maps();
static retro_video_refresh_t video_cb = nullptr;
static retro_audio_sample_batch_t audio_batch_cb = nullptr;
static retro_input_poll_t input_poll_cb = nullptr;
static retro_input_state_t input_state_cb = nullptr;
static retro_log_printf_t log_cb = nullptr;

// Every line this core sends the frontend used to be written the same way: a
// guard on the pointer, then the call, then the same "Cemu: " prefix inside the
// format string. That was 77 guards around 86 calls, so it is one function now.
// The format is checked at every call site as before.
#ifdef __GNUC__
__attribute__((format(printf, 2, 3)))
#endif
static void libretro_log(enum retro_log_level level, const char* fmt, ...)
{
	if (!log_cb)
		return;

	char text[1024];
	va_list args;
	va_start(args, fmt);
	vsnprintf(text, sizeof text, fmt, args);
	va_end(args);

	log_cb(level, "Cemu: %s", text);
}

// Cemu's log, handed to the frontend instead of to a file. Installed only while
// log.txt is switched off: with both on, every line would be written twice, and
// with both off - the frontend's own log file is a setting too - a run touches
// the disk for logging not at all.
class LibretroLogSink : public LoggingCallbacks
{
public:
	void Log(std::string_view filter, std::string_view message) override
	{
		if (!log_cb)
			return;
		if (filter.empty())
			log_cb(RETRO_LOG_INFO, "CEMU %.*s\n", (int)message.size(), message.data());
		else
			log_cb(RETRO_LOG_INFO, "CEMU [%.*s] %.*s\n", (int)filter.size(), filter.data(),
				(int)message.size(), message.data());
	}

	void Log(std::string_view filter, std::wstring_view message) override
	{
		// Every caller of the wide overload formats ASCII; anything else is
		// written as a question mark rather than as broken bytes.
		std::string narrow;
		narrow.reserve(message.size());
		for (wchar_t c : message)
			narrow.push_back((c > 0 && c < 128) ? (char)c : '?');
		Log(filter, narrow);
	}
};
static LibretroLogSink s_log_sink;
static bool s_log_sink_installed = false;

// Both sides of the switch in one place, so the installed state and the file
// cannot disagree.
static void libretro_set_log_to_file(bool toFile)
{
	cemuLog_setFileLoggingEnabled(toFile);
	if (toFile == !s_log_sink_installed)
		return;
	if (toFile)
	{
		cemuLog_clearCallbacks();
		s_log_sink_installed = false;
	}
	else
	{
		cemuLog_setCallbacks(&s_log_sink);
		s_log_sink_installed = true;
	}
}

// ============================================================================
// Ending the process on purpose
// ============================================================================

/*	One caller, and the reasoning here rather than at it.

	Everything else that ends a run now waits by joining, the way the emulator
	does: the scheduler's threads, the GPU thread, each IOSU service. A thread
	that is told to stop is expected to stop, and a deadline on that only
	invents a failure mode - so the three that used to end the process here are
	gone, and so are their timeouts.

	The deprecated IOSU ioctl workers are the exception, and it is upstream that
	makes them one: they are detached and no handle is kept, which is a decision
	to leak them rather than let them hold a shutdown up. A detached thread
	cannot be joined, so there is no unbounded wait to convert this into - only
	a flag, and a flag that never clears is a frontend that never comes back.

	What makes the timeout the better answer here rather than leaking them: they
	are still answering ioctls for a title that has ended, one of which is the
	save-data path, and the next run reads the same files. An orphan writing a
	save while a new title reads it is worse than a process that stops and says
	which worker would not leave.

	What happens after abort(): SIGABRT lands in the handler this core installs
	for the whole process (ExceptionHandler_Init, by way of CemuCommonInit),
	which writes log.txt and then _Exit(1) unless crash dumps are enabled - so
	there is a log ending in the line below, and usually no core dump.
*/
[[noreturn]] static void libretro_fail_fast(const char* tag, const std::string& what)
{
	// The log first and flushed, because the whole value of stopping here is
	// the line that says why.
	cemuLog_log(LogType::Force, "[{}] {}", tag, what);
	cemuLog_waitForFlush();
	std::abort();
}

// Runs on: the frontend's thread, in context_destroy. Says what went wrong and
// lets the close carry on. This used to end the process, on the grounds that a
// context going away with the core's objects still on it leaves them for the
// next run - but the next run does not inherit them any more: the renderer is
// deleted on the way out either by the GPU thread's own exit or by the unload
// below, and the frontend is told the context is gone, so everything that would
// have drawn on it stops. Ending RetroArch over a thread that answered late is
// the worse of the two.
// Runs on: the frontend's thread, in context_destroy. The GPU thread is not at
// the gate because it is leaving instead - a close sets the stop signal, and a
// thread that reads it takes its own way out, which ends in the same teardown
// this was waiting for. So wait for that one: everything it frees belongs to
// the device the frontend destroys the moment this callback returns, and the
// price of returning early is a renderer destroyed afterwards - vkDestroy on a
// dead device, which on Mali is an abort inside the driver, with the close
// hanging half a minute first while the same driver's threads are asked to
// finish work for a device that has gone.
//
// The budget is the teardown's own: ten seconds, the same as for a parked
// thread, because it is the same work.
static bool libretro_wait_for_gpu_handover(const char* what)
{
	if (!Latte_IsGpuHandingContextBack())
		return false;
	cemuLog_log(LogType::Force, "[LatteThread] {}, and it is handing the graphics context back on its way out - waiting for that", what);
	for (int i = 0; i < 10000 && Latte_IsGpuHandingContextBack(); i++)
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	if (Latte_IsGpuHandingContextBack())
		cemuLog_log(LogType::Force, "[LatteThread] ten seconds in and the handover is still going; the context goes anyway");
	else
		cemuLog_log(LogType::Force, "[LatteThread] the handover finished before the context went");
	return true;
}

static void libretro_gpu_thread_late(const char* what)
{
	cemuLog_log(LogType::Force, "[LatteThread] {} (phase: {}). Carrying on without the handover; the renderer "
		"goes with the unload instead.", what, Latte_GetThreadPhase());
	libretro_log(RETRO_LOG_WARN, "%s\n", what);
}

static std::atomic_bool s_game_loaded{false};   // read by the GPU thread at the frame gate
static bool s_initialized = false;
static bool s_emu_initialized = false;
// CemuCommonInit() has run at least once, so the IOSU services exist and can
// be stopped. Never cleared: they are started once per process, not per title.
static bool s_cafe_system_initialized = false;
// Set when libretro_stop_system_services has taken the deprecated IOSU workers
// down. It is not the end of the road it looks like: the frontend deinitialises
// this core when content is closed and initialises it again for the next one,
// so the next load has to put them back.
static bool s_system_services_stopped = false;

// Converting a title to .wua instead of running it. A conversion is minutes of
// work over the whole title, so it runs on its own thread and retro_run reports
// where it is - the frontend keeps its menu, and the core never boots.
// The frame handed to the frontend while converting: black, at the geometry the
// core declared, and only there because a frontend expects a core that returns
// from retro_run to have drawn something.
static std::atomic_bool s_convert_mode{false};
static std::atomic_bool s_convert_cancel{false};
static std::atomic_bool s_convert_finished{false};
static std::thread s_convert_thread;
static std::mutex s_convert_mutex;
static std::string s_convert_status;
// -1 means "no figure to show": the frontend draws an indeterminate bar for it,
// which is what counting files and the final message want.
static int s_convert_progress = -1;
static std::unique_ptr<GameInfo2> s_convert_game_info;

// Where a conversion is allowed to write. The frontend decides that - on
// Android it is a set of SAF trees rather than anything open() would take - so
// the destinations are collected from it once the content is known, and only
// those that pass every precondition are offered. Empty means the conversion
// options have nothing to act on and are hidden; the reason is what their help
// text says instead.
struct LibretroWuaDestination
{
	std::string path;
	std::string label;
	// A .wua for this title is already sitting there. Not a reason to drop the
	// destination - the label says so and the conversion overwrites it if that
	// is what the user picks.
	bool hasExisting{false};
};
static std::vector<LibretroWuaDestination> s_wua_destinations;
static std::string s_wua_unavailable_reason;
// Set as soon as a Vulkan/OpenGL device or renderer has been created, i.e. as soon as
// normal C++ static-destructor teardown of this DLL becomes unsafe (see retro_unload_game /
// retro_deinit). This is intentionally separate from s_emu_initialized/s_game_loaded, which
// are only set once the whole title has finished loading - a load failure that happens after
// the GPU context is created but before that point would otherwise leave retro_unload_game
// with nothing to tear down, and the renderer behind.
static std::atomic_bool s_gpu_context_created{false};
static std::string s_game_path;

// Frontend GL objects for blitting (reset on context destroy/resize). Plain
// unsigned int rather than GLuint — identical type, but it keeps the context
// bookkeeping compiling in a build with no GL headers.
static unsigned int s_frontend_read_fbo = 0;
static unsigned int s_frontend_read_rbo_attached = 0;
static unsigned int s_frontend_upload_tex = 0;

// Frame gate.
//
// RetroArch pauses a core by not calling retro_run, but this emulator runs on
// its own threads, so that alone stops nothing: the title keeps running and the
// audio keeps playing while the frontend sits in its menu (#12). The gate turns
// "the frontend stopped calling us" into "the emulator stopped": retro_run hands
// out one token per call and the GPU thread takes one at each swap, so the
// emulator advances exactly as often as it is asked to - which is also what lets
// fast-forward and frame stepping mean anything.
//
// No timeout on the wait: a gate that lets a frame through on its own would put
// the core back in charge of its own speed, which is the thing being fixed. What
// keeps that from hanging a shutdown is libretro_frame_gate_release, called
// before anything waits for the GPU thread to stop.
static std::mutex s_gate_mutex;
static std::condition_variable s_gate_cv;
static unsigned s_gate_tokens = 1;    // one, so the first frame does not wait
static std::atomic_bool s_gate_released{false};  // shutting down: nothing waits any more

// True between "the frontend asked for a frame" and "the frame was handed
// over": the window in which the emulator is allowed to advance. The GPU
// thread's own token is what paces the frame; this is what the emulated CPU
// cores look at, since they must not consume tokens - they run many times per
// frame - but they must not run outside the window either.
static std::atomic_bool s_frame_permit{false};

// When retro_run last handed out a frame. The window above closes at every
// swap, and holding the emulated cores to it starves everything the title
// paces by the wall clock rather than by frames: AX asks for a 3 ms audio
// frame, the title's AX thread on another core renders it, and only then is
// the next one asked for. With the cores parked from the swap to the next
// retro_run, that round trip fits once per video frame - 60 audio frames a
// second where 333 are wanted, audio at under a fifth of real time. So the
// cores keep running between frames for as long as the frontend is still
// calling, and stand still only once it has stopped (#12): pausing is
// retro_run not coming for well over a frame. The frames themselves stay paced
// by the GPU thread's token, which this does not touch.
// Nanoseconds on steady_clock, so the window can be read without the mutex.
static std::atomic<int64_t> s_last_grant_ns{0};
static constexpr auto kFrontendStoppedAfter = std::chrono::milliseconds(100);

// Nonzero while something outside the frame loop needs the emulator to keep
// moving: the frame gate parks threads, and a handshake that waits for one of
// those threads to arrive somewhere would otherwise wait forever (see
// libretro_context_destroy). A counter, not a flag, so overlapping holders
// cannot open the gate for each other.
static std::atomic<unsigned> s_gate_hold_open{0};

// GPU thread, at a swap.
//
// Not before a title is running: loading one blocks inside retro_load_game
// waiting for the GPU thread, and the GPU thread swaps while it gets there -
// so a gate that holds it then is holding it against a retro_run that cannot
// be called yet, and the load never finishes. Boot swaps go straight through.
namespace snd_core
{
	// ax_out.cpp: one retro_run's worth of audio for AX to make.
	void AXOut_LibretroGrantSamples(int32_t samples);
}

// Where a frame's time goes (cemu_log_audio): the GPU thread's wait for a
// token at the swap, and retro_run's own phases, reported once a second.
static std::atomic<uint64_t> s_prof_gate_wait_us{0};
static std::atomic<uint64_t> s_prof_frames_ready{0};

void libretro_frame_gate_wait()
{
	if (!s_game_loaded)
		return;
	const auto waitStart = std::chrono::steady_clock::now();
	struct AddWait
	{
		std::chrono::steady_clock::time_point start;
		~AddWait()
		{
			s_prof_gate_wait_us.fetch_add(std::chrono::duration_cast<std::chrono::microseconds>(
				std::chrono::steady_clock::now() - start).count(), std::memory_order_relaxed);
		}
	} addWait{waitStart};
	std::unique_lock lock(s_gate_mutex);
	// The frame is delivered, so the window closes here rather than when the
	// next one opens. The emulated cores keep going until the frontend has
	// stopped asking altogether (s_last_grant_ns); this thread waits for the next
	// token.
	s_frame_permit = false;
	s_gate_cv.wait(lock, [] { return s_gate_tokens > 0 || s_gate_released || s_gate_hold_open; });
	if (s_gate_tokens > 0)
		s_gate_tokens--;
}

// Runs on: the emulated CPU threads and the GPU thread - everything that is
// not the frame-pacing GPU swap itself: the emulated cores from the scheduler's
// idle loop, and the GPU command processor at a command boundary. Neither may consume tokens - they come round many times
// per frame - but neither may keep running once the frontend has stopped
// calling retro_run. The command
// processor has to be in here too: parked cores submit nothing, so a command
// loop left running would spin on an empty ring instead of standing still.
void libretro_frame_window_wait()
{
	if (!s_game_loaded)
		return;
	// The state is written under s_gate_mutex but read here without it. This
	// runs on every pass of the scheduler's idle loop - millions a second on
	// the main core now that the cores are not parked between frames - and the
	// GPU command processor takes it at every command. With the mutex on each
	// of those, the idle loop held it nearly all the time and the GPU thread
	// queued behind it at every command: 60 fps fell to 15. The lock is for
	// waiting only.
	auto open = [] {
		const int64_t now = std::chrono::steady_clock::now().time_since_epoch().count();
		return s_frame_permit.load(std::memory_order_acquire) ||
			s_gate_released.load(std::memory_order_acquire) ||
			s_gate_hold_open.load(std::memory_order_acquire) != 0 ||
			now - s_last_grant_ns.load(std::memory_order_acquire) <
				std::chrono::duration_cast<std::chrono::steady_clock::duration>(kFrontendStoppedAfter).count();
	};
	if (open())
		return;
	std::unique_lock lock(s_gate_mutex);
	// Time only ever turns this from true to false; the way back is a grant,
	// which notifies under the mutex, so a predicate wait cannot miss it.
	s_gate_cv.wait(lock, open);
}

// Lets the emulator run outside a frame for as long as the hold is held. For
// handshakes that need a parked thread to reach a particular point in its own
// loop - which it cannot do while the gate is holding it there.
//
// Runs on: the frontend's thread, from the libretro callbacks.
void libretro_frame_gate_hold_open(bool hold)
{
	std::lock_guard lock(s_gate_mutex);
	if (hold)
		s_gate_hold_open++;
	else if (s_gate_hold_open > 0)
		s_gate_hold_open--;
	s_gate_cv.notify_all();
}

// retro_run. Capped at one: a frontend that ran ahead must not build up credit
// it can spend later, or the emulator would sprint after every menu visit.
static void libretro_frame_gate_grant()
{
	std::lock_guard lock(s_gate_mutex);
	s_gate_tokens = 1;
	s_frame_permit = true;
	s_last_grant_ns.store(std::chrono::steady_clock::now().time_since_epoch().count(), std::memory_order_release);
	s_gate_cv.notify_all();
}

// Shutdown, and any other point where waiting for a token would be waiting for
// a frontend that is not coming back.
void libretro_frame_gate_release()
{
	std::lock_guard lock(s_gate_mutex);
	s_gate_released = true;
	s_frame_permit = true;
	s_gate_cv.notify_all();
}

// Frame synchronization
static std::mutex s_frame_mutex;
static std::condition_variable s_frame_cv;
std::atomic_bool s_frame_ready{false};

// The GPU thread telling retro_run that the frame is done. Under the mutex and
// with a notify, both of which matter: retro_run waits on s_frame_cv with a
// 33 ms timeout, so a flag set without waking it is a frame that arrives when
// the timeout expires rather than when it is ready - 30 fps out of a 60 fps
// title. The Vulkan renderer used to store the flag on its own and did exactly
// that, while the OpenGL path signalled properly, which is why one was half the
// speed of the other.
// Frames the title finished, for the Show Game FPS option. Not
// s_prof_frames_ready, which the profiling log resets on its own schedule.
static std::atomic<uint32_t> s_game_frames{0};
static bool s_show_game_fps = false;

// The rate retro_run is reported to come at: each retro_run lets the game
// render one frame and carries one frame's worth of audio.
static double s_output_fps = 60.0;

static const char* libretro_get_option_value(const char* key);

// 60, as on the Wii U, unless an active graphic pack sets another vsync rate
// (an FPS++ preset at 120, say), which the game then renders at. This used to
// be the Frame Rate option's Auto, beside fixed rates that only had to match
// such a pack by hand; NNshi and sco agreed the pack's rate is the only one
// that makes sense, so it is the behaviour now and the option is gone.
static double libretro_wanted_fps()
{
	sint32 frequency = 0;
	return LatteTiming_getCustomVsyncFrequency(frequency) && frequency > 0 ? (double)frequency : 60.0;
}

void libretro_signal_frame_ready()
{
	s_prof_frames_ready.fetch_add(1, std::memory_order_relaxed);
	s_game_frames.fetch_add(1, std::memory_order_relaxed);
	{
		std::lock_guard lock(s_frame_mutex);
		s_frame_ready.store(true, std::memory_order_release);
	}
	s_frame_cv.notify_one();
}
static std::atomic_bool s_shutting_down{false};
// Set by the first retro_run that runs the startup handshake. A launch that
// fails is not tried again - see the handshake for why.
static bool s_launch_attempted = false;
// Set by retro_reset, read by retro_run: both halves of a reset - the stop and
// the start - belong to retro_run's thread, whatever thread asked for it.
static std::atomic_bool s_reset_requested{false};
// Whether audio may still be handed to the frontend. Cleared as unload starts
// and set again when a title is loaded.
static std::atomic_bool s_audio_submission_allowed{true};

// Framebuffer for software readback
static constexpr uint32_t SCREEN_WIDTH = 1280;
static constexpr uint32_t SCREEN_HEIGHT = 720;
std::vector<uint32_t> s_libretro_framebuffer(SCREEN_WIDTH * SCREEN_HEIGHT);
static auto& s_framebuffer = s_libretro_framebuffer; // alias for existing OpenGL code
// The size of the frame in s_framebuffer. retro_run lets the GPU thread go on
// with the next frame before it uploads this one, so the readback and the
// upload overlap: both hold this lock. Without it the readback resizing the
// buffer for a new size freed it under the upload (heap corruption on the
// first frame a resolution pack sized differently), and at a fixed size a
// frame could be read half overwritten by the next.
static std::mutex s_gl_frame_mutex;
static uint32_t s_gl_frame_width = SCREEN_WIDTH, s_gl_frame_height = SCREEN_HEIGHT;
// The size of the frame retro_run uploaded last, which is what the frontend is
// told: the GPU thread may already have read the next one at another size.
static uint32_t s_gl_shown_width = SCREEN_WIDTH, s_gl_shown_height = SCREEN_HEIGHT;
static bool s_use_hw_render = false;
static bool s_hw_render_initialized = false;

enum class SelectedGraphicsAPI { OpenGL, Vulkan };
static SelectedGraphicsAPI s_graphics_api = SelectedGraphicsAPI::OpenGL;

// The size of the picture handed to the frontend. With Vulkan it follows the
// internal resolution option, so a title rendered at 1440p or 4K reaches the
// screen at that size rather than scaled down into 1280x720 (NNshi); it is
// taken when the renderer's presentation image is made, and a change of the
// option takes effect for the output at the next content load, as the GPU
// thread draws into that image the whole time. The OpenGL path follows the TV
// picture instead (libretro_gl_tv_picture_size).
static uint32_t s_out_width = SCREEN_WIDTH, s_out_height = SCREEN_HEIGHT;
static bool s_out_size_taken = false;
static uint32_t s_wanted_out_width = SCREEN_WIDTH, s_wanted_out_height = SCREEN_HEIGHT;

// Before the presentation image exists - retro_get_system_av_info comes first -
// the size is the one the option asks for.
static uint32_t libretro_out_width();
static uint32_t libretro_out_height();

// Once the presentation image exists, its size is the output size: the
// renderer resizes it to what a resolution graphic pack renders the TV picture
// at (VulkanRenderer::UpdatePresentationImageSize).
static uint32_t libretro_out_width()
{
	if (s_graphics_api != SelectedGraphicsAPI::Vulkan) return s_gl_shown_width;
#ifdef ENABLE_VULKAN
	if (auto* vk = g_renderer && g_renderer->GetType() == RendererAPI::Vulkan ? VulkanRenderer::GetInstance() : nullptr; vk && vk->m_presentWidth)
		return vk->m_presentWidth;
#endif
	return s_out_size_taken ? s_out_width : s_wanted_out_width;
}

static uint32_t libretro_out_height()
{
	if (s_graphics_api != SelectedGraphicsAPI::Vulkan) return s_gl_shown_height;
#ifdef ENABLE_VULKAN
	if (auto* vk = g_renderer && g_renderer->GetType() == RendererAPI::Vulkan ? VulkanRenderer::GetInstance() : nullptr; vk && vk->m_presentHeight)
		return vk->m_presentHeight;
#endif
	return s_out_size_taken ? s_out_height : s_wanted_out_height;
}

// Tells the frontend when the output size changes, e.g. when a resolution
// pack's size takes over from the core option's.
static uint32_t s_reported_out_width = 0, s_reported_out_height = 0; // what the frontend was last told
// The largest frame the frontend was told to expect. 4x 720p covers every
// Internal Resolution step of a 720p game, but 3x of a 1080p game (5760x3240)
// or a big resolution pack goes past it, and SET_GEOMETRY must not exceed the
// max: then the max grows through SET_SYSTEM_AV_INFO.
static uint32_t s_max_out_width = SCREEN_WIDTH * 4, s_max_out_height = SCREEN_HEIGHT * 4;

static void libretro_report_out_size()
{
	const uint32_t width = libretro_out_width(), height = libretro_out_height();
	if (width == s_reported_out_width && height == s_reported_out_height)
		return;
	if (width > s_max_out_width || height > s_max_out_height)
	{
		s_max_out_width = std::max<uint32_t>(s_max_out_width, width);
		s_max_out_height = std::max<uint32_t>(s_max_out_height, height);
		retro_system_av_info av{};
		retro_get_system_av_info(&av);
		environ_cb(RETRO_ENVIRONMENT_SET_SYSTEM_AV_INFO, &av);
		libretro_log(RETRO_LOG_INFO, "output is now %ux%u (max raised to %ux%u)\n", width, height, s_max_out_width, s_max_out_height);
		return;
	}
	s_reported_out_width = width;
	s_reported_out_height = height;
	retro_game_geometry geometry{};
	geometry.base_width = width;
	geometry.base_height = height;
	geometry.max_width = s_max_out_width;
	geometry.max_height = s_max_out_height;
	geometry.aspect_ratio = 16.0f / 9.0f;
	environ_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &geometry);
	libretro_log(RETRO_LOG_INFO, "output is now %ux%u\n", width, height);
}

#ifdef ENABLE_OPENGL
// OpenGL draws the finished picture into a backbuffer the size of the window,
// which was fixed at 1280x720: a resolution pack rendered the game at 1440p and
// the result was then scaled down into 720p before it reached the frontend
// (NNshi, Fast Racing Neo). Called by OpenGLRenderer::DrawBackbufferQuad with
// the size the TV picture is rendered at; while a resolution pack or the
// internal resolution option resizes it, the window - and with it the
// backbuffer and the frame handed over - takes that size, as Vulkan's
// presentation image does (VulkanRenderer::UpdatePresentationImageSize).
void libretro_gl_tv_picture_size(int width, int height)
{
	extern float g_libretroRenderScale;
	extern bool LatteTexture_graphicPackSetsResolution();
	int w = SCREEN_WIDTH, h = SCREEN_HEIGHT;
	if ((LatteTexture_graphicPackSetsResolution() || g_libretroRenderScale != 1.0f) &&
		width >= 16 && height >= 16 && width <= 8192 && height <= 8192)
	{
		w = width;
		h = height;
	}
	auto& windowInfo = WindowSystem::GetWindowInfo();
	if (windowInfo.phys_width == w && windowInfo.phys_height == h)
		return;
	cemuLog_log(LogType::Force, "[libretro] the TV picture is rendered at {}x{}; handing it over at that size", w, h);
	windowInfo.width = w;
	windowInfo.height = h;
	windowInfo.phys_width = w;
	windowInfo.phys_height = h;
}
#endif

// DRC layout state is shared with VulkanRenderer via LibretroDRC.h.
#include "LibretroDRC.h"
#include "LibretroGraphicPacks.h"
LibretroScreenLayout g_libretroScreenLayout = LibretroScreenLayout::Tv;
bool g_libretroDRCPositionSwapped = false;

// Screen layouts, in the shape melonDS DS uses: a handful of configured
// layouts and one button that steps through them. The count and the layout in
// each slot come from the core options; the slot the core is on does not - it
// always starts at the first one.
static constexpr unsigned kMaxScreenLayouts = 5;
static LibretroScreenLayout s_screen_layouts[kMaxScreenLayouts] = {
	LibretroScreenLayout::Tv,
	LibretroScreenLayout::GamePad,
	LibretroScreenLayout::SideBySide,
	LibretroScreenLayout::TopBottom,
	LibretroScreenLayout::PictureInPicture,
};
static unsigned s_screen_layout_count = 2;
static unsigned s_screen_layout_index = 0;

// What steps to the next layout. Nothing by default: a Wii U GamePad needs
// every button a RetroPad has, so which one - if any - to give up is the
// user's decision, per game.
enum class LibretroLayoutButton
{
	None,
	// Select together with a stick click. A title can use either on its own, so
	// neither is offered alone: a shortcut that fires on one button is a
	// shortcut that fires while the title is being played.
	SelectL3,
	SelectR3,
	// Every shoulder, trigger and stick click at once. Nothing asks for six of
	// those together, which is the point: it can be the default without taking
	// anything away from a title, and an overlay can carry it as one button.
	AllShoulders,
	// Tab on the keyboard, which is the same list because it is the same
	// setting: one shortcut, on a pad or on a key, never both. A frontend
	// overlay can send it without spending a RetroPad button on it, which is
	// how the Nintendo DS cores let an overlay switch layouts.
	KeyTab,
};
static LibretroLayoutButton s_next_layout_button = LibretroLayoutButton::None;
static bool s_next_layout_button_held = false;
// Set for every frame a layout combination is held, not only the frame the
// layout changes in. Every button in those combinations means something to a
// title as well - L3, R3, the shoulders, Select - so without this a layout
// change also fires whatever the game has on them. Suppressing only the edge
// frame was not enough: a press is held across many frames and the title saw
// all of them but the first. The combinations are deliberately unusual, so a
// pad holding one meant the layout change and nothing else; dropping the
// frame's input wholesale is enough and needs no per-button bookkeeping.
static bool s_layout_combo_held_this_frame = false;

static retro_hw_render_callback s_hw_render{};

#ifdef ENABLE_VULKAN
// Vulkan HW render interface
static const struct retro_hw_render_interface_vulkan* s_vk_interface = nullptr;
static struct retro_vulkan_image s_vk_present_image{};
static retro_vulkan_context s_vk_context{};

static const VkApplicationInfo* libretro_vk_get_application_info()
{
	static VkApplicationInfo app_info{};
	app_info.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
	app_info.pApplicationName = "Cemu";
	app_info.applicationVersion = VK_MAKE_VERSION(2, 6, 0);
	app_info.pEngineName = "Cemu";
	app_info.engineVersion = VK_MAKE_VERSION(2, 6, 0);
	app_info.apiVersion = VK_API_VERSION_1_1;
	return &app_info;
}

// The device extensions, and the extension features, the core enabled on the
// shared device: VulkanRenderer trusts these rather than the GPU's support.
std::vector<std::string> g_libretroVkDeviceExtensions;
bool g_libretroVkCustomBorderColorWithoutFormat = false;
bool g_libretroVkHasPipelineCreationCacheControl = false;
bool g_libretroVkHasCustomBorderColors = false;
bool g_libretroVkHasPipelineRobustness = false;
bool g_libretroVkHasDepthClipEnable = false;

static bool libretro_vk_create_device(
	struct retro_vulkan_context* context,
	VkInstance instance,
	VkPhysicalDevice gpu,
	VkSurfaceKHR surface,
	PFN_vkGetInstanceProcAddr get_instance_proc_addr,
	const char** required_device_extensions,
	unsigned num_required_device_extensions,
	const char** required_device_layers,
	unsigned num_required_device_layers,
	const VkPhysicalDeviceFeatures* required_features)
{
	libretro_log(RETRO_LOG_INFO, "Vulkan create_device called (gpu=%p, surface=%p)\n", gpu, surface);

	// Load instance functions
	if (!InitializeGlobalVulkan())
		return false;
	if (!InitializeInstanceVulkan(instance))
		return false;

	// Find suitable physical device if not provided
	if (gpu == VK_NULL_HANDLE)
	{
		uint32_t count = 0;
		vkEnumeratePhysicalDevices(instance, &count, nullptr);
		std::vector<VkPhysicalDevice> devices(count);
		vkEnumeratePhysicalDevices(instance, &count, devices.data());
		for (auto& d : devices)
		{
			VkPhysicalDeviceProperties props;
			vkGetPhysicalDeviceProperties(d, &props);
			if (props.apiVersion >= VK_API_VERSION_1_1)
			{
				gpu = d;
				break;
			}
		}
		if (gpu == VK_NULL_HANDLE && !devices.empty())
			gpu = devices[0];
	}

	// Find graphics queue family
	uint32_t queueFamilyCount = 0;
	vkGetPhysicalDeviceQueueFamilyProperties(gpu, &queueFamilyCount, nullptr);
	std::vector<VkQueueFamilyProperties> queueFamilies(queueFamilyCount);
	vkGetPhysicalDeviceQueueFamilyProperties(gpu, &queueFamilyCount, queueFamilies.data());

	uint32_t graphicsFamily = 0;
	for (uint32_t i = 0; i < queueFamilyCount; i++)
	{
		if (queueFamilies[i].queueFlags & VK_QUEUE_GRAPHICS_BIT)
		{
			graphicsFamily = i;
			break;
		}
	}

	// Build extension list: RetroArch required + Cemu needs
	std::vector<const char*> extensions;
	for (unsigned i = 0; i < num_required_device_extensions; i++)
		extensions.push_back(required_device_extensions[i]);

	// Add Cemu-specific extensions if available
	uint32_t extCount = 0;
	vkEnumerateDeviceExtensionProperties(gpu, nullptr, &extCount, nullptr);
	std::vector<VkExtensionProperties> availableExts(extCount);
	vkEnumerateDeviceExtensionProperties(gpu, nullptr, &extCount, availableExts.data());

	auto hasExt = [&](const char* name) {
		for (auto& e : availableExts)
			if (strcmp(e.extensionName, name) == 0) return true;
		return false;
	};

	// The extensions standalone Cemu enables (VulkanRenderer::CreateDeviceCreateInfo)
	// wherever the renderer would use them. The renderer decides from what the
	// GPU supports, not from what this device has; before, half of them were
	// left out, and the renderer used depth clip, pipeline creation feedback and
	// cubic filtering on a device without them - undefined, which Turnip lets
	// pass and Qualcomm's own driver answers by failing pipeline creation
	// (#29, Adreno 840: "Failed to create graphics pipeline. Error -13").
	// Transform feedback is not among them: upstream dropped that path
	// (#1919), streamout goes through a storage buffer the vertex shader
	// writes, and nothing uses the extension any more - while Qualcomm's
	// driver still failed exactly the pipelines with such a vertex shader (#29).
	const char* cemuExtensions[] = {
		VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME,
		VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME,
		VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME,
		VK_EXT_PIPELINE_ROBUSTNESS_EXTENSION_NAME,
		VK_KHR_SHADER_FLOAT_CONTROLS_EXTENSION_NAME,
		VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME,
		VK_EXT_PIPELINE_CREATION_FEEDBACK_EXTENSION_NAME,
		VK_EXT_FILTER_CUBIC_EXTENSION_NAME,
		VK_KHR_DRIVER_PROPERTIES_EXTENSION_NAME,
	};
	for (auto ext : cemuExtensions)
	{
		const bool listed = std::any_of(extensions.begin(), extensions.end(),
			[&](const char* e) { return strcmp(e, ext) == 0; });
		if (!listed && hasExt(ext))
			extensions.push_back(ext);
	}
	const auto enabledExt = [&](const char* name) {
		return std::any_of(extensions.begin(), extensions.end(),
			[&](const char* e) { return strcmp(e, name) == 0; });
	};

	// Device features. Asking for one the driver does not have is not a
	// warning, it is VK_ERROR_FEATURE_NOT_PRESENT and no device at all - and
	// the frontend then quietly builds its own, which enables none of the
	// extensions asked for above. That is what mobile looked like: every one of
	// these is missing on Adreno and Mali (geometryShader and logicOp in
	// particular), so the negotiation failed on every load and Cemu ran on a
	// device without transform feedback, without custom border colours and
	// without pipeline_creation_cache_control - the last of which is what
	// decides whether pipelines may be compiled asynchronously at all.
	// vkGetPhysicalDeviceFeatures2 is the one this build loads (VulkanAPI.h);
	// its .features member is the same core feature set.
	// It comes back null on a 1.0 instance, and asking for nothing extra is the
	// safe reading of "cannot tell what this GPU has".
	VkPhysicalDeviceFeatures2 supportedFeatures2{};
	supportedFeatures2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;

	// The extension features go into the same query, for the chain below
	VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT pccSupported{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT};
	VkPhysicalDeviceCustomBorderColorFeaturesEXT bcfSupported{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT};
	VkPhysicalDevicePipelineRobustnessFeaturesEXT robustSupported{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT};
	VkPhysicalDeviceDepthClipEnableFeaturesEXT clipSupported{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT};
	{
		void* chain = nullptr;
		const auto query = [&](auto& feature, const char* ext) {
			if (enabledExt(ext))
			{
				feature.pNext = chain;
				chain = &feature;
			}
		};
		query(pccSupported, VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME);
		query(bcfSupported, VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME);
		query(robustSupported, VK_EXT_PIPELINE_ROBUSTNESS_EXTENSION_NAME);
		query(clipSupported, VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME);
		supportedFeatures2.pNext = chain;
	}

	if (vkGetPhysicalDeviceFeatures2)
		vkGetPhysicalDeviceFeatures2(gpu, &supportedFeatures2);
	else
	libretro_log(RETRO_LOG_WARN, "cannot query device features, asking for none beyond the frontend's\n");
	const VkPhysicalDeviceFeatures& supported = supportedFeatures2.features;

	VkPhysicalDeviceFeatures features{};
	if (required_features)
		features = *required_features;

	std::string missingFeatures;
	const auto wantFeature = [&](VkBool32 VkPhysicalDeviceFeatures::*member, const char* name) {
		if (supported.*member)
			features.*member = VK_TRUE;
		else
		{
			if (!missingFeatures.empty())
				missingFeatures += ", ";
			missingFeatures += name;
		}
	};
	wantFeature(&VkPhysicalDeviceFeatures::independentBlend, "independentBlend");
	wantFeature(&VkPhysicalDeviceFeatures::samplerAnisotropy, "samplerAnisotropy");
	wantFeature(&VkPhysicalDeviceFeatures::imageCubeArray, "imageCubeArray");
	wantFeature(&VkPhysicalDeviceFeatures::logicOp, "logicOp");
	wantFeature(&VkPhysicalDeviceFeatures::geometryShader, "geometryShader");
	wantFeature(&VkPhysicalDeviceFeatures::occlusionQueryPrecise, "occlusionQueryPrecise");
	wantFeature(&VkPhysicalDeviceFeatures::depthClamp, "depthClamp");
	wantFeature(&VkPhysicalDeviceFeatures::depthBiasClamp, "depthBiasClamp");
	// Transform feedback (streamout) writes from the vertex stage, which a
	// shader may do only with this enabled
	wantFeature(&VkPhysicalDeviceFeatures::vertexPipelineStoresAndAtomics, "vertexPipelineStoresAndAtomics");
	// As standalone: robust buffer access is the fallback without
	// VK_EXT_pipeline_robustness
	if (!(enabledExt(VK_EXT_PIPELINE_ROBUSTNESS_EXTENSION_NAME) && robustSupported.pipelineRobustness) &&
		supported.robustBufferAccess)
		features.robustBufferAccess = VK_TRUE;
	if (!missingFeatures.empty() && log_cb)
		libretro_log(RETRO_LOG_INFO, "this GPU does not have %s - carrying on without them\n", missingFeatures.c_str());

	float queuePriority = 1.0f;
	VkDeviceQueueCreateInfo queueInfo{};
	queueInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
	queueInfo.queueFamilyIndex = graphicsFamily;
	queueInfo.queueCount = 1;
	queueInfo.pQueuePriorities = &queuePriority;

	// The features of the extensions enabled above, those the GPU has - as
	// standalone's constructor chains them. An extension enabled without its
	// feature is one the renderer must not use either.
	VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT pccFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES_EXT};
	VkPhysicalDeviceCustomBorderColorFeaturesEXT bcfFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT};
	VkPhysicalDevicePipelineRobustnessFeaturesEXT robustFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT};
	VkPhysicalDeviceDepthClipEnableFeaturesEXT clipFeatures{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT};
	void* featureChain = nullptr;
	const auto chainFeature = [&](auto& feature) {
		feature.pNext = featureChain;
		featureChain = &feature;
	};
	if (enabledExt(VK_EXT_PIPELINE_CREATION_CACHE_CONTROL_EXTENSION_NAME) && pccSupported.pipelineCreationCacheControl)
	{
		pccFeatures.pipelineCreationCacheControl = VK_TRUE;
		chainFeature(pccFeatures);
	}
	if (enabledExt(VK_EXT_CUSTOM_BORDER_COLOR_EXTENSION_NAME) && bcfSupported.customBorderColors)
	{
		bcfFeatures.customBorderColors = VK_TRUE;
		bcfFeatures.customBorderColorWithoutFormat = bcfSupported.customBorderColorWithoutFormat;
		chainFeature(bcfFeatures);
	}
	if (enabledExt(VK_EXT_PIPELINE_ROBUSTNESS_EXTENSION_NAME) && robustSupported.pipelineRobustness)
	{
		robustFeatures.pipelineRobustness = VK_TRUE;
		chainFeature(robustFeatures);
	}
	if (enabledExt(VK_EXT_DEPTH_CLIP_ENABLE_EXTENSION_NAME) && clipSupported.depthClipEnable)
	{
		clipFeatures.depthClipEnable = VK_TRUE;
		chainFeature(clipFeatures);
	}

	VkDeviceCreateInfo createInfo{};
	createInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
	createInfo.queueCreateInfoCount = 1;
	createInfo.pQueueCreateInfos = &queueInfo;
	createInfo.enabledExtensionCount = (uint32_t)extensions.size();
	createInfo.ppEnabledExtensionNames = extensions.data();
	createInfo.pEnabledFeatures = &features;
	createInfo.pNext = featureChain;

	VkDevice device;
	VkResult result = vkCreateDevice(gpu, &createInfo, nullptr, &device);
	if (result != VK_SUCCESS)
	{
		libretro_log(RETRO_LOG_ERROR, "Failed to create Vulkan device: %d\n", result);
		return false;
	}

	InitializeDeviceVulkan(device);

	// What the renderer may use (VulkanRenderer's libretro constructor)
	g_libretroVkDeviceExtensions.clear();
	for (const char* ext : extensions)
		g_libretroVkDeviceExtensions.emplace_back(ext);
	g_libretroVkCustomBorderColorWithoutFormat = bcfFeatures.customBorderColorWithoutFormat == VK_TRUE;
	g_libretroVkHasPipelineCreationCacheControl = pccFeatures.pipelineCreationCacheControl == VK_TRUE;
	g_libretroVkHasCustomBorderColors = bcfFeatures.customBorderColors == VK_TRUE;
	g_libretroVkHasPipelineRobustness = robustFeatures.pipelineRobustness == VK_TRUE;
	g_libretroVkHasDepthClipEnable = clipFeatures.depthClipEnable == VK_TRUE;
	{
		std::string list;
		for (const std::string& ext : g_libretroVkDeviceExtensions)
			list += (list.empty() ? "" : ", ") + ext;
		libretro_log(RETRO_LOG_INFO, "Vulkan device extensions: %s\n", list.c_str());
	}

	VkQueue queue;
	vkGetDeviceQueue(device, graphicsFamily, 0, &queue);

	context->gpu = gpu;
	context->device = device;
	context->queue = queue;
	context->queue_family_index = graphicsFamily;
	context->presentation_queue = queue;
	context->presentation_queue_family_index = graphicsFamily;

	s_vk_context = *context;

	libretro_log(RETRO_LOG_INFO, "Vulkan device created (queue family %u)\n", graphicsFamily);
	return true;
}

static struct retro_hw_render_context_negotiation_interface_vulkan s_vk_negotiation{
	RETRO_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE_VULKAN,
	RETRO_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE_VULKAN_VERSION,
	libretro_vk_get_application_info,
	libretro_vk_create_device,
	// No destroy_device: RetroArch calls it after it has unloaded the core,
	// when this library is no longer there to answer. Without one it destroys
	// the device it got from create_device itself.
	nullptr,
};
#endif

// ============================================================================
// DRC display helpers (lowercase iequals lives below in the options section;
// duplicate the few lines we need here to avoid a forward-decl)
// ============================================================================

static bool libretro_drc_iequals(const char* a, const char* b)
{
	if (!a || !b)
		return false;
	while (*a && *b)
	{
		const char ca = (*a >= 'A' && *a <= 'Z') ? (char)(*a + 32) : *a;
		const char cb = (*b >= 'A' && *b <= 'Z') ? (char)(*b + 32) : *b;
		if (ca != cb)
			return false;
		++a;
		++b;
	}
	return *a == 0 && *b == 0;
}

// The option values are the labels the user picks from, so they are matched as
// such. An unknown one - an .opt file from a newer build, or an edited one -
// falls back to the slot's default rather than refusing to start.
static LibretroScreenLayout libretro_parse_screen_layout(const char* v, LibretroScreenLayout fallback)
{
	if (!v)
		return fallback;
	if (libretro_drc_iequals(v, "Default Screen")) return LibretroScreenLayout::Tv;
	if (libretro_drc_iequals(v, "GamePad Screen")) return LibretroScreenLayout::GamePad;
	if (libretro_drc_iequals(v, "Side by Side")) return LibretroScreenLayout::SideBySide;
	if (libretro_drc_iequals(v, "Top Bottom")) return LibretroScreenLayout::TopBottom;
	if (libretro_drc_iequals(v, "Picture in Picture")) return LibretroScreenLayout::PictureInPicture;
	return fallback;
}

static const char* libretro_screen_layout_name(LibretroScreenLayout layout)
{
	switch (layout)
	{
	case LibretroScreenLayout::Tv: return "Default Screen";
	case LibretroScreenLayout::GamePad: return "GamePad Screen";
	case LibretroScreenLayout::SideBySide: return "Side by Side";
	case LibretroScreenLayout::TopBottom: return "Top Bottom";
	case LibretroScreenLayout::PictureInPicture: return "Picture in Picture";
	}
	return "Default Screen";
}

static bool libretro_drc_needs_pad_view()
{
	return g_libretroScreenLayout != LibretroScreenLayout::Tv;
}

// Shared DRC helpers (declared in LibretroDRC.h, also called from VulkanRenderer).
bool LibretroDRC_ShouldRenderScreen(bool padView)
{
	switch (g_libretroScreenLayout)
	{
	case LibretroScreenLayout::Tv:
		return !padView;
	case LibretroScreenLayout::GamePad:
		return padView;
	case LibretroScreenLayout::SideBySide:
	case LibretroScreenLayout::TopBottom:
	case LibretroScreenLayout::PictureInPicture:
		return true;
	}
	return !padView;
}

void LibretroDRC_ComputeViewport(bool padView,
	int dstWidth, int dstHeight,
	int& outX, int& outY, int& outWidth, int& outHeight)
{
	// Top-left origin convention. GL callers flip Y at their site.
	const bool isPrimary = g_libretroDRCPositionSwapped ? padView : !padView;

	switch (g_libretroScreenLayout)
	{
	case LibretroScreenLayout::Tv:
	case LibretroScreenLayout::GamePad:
		outX = 0;
		outY = 0;
		outWidth = dstWidth;
		outHeight = dstHeight;
		return;

	case LibretroScreenLayout::SideBySide:
	{
		const int primaryWidth = (dstWidth * 80) / 100;
		const int secondaryWidth = dstWidth - primaryWidth;
		int primaryHeight = (primaryWidth * 9) / 16;
		if (primaryHeight > dstHeight) primaryHeight = dstHeight;
		int secondaryHeight = (secondaryWidth * 9) / 16;
		if (secondaryHeight > dstHeight) secondaryHeight = dstHeight;
		if (isPrimary)
		{
			outX = 0;
			outY = 0;
			outWidth = primaryWidth;
			outHeight = primaryHeight;
		}
		else
		{
			outX = primaryWidth;
			outY = dstHeight - secondaryHeight;
			outWidth = secondaryWidth;
			outHeight = secondaryHeight;
		}
		return;
	}

	case LibretroScreenLayout::TopBottom:
		if (isPrimary)
		{
			outX = 0;
			outY = 0;
			outWidth = dstWidth;
			outHeight = (dstHeight * 70) / 100;
		}
		else
		{
			outX = 0;
			outY = (dstHeight * 70) / 100;
			outWidth = dstWidth;
			outHeight = (dstHeight * 30) / 100;
		}
		return;

	case LibretroScreenLayout::PictureInPicture:
		if (isPrimary)
		{
			outX = 0;
			outY = 0;
			outWidth = dstWidth;
			outHeight = dstHeight;
		}
		else
		{
			outWidth = (dstWidth * 20) / 100;
			outHeight = (dstHeight * 20) / 100;
			outX = dstWidth - outWidth - 10;
			outY = dstHeight - outHeight - 10;
		}
		return;
	}
}

// ============================================================================
// OpenGL Canvas Callbacks for libretro
// ============================================================================

#ifdef ENABLE_OPENGL
class LibretroGLCanvasCallbacks : public OpenGLCanvasCallbacks
{
public:
	LibretroGLCanvasCallbacks()
	{
		SetOpenGLCanvasCallbacks(this);
	}

	~LibretroGLCanvasCallbacks()
	{
		ClearOpenGLCanvasCallbacks();
	}

	bool HasPadViewOpen() const override
	{
		return libretro_drc_needs_pad_view();
	}

	bool ShouldRenderScreen(bool padView) const override
	{
		return LibretroDRC_ShouldRenderScreen(padView);
	}

	void AdjustScreenViewport(bool padView, sint32 windowWidth, sint32 windowHeight,
		sint32& outX, sint32& outY, sint32& outWidth, sint32& outHeight) const override
	{
		// Shared helper returns top-left origin; OpenGL expects bottom-up Y.
		int x, y, w, h;
		LibretroDRC_ComputeViewport(padView, windowWidth, windowHeight, x, y, w, h);
		outX = x;
		outY = windowHeight - y - h;
		outWidth = w;
		outHeight = h;
	}

	bool MakeCurrent(bool padView) override
	{
		if (padView)
			return false;
		if (!s_hw_render_initialized || s_shutting_down)
			return false;
		// Make our shared GL context current on the GPU thread (WGL on Windows,
		// EGL on Wayland, GLX on X11). Without the OpenGL backend there is no
		// such context and nothing calls this.
#ifndef ENABLE_OPENGL
		return false;
#elif defined(_WIN32)
		if (s_wgl_shared_context && s_wgl_frontend_dc && !s_gpu_context_made_current)
		{
			if (wglMakeCurrent(s_wgl_frontend_dc, s_wgl_shared_context))
			{
				s_gpu_context_made_current = true;
				libretro_log(RETRO_LOG_INFO, "GPU thread WGL context made current successfully\n");
			}
			else
			{
				libretro_log(RETRO_LOG_ERROR, "Failed to make GPU thread WGL context current (%lu)\n",
					(unsigned long)GetLastError());
				return false;
			}
		}
#else
		if (s_use_egl)
		{
			if (s_egl_shared_context != EGL_NO_CONTEXT && s_egl_display != EGL_NO_DISPLAY && !s_gpu_context_made_current)
			{
				eglBindAPI(EGL_OPENGL_API);
				// The GPU thread only renders to FBOs, never to the window surface (which
				// the frontend context holds on another thread → EGL_BAD_ACCESS if shared).
				// Bind surfaceless (EGL_KHR_surfaceless_context, supported by Mesa).
				if (eglMakeCurrent(s_egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, s_egl_shared_context))
				{
					s_gpu_context_made_current = true;
					libretro_log(RETRO_LOG_INFO, "GPU thread EGL context made current successfully\n");
				}
				else
				{
					libretro_log(RETRO_LOG_ERROR, "Failed to make GPU thread EGL context current (0x%x)\n", eglGetError());
					return false;
				}
			}
		}
#ifndef __ANDROID__
		else if (s_glx_shared_context && s_glx_display && s_glx_drawable && !s_gpu_context_made_current)
		{
			int result = glXMakeCurrent(s_glx_display, s_glx_drawable, s_glx_shared_context);
			if (result)
			{
				s_gpu_context_made_current = true;
				libretro_log(RETRO_LOG_INFO, "GPU thread GL context made current successfully\n");
			}
			else
			{
				libretro_log(RETRO_LOG_ERROR, "Failed to make GPU thread GL context current\n");
				return false;
			}
		}
#endif // __ANDROID__
#endif // _WIN32
		return true;
	}

	void SwapBuffers(bool swapTV, bool swapDRC) override
	{
		if (s_shutting_down)
			return;
		if (swapTV || swapDRC)
		{
			// Read pixels from our backbuffer FBO on the GPU thread (where GL context is valid)
			// At the size the backbuffer was drawn at (libretro_gl_tv_picture_size)
			extern GLuint libretro_getBackbufferFBO(int, int);
			int width, height;
			WindowSystem::GetWindowPhysSize(width, height);
			if (width <= 0 || height <= 0)
			{
				width = SCREEN_WIDTH;
				height = SCREEN_HEIGHT;
			}
			GLuint fbo = libretro_getBackbufferFBO(width, height);
			{
				std::lock_guard lock(s_gl_frame_mutex);
				if (s_framebuffer.size() != (size_t)width * height)
					s_framebuffer.resize((size_t)width * height);
				glBindFramebuffer(GL_READ_FRAMEBUFFER_EXT, fbo);
				glReadPixels(0, 0, width, height, GL_BGRA, GL_UNSIGNED_BYTE, s_framebuffer.data());
				s_gl_frame_width = width;
				s_gl_frame_height = height;
			}

			libretro_signal_frame_ready();

			// The frame is the frontend's now; wait to be asked for the next one.
			// Only for the TV swap: a DRC swap is part of the same frame, and
			// parking on both would halve the frame rate of a title that does
			// them separately.
			if (swapTV)
				libretro_frame_gate_wait();
		}
	}
};

static std::unique_ptr<LibretroGLCanvasCallbacks> s_gl_callbacks;
#endif // ENABLE_OPENGL

// ============================================================================
// Libretro input state
// ============================================================================

struct LibretroInputState
{
	// Indexed by VPADController::ButtonId, so it has to be as long as that
	// enum: kButtonId_StickR is 16, and a [16] array made storing an R3 press
	// a write into left_x below it.
	int16_t buttons[VPADController::kButtonId_Max]{};
	int16_t left_x = 0, left_y = 0;
	int16_t right_x = 0, right_y = 0;
	bool touch_pressed = false;
	int16_t touch_x = 0; // -0x7fff..0x7fff
	int16_t touch_y = 0;
};

static LibretroInputState s_input_state;

// Raw per-port RetroPad state. The GamePad above is built from port 0 only;
// this is what LibretroController hands to Cemu's InputManager, which is what
// drives the Wii Remotes.
struct LibretroPortState
{
	int16_t buttons[16]{};
	int16_t left_x = 0, left_y = 0;
	int16_t right_x = 0, right_y = 0;
};

static LibretroPortState s_port_state[kLibretroMaxPorts];

// ---- Rumble ----------------------------------------------------------------
//
// Through the frontend's rumble interface, from retro_run, only when a port's
// value changes. Two sources feed it. The Wii Remotes and the Pro and Classic
// Controllers are InputManager controllers, and Cemu turns their motor on and
// off through LibretroController::start_rumble/stop_rumble. The GamePad is not:
// vpad.cpp reads it from port 0 directly, so VPADControlMotor hands its pattern
// to the core, which plays it the way VPADController::update does - one bit per
// 1/60 s, at most five patterns queued.
static retro_set_rumble_state_t s_rumble_cb = nullptr;
static std::atomic<uint16_t> s_rumble_strength{0xFFFF};
static std::atomic<bool> s_port_rumble[kLibretroMaxPorts]{};
static uint16_t s_rumble_sent[kLibretroMaxPorts]{};

static std::mutex s_vpad_rumble_mutex;
static std::deque<std::vector<bool>> s_vpad_rumble_queue;
static size_t s_vpad_rumble_bit = 0;
static bool s_vpad_rumble_on = false;
static std::chrono::steady_clock::time_point s_vpad_rumble_next{};

void libretro_vpad_rumble_clear();

bool libretro_vpad_rumble_push(const uint8* pattern, uint8 length)
{
	if (!pattern || length == 0)
	{
		libretro_vpad_rumble_clear();
		return true;
	}
	// As VPADController::push_rumble: two bits of the pattern per step, so the
	// 120 bits a pattern can have are 60 steps, one second.
	std::vector<bool> steps;
	for (int byte = 0, len = length; len > 0; ++byte, len -= 8)
	{
		const uint8 p = pattern[byte];
		for (int j = 0; j < 8 && j < len; j += 2)
			steps.push_back((p & (3 << j)) != 0);
	}
	std::lock_guard lock(s_vpad_rumble_mutex);
	if (s_vpad_rumble_queue.size() >= 5)
		return false;
	if (s_vpad_rumble_queue.empty())
		s_vpad_rumble_next = {};
	s_vpad_rumble_queue.push_back(std::move(steps));
	return true;
}

void libretro_vpad_rumble_clear()
{
	std::lock_guard lock(s_vpad_rumble_mutex);
	s_vpad_rumble_queue.clear();
	s_vpad_rumble_bit = 0;
}

void libretro_set_port_rumble(uint32_t port, bool on)
{
	if (port < kLibretroMaxPorts)
		s_port_rumble[port].store(on, std::memory_order_relaxed);
}

// The GamePad motor's state for this frame.
static bool libretro_vpad_rumble_step()
{
	std::lock_guard lock(s_vpad_rumble_mutex);
	if (s_vpad_rumble_queue.empty())
	{
		s_vpad_rumble_bit = 0;
		s_vpad_rumble_on = false;
		return false;
	}
	const auto now = std::chrono::steady_clock::now();
	if (now < s_vpad_rumble_next)
		return s_vpad_rumble_on;
	s_vpad_rumble_next = now + std::chrono::microseconds(1000000 / 60);
	const auto& steps = s_vpad_rumble_queue.front();
	s_vpad_rumble_on = steps[s_vpad_rumble_bit];
	if (++s_vpad_rumble_bit >= steps.size())
	{
		s_vpad_rumble_queue.pop_front();
		s_vpad_rumble_bit = 0;
	}
	return s_vpad_rumble_on;
}

static void libretro_send_rumble(uint32_t port, uint16_t value)
{
	if (!s_rumble_cb || s_rumble_sent[port] == value)
		return;
	s_rumble_cb(port, RETRO_RUMBLE_STRONG, value);
	s_rumble_cb(port, RETRO_RUMBLE_WEAK, value);
	s_rumble_sent[port] = value;
}

bool libretro_gamepad_on_port1();

static void libretro_update_rumble()
{
	const bool vpadOn = libretro_vpad_rumble_step();
	const uint16_t strength = s_rumble_strength.load(std::memory_order_relaxed);
	for (uint32_t port = 0; port < kLibretroMaxPorts; ++port)
	{
		const bool on = s_port_rumble[port].load(std::memory_order_relaxed) || (port == 0 && vpadOn);
		libretro_send_rumble(port, on ? strength : 0);
	}
}

// A motor left on would keep going after the game is gone, or through the
// restart of a reset.
static void libretro_stop_rumble()
{
	libretro_vpad_rumble_clear();
	for (uint32_t port = 0; port < kLibretroMaxPorts; ++port)
	{
		s_port_rumble[port].store(false, std::memory_order_relaxed);
		libretro_send_rumble(port, 0);
	}
}

// How many of them are worth asking the frontend about. Every port costs
// twenty calls into the frontend per frame, and the ones above this are not
// bound to anything: with Wii Remote input off, ports 2 to 4 drive nothing at
// all, so polling them is sixty calls a frame spent on answers nobody reads.
// Set when the controllers are set up; until then assume they all matter.
static uint32_t s_polled_ports = kLibretroMaxPorts;

// ---- Emulated controller profiles ------------------------------------------
//
// What a port drives is a libretro device type, which is what the frontend has
// a menu for (RetroArch: Controls > Port N > Device Type), so there is no core
// option for it.
//
// Ports 2-4 can each be a Wii Remote, a Wii U Pro Controller or a Classic
// Controller. All three derive from WPADController, so padscore already knows
// what to do with any of them - get_device_type() is what tells the title which
// one it found, and nothing else in the emulation has to change.
//
// Port 1 is the GamePad, which does not go through InputManager at all:
// vpad.cpp reads the libretro callbacks directly (see libretro_poll_input).
// It can drive a Wii Remote as well, which is not a profile change - it is one
// pad answering for both. Or it can be a Wii U Pro Controller instead, as
// player 1 can be in standalone: then there is no GamePad, VPADRead hands
// channel 0 an empty sample rather than reporting it missing, as upstream does
// when none is configured, and port 1 is the first WPAD channel.
//
// A remote held sideways is its own device type rather than a setting, because
// nothing about it reaches the emulation: a title is never told which way the
// remote is being held, and the hardware reports the same bits either way. What
// changes is which physical direction a player means, so the mapping is where
// it belongs - the d-pad turns a quarter turn and 1 and 2 become the buttons
// under the thumb.
#define RETRO_DEVICE_WIIMOTE                   RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 0)
#define RETRO_DEVICE_PRO                       RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 1)
#define RETRO_DEVICE_CLASSIC                   RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 2)
#define RETRO_DEVICE_GAMEPAD_WIIMOTE           RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 3)
#define RETRO_DEVICE_WIIMOTE_SIDEWAYS          RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 4)
#define RETRO_DEVICE_GAMEPAD_WIIMOTE_SIDEWAYS  RETRO_DEVICE_SUBCLASS(RETRO_DEVICE_JOYPAD, 5)

// Port 1 is the GamePad; the rest start empty, which is what the core did
// before any of this was selectable.
static unsigned s_port_device[kLibretroMaxPorts] = {
	RETRO_DEVICE_JOYPAD, RETRO_DEVICE_NONE, RETRO_DEVICE_NONE, RETRO_DEVICE_NONE,
};

// Whether port 1 drives the GamePad. Set to the Pro Controller it does not:
// VPADRead then hands the title an empty GamePad sample, as standalone does
// when no GamePad is configured, and port 1 is WPAD channel 1 instead.
bool libretro_gamepad_on_port1()
{
	return s_port_device[0] != RETRO_DEVICE_PRO;
}

// Defined below, next to the mappings it applies; called from
// retro_set_controller_port_device, which comes before it.
static void libretro_setup_controllers();

// ============================================================================
// Forward declarations from main.cpp
// ============================================================================

// The IOSU services this core has to stop before the library goes away. Their
// own headers pull in IOSU/ headers that only resolve with src/Cafe on the
// include path, which this one does not have.
void iosuIoctl_requestShutdown();
bool iosuIoctl_hasWaiters();
bool iosuIoctl_waitForWorkersToStop(int timeoutMs);
uint32_t iosuIoctl_runningWorkerCount();
void iosuIoctl_resetAfterWorkersStopped();

namespace iosu
{
	namespace odm { void Shutdown(); }
	namespace act { void Stop(); }
	namespace mcp { void Shutdown(); }
	namespace fsa { void Shutdown(); }
}

extern void CemuCommonInit();
extern std::atomic_bool g_isGPUInitFinished;

// Called by CemuCommonInit() at every init stage. Cemu's own log.txt is only
// created part-way through that function, and a segfault takes the frontend's
// process down with it, so the frontend log is where the breadcrumbs have to go.
void LibretroInitProgress(const char* stage)
{
	libretro_log(RETRO_LOG_INFO, "init stage: %s\n", stage);
}

// ============================================================================
// Helper: Initialize paths for libretro
// ============================================================================

// Put a sentence on the screen, not only in the log. Message interface v1 gives
// a priority and a duration and is what a modern frontend wants; the old
// SET_MESSAGE is a frame count, so it is converted at the 60 fps the interface
// assumes, and is all an older one understands.
static void libretro_show_message(unsigned level, unsigned durationMs, const std::string& text)
{
	libretro_log(level >= RETRO_LOG_ERROR ? RETRO_LOG_ERROR : RETRO_LOG_INFO, "%s\n", text.c_str());

	if (!environ_cb)
		return;

	unsigned version = 0;
	if (environ_cb(RETRO_ENVIRONMENT_GET_MESSAGE_INTERFACE_VERSION, &version) && version >= 1)
	{
		struct retro_message_ext msg = {};
		msg.msg = text.c_str();
		msg.duration = durationMs;
		msg.priority = 3;
		msg.level = (enum retro_log_level)level;
		msg.target = RETRO_MESSAGE_TARGET_ALL;
		msg.type = RETRO_MESSAGE_TYPE_NOTIFICATION;
		msg.progress = -1;
		environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE_EXT, &msg);
		return;
	}

	struct retro_message msg = {};
	msg.msg = text.c_str();
	msg.frames = (unsigned)(durationMs * s_output_fps / 1000);
	environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &msg);
}

// Where mlc01 lives, decided in libretro_init_paths and applied after the
// settings file is read (which would otherwise overwrite it).
static fs::path s_mlc_path;

// What a Wii U has in its storage from the factory, and standalone Cemu
// creates in mlc01 on its first run (CemuApp::CreateDefaultMLCFiles, in the wx
// GUI this core does not have): the title folders, Mii Maker's save folders
// and the system language and country lists. Without Mii Maker's db folders a
// game cannot create the Mii database - "File create failed for
// .../1004a100/user/common/db/FFL_HDB.dat" - and Mario Kart 8 crashed right
// after its title screen (issue #26). Only what is missing is created.
static void libretro_create_default_mlc_files(const fs::path& mlc)
{
	std::error_code ec;
	const fs::path directories[] = {
		mlc / "sys",
		mlc / "usr",
		mlc / "usr/title/00050000", // base
		mlc / "usr/title/0005000c", // dlc
		mlc / "usr/title/0005000e", // update
		mlc / "usr/save/00050010/1004a000/user/common/db", // Mii Maker, for each region
		mlc / "usr/save/00050010/1004a100/user/common/db",
		mlc / "usr/save/00050010/1004a200/user/common/db",
		mlc / "sys/title/0005001b/1005c000/content", // language and country lists
	};
	for (const auto& dir : directories)
		fs::create_directories(dir, ec);

	const fs::path langDir = mlc / "sys/title/0005001b/1005c000/content";
	if (!fs::exists(langDir / "language.txt", ec))
	{
		std::ofstream file(langDir / "language.txt");
		for (const char* lang : { "ja", "en", "fr", "de", "it", "es", "zh", "ko", "nl", "pt", "ru", "zh" })
			file << fmt::format(R"("{}",)", lang) << '\n';
	}
	if (!fs::exists(langDir / "country.txt", ec))
	{
		std::ofstream file(langDir / "country.txt");
		for (size_t i = 0; i < NCrypto::GetCountryCount(); i++)
		{
			const char* code = NCrypto::GetCountryAsString(i);
			if (boost::iequals(code, "NN"))
				file << "NULL," << '\n';
			else
				file << fmt::format(R"("{}",)", code) << '\n';
		}
	}
}

static void libretro_init_paths()
{
	const char* system_dir = nullptr;
	const char* save_dir = nullptr;

	if (environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &system_dir) && system_dir)
	{
		// Use system/Cemu as the main directory
	}
	else
	{
		system_dir = ".";
	}

	if (environ_cb(RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY, &save_dir) && save_dir)
	{
		// Use save dir for MLC
	}
	else
	{
		save_dir = system_dir;
	}

	// RetroArch can already sort saves per core, in which case the directory it
	// hands over is named after this one - and appending our own would make
	// saves/Cemu/Cemu. Add the subdirectory only where it is not there yet.
	const auto in_named_dir = [](const fs::path& dir) {
		fs::path named = dir;
		if (named.filename() != "Cemu")
			named /= "Cemu";
		return named;
	};

	fs::path sysPath = in_named_dir(_utf8ToPath(system_dir));
	fs::path savePath = in_named_dir(_utf8ToPath(save_dir));

	std::error_code ec;
	fs::create_directories(sysPath, ec);
	fs::create_directories(savePath, ec);
	// mlc01 is where every save goes, and by libretro convention writable
	// per-user data belongs in the save directory rather than the system one.
	// It used to land in system/Cemu/mlc01, because that is what Cemu derives
	// from the user data path when no mlc path is configured.
	s_mlc_path = savePath / "mlc01";
	fs::create_directories(s_mlc_path, ec);

	// The cache path is the directory the shader cache lives *in*, not the
	// shader cache itself: everything that uses it asks for
	// "shaderCache/transferable/..." and so on. Handing it
	// system/Cemu/shaderCache is what produced
	// system/Cemu/shaderCache/shaderCache, with the outer one left empty.
	std::set<fs::path> failedWriteAccess;
	ActiveSettings::SetPaths(
		false,               // not portable
		sysPath / "Cemu",    // executable path (dummy)
		sysPath,             // user data path
		sysPath,             // config path
		sysPath,             // cache path
		sysPath,             // data path
		failedWriteAccess
	);

	// One-time move for anyone who built a cache under the doubled path, and
	// only while nothing is at the right place yet, so it can never merge two
	// caches or overwrite one.
	const fs::path strayCache = sysPath / "shaderCache" / "shaderCache";
	if (fs::is_directory(strayCache, ec))
	{
		const fs::path properCache = sysPath / "shaderCache";
		bool occupied = false;
		for (const char* sub : {"transferable", "precompiled", "driver"})
			occupied = occupied || fs::exists(properCache / sub, ec);
		if (!occupied)
		{
			for (fs::directory_iterator it(strayCache, ec), end; it != end && !ec; it.increment(ec))
				fs::rename(it->path(), properCache / it->path().filename(), ec);
			if (!ec)
			{
				fs::remove(strayCache, ec);
				libretro_log(RETRO_LOG_INFO, "moved the shader cache out of shaderCache/shaderCache\n");
			}
		}
	}
	ec.clear();
}

// ============================================================================
// Helper: Create libretro audio device
// ============================================================================

// No audio device is created here any more, and that was a bug rather than a
// tidy-up. This made one with 256 samples per block; AX hands FeedBlock a group
// of four 3 ms frames, which is 576. FeedBlock copies m_bytesPerBlock worth and
// no more, so every block AX produced was cut to under half and the rest
// dropped - the crackle that has been there since the ring landed.
//
// AXOut_init makes the device itself, with AX's own block size, and it only
// does so when there is not one already. So the device this made was the one
// that survived, on every run except the one after a reset: a reset destroys it
// in snd_core::reset and does not come back through here, which is why the
// audio after a reset was audibly better than the audio of a fresh start.

// ============================================================================
// Libretro API implementation
// ============================================================================

// ============================================================================
// Core options helpers (matching danprice/Cemu-Libretro)
// ============================================================================

static const char* libretro_get_option_value(const char* key)
{
	// Don't gate on whether the options were accepted: some RetroArch versions return
	// false from SET_VARIABLES even though they still happily serve values via
	// GET_VARIABLE (reads cached value from the .opt file).
	if (!environ_cb || !key)
		return nullptr;
	retro_variable var{key, nullptr};
	if (!environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
		return nullptr;
	return var.value;
}

static bool libretro_iequals(const char* a, const char* b)
{
	if (!a || !b)
		return false;
	for (; *a && *b; ++a, ++b)
	{
		if (tolower((unsigned char)*a) != tolower((unsigned char)*b))
			return false;
	}
	return *a == *b;
}

static bool libretro_parse_enabled_disabled(const char* v, bool& out)
{
	if (!v) return false;
	if (libretro_iequals(v, "enabled") || libretro_iequals(v, "true") || libretro_iequals(v, "1") || libretro_iequals(v, "on"))
	{ out = true; return true; }
	if (libretro_iequals(v, "disabled") || libretro_iequals(v, "false") || libretro_iequals(v, "0") || libretro_iequals(v, "off"))
	{ out = false; return true; }
	return false;
}

static std::optional<CPUMode> libretro_parse_cpu_mode(const char* v)
{
	if (!v) return std::nullopt;
	if (libretro_iequals(v, "auto")) return CPUMode::Auto;
	if (libretro_iequals(v, "singlecore_interpreter")) return CPUMode::SinglecoreInterpreter;
	if (libretro_iequals(v, "singlecore_recompiler")) return CPUMode::SinglecoreRecompiler;
	if (libretro_iequals(v, "multicore_recompiler")) return CPUMode::MulticoreRecompiler;
	// CPUMode has no multi-core interpreter member, and adding one would leak into
	// settings.xml and the GUI. The scheduler and the recompiler both already look
	// at LaunchSettings::ForceMultiCoreInterpreter(), so that flag carries it and
	// the mode itself stays MulticoreRecompiler (which is what the scheduler wants
	// to see for three cores).
	if (libretro_iequals(v, "multicore_interpreter")) return CPUMode::MulticoreRecompiler;
	return std::nullopt;
}

static bool libretro_is_multicore_interpreter(const char* v)
{
	return v && libretro_iequals(v, "multicore_interpreter");
}

static std::optional<PrecompiledShaderOption> libretro_parse_precompiled_shaders(const char* v)
{
	if (!v) return std::nullopt;
	if (libretro_iequals(v, "auto")) return PrecompiledShaderOption::Auto;
	if (libretro_iequals(v, "enabled")) return PrecompiledShaderOption::Enable;
	if (libretro_iequals(v, "disabled")) return PrecompiledShaderOption::Disable;
	return std::nullopt;
}

// Writing a core option back. The frontend owns the value, but a core is
// allowed to set one, and this core has one value it must never leave behind:
// the conversion switch.
static void libretro_set_option_value(const char* key, const char* value)
{
	if (!environ_cb)
		return;
	struct retro_variable var{key, value};
	if (!environ_cb(RETRO_ENVIRONMENT_SET_VARIABLE, &var) && log_cb)
		libretro_log(RETRO_LOG_WARN, "the frontend would not set %s back to %s\n", key, value);
}

// A SAF URI is not a filesystem path: std::filesystem would put a backslash in
// it on Windows and normalise parts of it away everywhere. Joining by hand
// keeps whatever the frontend handed over intact.
static std::string libretro_path_join(const std::string& dir, const std::string& name)
{
	if (dir.empty())
		return name;
	std::string joined = dir;
	if (joined.back() != '/' && joined.back() != '\\')
		joined += '/';
	joined += name;
	return joined;
}

// Whether a directory can be written to, as reported by the frontend: VFS v5
// stats it and sets RETRO_VFS_STAT_IS_READONLY. (The authorized-locations list
// has a "flags" field that looks like it should answer this, but nothing fills
// it in - RetroArch returns 0 for every entry - and the header defines no bit
// for it, so it is the stat that is asked.) Going through the VFS means SAF
// paths are covered too. A frontend too old to answer is taken at its silence
// and the destination is offered.
//
// Nothing is written to find this out. A probe file used to be created and
// deleted in every candidate, on the reasoning that being allowed to write is
// not the same as having room - but that is a write and a delete per candidate
// at startup, possibly over the network, to pre-empt a failure the conversion
// itself reports perfectly well if it ever happens.
static bool libretro_directory_is_writable(const std::string& dir)
{
	const std::optional<bool> readOnly = VFSFileStream::IsReadOnly(_utf8ToPath(dir));
	return !readOnly || !*readOnly;
}

// Everything a conversion could write to, in the order it is worth offering:
// beside the content, the system directory and its downloads folder, then
// whatever the frontend has been authorised to write to (SAF trees on
// Android). A candidate has to be a directory, has to be writable, and must
// not already hold the .wua this title would produce.
//
// Collected once and kept, rather than on every draw of the options. A
// destination that goes away in between is caught where it matters: the
// conversion re-collects before it starts, and fails there if nothing is left.
// The name the .wua is written under: the content's own, or for a title loaded
// as title.tmd the game's name from its meta.xml, then what it carries besides
// the base game (i30817, #23): " (vNN)" for the update, replacing a version
// already in the name, and " (DLC)". info is null where the title list has not
// told yet whether there is an update or DLC (the destination labels).
static std::string libretro_wua_output_name(const fs::path& contentPath, GameInfo2* info)
{
	std::string name = _pathToUtf8(contentPath.stem());
	if (name.empty() || boost::iequals(name, "title"))
	{
		TitleInfo base(contentPath);
		if (base.IsValid() && base.ParseXmlInfo() && !base.GetMetaTitleName().empty())
			name = base.GetMetaTitleName();
	}
	// Names in meta.xml can hold line breaks and characters no file system takes
	for (char& c : name)
		if (c == '\n' || c == '\r' || c == '/' || c == '\\' || c == ':' || c == '*' || c == '?' || c == '"' || c == '<' || c == '>' || c == '|')
			c = (c == '\n' || c == '\r') ? ' ' : '_';
	if (info && info->HasUpdate())
	{
		const std::string version = fmt::format("(v{})", info->GetUpdate().GetAppTitleVersion());
		static const std::regex versionInName(R"(\(v\d+\))", std::regex::icase);
		if (std::regex_search(name, versionInName))
			name = std::regex_replace(name, versionInName, version, std::regex_constants::format_first_only);
		else
			name += " " + version;
	}
	if (info && !info->GetAOC().empty() && !boost::icontains(name, "(DLC)"))
		name += " (DLC)";
	return name + ".wua";
}

static bool s_wua_destinations_collected = false;

static void libretro_collect_wua_destinations(bool force = false)
{
	if (s_wua_destinations_collected && !force)
		return;
	s_wua_destinations_collected = true;
	s_wua_destinations.clear();
	s_wua_unavailable_reason.clear();

	if (s_game_path.empty())
	{
		s_wua_unavailable_reason = "no content is loaded";
		return;
	}

	const fs::path contentPath = _utf8ToPath(s_game_path);
	const std::string extension = _pathToUtf8(contentPath.extension());
	if (libretro_iequals(extension.c_str(), ".wua"))
	{
		s_wua_unavailable_reason = "this title is already a .wua";
		return;
	}

	const std::string outputName = libretro_wua_output_name(contentPath, nullptr);

	std::vector<LibretroWuaDestination> candidates;
	auto add = [&candidates](std::string path, std::string label) {
		if (!path.empty())
			candidates.push_back({std::move(path), std::move(label)});
	};

	add(_pathToUtf8(contentPath.parent_path()), "Beside the content");

	// The system directory itself is for the frontend's own files, so only the
	// downloads folder beside it is offered.
	const char* system_dir = nullptr;
	if (environ_cb && environ_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &system_dir) && system_dir && *system_dir)
		add(libretro_path_join(system_dir, "downloads"), "Downloads folder");

	if (environ_cb)
	{
		struct retro_vfs_authorized_locations locations{};
		if (environ_cb(RETRO_ENVIRONMENT_GET_VFS_AUTHORIZED_LOCATIONS, &locations) && locations.locations)
		{
			for (size_t i = 0; i < locations.count; ++i)
			{
				const struct retro_vfs_authorized_location& loc = locations.locations[i];
				if (!loc.path || !*loc.path)
					continue;
				add(loc.path, (loc.label && *loc.label) ? loc.label : loc.path);
			}
		}
	}

	for (LibretroWuaDestination candidate : candidates)
	{
		const bool duplicate = std::any_of(s_wua_destinations.begin(), s_wua_destinations.end(),
			[&candidate](const LibretroWuaDestination& kept) { return kept.path == candidate.path; });
		if (duplicate)
			continue;
		if (!VFSFileStream::IsDirectory(_utf8ToPath(candidate.path)))
			continue;
		if (!libretro_directory_is_writable(candidate.path))
		{
			libretro_log(RETRO_LOG_INFO, "not offering %s - the frontend says it is read-only\n",
				candidate.path.c_str());
			continue;
		}
		candidate.hasExisting = VFSFileStream::Exists(_utf8ToPath(libretro_path_join(candidate.path, outputName)));
		s_wua_destinations.push_back(std::move(candidate));
	}

	if (s_wua_destinations.empty())
		s_wua_unavailable_reason = "there is nowhere this core may write";

	libretro_log(RETRO_LOG_INFO, "%u place(s) to convert to%s%s\n",
		(unsigned)s_wua_destinations.size(),
		s_wua_unavailable_reason.empty() ? "" : ": ",
		s_wua_unavailable_reason.c_str());
}

static std::optional<CafeConsoleLanguage> libretro_parse_console_language(const char* v)
{
	if (!v) return std::nullopt;
	if (libretro_iequals(v, "Japanese")) return CafeConsoleLanguage::JA;
	if (libretro_iequals(v, "English")) return CafeConsoleLanguage::EN;
	if (libretro_iequals(v, "French")) return CafeConsoleLanguage::FR;
	if (libretro_iequals(v, "German")) return CafeConsoleLanguage::DE;
	if (libretro_iequals(v, "Italian")) return CafeConsoleLanguage::IT;
	if (libretro_iequals(v, "Spanish")) return CafeConsoleLanguage::ES;
	if (libretro_iequals(v, "Chinese")) return CafeConsoleLanguage::ZH;
	if (libretro_iequals(v, "Korean")) return CafeConsoleLanguage::KO;
	if (libretro_iequals(v, "Dutch")) return CafeConsoleLanguage::NL;
	if (libretro_iequals(v, "Portuguese")) return CafeConsoleLanguage::PT;
	if (libretro_iequals(v, "Russian")) return CafeConsoleLanguage::RU;
	if (libretro_iequals(v, "Taiwanese")) return CafeConsoleLanguage::TW;
	return std::nullopt;
}

static bool libretro_parse_internal_resolution(const char* v, unsigned& outWidth, unsigned& outHeight)
{
	if (!v) return false;
	// Multiples of the game's own resolution, so a value means the same in
	// every game and its .opt (sco): returned as the size they are for a 720p
	// game, which is what the scale and the output size are worked out from.
	// Below native is for hardware that cannot keep up; the presentation image
	// stays at the output size, so those render fewer pixels and are scaled up.
	if (libretro_iequals(v, "native")) { outWidth = 1280; outHeight = 720; return true; }
	if (libretro_iequals(v, "0.25x")) { outWidth = 320; outHeight = 180; return true; }
	if (libretro_iequals(v, "0.5x")) { outWidth = 640; outHeight = 360; return true; }
	if (libretro_iequals(v, "0.75x")) { outWidth = 960; outHeight = 540; return true; }
	if (libretro_iequals(v, "1.5x")) { outWidth = 1920; outHeight = 1080; return true; }
	if (libretro_iequals(v, "2x")) { outWidth = 2560; outHeight = 1440; return true; }
	if (libretro_iequals(v, "3x")) { outWidth = 3840; outHeight = 2160; return true; }
	// The sizes the option used to have, from .opt files written then
	if (libretro_iequals(v, "640x360")) { outWidth = 640; outHeight = 360; return true; }
	if (libretro_iequals(v, "960x540")) { outWidth = 960; outHeight = 540; return true; }
	if (libretro_iequals(v, "1280x720")) { outWidth = 1280; outHeight = 720; return true; }
	if (libretro_iequals(v, "1920x1080")) { outWidth = 1920; outHeight = 1080; return true; }
	if (libretro_iequals(v, "2560x1440")) { outWidth = 2560; outHeight = 1440; return true; }
	if (libretro_iequals(v, "3840x2160")) { outWidth = 3840; outHeight = 2160; return true; }
	return false;
}

static LibretroLayoutButton libretro_parse_layout_button(const char* v)
{
	if (!v)
		return LibretroLayoutButton::None;
	if (libretro_drc_iequals(v, "Select + L3")) return LibretroLayoutButton::SelectL3;
	if (libretro_drc_iequals(v, "Select + R3")) return LibretroLayoutButton::SelectR3;
	if (libretro_drc_iequals(v, "L + R + L2 + R2 + L3 + R3")) return LibretroLayoutButton::AllShoulders;
	if (libretro_drc_iequals(v, "Tab")) return LibretroLayoutButton::KeyTab;
	return LibretroLayoutButton::None;
}

static void libretro_apply_screen_layout()
{
	const LibretroScreenLayout layout = s_screen_layouts[s_screen_layout_index];
	if (layout == g_libretroScreenLayout)
		return;

	g_libretroScreenLayout = layout;
	const bool padVisible = layout != LibretroScreenLayout::Tv;
	ActiveSettings::SetLibretroDisplayDRCOverride(padVisible);
	WindowSystem::GetWindowInfo().pad_open = padVisible;
}

// Both conversion options are pointless without a destination - the title is
// already a .wua, or nothing the core may write to is free - so they come off
// the menu entirely, and the help text of the one that remains visible in the
// .opt file says why.
static void libretro_update_convert_visibility()
{
	if (!environ_cb)
		return;
	// Nothing in here is actionable while a conversion is running: it is the
	// only thing the core is doing, and it cannot be pointed somewhere else
	// halfway through.
	const bool available = !s_wua_destinations.empty() && !s_convert_mode.load();
	for (const char* key : {"cemu_wua_output_dir", "cemu_convert_to_wua"})
	{
		struct retro_core_option_display display{key, available};
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &display);
	}
}

static void libretro_update_screen_layout_visibility()
{
	if (!environ_cb)
		return;
	for (unsigned i = 0; i < kMaxScreenLayouts; ++i)
	{
		char key[32];
		snprintf(key, sizeof(key), "cemu_screen_layout%u", i + 1);
		struct retro_core_option_display display{key, i < s_screen_layout_count};
		environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &display);
	}
}

// The frontend calls this when it is about to show the options - opening the
// menu, or right after a value changed - which is the moment the layout slots
// above the configured count have to disappear. Pushing SET_CORE_OPTIONS_DISPLAY
// when the count changes is not enough on its own: the menu is built from what
// the frontend knows at the time it builds it.
static void libretro_handle_install_requests();
static void libretro_update_resolution_visibility();
static void libretro_update_pack_visibility();

static bool RETRO_CALLCONV libretro_update_options_display()
{
	libretro_handle_install_requests();

	if (const char* v = libretro_get_option_value("cemu_number_of_screen_layouts"))
	{
		const int n = atoi(v);
		if (n >= 1 && n <= (int)kMaxScreenLayouts)
			s_screen_layout_count = (unsigned)n;
	}
	libretro_update_screen_layout_visibility();

	// Where the destinations are worked out. Doing it at load meant a snapshot
	// that went stale - a tree mounted afterwards was never seen - and it spent
	// the time whether or not anyone was going to look. Here it happens when the
	// frontend is about to draw the options, and not otherwise. libretro has no
	// signal for entering one submenu rather than another, so this is as narrow
	// as it gets: opening Core Options, not every frame and not every boot.
	if (!s_convert_mode.load())
		libretro_collect_wua_destinations();
	libretro_update_convert_visibility();
	libretro_update_resolution_visibility();
	libretro_update_pack_visibility();
	return true;
}

static void libretro_read_screen_layout_options()
{
	static const LibretroScreenLayout defaults[kMaxScreenLayouts] = {
		LibretroScreenLayout::Tv,
		LibretroScreenLayout::GamePad,
		LibretroScreenLayout::SideBySide,
		LibretroScreenLayout::TopBottom,
		LibretroScreenLayout::PictureInPicture,
	};

	unsigned count = 2;
	if (const char* v = libretro_get_option_value("cemu_number_of_screen_layouts"))
	{
		const int n = atoi(v);
		if (n >= 1 && n <= (int)kMaxScreenLayouts)
			count = (unsigned)n;
	}
	s_screen_layout_count = count;

	for (unsigned i = 0; i < kMaxScreenLayouts; ++i)
	{
		char key[32];
		snprintf(key, sizeof(key), "cemu_screen_layout%u", i + 1);
		s_screen_layouts[i] = libretro_parse_screen_layout(libretro_get_option_value(key), defaults[i]);
	}

	// A count lowered under the slot the core is on leaves it out of range;
	// start again from the first rather than from something the user cannot
	// see any more.
	if (s_screen_layout_index >= s_screen_layout_count)
		s_screen_layout_index = 0;

	const LibretroLayoutButton previousButton = s_next_layout_button;
	s_next_layout_button = libretro_parse_layout_button(libretro_get_option_value("cemu_next_screen_layout_button"));
	if (s_next_layout_button != previousButton && log_cb)
	{
		// Says what the core is watching for, so a report of "the shortcut does
		// nothing" can be told apart from the option never reaching the core.
		const char* name = "nothing";
		switch (s_next_layout_button)
		{
		case LibretroLayoutButton::None: break;
		case LibretroLayoutButton::SelectL3: name = "Select + L3"; break;
		case LibretroLayoutButton::SelectR3: name = "Select + R3"; break;
		case LibretroLayoutButton::AllShoulders: name = "L + R + L2 + R2 + L3 + R3"; break;
		case LibretroLayoutButton::KeyTab: name = "the Tab key"; break;
		}
		libretro_log(RETRO_LOG_INFO, "next screen layout is on %s\n", name);
	}

	libretro_update_screen_layout_visibility();
	libretro_apply_screen_layout();
}

static void libretro_next_screen_layout()
{
	if (s_screen_layout_count == 0)
		return;

	s_screen_layout_index = (s_screen_layout_index + 1) % s_screen_layout_count;
	// Nothing to redraw differently when the next slot holds the same layout;
	// libretro_apply_screen_layout returns early on its own.
	libretro_apply_screen_layout();

	libretro_log(RETRO_LOG_INFO, "screen layout %u of %u (%s)\n",
		s_screen_layout_index + 1, s_screen_layout_count,
		libretro_screen_layout_name(g_libretroScreenLayout));
}

static void libretro_start_wua_conversion(TitleId baseTitleId, const fs::path& gamePath);
static bool libretro_stop_title();
static void libretro_prepare_and_launch_title();
static void libretro_create_renderer();
static void libretro_set_convert_status(std::string text, int progress = -1);
static void libretro_request_install();
static bool libretro_request_uninstall();
static bool libretro_request_install_game();
static bool libretro_request_uninstall_game();

// What the conversion has to read, in bytes: the base title plus whatever
// update and DLC go into the same archive. A .wua ends up smaller than that -
// it is compressed and no longer encrypted - so it is a safe floor to ask the
// destination for. Directories are walked; a path the local file system cannot
// see contributes nothing, which is the SAF case and is handled by the caller.
static uintmax_t libretro_title_input_size(const std::vector<TitleInfo*>& titles)
{
	uintmax_t total = 0;
	for (const TitleInfo* title : titles)
	{
		if (!title)
			continue;
		const fs::path path = title->GetPath();
		std::error_code ec;
		if (fs::is_regular_file(path, ec))
		{
			total += fs::file_size(path, ec);
			continue;
		}
		if (!fs::is_directory(path, ec))
			continue;
		for (fs::recursive_directory_iterator it(path, fs::directory_options::skip_permission_denied, ec), end;
			it != end && !ec; it.increment(ec))
		{
			if (it->is_regular_file(ec))
				total += it->file_size(ec);
		}
	}
	return total;
}

// Acting on the conversion switch. The conversion runs in this same process,
// beside the title rather than instead of it, so nothing has to be written down
// and picked up on a later run.
//
// Called from the option handler, which is the frontend's thread, and returns
// as soon as the work is handed to the conversion thread.
static void libretro_request_conversion()
{
	if (s_convert_mode.load() || !s_game_loaded || s_game_path.empty())
		return;

	libretro_log(RETRO_LOG_INFO, "conversion requested - the title keeps running\n");

	// The title is left running. It and the conversion both read the same
	// files and neither writes them, so the reads do not conflict; what they do
	// share is memory and a core's worth of CPU, and on a machine short of
	// either this will be felt in both.
	s_convert_finished = false;
	s_convert_cancel = false;
	s_convert_mode.store(true);
	libretro_set_convert_status("Preparing...");
	// The submenu is not something to reach into while this is running.
	libretro_update_convert_visibility();

	const fs::path gamePath = _utf8ToPath(s_game_path);
	TitleInfo launchTitle{gamePath};
	TitleId baseTitleId;
	if (!launchTitle.IsValid() || !CafeTitleList::FindBaseTitleId(launchTitle.GetAppTitleId(), baseTitleId))
	{
		libretro_set_convert_status("Conversion failed: the title could not be identified");
		s_convert_finished = true;
		return;
	}

	libretro_start_wua_conversion(baseTitleId, gamePath);
}

// The two options the game profile owns, and the reason they are not applied
// with the rest.
//
// gameProfile_load() runs inside CafeSystem::PrepareForegroundTitle, and it
// begins with ResetOptional(), which puts accurate shader mul and the thread
// quantum (and shader fast math, which only the Metal renderer reads) back to
// their defaults - and then copies the quantum
// into ppcThreadQuantum. Applying them before the launch, which is where every
// other option is applied from, meant the profile overwrote them a moment
// later: the option moved the value and the title ran with the default anyway.
//
// So they are applied twice, and both are needed. Here, called from the launch
// after the profile has loaded, is what makes them hold for the run. From
// libretro_apply_core_options is what makes a change take effect mid-title,
// where no profile load follows.
static void libretro_apply_profile_options()
{
	if (const char* v = libretro_get_option_value("cemu_accurate_shader_mul"))
	{
		bool enabled;
		if (libretro_parse_enabled_disabled(v, enabled) && g_current_game_profile)
			g_current_game_profile->SetAccurateShaderMul(enabled ? AccurateShaderMulOption::True : AccurateShaderMulOption::False);
	}

	// Set through the variable rather than the profile: gameProfile_load is what
	// copies the profile's quantum into it, and that has already happened by the
	// time this runs.
	if (const char* v = libretro_get_option_value("cemu_thread_quantum"))
	{
		const int quantum = atoi(v);
		if (quantum >= 1000 && quantum <= 536870912)
		{
			extern uint32 ppcThreadQuantum;
			ppcThreadQuantum = (uint32)quantum;
		}
	}
}

// Installing and uninstalling are requests. The switch stays on while the
// request is being carried out - until installing is done, until the game is
// closed for uninstalling - so that it does not read Off right after being
// switched on, as if nothing had happened (Shoegzer); a request that cannot
// be carried out puts it straight back. Called from the menu's display
// callback too, so that Install Content starts there and then rather than
// when the menu is closed.
static bool s_install_switch_on = false;
static bool s_uninstall_switch_on = false;
static bool s_install_game_switch_on = false;
static bool s_uninstall_game_switch_on = false;

static void libretro_handle_install_requests()
{
	if (const char* v = libretro_get_option_value("cemu_install_titles"); v && libretro_iequals(v, "enabled") && !s_install_switch_on)
	{
		if (s_convert_mode.load())
			libretro_show_message(RETRO_LOG_WARN, 4000, "Not installing: a conversion or an install is still running");
		else if (!s_cafe_system_initialized)
			libretro_show_message(RETRO_LOG_WARN, 4000, "Not installing: the emulator has not started yet");
		else
		{
			s_install_switch_on = true;
			libretro_request_install();
		}
		if (!s_install_switch_on)
			libretro_set_option_value("cemu_install_titles", "disabled");
	}
	if (const char* v = libretro_get_option_value("cemu_uninstall_titles"); v && libretro_iequals(v, "enabled") && !s_uninstall_switch_on)
	{
		s_uninstall_switch_on = libretro_request_uninstall();
		if (!s_uninstall_switch_on)
			libretro_set_option_value("cemu_uninstall_titles", "disabled");
	}
	if (const char* v = libretro_get_option_value("cemu_install_game"); v && libretro_iequals(v, "enabled") && !s_install_game_switch_on)
	{
		if (s_convert_mode.load())
			libretro_show_message(RETRO_LOG_WARN, 4000, "Not installing: a conversion or an install is still running");
		else if (!s_cafe_system_initialized)
			libretro_show_message(RETRO_LOG_WARN, 4000, "Not installing: the emulator has not started yet");
		else
			s_install_game_switch_on = libretro_request_install_game();
		if (!s_install_game_switch_on)
			libretro_set_option_value("cemu_install_game", "disabled");
	}
	if (const char* v = libretro_get_option_value("cemu_uninstall_game"); v && libretro_iequals(v, "enabled") && !s_uninstall_game_switch_on)
	{
		s_uninstall_game_switch_on = libretro_request_uninstall_game();
		if (!s_uninstall_game_switch_on)
			libretro_set_option_value("cemu_uninstall_game", "disabled");
	}
}

// Uninstall Content off: its request is carried out once the title stops,
// at a close or a reset
static void libretro_reset_uninstall_switch()
{
	s_uninstall_switch_on = false;
	if (const char* v = libretro_get_option_value("cemu_uninstall_titles"); v && libretro_iequals(v, "enabled"))
		libretro_set_option_value("cemu_uninstall_titles", "disabled");
	s_uninstall_game_switch_on = false;
	if (const char* v = libretro_get_option_value("cemu_uninstall_game"); v && libretro_iequals(v, "enabled"))
		libretro_set_option_value("cemu_uninstall_game", "disabled");
}

// Both switches off: at the end of an install, when the game is closed, and
// at load, for a switch the frontend saved as on because it was closed while
// a request was still being carried out
static void libretro_reset_install_switches()
{
	s_install_switch_on = false;
	if (const char* v = libretro_get_option_value("cemu_install_titles"); v && libretro_iequals(v, "enabled"))
		libretro_set_option_value("cemu_install_titles", "disabled");
	s_install_game_switch_on = false;
	if (const char* v = libretro_get_option_value("cemu_install_game"); v && libretro_iequals(v, "enabled"))
		libretro_set_option_value("cemu_install_game", "disabled");
	libretro_reset_uninstall_switch();
}

static void libretro_publish_core_options(retro_environment_t cb, bool withReplacements = true);

// The account picked in the options, for the next title start; 0 for none.
static uint32 s_pending_account = 0;

// An account as the lists show it: its name and persistent id. The first
// account Cemu creates is named "default"; it is shown as Default.
static std::string libretro_account_label(const Account& account)
{
	std::string name = boost::nowide::narrow(std::wstring(account.GetMiiName()));
	if (name == "default")
		name = "Default";
	return fmt::format("{} ({:08x})", name, account.GetPersistentId());
}

// Neither the account picked for the next start nor the one in use now: the
// running title may still write to that one.
static bool libretro_account_removable(uint32 persistentId)
{
	return persistentId != s_pending_account && persistentId != GetConfig().account.m_persistent_id;
}

// cemu_log_thread_time; the logging itself is further down, next to retro_run.
static bool s_log_thread_time = false;

static void libretro_apply_core_options()
{
	libretro_handle_install_requests();

	// Create Account is a request, like the conversion switch: the account is
	// made, the lists are published again with it, Active Account is set to
	// it, and the switch goes back off.
	if (const char* v = libretro_get_option_value("cemu_create_account"); v && s_initialized && !strcmp(v, "enabled"))
	{
		uint32 persistentId = GetConfig().account.m_persistent_id;
		if (Account::HasFreeAccountSlots())
		{
			const uint32 newId = Account::GetNextPersistentId();
			const std::wstring name = fmt::format(L"Player {}", Account::GetAccounts().size() + 1);
			Account account(newId, name);
			if (const auto error = account.Save())
				libretro_log(RETRO_LOG_ERROR, "could not create the account: %s\n", error.message().c_str());
			else
			{
				libretro_log(RETRO_LOG_INFO, "created account %08x\n", newId);
				persistentId = newId;
			}
		}
		Account::RefreshAccounts();
		libretro_publish_core_options(environ_cb);
		libretro_set_option_value("cemu_account", fmt::format("{:08x}", persistentId).c_str());
		libretro_set_option_value("cemu_create_account", "disabled");
	}

	// The account the next title start runs as. The pick waits for that start
	// (libretro_prepare_and_launch_title): set at once, a running title's
	// saves would go to the new account from then on.
	if (const char* v = libretro_get_option_value("cemu_account"); v && s_initialized)
	{
		const uint32 persistentId = (uint32)strtoul(v, nullptr, 16);
		if (Account::GetAccount(persistentId).GetPersistentId() == persistentId && s_pending_account != persistentId)
		{
			s_pending_account = persistentId;
			// Remove an Account leaves out the picked account, so its list
			// follows the pick (Shoegzer: switched back to the first account,
			// the one picked before was still missing from it).
			libretro_publish_core_options(environ_cb);
		}
	}

	// Remove an Account is a request too: the account's folder goes, the list
	// is published again without it, and the option goes back to Nothing.
	if (const char* v = libretro_get_option_value("cemu_remove_account"); v && s_initialized && strcmp(v, "disabled") != 0)
	{
		const uint32 persistentId = (uint32)strtoul(v, nullptr, 16);
		if (Account::GetAccount(persistentId).GetPersistentId() == persistentId && libretro_account_removable(persistentId))
		{
			std::error_code ec;
			fs::remove_all(Account::GetFileName(persistentId).parent_path(), ec);
			if (ec)
				libretro_log(RETRO_LOG_ERROR, "could not remove account %08x: %s\n", persistentId, ec.message().c_str());
			else
				libretro_log(RETRO_LOG_INFO, "removed account %08x\n", persistentId);
			// And its saves, as the console deletes a user's: each title keeps
			// them in usr/save/<id high>/<id low>/user/<persistent id>.
			const std::string userDir = fmt::format("{:08x}", persistentId);
			const fs::path saveRoot = ActiveSettings::GetMlcPath("usr/save");
			int removedSaves = 0;
			for (const auto& high : fs::directory_iterator(saveRoot, ec))
			{
				std::error_code ecHigh;
				if (!high.is_directory(ecHigh) || high.path().filename() == "system")
					continue;
				std::error_code ecLow;
				for (const auto& low : fs::directory_iterator(high.path(), ecLow))
				{
					const fs::path dir = low.path() / "user" / userDir;
					std::error_code ecDir;
					if (fs::is_directory(dir, ecDir) && fs::remove_all(dir, ecDir) > 0 && !ecDir)
						removedSaves++;
				}
			}
			libretro_log(RETRO_LOG_INFO, "removed the save data of account %08x in %d titles\n", persistentId, removedSaves);
			Account::RefreshAccounts();
		}
		libretro_publish_core_options(environ_cb);
		libretro_set_option_value("cemu_remove_account", "disabled");
	}

	if (const char* v = libretro_get_option_value("cemu_rumble_strength"))
	{
		const int percent = std::clamp(atoi(v), 0, 100);
		s_rumble_strength.store((uint16_t)(percent * 0xFFFF / 100), std::memory_order_relaxed);
	}

	// The conversion switch is not a setting, it is a request, and it is acted
	// on here rather than remembered: the conversion starts in this same process
	// and the switch goes straight back off, so nothing about it is ever written
	// to the .opt file - there is no next run for it to survive into.
	// Without a destination the option is not declared (publish), and asking
	// RetroArch for it only puts "Invalid value" in its log (sco8487)
	if (!s_convert_mode.load() && !s_wua_destinations.empty())
	{
		if (const char* v = libretro_get_option_value("cemu_convert_to_wua"))
		{
			if (libretro_iequals(v, "enabled"))
			{
				libretro_set_option_value("cemu_convert_to_wua", "disabled");
				// Between the menu being drawn and the switch being acted on,
				// the destination may have gone - unmounted, filled up, or now
				// holding the .wua this would write. Ask again rather than
				// starting a conversion that cannot finish.
				libretro_collect_wua_destinations(true);
				if (s_wua_destinations.empty())
				{
					libretro_show_message(RETRO_LOG_ERROR, 6000,
						fmt::format("Cannot convert: {}", s_wua_unavailable_reason.empty()
							? std::string("no destination is available") : s_wua_unavailable_reason));
					libretro_update_convert_visibility();
					return;
				}
				libretro_request_conversion();
				return;
			}
		}
	}

	if (!environ_cb)
		return;

	auto& cfg = GetConfig();

	// Logging. Save logging is low-volume (a handful of lines per save) and is
	// the only view we have into a title's save path on someone else's device,
	// so it is always on. File-access logging is not: a title opens thousands
	// of files while loading, so it stays behind an option, for tracking down a
	// stuck save or a file the emulator cannot find.
	{
		uint64 logFlags = cfg.log_flag.GetValue() | cemuLog_getFlag(LogType::Save);
		if (const char* v = libretro_get_option_value("cemu_log_filesystem"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b) && b)
				logFlags |= cemuLog_getFlag(LogType::CoreinitFile);
		}
		// Thread synchronisation: what a title's thread is waiting on. The only
		// way to tell a title that stopped asking the emulator for anything -
		// a save that never starts, a loading screen that never ends - from one
		// that is merely slow, since a blocked thread makes no calls at all.
		if (const char* v = libretro_get_option_value("cemu_log_thread_sync"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b) && b)
			{
				logFlags |= cemuLog_getFlag(LogType::CoreinitThreadSync);
				logFlags |= cemuLog_getFlag(LogType::CoreinitThread);
			}
		}
		// System APIs: what a title asks the *system* for. A stuck save that makes
		// no FS call at all is usually waiting on something else - an error
		// dialog, the software keyboard, a Miiverse or ACP operation - and none
		// of that was traceable, because 240 of the emulator's ~1100 HLE exports
		// are registered as LogType::Placeholder, which is never enabled. This
		// covers those (now LogType::SysApi) plus the system modules that do have
		// a log type, without the per-frame coreinit traffic, so the log stays
		// small enough to attach to a bug report.
		if (const char* v = libretro_get_option_value("cemu_log_system_api"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b) && b)
			{
				logFlags |= cemuLog_getFlag(LogType::SysApi);
				logFlags |= cemuLog_getFlag(LogType::UnsupportedAPI);
				logFlags |= cemuLog_getFlag(LogType::APIErrors);
				logFlags |= cemuLog_getFlag(LogType::CoreinitLogging); // OSReport: the title's own output
				logFlags |= cemuLog_getFlag(LogType::ProcUi);
				logFlags |= cemuLog_getFlag(LogType::SWKBD);
				logFlags |= cemuLog_getFlag(LogType::NN_OLV);
				logFlags |= cemuLog_getFlag(LogType::NN_BOSS);
				logFlags |= cemuLog_getFlag(LogType::NN_SL);
				logFlags |= cemuLog_getFlag(LogType::NN_AOC);
				logFlags |= cemuLog_getFlag(LogType::NN_FP);
				logFlags |= cemuLog_getFlag(LogType::NN_PDM);
			}
		}
		// Texture memory: what the decoded textures are costing, and how much
		// of that is BC that the device could not sample. Its own switch
		// because it is the only way to answer that on a phone - the numbers
		// are meaningless from a desktop, where the fallback never runs. See
		// issue #22.
#ifdef ENABLE_VULKAN
		// The flag lives in the Vulkan renderer, which is where the narrow BC1
		// fallback is; a build without it has nothing to set.
		if (const char* v = libretro_get_option_value("cemu_bc1_16bit"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b))
				g_libretroNarrowBC1 = b;
		}
#endif
		if (const char* v = libretro_get_option_value("cemu_log_audio"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b))
				LibretroAudioAPI::SetStatsLogging(b);
		}

		if (const char* v = libretro_get_option_value("cemu_log_thread_time"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b))
				s_log_thread_time = b;
		}

		if (const char* v = libretro_get_option_value("cemu_log_texture_memory"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b) && b)
				logFlags |= cemuLog_getFlag(LogType::TextureCache);
		}
		// What a title asks padscore and vpad for, and what it is told. A
		// switch of its own rather than part of the system API one because
		// WPADRead and KPADRead are logged per call, so this is a line per
		// channel per frame - fine for the few seconds it takes to see whether
		// a title probed for a Wii Remote and what it found, which is the one
		// question a controller report cannot answer without it. See issue #24.
		if (const char* v = libretro_get_option_value("cemu_log_input_api"))
		{
			bool b;
			if (libretro_parse_enabled_disabled(v, b) && b)
				logFlags |= cemuLog_getFlag(LogType::InputAPI);
		}
		cemuLog_setActiveLoggingFlags(logFlags);

		// Where those lines end up. On is what it has always been - log.txt in
		// the user data folder - and off hands them to the frontend, which has
		// a log of its own and its own switch for writing that to disk.
		bool toFile = true;
		if (const char* v = libretro_get_option_value("cemu_dump_shaders"))
		{
			bool dump = false;
			libretro_parse_enabled_disabled(v, dump);
			if (dump)
			{
				// LatteShader_DumpShader writes into it without creating it.
				std::error_code ec;
				fs::create_directories(ActiveSettings::GetUserDataPath("dump/shaders"), ec);
			}
			ActiveSettings::EnableDumpShaders(dump);
		}
		if (const char* v = libretro_get_option_value("cemu_log_to_file"))
			libretro_parse_enabled_disabled(v, toFile);
		libretro_set_log_to_file(toFile);
	}

	// Cemu's own on-screen notifications cannot appear in this core at all, so
	// they are held off rather than offered as a setting.
	//
	// Both renderers refuse the imgui frame they would be drawn in.
	// OpenGLRenderer::ImguiBegin returns false on its first line under
	// ENABLE_LIBRETRO - there is no GL context on the GPU thread - and
	// VulkanRenderer::ImguiBegin gets there through AcquireNextSwapchainImage,
	// which fails because a core that presents into an image the frontend owns
	// has no swapchain. So nothing imgui ever reaches the screen either way.
	//
	// Leaving the position set only made LatteOverlay_wantsToDraw() say yes on
	// every presented frame, for an ImguiBegin that returns false. Disabled, it
	// says no and the call goes away.
	//
	// The notifications themselves are still worth having - the async shader
	// compile warning is the one that matters - but through the frontend's own
	// OSD, which is a different piece of work: forward
	// LatteOverlay_pushNotification to SET_MESSAGE_EXT.
	cfg.notification.position = ScreenPosition::kDisabled;

	if (const char* v = libretro_get_option_value("cemu_show_game_fps"))
	{
		bool b;
		if (libretro_parse_enabled_disabled(v, b))
			s_show_game_fps = b;
	}

	// Async shader compilation
	if (const char* v = libretro_get_option_value("cemu_async_shader_compile"))
	{
		bool b;
		if (libretro_parse_enabled_disabled(v, b))
			cfg.async_compile = b;
	}

	// GX2DrawDone sync
	if (const char* v = libretro_get_option_value("cemu_gx2drawdone_sync"))
	{
		bool b;
		if (libretro_parse_enabled_disabled(v, b))
			cfg.gx2drawdone_sync = b;
	}

	// Audio Channels: what AVM reports for the TV, and so what AX mixes for
	if (const char* v = libretro_get_option_value("cemu_audio_channels"))
	{
		if (libretro_iequals(v, "mono")) cfg.tv_channels = kMono;
		else if (libretro_iequals(v, "surround")) cfg.tv_channels = kSurround;
		else cfg.tv_channels = kStereo;
	}

	// Console language
	if (const char* v = libretro_get_option_value("cemu_console_language"))
	{
		auto lang = libretro_parse_console_language(v);
		if (lang.has_value())
			cfg.console_language = lang.value();
	}

	// Upscale filter
	if (const char* v = libretro_get_option_value("cemu_upscale_filter"))
	{
		if (libretro_iequals(v, "linear")) cfg.upscale_filter = kLinearFilter;
		else if (libretro_iequals(v, "bicubic")) cfg.upscale_filter = kBicubicFilter;
		else if (libretro_iequals(v, "bicubic_hermite")) cfg.upscale_filter = kBicubicHermiteFilter;
		else if (libretro_iequals(v, "nearest")) cfg.upscale_filter = kNearestNeighborFilter;
	}

	// Downscale filter
	if (const char* v = libretro_get_option_value("cemu_downscale_filter"))
	{
		if (libretro_iequals(v, "linear")) cfg.downscale_filter = kLinearFilter;
		else if (libretro_iequals(v, "bicubic")) cfg.downscale_filter = kBicubicFilter;
		else if (libretro_iequals(v, "bicubic_hermite")) cfg.downscale_filter = kBicubicHermiteFilter;
		else if (libretro_iequals(v, "nearest")) cfg.downscale_filter = kNearestNeighborFilter;
	}

	// Fullscreen Scaling was an option once, but did nothing here: the frame
	// handed over is the TV picture's own size, so there are no borders to keep
	// or stretch away - the aspect is RetroArch's (Video > Scaling).
	cfg.fullscreen_scaling = kKeepAspectRatio;

	// CPU mode & precompiled shaders (ActiveSettings overrides)
	const char* cpuModeValue = libretro_get_option_value("cemu_cpu_mode");
	ActiveSettings::SetLibretroCPUModeOverride(libretro_parse_cpu_mode(cpuModeValue));
	// Read once at game start by OSSchedulerBegin() and PPCRecompiler_init(), so a
	// change here only takes effect on the next content load.
	LaunchSettings::SetForceMultiCoreInterpreter(libretro_is_multicore_interpreter(cpuModeValue));
	ActiveSettings::SetLibretroPrecompiledShadersOverride(libretro_parse_precompiled_shaders(libretro_get_option_value("cemu_precompiled_shaders")));

	// Screen layouts
	libretro_read_screen_layout_options();
	if (const char* v = libretro_get_option_value("cemu_drc_position"))
		g_libretroDRCPositionSwapped = libretro_drc_iequals(v, "swapped");

	// Internal resolution, as a factor applied to screen-shaped render targets
	// (see g_libretroRenderScale). This used to write the chosen size into
	// WindowSystem's window size instead, which did nothing of the sort: that
	// size only feeds LatteRenderTarget_getScreenImageArea, the rectangle the
	// finished image is blitted into. Shrinking it would have drawn the frame
	// into a corner of the output rather than rendering fewer pixels, and
	// growing it did nothing at all - so the window stays at the output size
	// and the scale does the work.
	if (const char* v = libretro_get_option_value("cemu_internal_resolution"))
	{
		unsigned newWidth, newHeight;
		if (libretro_parse_internal_resolution(v, newWidth, newHeight))
		{
			extern float g_libretroRenderScale;
			extern uint32 g_libretroWantedHeight;
			extern void libretro_update_render_scale();
			g_libretroWantedHeight = newHeight;
			libretro_update_render_scale();
			s_wanted_out_width = newWidth;
			s_wanted_out_height = newHeight;
			if (log_cb && g_libretroRenderScale != 1.0f)
				libretro_log(RETRO_LOG_INFO, "rendering screen-sized targets at %ux%u (%.2fx)\n",
					newWidth, newHeight, g_libretroRenderScale);
		}
	}

	// Thread quantum

	libretro_apply_profile_options();

	// USB Device emulation
	if (const char* v = libretro_get_option_value("cemu_emulate_skylander_portal"))
	{
		bool enabled;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_skylander_portal = enabled;
	}
	if (const char* v = libretro_get_option_value("cemu_emulate_infinity_base"))
	{
		bool enabled;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_infinity_base = enabled;
	}
	if (const char* v = libretro_get_option_value("cemu_emulate_dimensions_toypad"))
	{
		bool enabled;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_dimensions_toypad = enabled;
	}
}

static void libretro_publish_core_options(retro_environment_t cb, bool withReplacements);

RETRO_API void retro_set_environment(retro_environment_t cb)
{
	environ_cb = cb;

	// Set up logging first so everything below can report what it got
	struct retro_log_callback logging;
	if (cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &logging))
		log_cb = logging.log;

	// A refusal keeps what an earlier call got. RetroArch calls
	// retro_set_environment again whenever it reads the system info - first
	// with a callback that answers almost nothing, then with its own while
	// ignoring every request - and clearing the interface there left the core
	// without rumble for good: the game turned the motor on, nothing vibrated.
	{
		struct retro_rumble_interface rumble{};
		if (cb(RETRO_ENVIRONMENT_GET_RUMBLE_INTERFACE, &rumble) && rumble.set_rumble_state)
			s_rumble_cb = rumble.set_rumble_state;
	}

	// Ask for the frontend's file system before anything else looks at a path.
	// On Android the Play Store build reaches storage through SAF, so the path
	// handed to retro_load_game is a content:// URI that no open() will take -
	// only the frontend can turn it into a readable file. Ask for the newest
	// interface and walk down: v5 reports whether a path is read-only, v3 brings
	// stat, v2 truncate, and VFSFileStream keeps to whichever version answers.
	{
		static const uint32_t vfs_versions[] = { 5, 4, 3, 2, 1 };
		// No cap. It sat at 3 because a v5 interface appeared to fault in
		// LatteShaderCache_Load, and that was wrong: the runs it was drawn from
		// never reached retro_load_game at all, for a reason outside this core.
		// v1 through v5 have since been walked one after another against a v5
		// frontend and all five load the same title, so what the frontend
		// actually has is what to take. CEMU_VFS_MAX_VERSION still pins a
		// version for debugging.
		uint32_t maxVersion = 5;
		if (const char* pin = getenv("CEMU_VFS_MAX_VERSION"))
		{
			const int v = atoi(pin);
			if (v >= 1 && v <= 5)
				maxVersion = (uint32_t)v;
		}
		for (uint32_t wanted : vfs_versions)
		{
			if (wanted > maxVersion)
				continue;
			struct retro_vfs_interface_info vfs_info{};
			vfs_info.required_interface_version = wanted;
			vfs_info.iface = nullptr;
			if (cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_info) && vfs_info.iface)
			{
				// What we hold is the interface we asked for, not whatever the
				// frontend reports it is capable of. Taking the larger of the
				// two was wrong twice over: it recorded a version whose
				// functions this interface may not have, and it made the log
				// line say v5 for a v3 negotiation, which hid exactly that
				// while it was being investigated.
				const uint32_t version = wanted;
				VFSFileStream::SetVFSInterface(vfs_info.iface, version);
				libretro_log(RETRO_LOG_INFO, "using the frontend's VFS interface (v%u)\n", version);
				break;
			}
		}
		if (!VFSFileStream::UsesVFS() && log_cb)
			libretro_log(RETRO_LOG_INFO, "no VFS interface offered, reading files directly\n");
	}

	// Declare that we need a game file
	bool no_game = false;
	cb(RETRO_ENVIRONMENT_SET_SUPPORT_NO_GAME, &no_game);

	// What each port can be, for the frontend's own device menu (RetroArch:
	// Controls > Port N > Device Type). Port 1 is the GamePad unless it is set
	// to the Pro Controller; the rest start empty and the user plugs in what a
	// title asks for.
	{
		static const struct retro_controller_description port1[] = {
			{"Wii U GamePad", RETRO_DEVICE_JOYPAD},
			{"Wii U GamePad + Wii Remote", RETRO_DEVICE_GAMEPAD_WIIMOTE},
			{"Wii U GamePad + Wii Remote (sideways)", RETRO_DEVICE_GAMEPAD_WIIMOTE_SIDEWAYS},
			{"Wii U Pro Controller", RETRO_DEVICE_PRO},
		};
		static const struct retro_controller_description wpad[] = {
			{"None", RETRO_DEVICE_NONE},
			{"Wii Remote", RETRO_DEVICE_WIIMOTE},
			{"Wii Remote (sideways)", RETRO_DEVICE_WIIMOTE_SIDEWAYS},
			{"Wii U Pro Controller", RETRO_DEVICE_PRO},
			{"Classic Controller", RETRO_DEVICE_CLASSIC},
		};
		static const struct retro_controller_info ports[] = {
			{port1, (unsigned)std::size(port1)},
			{wpad, (unsigned)std::size(wpad)},
			{wpad, (unsigned)std::size(wpad)},
			{wpad, (unsigned)std::size(wpad)},
			{nullptr, 0},
		};
		static_assert(std::size(ports) == kLibretroMaxPorts + 1);
		cb(RETRO_ENVIRONMENT_SET_CONTROLLER_INFO, (void*)ports);
	}

	// Set up core options (matching danprice/Cemu-Libretro Windows core where applicable)
	libretro_publish_core_options(cb);

	{
		struct retro_core_options_update_display_callback update_display{libretro_update_options_display};
		cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_UPDATE_DISPLAY_CALLBACK, &update_display);
	}
}

// Published from retro_set_environment, and again from retro_load_game once
// the destinations for a conversion are known - the option list carries them,
// and they depend on the content.
//
// The definitions themselves live in libretro_core_options.h, in the layout
// libretro's Crowdin scripts read: that is where the English texts are taken
// from for translation, and where libretro_core_options_intl.h - the
// translations - is generated next to. libretro_set_core_options there picks
// the frontend's language and falls back to v1 or the flat v0 list for a
// frontend that does not speak v2.
// Graphic packs as core options, the way FBNeo lists a game's DIP switches:
// when content is loaded, the packs for that title become options in their
// own category. Each pack has an Enabled/Disabled switch, off unless the pack
// enables itself - standalone's checkbox - and one option per preset group,
// shown while the pack is on and while the group has presets the other
// choices leave visible (a pack's "Advanced Settings" mode shows another set
// of presets than its normal one). Cemu activates packs when a title starts,
// so a change applies at the next load.
//
// The choices live in the .opt file only. RetroArch rewrites it keeping keys
// the loaded content does not declare, so what was picked for a game is still
// there when it is loaded again after another one; settings.xml is not used.
// The keys start with cemu_zgp_ because RetroArch writes the .opt file sorted
// by key, and this puts the part that grows with every game after the rest.
//
// A pack in customGraphicPacks that replaces a bundled one has keys of its
// own: it may have other presets than the pack it replaces. The replaced
// pack's options are still declared, hidden, so what was picked for it stays
// in the .opt file and comes back if the replacement is removed; a replacement
// seen for the first time starts from those values where it has them.
struct LibretroPackOption
{
	std::string key;
	std::string folder;      // the pack's folder under graphicPacks or customGraphicPacks
	bool custom;             // the pack is in customGraphicPacks
	bool replaced;           // a bundled pack a custom one replaces: declared, hidden, not loaded
	std::string originalKey; // for a replacement, the same option of the pack it replaces
	std::string category;    // preset group, empty for packs with a single one
	bool controlsEnable;     // the pack's Enabled/Disabled switch
	std::vector<std::string> presets;
	bool setsResolution;     // the pack resizes the game's render targets
	// The pack as loaded when the options were collected: a copy of its own,
	// not the one the running title uses, to work out which preset groups
	// the current choices leave visible.
	std::shared_ptr<GraphicPack2> pack;
};
static std::vector<LibretroPackOption> s_pack_options;
static std::deque<std::string> s_pack_option_strings;
static std::vector<retro_core_option_v2_definition> s_pack_option_defs;

// The packs the core offers: the ones compiled into it, unpacked into
// graphicPacks, and the user's own in customGraphicPacks. A folder with a
// rules.txt in customGraphicPacks takes the place of the one at the same path
// in graphicPacks - nothing of that one is loaded - so a pack developer's
// changes to a game survive the bundled set being replaced by a core update.
// withReplaced loads the replaced ones as well, only so that their options
// can be declared (see LibretroPackOption).
// Graphic pack entries in settings.xml, from standalone Cemu, play no part.
static void libretro_load_graphic_packs(bool withReplaced = false)
{
	GraphicPack2::ClearGraphicPacks();
	GetConfigHandle().data().graphic_pack_entries.clear();

	const auto packFolders = [](const fs::path& base) {
		std::vector<fs::path> folders;
		std::error_code ec;
		for (fs::recursive_directory_iterator it(base, fs::directory_options::follow_directory_symlink | fs::directory_options::skip_permission_denied, ec), end;
			!ec && it != end; it.increment(ec))
		{
			if (!it->is_directory(ec) || !fs::exists(it->path() / "rules.txt", ec))
				continue;
			folders.push_back(it->path());
			it.disable_recursion_pending(); // a pack's own subfolders are not packs
		}
		return folders;
	};

	const fs::path bundledBase = ActiveSettings::GetUserDataPath("graphicPacks");
	const fs::path customBase = ActiveSettings::GetUserDataPath("customGraphicPacks");
	const std::vector<fs::path> custom = packFolders(customBase);
	std::set<std::string> customPaths;
	for (const fs::path& folder : custom)
		customPaths.insert(_pathToUtf8(folder.lexically_relative(customBase).lexically_normal()));

	for (const fs::path& folder : packFolders(bundledBase))
	{
		const std::string relative = _pathToUtf8(folder.lexically_relative(bundledBase).lexically_normal());
		if (customPaths.count(relative) && !withReplaced)
		{
			// Also to the frontend's log: this runs before the title starts, and
			// log.txt only keeps what comes after that
			cemuLog_log(LogType::Force, "graphic packs: customGraphicPacks/{} replaces the bundled pack", relative);
			libretro_log(RETRO_LOG_INFO, "graphic packs: customGraphicPacks/%s replaces the bundled pack\n", relative.c_str());
			continue;
		}
		GraphicPack2::LoadGraphicPack(folder);
	}
	for (const fs::path& folder : custom)
		GraphicPack2::LoadGraphicPack(folder);
}

// A pack is identified by its folder relative to graphicPacks or
// customGraphicPacks, as upstream Cemu identifies it in settings.xml by the
// path of its rules.txt. The path = line in rules.txt is not an identity: it
// is where the pack sits in the graphic pack window's tree. A replacement in
// customGraphicPacks sits at the same relative folder as the pack it replaces.
static std::string libretro_pack_folder(const GraphicPack2& gp, bool* custom = nullptr)
{
	const fs::path folder = gp.GetRulesPath().parent_path().lexically_normal();
	for (const char* base : {"customGraphicPacks", "graphicPacks"})
	{
		const fs::path relative = folder.lexically_relative(ActiveSettings::GetUserDataPath(base).lexically_normal());
		if (!relative.empty() && *relative.begin() != "..")
		{
			if (custom)
				*custom = strcmp(base, "customGraphicPacks") == 0;
			return _pathToUtf8(relative.generic_string());
		}
	}
	if (custom)
		*custom = false;
	return _pathToUtf8(folder.generic_string());
}

static std::string libretro_pack_option_key(const std::string& folder, const std::string& category, bool custom)
{
	uint64 hash = 0xcbf29ce484222325ULL; // FNV-1a
	for (const char c : std::string(custom ? "custom\x1f" : "") + folder + '\x1f' + category)
	{
		hash ^= (uint8)c;
		hash *= 0x100000001b3ULL;
	}
	return fmt::format("cemu_zgp_{:016x}", hash);
}

static void libretro_collect_pack_options(const std::string& gamePath)
{
	s_pack_options.clear();
	s_pack_option_strings.clear();
	s_pack_option_defs.clear();

	// Reading the title decrypts it, and the crypto is set up by CemuCommonInit
	// only in the first retro_run; both calls are idempotent
	KeyCache_Prepare();
	AES128_init();
	// and it mounts the title, in the emulator's file system that
	// CafeSystem::Initialize sets up at the first launch in this process
	if (!s_cafe_system_initialized)
		fsc_init();
	TitleInfo title{_utf8ToPath(gamePath)};
	if (!title.IsValid())
		return;
	const TitleId titleId = TitleIdParser::MakeBaseTitleId(title.GetAppTitleId());

	libretro_load_graphic_packs(true);

	auto keep = [](std::string value) -> const char* {
		s_pack_option_strings.push_back(std::move(value));
		return s_pack_option_strings.back().c_str();
	};

	std::set<std::string> customFolders;
	for (const auto& gp : GraphicPack2::GetGraphicPacks())
	{
		bool custom = false;
		const std::string folder = libretro_pack_folder(*gp, &custom);
		if (custom)
			customFolders.insert(folder);
	}

	for (const auto& gp : GraphicPack2::GetGraphicPacks())
	{
		if (gp->IsUniversal() || !gp->ContainsTitleId(titleId))
			continue;
		bool custom = false;
		const std::string folder = libretro_pack_folder(*gp, &custom);
		const bool replaced = !custom && customFolders.count(folder);
		const bool replacement = custom && fs::exists(ActiveSettings::GetUserDataPath("graphicPacks") / _utf8ToPath(folder) / "rules.txt");

		std::vector<std::string> order;
		auto categorized = gp->GetCategorizedPresets(order);
		const bool enabled = gp->IsDefaultEnabled(); // workarounds enable themselves

		// Texture rules are only parsed when a pack is activated, so a
		// resolution pack is told apart by what its rules.txt redefines
		bool setsResolution = false;
		{
			if (const auto text = FileStream::LoadIntoMemory(gp->GetRulesPath()))
			{
				std::string lower(text->begin(), text->end());
				std::transform(lower.begin(), lower.end(), lower.begin(), [](unsigned char c) { return (char)std::tolower(c); });
				setsResolution = lower.find("overwritewidth") != std::string::npos;
			}
		}

		// Cheats get a submenu of their own rather than coming first among the
		// graphic packs: a pack whose path is "<game>/Cheats/..."
		const std::string& virtualPath = gp->GetVirtualPath();
		const size_t firstSlash = virtualPath.find('/');
		const bool cheat = firstSlash != std::string::npos && virtualPath.compare(firstSlash + 1, 7, "Cheats/") == 0;

		// A pack without presets keeps the key its one option always had; a
		// pack with presets has its switch under a key no preset group can
		// have, since the group without a name uses the plain one
		const std::string enableCategory = order.empty() ? std::string() : std::string("\x1e" "enabled");

		auto addOption = [&](const std::string& category, bool controlsEnable, std::vector<std::string> presets) {
			const std::string keyCategory = controlsEnable ? enableCategory : category;
			LibretroPackOption option{libretro_pack_option_key(folder, keyCategory, custom), folder, custom, replaced,
				replacement ? libretro_pack_option_key(folder, keyCategory, false) : std::string(),
				category, controlsEnable, std::move(presets), setsResolution, gp};

			retro_core_option_v2_definition def{};
			def.key = keep(option.key);
			// The name from the pack's [Definition]: the options are the loaded
			// game's already, so the game in the path adds nothing
			const std::string name = controlsEnable ? gp->GetName() :
				fmt::format("{}: {}", gp->GetName(), category.empty() ? std::string("Preset") : category);
			def.desc = keep(name);
			def.desc_categorized = def.desc;
			def.info = gp->GetDescription().empty() ? nullptr : keep(gp->GetDescription());
			def.category_key = cheat ? "cheats" : "graphic_packs";

			size_t n = 0;
			if (controlsEnable)
			{
				def.values[n++] = {"disabled", "Disabled"};
				def.values[n++] = {"enabled", "Enabled"};
			}
			for (const std::string& preset : option.presets)
			{
				if (n + 1 >= RETRO_NUM_CORE_OPTION_VALUES_MAX)
					break;
				def.values[n].value = keep(preset);
				def.values[n].label = nullptr;
				n++;
			}
			def.values[n] = {nullptr, nullptr};

			if (controlsEnable)
				def.default_value = enabled ? "enabled" : "disabled";
			else
			{
				const std::string active = gp->GetActivePreset(category);
				const bool known = std::find(option.presets.begin(), option.presets.end(), active) != option.presets.end();
				def.default_value = keep(known ? active : option.presets.front());
			}

			s_pack_options.push_back(std::move(option));
			s_pack_option_defs.push_back(def);
		};

		addOption("", true, {});
		for (size_t i = 0; i < order.size(); i++)
		{
			// A group can list a name more than once, for presets shown under
			// different conditions; the option offers the name once and the
			// visible one of them is picked (libretro_select_pack_presets)
			std::vector<std::string> names;
			for (const auto& preset : categorized[order[i]])
				if (std::find(names.begin(), names.end(), preset->name) == names.end())
					names.push_back(preset->name);
			addOption(order[i], false, std::move(names));
		}
	}
	libretro_log(RETRO_LOG_INFO, "%u graphic pack options for title %016llx\n", (unsigned)s_pack_options.size(), (unsigned long long)titleId);

	// What collecting needed the replaced packs for is done
	libretro_load_graphic_packs();
}

// A replacement seen for the first time starts from what was picked for the
// pack it replaces, where it has that value, and disabled otherwise. The
// frontend only answers for declared keys, and it saves every declared key
// the moment the options are declared again, so this runs between a first
// declaration without the replacements and the one with them.
static void libretro_default_replacements_to_originals()
{
	for (size_t i = 0; i < s_pack_options.size(); i++)
	{
		const LibretroPackOption& option = s_pack_options[i];
		if (option.originalKey.empty())
			continue;
		retro_core_option_v2_definition& def = s_pack_option_defs[i];
		const char* original = libretro_get_option_value(option.originalKey.c_str());
		bool known = false;
		for (size_t v = 0; original && def.values[v].value; v++)
		{
			if (strcmp(def.values[v].value, original) == 0)
			{
				def.default_value = def.values[v].value;
				known = true;
				break;
			}
		}
		if (!known && option.controlsEnable)
			def.default_value = "disabled";
	}
}

// Selects in gp the presets that one pack's options name. A group can hold
// presets of the same name under different conditions - FPS++ has a set of
// FPS limits for its normal mode and another for its advanced one - and
// SetActivePreset takes the first of that name, visible or not; Cemu then
// drops an invisible selection for the group's default, which is how a
// choice came out as something else (NNshi). So once the choices are in,
// each group whose selection is hidden moves to the visible preset of the
// same name, until the choices stop moving one another.
static void libretro_select_pack_presets(GraphicPack2& gp, const LibretroPackOption& enableOption)
{
	std::vector<const LibretroPackOption*> groups;
	for (const LibretroPackOption& option : s_pack_options)
		if (!option.controlsEnable && option.pack == enableOption.pack)
			groups.push_back(&option);

	for (const LibretroPackOption* group : groups)
		if (const char* value = libretro_get_option_value(group->key.c_str()))
			gp.SetActivePreset(group->category, value, false);

	for (int pass = 0; pass < 4; pass++)
	{
		gp.UpdatePresetVisibility();
		std::vector<std::string> order;
		auto categorized = gp.GetCategorizedPresets(order);
		bool moved = false;
		for (const LibretroPackOption* group : groups)
		{
			const char* value = libretro_get_option_value(group->key.c_str());
			if (!value)
				continue;
			auto& presets = categorized[group->category];
			const auto active = std::find_if(presets.begin(), presets.end(), [](const auto& p) { return p->active; });
			if (active == presets.end() || (*active)->visible)
				continue;
			const auto visible = std::find_if(presets.begin(), presets.end(),
				[value](const auto& p) { return p->visible && p->name == value; });
			if (visible == presets.end())
				continue;
			(*active)->active = false;
			(*visible)->active = true;
			moved = true;
		}
		if (!moved)
			break;
	}
	gp.UpdatePresetVisibility();
	gp.ValidatePresetSelections();
}

// Replaced packs are never shown. A pack's preset groups are shown while the
// pack is on, and while the choices made leave the group a visible preset,
// as standalone hides a group its other choices rule out.
static void libretro_update_pack_visibility()
{
	if (!environ_cb)
		return;
	for (const LibretroPackOption& enableOption : s_pack_options)
	{
		if (!enableOption.controlsEnable)
			continue;
		const char* value = libretro_get_option_value(enableOption.key.c_str());
		const bool on = !enableOption.replaced && value && strcmp(value, "disabled") != 0;

		std::unordered_map<std::string, std::vector<GraphicPack2::PresetPtr>> categorized;
		if (on && enableOption.pack)
		{
			libretro_select_pack_presets(*enableOption.pack, enableOption);
			std::vector<std::string> order;
			categorized = enableOption.pack->GetCategorizedPresets(order);
		}

		for (const LibretroPackOption& option : s_pack_options)
		{
			if (option.pack != enableOption.pack)
				continue;
			bool show = !option.replaced;
			if (!option.controlsEnable)
			{
				const auto& presets = categorized[option.category];
				show = on && std::any_of(presets.begin(), presets.end(), [](const auto& p) { return p->visible; });
			}
			struct retro_core_option_display display{option.key.c_str(), show};
			environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &display);
		}
	}
}

// The generic Internal Resolution option is a fallback for games without a
// resolution pack; with one enabled the pack decides, so the option goes.
static void libretro_update_resolution_visibility()
{
	if (!environ_cb)
		return;
	bool packSetsResolution = false;
	for (const LibretroPackOption& option : s_pack_options)
	{
		if (!option.controlsEnable || !option.setsResolution || option.replaced)
			continue;
		const char* value = libretro_get_option_value(option.key.c_str());
		if (value && strcmp(value, "disabled") != 0)
			packSetsResolution = true;
	}
	struct retro_core_option_display display{"cemu_internal_resolution", !packSetsResolution};
	environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_DISPLAY, &display);
}

// Sets each of the title's packs the way its options say.
static void libretro_apply_pack_options()
{
	if (s_pack_options.empty())
		return;

	for (const LibretroPackOption& option : s_pack_options)
	{
		if (!option.controlsEnable || option.replaced)
			continue; // a replaced pack is not loaded; its replacement has options of its own
		const char* value = libretro_get_option_value(option.key.c_str());
		if (!value)
			continue;
		const bool enable = strcmp(value, "disabled") != 0;

		for (const auto& gp : GraphicPack2::GetGraphicPacks())
		{
			bool custom = false;
			if (libretro_pack_folder(*gp, &custom) != option.folder || custom != option.custom)
				continue;
			gp->SetEnabled(enable);
			if (enable)
				libretro_select_pack_presets(*gp, option);
		}
	}

	for (const auto& gp : GraphicPack2::GetGraphicPacks())
	{
		gp->UpdatePresetVisibility();
		gp->ValidatePresetSelections();
	}
}

// Loads the packs and sets them up for the title about to start: the ones
// that enable themselves (workarounds), then the title's pack options. Run at
// launch and again at a reset, so a pack changed in the options applies on
// Reset as well as on the next load.
static void libretro_setup_graphic_packs()
{
	libretro_load_graphic_packs();
	for (auto& gp : GraphicPack2::GetGraphicPacks())
	{
		if (gp->IsDefaultEnabled() && !gp->IsEnabled())
			gp->SetEnabled(true);
	}
	libretro_apply_pack_options();
	libretro_log(RETRO_LOG_INFO, "Loaded %d graphic packs\n", (int)GraphicPack2::GetGraphicPacks().size());
}

static void libretro_publish_core_options(retro_environment_t cb, bool withReplacements)
{
	// Only the conversion pair is decided here, and option_defs_us outlives
	// this call, so every call starts from the array as written: a key dropped
	// or a list filled in last time must not stick.
	static const std::vector<struct retro_core_option_v2_definition> pristine(
		std::begin(option_defs_us), std::end(option_defs_us));
	std::copy(pristine.begin(), pristine.end(), option_defs_us);

	// The frontend copies what it needs, but nothing here promises when, so
	// the strings stay in the deque.
	static std::deque<std::string> storage;
	auto keep = [](std::string value) -> const char* {
		storage.push_back(std::move(value));
		return storage.back().c_str();
	};

	// Accounts: the ones on the emulated storage, which is only there once
	// retro_init has set up the paths. Before that the option is not declared
	// at all - declared with only the first account, the frontend would write
	// that over a choice of another one in the .opt file.
	const bool accountsKnown = s_initialized;
	for (struct retro_core_option_v2_definition& def : option_defs_us)
	{
		if (!def.key || strcmp(def.key, "cemu_account") != 0 || !accountsKnown)
			continue;
		size_t index = 0;
		for (const Account& account : Account::RefreshAccounts())
		{
			if (index + 2 >= RETRO_NUM_CORE_OPTION_VALUES_MAX)
				break;
			def.values[index].value = keep(fmt::format("{:08x}", account.GetPersistentId()));
			def.values[index].label = keep(libretro_account_label(account));
			++index;
		}
		def.values[index] = {nullptr, nullptr};
		break;
	}
	for (struct retro_core_option_v2_definition& def : option_defs_us)
	{
		if (!def.key || strcmp(def.key, "cemu_remove_account") != 0 || !accountsKnown)
			continue;
		size_t index = 0;
		def.values[index++] = {"disabled", nullptr};
		for (const Account& account : Account::GetAccounts())
		{
			if (index + 1 >= RETRO_NUM_CORE_OPTION_VALUES_MAX)
				break;
			if (!libretro_account_removable(account.GetPersistentId()))
				continue;
			def.values[index].value = keep(fmt::format("{:08x}", account.GetPersistentId()));
			def.values[index].label = keep(libretro_account_label(account));
			++index;
		}
		def.values[index] = {nullptr, nullptr};
		break;
	}

	for (struct retro_core_option_v2_definition& def : option_defs_us)
	{
		if (!def.key || strcmp(def.key, "cemu_wua_output_dir") != 0)
			continue;

		// An option the core declares is an option the frontend writes into
		// its .opt file, so with nothing to convert to the pair is not
		// declared at all - hiding them would still leave their names behind
		// in there. They are the last two definitions, so ending the list here
		// drops both and nothing else.
		if (s_wua_destinations.empty())
		{
			def.key = nullptr;
			break;
		}

		// The output directory is whatever the frontend turned out to allow,
		// so its values are built here rather than written in the header.
		size_t index = 0;
		for (const LibretroWuaDestination& destination : s_wua_destinations)
		{
			if (index + 1 >= RETRO_NUM_CORE_OPTION_VALUES_MAX)
				break;
			def.values[index].value = keep(destination.path);
			def.values[index].label = keep(destination.hasExisting
				? fmt::format("{} ({}) - overwrites", destination.label, destination.path)
				: fmt::format("{} ({})", destination.label, destination.path));
			++index;
		}
		def.values[index] = {nullptr, nullptr};
		def.default_value = def.values[0].value;
		break;
	}

	// The fixed options, then the loaded title's graphic packs, then Logging.
	// RetroArch lists the categories in the order their first option comes
	// in, not in the order of the category table, so Logging goes last by
	// coming last here - after the packs, which are only known at run time.
	static std::vector<struct retro_core_option_v2_definition> all;
	all.clear();
	std::vector<struct retro_core_option_v2_definition> logging;
	for (const struct retro_core_option_v2_definition& def : option_defs_us)
	{
		if (!def.key)
			break;
		if (!accountsKnown && (!strcmp(def.key, "cemu_account") || !strcmp(def.key, "cemu_create_account") || !strcmp(def.key, "cemu_remove_account")))
			continue;
		if (def.category_key && !strcmp(def.category_key, "logging"))
			logging.push_back(def);
		else
			all.push_back(def);
	}
	for (size_t i = 0; i < s_pack_option_defs.size(); i++)
		if (withReplacements || s_pack_options[i].originalKey.empty())
			all.push_back(s_pack_option_defs[i]);
	all.insert(all.end(), logging.begin(), logging.end());
	all.push_back({});
	options_us.definitions = all.data();

	bool categories_supported = false;
	libretro_set_core_options(cb, &categories_supported);
}

RETRO_API void retro_set_video_refresh(retro_video_refresh_t cb) { video_cb = cb; }
// Audio goes out in batches only (LibretroAudioAPI::FlushAudio), so the
// single-sample callback is not kept.
RETRO_API void retro_set_audio_sample(retro_audio_sample_t) {}
RETRO_API void retro_set_audio_sample_batch(retro_audio_sample_batch_t cb) { audio_batch_cb = cb; }
RETRO_API void retro_set_input_poll(retro_input_poll_t cb) { input_poll_cb = cb; }
RETRO_API void retro_set_input_state(retro_input_state_t cb) { input_state_cb = cb; }

RETRO_API void retro_init()
{
	if (s_initialized)
		return;

	// Breadcrumbs through the frontend's log rather than Cemu's. Cemu's log.txt
	// does not exist until the paths below are set up, so a core that dies in
	// here leaves nothing behind at all - which is exactly what jacklavin saw
	// when it started crashing at core selection, before any content.
	libretro_log(RETRO_LOG_INFO, "retro_init: start (%s)\n", BUILD_VERSION_WITH_NAME_STRING);

	LibretroAudioAPI::SetAudioCallback([](const int16_t* data, size_t frames) -> size_t {
		if (s_audio_submission_allowed && audio_batch_cb && data && frames > 0)
			return audio_batch_cb(data, frames);
		return 0;
	});

	libretro_log(RETRO_LOG_INFO, "retro_init: resolving paths\n");
	libretro_init_paths();

	// settings.xml is not read: the core starts from Cemu's defaults, and what
	// the user sets comes from the core options (the .opt file) alone. Reading
	// it let a standalone install's settings.xml, or one left over from an
	// older build of the core, decide things no option showed and contradict
	// the ones that did. Nothing saves it either.
	GetConfig().SetMLCPath(s_mlc_path, false);
	cemuLog_log(LogType::Force, "mlc01: {}", _pathToUtf8(ActiveSettings::GetMlcPath()));
	libretro_create_default_mlc_files(ActiveSettings::GetMlcPath());

	// Where updates and DLC go. Neither is content the frontend can hand over:
	// an update mounts over the base title's /vol/content and a DLC mounts as
	// /vol/aoc, and both are chosen by title id out of the title list rather
	// than by the path that was loaded. So the only thing a core without a file
	// browser is missing is a place to put them, and this is it - scanned like
	// any of Cemu's own game paths, which means it takes an update in the raw
	// NUS form it is downloaded in (.app and .h3 files next to title.tmd and
	// title.tik) as well as an unpacked code/content/meta folder, and it
	// descends into subdirectories, so one folder per update or DLC is fine.
	//
	// Nothing is copied anywhere: the files stay where the user put them, which
	// for a title update is several gigabytes not written twice.
	{
		std::error_code ec;
		const fs::path extraTitles = ActiveSettings::GetUserDataPath("titles");
		fs::create_directories(extraTitles, ec);
		const std::string extraTitlesUtf8 = _pathToUtf8(extraTitles);
		auto& gamePaths = GetConfig().game_paths;
		if (std::find(gamePaths.begin(), gamePaths.end(), extraTitlesUtf8) == gamePaths.end())
			gamePaths.emplace_back(extraTitlesUtf8);
		cemuLog_log(LogType::Force, "updates and DLC: {}", extraTitlesUtf8);
	}

	libretro_log(RETRO_LOG_INFO, "retro_init: choosing the graphics API\n");

	// Select graphics API based on core option
#ifdef ENABLE_OPENGL
	s_graphics_api = SelectedGraphicsAPI::OpenGL;
#else
	// Android and macOS build without the OpenGL backend (see ENABLE_OPENGL in
	// CMakeLists.txt), so Vulkan is the only renderer this core has. Defaulting
	// to OpenGL there left retro_load_game setting up no renderer at all while
	// still reporting success: the game never booted, nothing was ever logged,
	// and the frontend was left presenting a core that never hands it a frame.
	s_graphics_api = SelectedGraphicsAPI::Vulkan;
#endif
#ifdef ENABLE_VULKAN
	bool useVulkan = (s_graphics_api == SelectedGraphicsAPI::Vulkan);
#ifdef ENABLE_OPENGL
	if (const char* v = libretro_get_option_value("cemu_gpu_api"))
		useVulkan = libretro_iequals(v, "vulkan");
#endif
	if (useVulkan)
	{
		if (InitializeGlobalVulkan() && g_vulkan_available)
		{
			s_graphics_api = SelectedGraphicsAPI::Vulkan;
			GetConfig().graphic_api = kVulkan;
			libretro_log(RETRO_LOG_INFO, "Vulkan graphics API selected\n");
		}
		else
		{
			s_graphics_api = SelectedGraphicsAPI::OpenGL;
			libretro_log(RETRO_LOG_WARN, "Vulkan not available, falling back to OpenGL\n");
		}
	}
#endif
	if (s_graphics_api == SelectedGraphicsAPI::OpenGL)
		GetConfig().graphic_api = kOpenGL;

	libretro_log(RETRO_LOG_INFO, "retro_init: activating settings\n");
	ActiveSettings::Init();

	// Set system implementation
	CafeSystem::SetImplementation(&s_systemImpl);

	s_initialized = true;
	libretro_log(RETRO_LOG_INFO, "retro_init: done\n");
}

// retro_deinit is defined after retro_unload_game

RETRO_API unsigned retro_api_version()
{
	return RETRO_API_VERSION;
}

RETRO_API void retro_get_system_info(struct retro_system_info* info)
{
	info->library_name = "Cemu";
	info->library_version = "2.6-356-gaa20e2f8";
	info->need_fullpath = true;
	// tmd: NUS/WUP dumps are a directory of .app files next to a title.tmd,
	// and pointing the core at that title.tmd loads the title.
	info->valid_extensions = "wud|wux|wua|iso|rpx|elf|tmd";
	info->block_extract = false;
}

RETRO_API void retro_get_system_av_info(struct retro_system_av_info* info)
{
	// The frontend asks for this right after retro_load_game, before the core
	// options are applied in the first retro_run - so read the output size
	// the option asks for here, as the geometry has to say it from the start.
	if (!s_out_size_taken)
		if (const char* v = libretro_get_option_value("cemu_internal_resolution"))
		{
			unsigned w, h;
			if (libretro_parse_internal_resolution(v, w, h))
			{
				s_wanted_out_width = w;
				s_wanted_out_height = h;
			}
		}
	info->geometry.base_width = s_reported_out_width = libretro_out_width();
	info->geometry.base_height = s_reported_out_height = libretro_out_height();
	info->geometry.max_width = std::max(s_max_out_width, info->geometry.base_width);
	info->geometry.max_height = std::max(s_max_out_height, info->geometry.base_height);
	info->geometry.aspect_ratio = 16.0f / 9.0f;
	if (!s_game_loaded)
		s_output_fps = libretro_wanted_fps();
	info->timing.fps = s_output_fps;
	info->timing.sample_rate = 48000.0;
}

// A graphic pack with a frame rate of its own turned out to be active once the
// title started (packs are activated then), or stopped being: tell the
// frontend.
static void libretro_update_output_fps()
{
	const double wanted = libretro_wanted_fps();
	if (wanted == s_output_fps)
		return;
	s_output_fps = wanted;
	retro_system_av_info av{};
	retro_get_system_av_info(&av);
	environ_cb(RETRO_ENVIRONMENT_SET_SYSTEM_AV_INFO, &av);
	libretro_log(RETRO_LOG_INFO, "frame rate: %g\n", s_output_fps);
}

// Port 0 is the GamePad (VPAD), or a Wii U Pro Controller in its place; ports
// 1-3 are WPAD channels - a Wii Remote, a Wii U Pro Controller or a Classic
// Controller.
RETRO_API void retro_set_controller_port_device(unsigned port, unsigned device)
{
	if (port >= kLibretroMaxPorts)
		return;

	// Port 0 is the GamePad, alone or with a Wii Remote reading the same pad,
	// or the Pro Controller instead of it - what standalone does when player 1
	// is set to a Pro Controller. Anything else there is the GamePad.
	if (port == 0 && device != RETRO_DEVICE_GAMEPAD_WIIMOTE &&
		device != RETRO_DEVICE_GAMEPAD_WIIMOTE_SIDEWAYS && device != RETRO_DEVICE_PRO)
		device = RETRO_DEVICE_JOYPAD;

	if (s_port_device[port] == device)
		return;
	s_port_device[port] = device;

	// Before a title is loaded this is just recorded: libretro_setup_controllers
	// runs as part of the launch and will read it then. Changing a port while a
	// title runs takes effect on the spot - InputManager hands padscore a
	// shared_ptr, so swapping one out from under it is safe - but a title that
	// has already asked what is connected will not be told again until it asks,
	// and some only ask once.
	if (s_game_loaded)
		libretro_setup_controllers();
}

// Wake whatever is waiting for a frame that is never coming, and let the frame
// gate go. Both halves of a stop need this - a title that is being shut down
// and a GPU thread that exists without one - and it used to be written out at
// each of the three places that stop something.
static void libretro_wake_frame_waiters()
{
	s_shutting_down = true;
	{
		std::lock_guard lock(s_frame_mutex);
		s_frame_ready = true;
		s_frame_cv.notify_all();
	}
	// Before ShutdownTitle, which stops the GPU thread: a thread parked at the
	// frame gate is a thread that never gets there.
	libretro_frame_gate_release();
}

// Bring a running title down cleanly. Every stop ends here: the close, a
// reset, and the graphics context going away - which is why the name no longer
// says "for exit".
//
// Cemu's emulated filesystem writes through buffered std::fstream objects, so
// anything still sitting in those buffers never reaches disk if the process goes
// away underneath them: a game that autosaved just before the frontend closed
// the content comes back with a truncated, unloadable save.
// CafeSystem::ShutdownTitle() ends the scheduler, stops the GPU thread and
// unmounts the save/mlc devices, which closes - and therefore flushes - every
// file the title still had open. It does not touch the renderer, so the shared
// Vulkan device is left alone.
//
// Unbounded, and on the calling thread: every wait inside it is a join, which
// is how the emulator itself ends a title.
//
// Returns true. A title that stopped is one whose GPU thread is
// stopped too, which is what makes tearing the renderer down safe (see
// retro_unload_game). One that did not stop still has threads drawing through
// the frontend's Vulkan device; the teardown happens regardless, and the return
// value is what tells the log which of the two it was.
static bool libretro_stop_title()
{
	if (!s_game_loaded)
	{
		// Reported as stopped, and nothing is stopped: the scheduler, the GPU
		// thread and the title's memory are all left as they are. True whenever
		// the title is genuinely down, and the thing to suspect when a thread
		// turns up alive after a close.
		libretro_log(RETRO_LOG_INFO, "no title was loaded, nothing to shut down\n");
		// Except the recompiler, which starts while the title is still being
		// prepared and so can be running even when no title ever finished
		// loading. CafeSystem::ShutdownTitle is what normally joins it, and
		// that is exactly what is being skipped here - leaving its thread
		// alive inside a static object whose destructor then runs at exit and
		// calls std::terminate on a joinable thread. Closing content a second
		// after opening it does this every time. Shutdown is a no-op if the
		// recompiler never started.
		PPCRecompiler_Shutdown();
		// A GPU thread can exist without a title ever having launched, and it
		// parks at the frame gate like any other.
		libretro_wake_frame_waiters();
		return true;
	}
	s_game_loaded = false;

	// A close and a reset both come through here.
	libretro_stop_rumble();

	libretro_wake_frame_waiters();

	// And the same for the pause gate, which is the other place it waits. A
	// close that arrives after context_destroy finds the GPU thread parked with
	// its renderer already handed back, waiting for the context to come back -
	// which for a close it never does. ShutdownTitle joins that thread, so
	// without this the close would sit in that join for good.
	// Telling it the context is gone for good turns the null renderer it is
	// looking at into the stop signal it already knows how to read, and it
	// leaves through its own exit.
	Latte_AbandonRendererRebuild();
	Latte_ReleaseGpuPause();

	// On this thread, and with no budget on it. Everything it waits for, it
	// waits for by joining: OSSchedulerEnd joins the three scheduler threads,
	// Latte_Stop joins the GPU thread, each IOSU service joins its own. That is
	// how upstream ends a title, and upstream puts no deadline on any of it -
	// so a deadline here would only be this core inventing a failure mode the
	// emulator does not have, and then acting on it by tearing the renderer
	// down under threads that are still running.
	//
	// The line before it is what makes a real hang findable: a log that stops
	// here names the phase it stopped in, and ShutdownTitle traces its own
	// phases underneath.
	cemuLog_log(LogType::Force, "[libretro] shutting the title down: scheduler, GPU thread, IOSU, then the save flush");
	libretro_clear_memory_maps();
	CafeSystem::ShutdownTitle();

	libretro_log(RETRO_LOG_INFO, "title shut down, save data flushed\n");

	return true;
}

RETRO_API void retro_reset()
{
	if (!s_game_loaded || s_game_path.empty())
		return;

	// Asked for here, done in retro_run, and the reason is in sco's reset log:
	// the shutdown and a relaunch were interleaved line for line in the same
	// millisecond, which one thread cannot do. A frontend is free to call
	// retro_reset from a thread of its own - RetroArch's menu task is one - and
	// this core's lifecycle then had two of them in it at once: ShutdownTitle
	// tearing down the state a launch on the other thread was still building,
	// ending in a fault on a fiber whose stack had just been freed.
	//
	// So no lifecycle work happens on whichever thread this is. retro_run is
	// one thread and it already owns every start; it owns this stop too now,
	// and a reset that arrives twice before the next frame is one reset.
	s_reset_requested.store(true, std::memory_order_release);
	libretro_log(RETRO_LOG_INFO, "reset requested\n");
}

// The stop half of a reset, on retro_run's thread. Returns whether the title
// went down; a title that would not stop is not one to start again on top of.
static void libretro_run_removals();

static bool libretro_reset_stop_title()
{
	libretro_log(RETRO_LOG_INFO, "reset - stopping the title\n");

	if (!libretro_stop_title())
	{
		// The GPU thread would not park, which is the case the old exit existed
		// for. Restarting on top of it is the fault this must not commit, so the
		// title stays stopped and the frontend is told, rather than the process
		// disappearing from under it.
		libretro_show_message(RETRO_LOG_ERROR, 6000,
			"Reset failed: the title did not stop cleanly, so it was not restarted");
		return false;
	}

	// What the title had in use when it was to be removed or uninstalled can
	// go now, as at a close - otherwise the restart below would mount the very
	// update or DLC that was just uninstalled.
	libretro_run_removals();
	// The uninstall it asked for is done with that, so its switch goes off as
	// at a close. Not Install Content's: an install runs on beside the title
	// and turns its own switch off when it is done.
	libretro_reset_uninstall_switch();

#ifdef ENABLE_VULKAN
	// Every pool has to be down before a new device is built. They normally go
	// down with the renderer, in the GPU thread's teardown, but that does not
	// run when the thread takes the "graphics context already gone" way out -
	// and then a shader still being compiled against the old device faults the
	// moment the new one appears: RendererShaderVk::CompileInternal on
	// vkShaderComp, 0.1 seconds before "renderer created", which is exactly
	// what a reset of Deus Ex produced here.
	if (s_graphics_api == SelectedGraphicsAPI::Vulkan)
	{
		RendererShaderVk::Shutdown();
		VulkanPipelineStableCache::GetInstance().Close();
		PipelineCompiler::CompileThreadPool_Stop();
	}
#endif

	// The stop is over, and what follows is a start. The shutdown above sets the
	// shutting-down flag for the benefit of everything that has to wind up, and
	// leaving it set through the relaunch is a reset that shuts the title down
	// and then skips every frame of the run that follows.
	s_shutting_down = false;
	return true;
}

// The emulated controllers on ports 2-4, and the Wii Remote port 1 can share
// with the GamePad. The GamePad reads libretro input directly (see vpad.cpp),
// but everything WPAD has to go through Cemu's InputManager: padscore only
// tells a title that a controller is connected when it finds a WPADController
// on that channel (TickFunction in padscore.cpp), and a title that is never
// told will not read one either.

// One mapping: which button of the emulated controller, and which libretro
// input drives it. The three pads below are nothing but lists of these, so they
// are written as lists rather than as three runs of near-identical calls.
struct LibretroPadMapping
{
	uint64 button;
	uint64 source;
};

static void libretro_apply_pad_mappings(const EmulatedControllerPtr& controller,
	const std::shared_ptr<LibretroController>& pad,
	std::initializer_list<LibretroPadMapping> mappings)
{
	for (const LibretroPadMapping& mapping : mappings)
		controller->set_mapping(mapping.button, pad, mapping.source);
}

// A RetroPad as a Wii Remote, held either way up.
//
// Upright: B and A keep the meaning they already have on the GamePad (B
// confirms), 1 and 2 take the two remaining face buttons.
//
// Sideways: the remote is turned a quarter turn anticlockwise - the end with
// the IR window points left, the d-pad sits under the left thumb and 1 and 2
// under the right, which is the grip New Super Mario Bros. Wii and every other
// "hold it like a classic pad" title asks for. Two things follow from that, and
// both of them are mapping rather than emulation: a title is never told which
// way the remote is being held, and the remote reports the same bits either way.
//
//   The d-pad turns with it. A player pushing towards the 1 and 2 buttons means
//   "right", and that direction is the remote's own Down. Hence Up->Right,
//   Right->Down, Down->Left, Left->Up: the quarter turn, spelled out.
//
//   1 and 2 become the face buttons. They are what the right thumb rests on in
//   this grip and what those titles use for jump and run, so they take the two
//   positions a RetroPad's thumb finds first - 2 south, 1 east, keeping the
//   lower of the pair in the lower position. A and B are still reachable, on
//   the two remaining faces.
static void libretro_map_wiimote(const EmulatedControllerPtr& remote,
	const std::shared_ptr<LibretroController>& pad, bool sideways)
{
	using W = WiimoteController;

	if (sideways)
	{
		libretro_apply_pad_mappings(remote, pad, {
			{W::kButtonId_2, kButton0 + RETRO_DEVICE_ID_JOYPAD_B},
			{W::kButtonId_1, kButton0 + RETRO_DEVICE_ID_JOYPAD_A},
			{W::kButtonId_A, kButton0 + RETRO_DEVICE_ID_JOYPAD_Y},
			{W::kButtonId_B, kButton0 + RETRO_DEVICE_ID_JOYPAD_X},
			// The quarter turn, spelled out above.
			{W::kButtonId_Right, kButton0 + RETRO_DEVICE_ID_JOYPAD_UP},
			{W::kButtonId_Left, kButton0 + RETRO_DEVICE_ID_JOYPAD_DOWN},
			{W::kButtonId_Up, kButton0 + RETRO_DEVICE_ID_JOYPAD_LEFT},
			{W::kButtonId_Down, kButton0 + RETRO_DEVICE_ID_JOYPAD_RIGHT},
		});
	}
	else
	{
		libretro_apply_pad_mappings(remote, pad, {
			{W::kButtonId_A, kButton0 + RETRO_DEVICE_ID_JOYPAD_B},
			{W::kButtonId_B, kButton0 + RETRO_DEVICE_ID_JOYPAD_A},
			{W::kButtonId_1, kButton0 + RETRO_DEVICE_ID_JOYPAD_Y},
			{W::kButtonId_2, kButton0 + RETRO_DEVICE_ID_JOYPAD_X},
			{W::kButtonId_Up, kButton0 + RETRO_DEVICE_ID_JOYPAD_UP},
			{W::kButtonId_Down, kButton0 + RETRO_DEVICE_ID_JOYPAD_DOWN},
			{W::kButtonId_Left, kButton0 + RETRO_DEVICE_ID_JOYPAD_LEFT},
			{W::kButtonId_Right, kButton0 + RETRO_DEVICE_ID_JOYPAD_RIGHT},
		});
	}

	// Home on L, not on a stick click: pressing Home is how a game is asked to
	// bring up its controller screen, and L is bound out of the box in
	// RetroArch's default keyboard and pad layouts where L3 is not. A remote has
	// no shoulder button for L to collide with; the two pads below do.
	libretro_apply_pad_mappings(remote, pad, {
		{W::kButtonId_Plus, kButton0 + RETRO_DEVICE_ID_JOYPAD_START},
		{W::kButtonId_Minus, kButton0 + RETRO_DEVICE_ID_JOYPAD_SELECT},
		{W::kButtonId_Home, kButton0 + RETRO_DEVICE_ID_JOYPAD_L},
	});
}

// A RetroPad as a Wii U Pro Controller. One for one with the GamePad mapping in
// libretro_poll_input, and for the same reason: the RetroPad is modelled on a
// SNES pad, and the Pro Controller has that same face layout - A east, B south,
// X north, Y west - so matching by name and matching by position agree.
//
// Home is left unmapped. The remote can afford to spend L on it; a Pro
// Controller uses all four shoulders and both stick clicks, and there is no
// button left that is bound by default in the frontend. Home only asks a title
// to open its controller screen, so it is the one to go without.
//
// The sticks come through as axis mappings. libretro_get_joypad_analog has
// already flipped Y, so on the way in positive is up, which is why Up takes the
// P direction here and the SDL mappings in ProController.cpp take the N one.
static void libretro_map_pro(const EmulatedControllerPtr& pro,
	const std::shared_ptr<LibretroController>& pad)
{
	using P = ProController;

	libretro_apply_pad_mappings(pro, pad, {
		{P::kButtonId_A, kButton0 + RETRO_DEVICE_ID_JOYPAD_A}, // east
		{P::kButtonId_B, kButton0 + RETRO_DEVICE_ID_JOYPAD_B}, // south
		{P::kButtonId_X, kButton0 + RETRO_DEVICE_ID_JOYPAD_X}, // north
		{P::kButtonId_Y, kButton0 + RETRO_DEVICE_ID_JOYPAD_Y}, // west

		{P::kButtonId_L, kButton0 + RETRO_DEVICE_ID_JOYPAD_L},
		{P::kButtonId_R, kButton0 + RETRO_DEVICE_ID_JOYPAD_R},
		{P::kButtonId_ZL, kButton0 + RETRO_DEVICE_ID_JOYPAD_L2},
		{P::kButtonId_ZR, kButton0 + RETRO_DEVICE_ID_JOYPAD_R2},

		{P::kButtonId_Plus, kButton0 + RETRO_DEVICE_ID_JOYPAD_START},
		{P::kButtonId_Minus, kButton0 + RETRO_DEVICE_ID_JOYPAD_SELECT},

		{P::kButtonId_Up, kButton0 + RETRO_DEVICE_ID_JOYPAD_UP},
		{P::kButtonId_Down, kButton0 + RETRO_DEVICE_ID_JOYPAD_DOWN},
		{P::kButtonId_Left, kButton0 + RETRO_DEVICE_ID_JOYPAD_LEFT},
		{P::kButtonId_Right, kButton0 + RETRO_DEVICE_ID_JOYPAD_RIGHT},

		{P::kButtonId_StickL, kButton0 + RETRO_DEVICE_ID_JOYPAD_L3},
		{P::kButtonId_StickR, kButton0 + RETRO_DEVICE_ID_JOYPAD_R3},

		{P::kButtonId_StickL_Up, kAxisYP},
		{P::kButtonId_StickL_Down, kAxisYN},
		{P::kButtonId_StickL_Left, kAxisXN},
		{P::kButtonId_StickL_Right, kAxisXP},

		{P::kButtonId_StickR_Up, kRotationYP},
		{P::kButtonId_StickR_Down, kRotationYN},
		{P::kButtonId_StickR_Left, kRotationXN},
		{P::kButtonId_StickR_Right, kRotationXP},
	});
}

// A RetroPad as a Classic Controller. The same pad as the Pro one above, minus
// the two stick clicks, which the Classic Controller does not have - so L3 and
// R3 drive nothing here and Home takes L3, which is the one button the Pro
// mapping could not spare.
static void libretro_map_classic(const EmulatedControllerPtr& classic,
	const std::shared_ptr<LibretroController>& pad)
{
	using C = ClassicController;

	libretro_apply_pad_mappings(classic, pad, {
		{C::kButtonId_A, kButton0 + RETRO_DEVICE_ID_JOYPAD_A},
		{C::kButtonId_B, kButton0 + RETRO_DEVICE_ID_JOYPAD_B},
		{C::kButtonId_X, kButton0 + RETRO_DEVICE_ID_JOYPAD_X},
		{C::kButtonId_Y, kButton0 + RETRO_DEVICE_ID_JOYPAD_Y},

		{C::kButtonId_L, kButton0 + RETRO_DEVICE_ID_JOYPAD_L},
		{C::kButtonId_R, kButton0 + RETRO_DEVICE_ID_JOYPAD_R},
		{C::kButtonId_ZL, kButton0 + RETRO_DEVICE_ID_JOYPAD_L2},
		{C::kButtonId_ZR, kButton0 + RETRO_DEVICE_ID_JOYPAD_R2},

		{C::kButtonId_Plus, kButton0 + RETRO_DEVICE_ID_JOYPAD_START},
		{C::kButtonId_Minus, kButton0 + RETRO_DEVICE_ID_JOYPAD_SELECT},
		{C::kButtonId_Home, kButton0 + RETRO_DEVICE_ID_JOYPAD_L3},

		{C::kButtonId_Up, kButton0 + RETRO_DEVICE_ID_JOYPAD_UP},
		{C::kButtonId_Down, kButton0 + RETRO_DEVICE_ID_JOYPAD_DOWN},
		{C::kButtonId_Left, kButton0 + RETRO_DEVICE_ID_JOYPAD_LEFT},
		{C::kButtonId_Right, kButton0 + RETRO_DEVICE_ID_JOYPAD_RIGHT},

		{C::kButtonId_StickL_Up, kAxisYP},
		{C::kButtonId_StickL_Down, kAxisYN},
		{C::kButtonId_StickL_Left, kAxisXN},
		{C::kButtonId_StickL_Right, kAxisXP},

		{C::kButtonId_StickR_Up, kRotationYP},
		{C::kButtonId_StickR_Down, kRotationYN},
		{C::kButtonId_StickR_Left, kRotationXN},
		{C::kButtonId_StickR_Right, kRotationXP},
	});
}

// What a port's device id asks for, once the GamePad has been accounted for.
//
// Anything not named here drives nothing, and that deliberately includes a
// plain RETRO_DEVICE_JOYPAD on ports 2-4: a frontend sets every port to it
// before the user has chosen anything, and the core has always started with no
// WPAD controllers at all. Treating the default as "a pad is plugged in" would
// connect three of them to every title that ever asks.
static EmulatedController::Type libretro_wpad_type(unsigned device, bool* found, bool* sideways)
{
	*found = true;
	*sideways = false;
	switch (device)
	{
	case RETRO_DEVICE_WIIMOTE: return EmulatedController::Type::Wiimote;
	case RETRO_DEVICE_WIIMOTE_SIDEWAYS:
		*sideways = true;
		return EmulatedController::Type::Wiimote;
	case RETRO_DEVICE_PRO: return EmulatedController::Type::Pro;
	case RETRO_DEVICE_CLASSIC: return EmulatedController::Type::Classic;
	default: break;
	}
	*found = false;
	return EmulatedController::Type::Wiimote;
}

static const char* libretro_wpad_name(EmulatedController::Type type, bool sideways)
{
	switch (type)
	{
	case EmulatedController::Type::Pro: return "Wii U Pro Controller";
	case EmulatedController::Type::Classic: return "Classic Controller";
	default: return sideways ? "Wii Remote (sideways)" : "Wii Remote";
	}
}

// Build the WPAD side of the input from s_port_device. Runs once per title
// launch, and again whenever the frontend changes a port while one is running.
static void libretro_setup_controllers()
{
	// Player index 0 is the GamePad; everything WPAD takes the ones after it,
	// in the order the controllers are created - which is also the order
	// InputManager fills its WPAD channels in, so port order is channel order.
	constexpr size_t kWpadPlayerIndexBase = 1;

	auto& inputManager = InputManager::instance();
	for (size_t player = kWpadPlayerIndexBase; player < kWpadPlayerIndexBase + kLibretroMaxPorts; ++player)
		inputManager.delete_controller(player);

	// Port 1 drives the GamePad and, on this device type, the first Wii Remote
	// as well, so a single pad also gets past screens that ask for a remote
	// ("Press 2").
	const bool sharedRemote = s_port_device[0] == RETRO_DEVICE_GAMEPAD_WIIMOTE ||
							  s_port_device[0] == RETRO_DEVICE_GAMEPAD_WIIMOTE_SIDEWAYS;
	const bool sharedRemoteSideways = s_port_device[0] == RETRO_DEVICE_GAMEPAD_WIIMOTE_SIDEWAYS;

	// Port 1 is always polled - it is the GamePad or the Pro Controller in its
	// place. Above it, only the ports
	// that drive something: each one costs twenty calls into the frontend per
	// frame, and an unbound port spends them on answers nobody reads.
	uint32_t polledPorts = 1;
	size_t channel = 0;

	for (uint32_t port = 0; port < kLibretroMaxPorts; ++port)
	{
		EmulatedController::Type type = EmulatedController::Type::Wiimote;
		bool sideways = false;
		if (port == 0)
		{
			if (s_port_device[0] == RETRO_DEVICE_PRO)
				type = EmulatedController::Type::Pro;
			else if (!sharedRemote)
				continue;
			sideways = sharedRemoteSideways;
		}
		else
		{
			bool found = false;
			type = libretro_wpad_type(s_port_device[port], &found, &sideways);
			if (!found)
				continue;
			polledPorts = port + 1;
		}

		auto pad = std::make_shared<LibretroController>(port);
		auto emulated = inputManager.set_controller(kWpadPlayerIndexBase + channel, type, pad);
		if (!emulated)
			continue;

		switch (type)
		{
		case EmulatedController::Type::Pro: libretro_map_pro(emulated, pad); break;
		case EmulatedController::Type::Classic: libretro_map_classic(emulated, pad); break;
		default: libretro_map_wiimote(emulated, pad, sideways); break;
		}

		libretro_log(RETRO_LOG_INFO, "%s on RetroPad port %u (WPAD channel %u)\n",
			libretro_wpad_name(type, sideways), (unsigned)port + 1, (unsigned)channel + 1);
		++channel;
	}

	s_polled_ports = polledPorts;
	if (channel == 0 && log_cb)
		libretro_log(RETRO_LOG_INFO, "no Wii Remote or Pro/Classic Controller on any port\n");
}

static void libretro_set_convert_status(std::string text, int progress)
{
	std::lock_guard lock(s_convert_mutex);
	s_convert_status = std::move(text);
	s_convert_progress = progress;
}

// Everything the title is made of - base, update, DLC - written into the folder
// the user picked. What a user wants out of this is one portable file, and a
// .wua without the update is not that.
static void libretro_start_wua_conversion(TitleId baseTitleId, const fs::path& gamePath)
{
	s_convert_game_info = std::make_unique<GameInfo2>(CafeTitleList::GetGameInfo(baseTitleId));
	if (!s_convert_game_info->IsValid())
	{
		libretro_set_convert_status("Conversion failed: the title could not be opened");
		s_convert_finished = true;
		return;
	}

	static std::vector<TitleInfo*> titles;
	titles.clear();
	titles.push_back(&s_convert_game_info->GetBase());
	if (s_convert_game_info->HasUpdate())
		titles.push_back(&s_convert_game_info->GetUpdate());
	for (TitleInfo& aoc : s_convert_game_info->GetAOC())
		titles.push_back(&aoc);

	// Where it goes: the destination the user picked, as long as it is still
	// one of the ones offered. A value left in the .opt from another title, or
	// a folder that has since gone, falls back to the first offer.
	std::string outputDir;
	if (const char* chosen = libretro_get_option_value("cemu_wua_output_dir"))
	{
		for (const LibretroWuaDestination& destination : s_wua_destinations)
		{
			if (destination.path == chosen)
			{
				outputDir = destination.path;
				break;
			}
		}
	}
	if (outputDir.empty() && !s_wua_destinations.empty())
		outputDir = s_wua_destinations.front().path;
	if (outputDir.empty())
	{
		libretro_set_convert_status(fmt::format("Not converting: {}",
			s_wua_unavailable_reason.empty() ? std::string("no destination is available") : s_wua_unavailable_reason));
		s_convert_finished = true;
		return;
	}

	const std::string outputName = libretro_wua_output_name(gamePath, s_convert_game_info.get());
	const fs::path outputPath = _utf8ToPath(libretro_path_join(outputDir, outputName));

	// The preconditions are checked again here rather than trusted from the
	// menu: that was built when the content loaded, and the folder is somebody
	// else's to change in the meantime.
	if (!VFSFileStream::IsDirectory(_utf8ToPath(outputDir)))
	{
		libretro_set_convert_status(fmt::format("Not converting: {} is not there any more", outputDir));
		s_convert_finished = true;
		return;
	}
	// An existing .wua is not a refusal: the destination said so in its label,
	// and picking it anyway is picking to replace it. It goes just before the
	// finished archive is moved into place, not here, so a conversion that
	// fails leaves the old one where it was.

	// Room for it, where that can be asked. A saf:// destination cannot be
	// asked - nothing in the VFS reports free space - so there the write is
	// what finds out, but a local folder can say no before the user spends
	// minutes on it.
	if (outputDir.find("://") == std::string::npos)
	{
		const uintmax_t needed = libretro_title_input_size(titles);
		std::error_code ec;
		const fs::space_info space = fs::space(_utf8ToPath(outputDir), ec);
		if (!ec && needed > 0 && space.available < needed)
		{
			libretro_set_convert_status(fmt::format("Not converting: {} MiB free in {}, {} MiB needed",
				space.available / 1024 / 1024, outputDir, needed / 1024 / 1024));
			s_convert_finished = true;
			return;
		}
	}

	libretro_set_convert_status("Counting files...");
	cemuLog_log(LogType::Force, "Converting {} to {}", _pathToUtf8(gamePath), _pathToUtf8(outputPath));

	s_convert_thread = std::thread([outputPath]() {
		SetThreadName("wuaConvert");
		std::string error;
		const bool ok = TitleConverter::ConvertToWUA(titles, outputPath, s_convert_cancel,
			[](const TitleConverter::Progress& p) {
				if (p.filesDone == 0)
				{
					libretro_set_convert_status(fmt::format("Counting files... ({})", p.filesTotal));
					return;
				}
				const uint64 total = p.bytesTotal ? p.bytesTotal : 1;
				const int percent = (int)(p.bytesDone * 100 / total);
				libretro_set_convert_status(fmt::format("Converting: {}/{} MiB, file {}/{}",
					p.bytesDone / 1024 / 1024, p.bytesTotal / 1024 / 1024,
					p.filesDone, p.filesTotal), percent);
			},
			error);

		libretro_set_convert_status(ok ? fmt::format("Done: {}", _pathToUtf8(outputPath.filename()))
									   : fmt::format("Conversion failed: {}", error));
		cemuLog_log(LogType::Force, "Conversion {}", ok ? "finished" : fmt::format("failed: {}", error));
		s_convert_finished = true;
	});
}

// Installing what is in system/Cemu/titles into mlc01, the way the wx front
// end's "Install game update or DLC" does (issue #23). Scanning that folder
// already made updates and DLC work where they lie; this is for the user who
// wants them in the emulated console's storage, as upstream keeps them. It
// runs beside the title, on the conversion's thread and with its progress bar.
// Files the running title had in use when they were to be removed or
// uninstalled: deleted once the title has stopped, at a close in
// retro_unload_game and at a reset before the title starts again.
static std::mutex s_remove_on_unload_mutex;
static std::vector<fs::path> s_remove_on_unload;

static void libretro_remove_on_unload(const fs::path& path)
{
	std::lock_guard lock(s_remove_on_unload_mutex);
	if (std::find(s_remove_on_unload.begin(), s_remove_on_unload.end(), path) == s_remove_on_unload.end())
		s_remove_on_unload.push_back(path);
}

static void libretro_run_removals()
{
	std::vector<fs::path> paths;
	{
		std::lock_guard lock(s_remove_on_unload_mutex);
		paths.swap(s_remove_on_unload);
	}
	for (const fs::path& path : paths)
	{
		std::error_code ec;
		fs::remove_all(path, ec);
		cemuLog_log(LogType::Force, "install: removed {} now that the title is closed{}", _pathToUtf8(path), ec ? " (" + ec.message() + ")" : "");
	}
}

// Updates and DLC loaded as content: the title.tmd of one, opened through the
// frontend, is installed rather than booted - the core's counterpart of
// standalone's File > Install game update or DLC, from wherever the files are.
static bool s_install_content = false;

static void libretro_start_install(std::vector<TitleInfo> found, bool removeSource, bool fromContent);
static void libretro_install_titles(std::vector<TitleInfo> found, bool removeSource, bool fromContent, bool haveRunning, TitleId runningBase);
static bool libretro_running_base_title(TitleId& runningBase);

// A fresh scan of the game paths, waited for. WaitForMandatoryScan returns at
// once whenever the title list was read from its cache file, so a game put
// into the titles folder since the last scan was simply not in the list, and
// Install Games found nothing to install (Shoegzer).
static void libretro_rescan_titles()
{
	CafeTitleList::Refresh();
	while (CafeTitleList::IsScanning())
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
}

static void libretro_request_install()
{
	s_convert_finished = false;
	s_convert_cancel = false;
	s_convert_mode.store(true);
	libretro_set_convert_status("Looking for title updates and DLC...");
	libretro_update_convert_visibility();

	const char* removeOption = libretro_get_option_value("cemu_install_remove_source");
	const bool removeSource = removeOption && libretro_iequals(removeOption, "enabled");

	TitleId runningBase = 0;
	const bool haveRunning = libretro_running_base_title(runningBase);
	if (s_convert_thread.joinable())
		s_convert_thread.join();
	s_convert_thread = std::thread([removeSource, haveRunning, runningBase]() {
		SetThreadName("titleInstall");
		// What the scan found in the titles folder: updates and DLC only, the
		// newest version of each.
		const fs::path titlesDir = ActiveSettings::GetUserDataPath("titles");
		libretro_rescan_titles();
		std::vector<TitleInfo> found;
		std::string titlesPrefix = _pathToUtf8(titlesDir.lexically_normal());
		if (!titlesPrefix.empty() && titlesPrefix.back() != (char)fs::path::preferred_separator)
			titlesPrefix += (char)fs::path::preferred_separator;
		for (TitleInfo* title : CafeTitleList::AcquireInternalList())
		{
			const std::string p = _pathToUtf8(title->GetPath().lexically_normal());
			if (!title->IsValid() || p.size() <= titlesPrefix.size() || p.compare(0, titlesPrefix.size(), titlesPrefix) != 0)
				continue;
			const auto type = TitleIdParser(title->GetAppTitleId()).GetType();
			if (type != TitleIdParser::TITLE_TYPE::BASE_TITLE_UPDATE && type != TitleIdParser::TITLE_TYPE::AOC)
				continue;
			auto same = std::find_if(found.begin(), found.end(), [&](const TitleInfo& other) {
				return other.GetAppTitleId() == title->GetAppTitleId();
			});
			if (same == found.end())
				found.emplace_back(*title);
			else if (title->GetAppTitleVersion() > same->GetAppTitleVersion())
				*same = *title;
		}
		CafeTitleList::ReleaseInternalList();
		if (found.empty())
		{
			libretro_set_convert_status(fmt::format("Nothing to install: no title updates or DLC in {}", _pathToUtf8(titlesDir)));
			s_convert_finished = true;
			return;
		}
		libretro_install_titles(std::move(found), removeSource, false, haveRunning, runningBase);
	});
}

// Removes the loaded game's installed update and DLC from mlc01. The title may
// be running from them, so they go once it is closed.
static bool libretro_request_uninstall()
{
	if (!s_game_loaded || s_game_path.empty())
	{
		libretro_show_message(RETRO_LOG_WARN, 4000, "Nothing to uninstall: no game is running");
		return false;
	}
	TitleInfo running{_utf8ToPath(s_game_path)};
	TitleId base = 0;
	if (!running.IsValid() || !CafeTitleList::FindBaseTitleId(running.GetAppTitleId(), base))
	{
		libretro_show_message(RETRO_LOG_WARN, 4000, "Nothing to uninstall: the running title could not be identified");
		return false;
	}
	uint32 found = 0;
	// 0005000E is the update of 00050000-xxxxxxxx, 0005000C its DLC
	for (const uint32 high : {0x0005000Eu, 0x0005000Cu})
	{
		const fs::path path = ActiveSettings::GetMlcPath(fmt::format("usr/title/{:08x}/{:08x}", high, (uint32)base));
		std::error_code ec;
		if (!fs::exists(path, ec))
			continue;
		libretro_remove_on_unload(path);
		found++;
	}
	libretro_show_message(RETRO_LOG_INFO, 6000, found
		? "The installed update and DLC of this game will be removed from mlc01 when it is closed"
		: "This game has no update or DLC installed in mlc01");
	return found != 0;
}

// Installs every game in system/Cemu/titles into mlc01, as the console installs
// a game from its disc - never the one running, which a console does not
// install either (Shoegzer). A game is a disc image (.wud, .wux, .iso) or a
// .wua, and from a .wua the update and DLC it holds go in with it. Like
// Install Content it runs on the conversion's thread with its progress shown,
// and a game installed in the same or a newer version is left alone.
static bool libretro_request_install_game()
{
	s_convert_finished = false;
	s_convert_cancel = false;
	s_convert_mode.store(true);
	libretro_set_convert_status("Looking for games...");
	libretro_update_convert_visibility();

	const char* removeOption = libretro_get_option_value("cemu_install_remove_source");
	const bool removeSource = removeOption && libretro_iequals(removeOption, "enabled");

	TitleId runningBase = 0;
	const bool haveRunning = libretro_running_base_title(runningBase);
	if (s_convert_thread.joinable())
		s_convert_thread.join();
	s_convert_thread = std::thread([removeSource, haveRunning, runningBase]() {
		SetThreadName("gameInstall");
		const fs::path titlesDir = ActiveSettings::GetUserDataPath("titles");
		libretro_rescan_titles();
		std::string titlesPrefix = _pathToUtf8(titlesDir.lexically_normal());
		if (!titlesPrefix.empty() && titlesPrefix.back() != (char)fs::path::preferred_separator)
			titlesPrefix += (char)fs::path::preferred_separator;
		std::vector<fs::path> gamePaths;
		for (TitleInfo* title : CafeTitleList::AcquireInternalList())
		{
			const std::string p = _pathToUtf8(title->GetPath().lexically_normal());
			if (!title->IsValid() || p.size() <= titlesPrefix.size() || p.compare(0, titlesPrefix.size(), titlesPrefix) != 0)
				continue;
			if (TitleIdParser(title->GetAppTitleId()).GetType() != TitleIdParser::TITLE_TYPE::BASE_TITLE)
				continue;
			if (std::find(gamePaths.begin(), gamePaths.end(), title->GetPath()) == gamePaths.end())
				gamePaths.push_back(title->GetPath());
		}
		CafeTitleList::ReleaseInternalList();

		// Everything each one holds, the newest version of each title.
		std::vector<TitleInfo> found;
		for (const fs::path& path : gamePaths)
		{
			for (TitleInfo& title : TitleConverter::TitlesInContent(path))
			{
				auto same = std::find_if(found.begin(), found.end(), [&](const TitleInfo& other) {
					return other.GetAppTitleId() == title.GetAppTitleId();
				});
				if (same == found.end())
					found.emplace_back(std::move(title));
				else if (title.GetAppTitleVersion() > same->GetAppTitleVersion())
					*same = std::move(title);
			}
		}
		if (found.empty())
		{
			libretro_set_convert_status(fmt::format("Nothing to install: no games in {}", _pathToUtf8(titlesDir)));
			s_convert_finished = true;
			return;
		}
		libretro_install_titles(std::move(found), removeSource, false, haveRunning, runningBase);
	});
	return true;
}

// Removes the running game's installed copy from mlc01 once it is closed: it
// may be running from it. Update, DLC and saves stay.
static bool libretro_request_uninstall_game()
{
	if (!s_game_loaded || s_game_path.empty())
	{
		libretro_show_message(RETRO_LOG_WARN, 4000, "Nothing to uninstall: no game is running");
		return false;
	}
	TitleInfo running{_utf8ToPath(s_game_path)};
	TitleId base = 0;
	if (!running.IsValid() || !CafeTitleList::FindBaseTitleId(running.GetAppTitleId(), base))
	{
		libretro_show_message(RETRO_LOG_WARN, 4000, "Nothing to uninstall: the running title could not be identified");
		return false;
	}
	// The game and, as Install Games installs them with it from a .wua, its
	// update (0005000e) and DLC (0005000c): the same title, with the high
	// half of the ID telling them apart
	const fs::path path = ActiveSettings::GetMlcPath(fmt::format("usr/title/{:08x}/{:08x}", (uint32)(base >> 32), (uint32)base));
	std::error_code ec;
	if (!fs::exists(path, ec))
	{
		libretro_show_message(RETRO_LOG_INFO, 6000, "This game is not installed in mlc01");
		return false;
	}
	libretro_remove_on_unload(path);
	bool withMore = false;
	for (const uint32 high : {0x0005000eu, 0x0005000cu})
	{
		const fs::path more = ActiveSettings::GetMlcPath(fmt::format("usr/title/{:08x}/{:08x}", high, (uint32)base));
		if (fs::exists(more, ec))
		{
			libretro_remove_on_unload(more);
			withMore = true;
		}
	}
	libretro_show_message(RETRO_LOG_INFO, 6000, withMore ?
		"The installed copy of this game, its title update and DLC will be removed from mlc01 when it is closed" :
		"The installed copy of this game will be removed from mlc01 when it is closed");
	return true;
}

static void libretro_install_titles(std::vector<TitleInfo> found, bool removeSource, bool fromContent, bool haveRunning, TitleId runningBase)
{
	SetThreadName("titleInstall");
	const fs::path titlesDir = ActiveSettings::GetUserDataPath("titles");
	std::string titlesPrefix = _pathToUtf8(titlesDir.lexically_normal());
	if (!titlesPrefix.empty() && titlesPrefix.back() != (char)fs::path::preferred_separator)
		titlesPrefix += (char)fs::path::preferred_separator;
	const auto inTitlesDir = [&titlesPrefix](const fs::path& path) {
		const std::string p = _pathToUtf8(path.lexically_normal());
		return p.size() > titlesPrefix.size() && p.compare(0, titlesPrefix.size(), titlesPrefix) == 0;
	};

	uint32 installed = 0, upToDate = 0, failed = 0, kept = 0, deferred = 0;
	std::string lastError;
	// Disc images and .wua files in titles, and which of their titles are now
	// installed: one goes once everything it holds is
	std::map<fs::path, std::set<uint64>> archives;
	const auto isArchive = [](const TitleInfo& t) {
		return t.GetFormat() == TitleInfo::TitleDataFormat::WUD || t.GetFormat() == TitleInfo::TitleDataFormat::WIIU_ARCHIVE;
	};
	for (size_t i = 0; i < found.size() && !s_convert_cancel.load(); i++)
	{
		TitleInfo& title = found[i];
		const auto titleType = TitleIdParser(title.GetAppTitleId()).GetType();
		const bool isUpdate = titleType == TitleIdParser::TITLE_TYPE::BASE_TITLE_UPDATE;
		const bool isBase = titleType == TitleIdParser::TITLE_TYPE::BASE_TITLE;
		std::string name = title.ParseXmlInfo() ? title.GetMetaTitleName() : std::string();
		if (name.empty())
			name = fmt::format("{:016x}", title.GetAppTitleId());
		const std::string label = fmt::format("{} {} v{}", isBase ? "game" : isUpdate ? "title update" : "DLC", name, title.GetAppTitleVersion());
		const fs::path target = ActiveSettings::GetMlcPath(title.GetInstallPath());

		// The same or a newer version already installed is left alone, as
		// the wx installer does unless told to downgrade.
		bool done = false;
		{
			TitleInfo existing{target};
			if (existing.IsValid() && existing.ParseXmlInfo() && existing.GetAppTitleVersion() >= title.GetAppTitleVersion())
			{
				upToDate++;
				done = true;
				cemuLog_log(LogType::Force, "install: {} is already installed", label);
			}
		}
		if (!done)
		{
			cemuLog_log(LogType::Force, "install: {} from {} to {}", label, _pathToUtf8(title.GetPath()), _pathToUtf8(target));
			std::string error;
			const size_t index = i + 1, count = found.size();
			const bool ok = TitleConverter::InstallTitle(&title, target, s_convert_cancel,
				[&label, index, count](const TitleConverter::Progress& p) {
					const uint64 total = p.bytesTotal ? p.bytesTotal : 1;
					libretro_set_convert_status(fmt::format("Installing {}/{}: {} - {}/{} MiB",
						index, count, label, p.bytesDone / 1024 / 1024, p.bytesTotal / 1024 / 1024),
						(int)(p.bytesDone * 100 / total));
				},
				error);
			if (!ok)
			{
				failed++;
				lastError = fmt::format("{}: {}", label, error);
				cemuLog_log(LogType::Force, "install: {} failed: {}", label, error);
				continue;
			}
			installed++;
			done = true;
		}
		if (done && removeSource && isArchive(title) && inTitlesDir(title.GetPath()))
		{
			archives[title.GetPath()].insert(title.GetAppTitleId());
			continue;
		}

		// Only what is in its own folder under titles, and only the forms
		// that are nothing but this title: a .wua or a disc image can hold
		// the base game too.
		if (done && removeSource)
		{
			TitleId base = 0;
			const bool inUse = haveRunning && CafeTitleList::FindBaseTitleId(title.GetAppTitleId(), base) && base == runningBase;
			fs::path source = title.GetPath();
			if (title.GetFormat() == TitleInfo::TitleDataFormat::NUS)
				source = source.parent_path();
			const bool removable = (title.GetFormat() == TitleInfo::TitleDataFormat::NUS ||
				title.GetFormat() == TitleInfo::TitleDataFormat::HOST_FS) && inTitlesDir(source);
			if (!removable)
				kept++;
			else if (inUse)
			{
				libretro_remove_on_unload(source);
				deferred++;
			}
			else
			{
				std::error_code ec;
				fs::remove_all(source, ec);
				cemuLog_log(LogType::Force, "install: removed {}{}", _pathToUtf8(source), ec ? " (" + ec.message() + ")" : "");
			}
		}
	}

	// A disc image or .wua goes only when every title it holds is installed:
	// Install Content takes the update and DLC out of a .wua that holds the
	// game as well, and that one stays
	// A disc image's key file beside it (<image>.key) is part of it: it goes
	// with the image, and only then (Shoegzer, #30)
	auto keyBeside = [](const fs::path& image) {
		fs::path key = image;
		key.replace_extension(".key");
		std::error_code ec;
		return key != image && fs::is_regular_file(key, ec) ? key : fs::path();
	};
	for (const auto& [archive, doneIds] : archives)
	{
		bool all = true;
		for (const TitleInfo& t : TitleConverter::TitlesInContent(archive))
			all = all && doneIds.count(t.GetAppTitleId()) != 0;
		if (!all)
		{
			kept++;
			continue;
		}
		if (haveRunning && _utf8ToPath(s_game_path).lexically_normal() == archive.lexically_normal())
		{
			libretro_remove_on_unload(archive);
			if (const fs::path key = keyBeside(archive); !key.empty())
				libretro_remove_on_unload(key);
			deferred++;
			continue;
		}
		const fs::path key = keyBeside(archive);
		std::error_code ec;
		fs::remove(archive, ec);
		cemuLog_log(LogType::Force, "install: removed {}{}", _pathToUtf8(archive), ec ? " (" + ec.message() + ")" : "");
		if (!key.empty() && !ec)
		{
			fs::remove(key, ec);
			cemuLog_log(LogType::Force, "install: removed {}{}", _pathToUtf8(key), ec ? " (" + ec.message() + ")" : "");
		}
	}

	// So the title list knows the installed copies, without waiting for
	// the next start.
	CafeTitleList::Refresh();

	std::string summary;
	if (s_convert_cancel.load())
		summary = "Install cancelled. ";
	summary += fmt::format("Installed {}", installed);
	if (upToDate)
		summary += fmt::format(", {} already installed", upToDate);
	if (deferred)
		summary += fmt::format(", {} removed from titles when the game is closed (in use)", deferred);
	if (kept)
		summary += fmt::format(", {} kept in titles", kept);
	if (fromContent && !s_convert_cancel.load() && failed == 0)
		summary += " - close the content and load the game";
	if (failed)
		summary += fmt::format(", {} failed - {}", failed, lastError);
	libretro_set_convert_status(summary);
	cemuLog_log(LogType::Force, "install: {}", summary);
	s_convert_finished = true;
}

// Whether the running title is known, and its base title id: its update and
// DLC are mounted from where they are, so they are removed only once it closes.
static bool libretro_running_base_title(TitleId& runningBase)
{
	runningBase = 0;
	if (!s_game_loaded || s_game_path.empty())
		return false;
	TitleInfo running{_utf8ToPath(s_game_path)};
	return running.IsValid() && CafeTitleList::FindBaseTitleId(running.GetAppTitleId(), runningBase);
}

static void libretro_start_install(std::vector<TitleInfo> found, bool removeSource, bool fromContent)
{
	s_convert_finished = false;
	s_convert_cancel = false;
	s_convert_mode.store(true);
	libretro_update_convert_visibility();

	TitleId runningBase = 0;
	const bool haveRunning = libretro_running_base_title(runningBase);

	if (s_convert_thread.joinable())
		s_convert_thread.join();
	s_convert_thread = std::thread(libretro_install_titles, std::move(found), removeSource, fromContent, haveRunning, runningBase);
}

// Preparing the title and starting it. Split out of libretro_launch_game so
// that a reset can do it again without CemuCommonInit, which initialises the
// emulated machine itself and is not something to run twice.
// Puts the frame gate back the way a run starts with. A close does this as part
// of resetting everything else, but a reset does not go through that path: it
// releases the gate on its way down - which it must, or the cores would sit in
// it waiting for a frame that is not coming - and nothing put it back. So the
// title that followed a reset ran with the gate permanently open: no frame
// pacing, and no pause either, because pausing in a libretro core is the
// frontend not calling retro_run and the gate is what turns that into the
// emulator standing still.
static void libretro_frame_gate_rearm()
{
	std::lock_guard lock(s_gate_mutex);
	s_gate_released = false;
	s_gate_tokens = 1;
	s_frame_permit = true;
	s_gate_hold_open = 0;
	s_gate_cv.notify_all();
}

static void libretro_prepare_and_launch_title()
{
	libretro_frame_gate_rearm();
	// The account comes in here, on a reset as on a start. act read the
	// accounts once per process before, at the first title's first request,
	// so a reset - and on Windows, where the library stays loaded, every later
	// start too - kept the account the first title ran as.
	if (s_pending_account)
		GetConfig().account.m_persistent_id = s_pending_account;
	iosuAct_forgetAccounts();
	fs::path gamePath = _utf8ToPath(s_game_path);
	CafeSystem::PREPARE_STATUS_CODE status;

	// Try as a title first (WUD/WUX/WUA/folder)
	TitleInfo launchTitle{gamePath};
	if (launchTitle.IsValid())
	{
		libretro_log(RETRO_LOG_INFO, "Valid title detected, launching via TitleId\n");

		CafeTitleList::AddTitleFromPath(gamePath);
		libretro_log(RETRO_LOG_INFO, "waiting for the mandatory title scan\n");
		CafeTitleList::WaitForMandatoryScan();

		TitleId baseTitleId;
		if (!CafeTitleList::FindBaseTitleId(launchTitle.GetAppTitleId(), baseTitleId))
		{
			libretro_log(RETRO_LOG_ERROR, "Could not find base title ID\n");
			return;
		}

		libretro_log(RETRO_LOG_INFO, "preparing foreground title\n");
		status = CafeSystem::PrepareForegroundTitle(baseTitleId);
	}
	else
	{
		// Fall back to standalone RPX/ELF
		CafeTitleFileType fileType = DetermineCafeSystemFileType(gamePath);
		if (fileType == CafeTitleFileType::RPX || fileType == CafeTitleFileType::ELF)
		{
			libretro_log(RETRO_LOG_INFO, "Launching as standalone RPX/ELF\n");
			status = CafeSystem::PrepareForegroundTitleFromStandaloneRPX(gamePath);
		}
		else
		{
			libretro_log(RETRO_LOG_ERROR, "Unsupported file format\n");
			return;
		}
	}

	if (status != CafeSystem::PREPARE_STATUS_CODE::SUCCESS)
	{
		libretro_log(RETRO_LOG_ERROR, "Failed to prepare game (status %d)\n", (int)status);
		return;
	}

	// The profile is loaded now, so the options it owns can be set for good.
	libretro_apply_profile_options();

	// Launch the title
	libretro_log(RETRO_LOG_INFO, "launching the foreground title\n");
	CafeSystem::LaunchForegroundTitle();

	// Wait for GPU init
	libretro_log(RETRO_LOG_INFO, "waiting for GPU init\n");
	while (!g_isGPUInitFinished)
		std::this_thread::sleep_for(std::chrono::milliseconds(5));

	// Keep TV screen as default (DRC is black for some games)

	s_emu_initialized = true;
	s_game_loaded = true;

	// The title is mounted, so its memory exists and can be described to the
	// frontend - this is what makes RetroArch's cheat search and memory viewer
	// work at all.
	libretro_publish_memory_maps();

	libretro_log(RETRO_LOG_INFO, "Game loaded successfully - %s\n", CafeSystem::GetForegroundTitleName().c_str());
}

static void libretro_launch_game()
{
	if (s_game_path.empty() || s_emu_initialized)
		return;

	libretro_log(RETRO_LOG_INFO, "Initializing emulator...\n");

	// Initialize emulator common systems
	CemuCommonInit();
	s_cafe_system_initialized = true;

	// CafeSystem::Initialize only runs the once, so a second title inherits
	// whatever the first one left behind - and retro_deinit stops the
	// deprecated IOSU workers, which a frontend calls when content is closed
	// and not only when it is done with this core. Without this, the second
	// title in a session pushes its first act request into a queue with no
	// reader, the emulated thread that made it is suspended waiting for a reply
	// that cannot come, and the title sits at a black screen for good. That was
	// the second-run hang, reported from the other end and cornered from a
	// thread snapshot.
	if (s_system_services_stopped)
	{
		cemuLog_log(LogType::Force, "[libretro] restarting the IOSU services stopped by the last deinit");
		CafeSystem::RestartDeprecatedIOSUServices();
		s_system_services_stopped = false;
	}

	libretro_log(RETRO_LOG_INFO, "common init done\n");

	// An update or DLC loaded as content is installed, not booted. The core
	// stays loaded with the progress on screen until the frontend closes it.
	if (s_install_content)
	{
		libretro_log(RETRO_LOG_INFO, "the content is an update or DLC - installing it into mlc01\n");
		std::vector<TitleInfo> content;
		content.emplace_back(_utf8ToPath(s_game_path));
		libretro_set_convert_status("Installing...");
		libretro_start_install(std::move(content), false, true);
		return;
	}

	// Load graphic packs (includes workarounds like NSMBU crash fix)
	{
		fs::path gpPath = ActiveSettings::GetUserDataPath("graphicPacks");
		cemuLog_log(LogType::Force, "Searching for graphic packs in: {}", _pathToUtf8(gpPath));
		std::error_code ec;
		bool exists = fs::exists(gpPath, ec);
		cemuLog_log(LogType::Force, "Graphic packs directory exists: {}", exists);
	}
	libretro_setup_graphic_packs();
	// Apply core options before launch
	libretro_apply_core_options();

	// AXOut_init creates the audio device when the title starts it, with the
	// block size AX actually feeds.
	s_audio_submission_allowed = true;

	// Hand each WPAD channel the libretro pad its port was set to
	libretro_setup_controllers();

	// Prepare the game
	libretro_prepare_and_launch_title();
}


// Wayland / EGL frontends: build the shared GPU-thread context via EGL instead of GLX.
#ifdef ENABLE_OPENGL
#ifdef _WIN32

// Takes RetroArch's WGL context and creates one for Cemu's GPU thread that
// shares its objects (textures, buffers), the same thing the GLX/EGL paths do.
static void libretro_create_shared_wgl_context()
{
	s_wgl_frontend_dc = wglGetCurrentDC();
	s_wgl_frontend_context = wglGetCurrentContext();
	if (!s_wgl_frontend_dc || !s_wgl_frontend_context)
	{
		libretro_log(RETRO_LOG_ERROR, "Frontend WGL context not current in context_reset\n");
		return;
	}

	libretro_log(RETRO_LOG_INFO, "Frontend GL context: dc=%p ctx=%p\n",
		s_wgl_frontend_dc, s_wgl_frontend_context);

	HGLRC shared = wglCreateContext(s_wgl_frontend_dc);
	if (!shared)
	{
		libretro_log(RETRO_LOG_ERROR, "wglCreateContext failed (%lu)\n", (unsigned long)GetLastError());
		return;
	}

	if (!wglShareLists(s_wgl_frontend_context, shared))
	{
		libretro_log(RETRO_LOG_ERROR, "wglShareLists failed (%lu)\n", (unsigned long)GetLastError());
		wglDeleteContext(shared);
		return;
	}

	s_wgl_shared_context = shared;
	libretro_log(RETRO_LOG_INFO, "Created shared GL context for GPU thread: %p\n", s_wgl_shared_context);
}

#else

static void libretro_create_shared_egl_context()
{
	s_egl_frontend_context = eglGetCurrentContext();
	s_egl_display = egl_current_display();
	s_egl_surface = eglGetCurrentSurface(EGL_DRAW);

	if (s_egl_frontend_context == EGL_NO_CONTEXT || s_egl_display == EGL_NO_DISPLAY)
	{
		libretro_log(RETRO_LOG_ERROR, "No current GLX or EGL context (frontend display=%p ctx=%p)\n",
			s_egl_display, s_egl_frontend_context);
		return;
	}

	s_use_egl = true;
	libretro_log(RETRO_LOG_INFO, "Frontend EGL context (Wayland path): display=%p surface=%p ctx=%p\n",
		s_egl_display, s_egl_surface, s_egl_frontend_context);

	if (!eglBindAPI(EGL_OPENGL_API))
	{
		libretro_log(RETRO_LOG_ERROR, "eglBindAPI(EGL_OPENGL_API) failed (0x%x)\n", eglGetError());
		return;
	}

	// Match the frontend's EGLConfig so the shared context is compatible.
	EGLConfig config = nullptr;
	EGLint matched = 0;
	EGLint cfgId = 0;
	if (eglQueryContext(s_egl_display, s_egl_frontend_context, EGL_CONFIG_ID, &cfgId) && cfgId != 0)
	{
		const EGLint byId[] = { EGL_CONFIG_ID, cfgId, EGL_NONE };
		eglChooseConfig(s_egl_display, byId, &config, 1, &matched);
	}
	if (matched == 0)
	{
		// Fallback: any config that can back a desktop-GL window context.
		const EGLint generic[] = {
			EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
			EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
			EGL_NONE
		};
		eglChooseConfig(s_egl_display, generic, &config, 1, &matched);
	}

	// OpenGL 4.5 Core Profile shared context (shares object namespace with the frontend ctx)
	const EGLint ctxAttribs[] = {
		EGL_CONTEXT_MAJOR_VERSION, 4,
		EGL_CONTEXT_MINOR_VERSION, 5,
		EGL_CONTEXT_OPENGL_PROFILE_MASK, EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT,
		EGL_NONE
	};
	s_egl_shared_context = eglCreateContext(s_egl_display, config, s_egl_frontend_context, ctxAttribs);

	if (s_egl_shared_context != EGL_NO_CONTEXT)
	{
		libretro_log(RETRO_LOG_INFO, "Created shared EGL GL 4.5 context for GPU thread: %p\n", s_egl_shared_context);
	}
	else
	{
		libretro_log(RETRO_LOG_ERROR, "Failed to create shared EGL context (0x%x)\n", eglGetError());
	}
}

static void libretro_create_shared_gl_context()
{
#ifdef __ANDROID__
	// No GLX here at all - the frontend context is always EGL.
	libretro_create_shared_egl_context();
	return;
#else
	// Capture the frontend's GL context. Prefer GLX (X11); on Wayland the frontend
	// runs on EGL and glXGetCurrentContext() returns NULL, so fall back to EGL.
	s_glx_frontend_context = glXGetCurrentContext();
	if (!s_glx_frontend_context)
	{
		libretro_create_shared_egl_context();
		return;
	}
	s_glx_display = glXGetCurrentDisplay();
	s_glx_drawable = glXGetCurrentDrawable();

	if (!s_glx_display)
	{
		libretro_log(RETRO_LOG_ERROR, "Cannot get current GLX display (ctx=%p)\n",
			s_glx_frontend_context);
		return;
	}

	libretro_log(RETRO_LOG_INFO, "Frontend GL context: display=%p drawable=0x%lx ctx=%p\n",
		s_glx_display, (unsigned long)s_glx_drawable, s_glx_frontend_context);

	// Get the FBConfig used by the frontend context
	// We need this to create a compatible shared context
	int screenNum = DefaultScreen(s_glx_display);

	// Use glXCreateContextAttribsARB for core profile context
	typedef GLXContext (*glXCreateContextAttribsARBProc)(Display*, GLXFBConfig, GLXContext, int, const int*);
	glXCreateContextAttribsARBProc _glXCreateContextAttribsARB =
		(glXCreateContextAttribsARBProc)cemu_gl_get_proc("glXCreateContextAttribsARB");

	if (!_glXCreateContextAttribsARB)
	{
		libretro_log(RETRO_LOG_ERROR, "glXCreateContextAttribsARB not available\n");
		return;
	}

	// Get the FBConfig ID from the frontend's current context
	int fbconfig_id = 0;
	glXQueryContext(s_glx_display, s_glx_frontend_context, GLX_FBCONFIG_ID, &fbconfig_id);

	// Find matching FBConfig
	int nelements = 0;
	GLXFBConfig* configs = glXGetFBConfigs(s_glx_display, screenNum, &nelements);
	if (!configs || nelements == 0)
	{
		libretro_log(RETRO_LOG_ERROR, "No GLX FBConfigs available\n");
		return;
	}

	GLXFBConfig chosen_config = configs[0]; // fallback
	for (int i = 0; i < nelements; i++)
	{
		int id = 0;
		glXGetFBConfigAttrib(s_glx_display, configs[i], GLX_FBCONFIG_ID, &id);
		if (id == fbconfig_id)
		{
			chosen_config = configs[i];
			break;
		}
	}

	// Create OpenGL 4.5 Core Profile shared context
	int context_attribs[] = {
		GLX_CONTEXT_MAJOR_VERSION_ARB, 4,
		GLX_CONTEXT_MINOR_VERSION_ARB, 5,
		GLX_CONTEXT_PROFILE_MASK_ARB, GLX_CONTEXT_CORE_PROFILE_BIT_ARB,
		0
	};

	s_glx_shared_context = _glXCreateContextAttribsARB(
		s_glx_display, chosen_config, s_glx_frontend_context, 1 /*direct*/, context_attribs);

	XFree(configs);

	if (s_glx_shared_context)
	{
		libretro_log(RETRO_LOG_INFO, "Created shared GL 4.5 context for GPU thread: %p\n", s_glx_shared_context);
	}
	else
	{
		libretro_log(RETRO_LOG_ERROR, "Failed to create shared GL context\n");
	}
#endif // __ANDROID__
}

#endif // _WIN32
#endif // ENABLE_OPENGL

// True once the frontend has taken its graphics context apart. On exit that
// happens *before* retro_unload_game, and everything Cemu does to tear down its
// renderer - the final command buffer submit in ~VulkanRenderer, every vkDestroy
// in the caches - goes through a device that no longer exists. Code that would
// touch the GPU during teardown asks here first.
static std::atomic_bool s_frontend_context_gone{false};

// Runs on: anything. Set from the frontend's thread in context_destroy and
// read by the GPU thread and the shader cache loader, which is why it is an
// atomic and not a bool.
bool libretro_gpu_context_gone()
{
	return s_frontend_context_gone.load(std::memory_order_acquire);
}

// Builds the renderer that wraps the frontend's device. Called from
// context_reset the first time, and again from retro_reset: stopping a title
// stops the GPU thread with it, and LatteThread_Exit deletes the renderer and
// releases g_renderer on its way out (LatteThread.cpp). A restart then starts a
// new Latte thread whose first act is g_renderer->Initialize() - on a null
// pointer, which is a fault inside Latte_ThreadEntry and nothing else.
static void libretro_create_renderer()
{
	// A context restore finds one already built and leaves it alone.
	if (!g_renderer)
	{
#ifdef ENABLE_VULKAN
		if (s_graphics_api == SelectedGraphicsAPI::Vulkan)
		{
			// Get Vulkan HW render interface from RetroArch
			const struct retro_hw_render_interface* iface = nullptr;
			if (environ_cb(RETRO_ENVIRONMENT_GET_HW_RENDER_INTERFACE, &iface) && iface &&
				iface->interface_type == RETRO_HW_RENDER_INTERFACE_VULKAN)
			{
				s_vk_interface = (const struct retro_hw_render_interface_vulkan*)iface;
				LibretroVkQueue::SetInterface(s_vk_interface);
				libretro_log(RETRO_LOG_INFO, "Got Vulkan HW render interface (device=%p queue=%p)\n",
					(void*)s_vk_interface->device, (void*)s_vk_interface->queue);

				// Create VulkanRenderer using the shared device
				auto vkRenderer = new VulkanRenderer(
					s_vk_interface->instance,
					s_vk_interface->gpu,
					s_vk_interface->device,
					s_vk_interface->queue,
					s_vk_interface->queue_index);
				g_renderer.reset(vkRenderer);
				cemuLog_log(LogType::Force, "[libretro] renderer created");

				// Create presentation image, at the output size (see s_out_width)
				if (!s_out_size_taken)
				{
					s_out_width = s_wanted_out_width;
					s_out_height = s_wanted_out_height;
					s_out_size_taken = true;
				}
				vkRenderer->CreatePresentationImage(s_out_width, s_out_height);

				libretro_log(RETRO_LOG_INFO, "VulkanRenderer created with shared device\n");
			}
			else
			{
				libretro_log(RETRO_LOG_ERROR, "Failed to get Vulkan HW render interface\n");
			}
		}
#ifdef ENABLE_OPENGL
		else
#endif
#endif
#ifdef ENABLE_OPENGL
		{
			s_gl_callbacks = std::make_unique<LibretroGLCanvasCallbacks>();
			g_renderer = std::make_unique<OpenGLRenderer>();
		}
#endif
	}
}

// Runs on: the frontend's thread, inside retro_run or the load that precedes
// it - never the GPU thread, which is why everything it does to that thread is
// done by asking rather than by calling.
static void libretro_context_reset()
{
	// In Cemu's own log, not only the frontend's: log.txt is what a bug report
	// carries, and "did the context come back" was not answerable from it.
	cemuLog_log(LogType::Force, "[libretro] the frontend has given us a graphics context");

	s_hw_render_initialized = true;
	// A context exists again, so GPU teardown is allowed again.
	s_frontend_context_gone = false;

	// Reset frontend GL objects - context was recreated, old objects are invalid
	s_frontend_read_fbo = 0;
	s_frontend_read_rbo_attached = 0;
	s_frontend_upload_tex = 0;

	// Create or update shared GL context for GPU thread (OpenGL only)
#ifdef ENABLE_OPENGL
	if (s_graphics_api == SelectedGraphicsAPI::OpenGL)
	{
#ifdef _WIN32
		if (!s_wgl_shared_context)
		{
			libretro_create_shared_wgl_context();
		}
		else
		{
			// A context after a context: not a fullscreen toggle, which with
			// cache_context set never reaches here, but a real device loss or a
			// frontend that could not keep the old one. Re-capture the DC and let
			// the GPU thread make its context current again.
			s_wgl_frontend_dc = wglGetCurrentDC();
			s_gpu_context_made_current = false;
			cemuLog_log(LogType::Force, "[libretro] a context came back with a shared WGL context still here - the rebuild path");
			libretro_log(RETRO_LOG_INFO, "WGL context restored, dc=%p\n", s_wgl_frontend_dc);
		}
#else
#ifdef __ANDROID__
		const bool haveSharedContext = (s_egl_shared_context != EGL_NO_CONTEXT);
#else
		const bool haveSharedContext = s_use_egl ? (s_egl_shared_context != EGL_NO_CONTEXT)
		                                          : (s_glx_shared_context != nullptr);
#endif
		if (!haveSharedContext)
		{
			libretro_create_shared_gl_context();
		}
		else if (s_use_egl)
		{
			// A context after a context - see the WGL branch above for what that
			// means now. Refresh display/surface for MakeCurrent.
			s_egl_display = egl_current_display();
			s_egl_surface = eglGetCurrentSurface(EGL_DRAW);
			s_gpu_context_made_current = false;
			cemuLog_log(LogType::Force, "[libretro] a context came back with a shared EGL context still here - the rebuild path");
			libretro_log(RETRO_LOG_INFO, "EGL context restored, surface=%p\n", s_egl_surface);
		}
#ifndef __ANDROID__
		else
		{
			// A context after a context - see the WGL branch above. Update the
			// drawable for MakeCurrent.
			s_glx_display = glXGetCurrentDisplay();
			s_glx_drawable = glXGetCurrentDrawable();
			s_gpu_context_made_current = false;
			cemuLog_log(LogType::Force, "[libretro] a context came back with a shared GLX context still here - the rebuild path");
			libretro_log(RETRO_LOG_INFO, "Context restored, updating drawable=0x%lx\n",
				(unsigned long)s_glx_drawable);
		}
#endif // __ANDROID__
#endif // _WIN32
	}
#endif // ENABLE_OPENGL

	libretro_create_renderer();

	// After the renderer, never before it. A GPU thread let go while g_renderer
	// is still null wakes into a run with nothing to render on: it either reads
	// that as its run being over and leaves, or - before the stop signal knew
	// about it - dereferenced the null. The thread's own rebuild runs off the
	// back of this release and needs the renderer to already be there.
	Latte_ReleaseGpuPause();

	// From this point on a GPU device/renderer may exist and normal C++ static-destructor
	// teardown of this DLL is unsafe (see retro_unload_game / retro_deinit). Mark it so a
	// later load failure still gets the renderer torn down rather than left behind.
	if (g_renderer)
		s_gpu_context_created = true;

	// Set window info
	auto& windowInfo = WindowSystem::GetWindowInfo();
	// The blit into the presentation image fills the window, so the window is
	// the output size.
	windowInfo.width = libretro_out_width();
	windowInfo.height = libretro_out_height();
	windowInfo.phys_width = libretro_out_width();
	windowInfo.phys_height = libretro_out_height();
	windowInfo.dpi_scale = 1.0;
	windowInfo.app_active = true;

	// The title is not started here. It starts on the frontend's own thread,
	// inside the first retro_run, and that call does not return until it is
	// running - see the handshake there for why.
}

// Runs on: the frontend's thread, the same one as context_reset.
static void libretro_context_destroy()
{
	// This is the close, so the title goes down here, while there is still a
	// renderer to go down with.
	//
	// Upstream's ShutdownTitle stops the scheduler first and the GPU thread
	// second. That order is what lets it finish: a guest thread waiting on the
	// GPU is still being served while the scheduler winds down, so it reaches a
	// yield point and the join returns. This core could not use that order,
	// because context_destroy runs before retro_unload_game and took the
	// renderer with it - and a guest thread that polls the GPU rather than
	// sleeping on it then never yields. That is the join on core 1 that never
	// came back in sco's logs: 26 threads WAITING and one RUNNING.
	//
	// What made this impossible was not knowing whether a context_destroy was a
	// close or something the frontend does with a title still running, like a
	// fullscreen toggle. hunterk confirmed there is nothing left that calls it
	// with cache_context set - which this core sets on both the GL and the
	// Vulkan path - other than unloading content, exiting, and a real device
	// loss. All three end the title anyway, so it is treated as the close.
	//
	// If that assumption is ever wrong, the symptom is a title that stops on a
	// frontend operation it should have survived, and the line below says when
	// it happened.
	if (s_game_loaded)
	{
		cemuLog_log(LogType::Force, "[libretro] the graphics context is going away, which is the close: stopping the title first, scheduler before GPU thread");

		// The same stop as the one the close and a reset use, rather than a
		// copy of it: it wakes anything parked at the frame gate before
		// ShutdownTitle joins the GPU thread, and it is the one place that
		// knows what stopping a title takes. Its two Latte calls are no-ops
		// here - nothing has asked for a pause or a renderer rebuild yet,
		// because the handshake below is what starts that.
		libretro_stop_title();

		cemuLog_log(LogType::Force, "[libretro] the title is down; the context can go");
	}
	else
	{
		cemuLog_log(LogType::Force, "[libretro] the graphics context is going away with no title loaded");
	}

	// Everything below runs with no title: either the close above stopped one,
	// or there was none to stop. What can still be alive is the GPU thread, and
	// it renders through the frontend's device - carrying on through the
	// teardown either wedges it on a lock or faults inside the driver - so it
	// is parked at a command boundary before the context goes.
	//
	// Bounded: if the GPU thread is stuck somewhere it cannot reach the gate,
	// a frozen frontend would be worse than the race we are closing.
	//
	// The gate has to be held open for the length of this handshake: parking is
	// something the GPU thread does for itself at a command boundary, and a
	// thread the frame gate is holding never reaches one. Waiting for a parked
	// thread to park is a wait that always times out.
	libretro_frame_gate_hold_open(true);
	// Before the pause, because the gate is where it happens: the GPU thread
	// hands back everything it built on this context on its way into the park.
	// This is the last moment that is possible - a close arrives after
	// context_destroy, with the device already gone - so a teardown that does
	// not happen here does not happen at all, and what used to follow was the
	// objects being forgotten rather than freed.
	Latte_RequestGpuTeardownForContextLoss();
	Latte_RequestGpuPause();
	// Nothing to wait for if there is no thread: a close sets the stop signal
	// before the frontend takes its context apart, so by the time this runs the
	// GPU thread may already have left through one of its own stop checks - and
	// it tore the context's contents down on the way out. Waiting for that
	// thread to park is waiting for nobody, which is exactly how this path used
	// to end a close: half a second at the gate, then the process.
	if (!Latte_IsGpuThreadAlive())
	{
		Latte_CancelGpuTeardownForContextLoss();
		Latte_ReleaseGpuPause();
		libretro_frame_gate_hold_open(false);
		if (!libretro_wait_for_gpu_handover("the GPU thread was already gone when the context went away"))
			cemuLog_log(LogType::Force, "[LatteThread] the GPU thread was already gone when the context went away");
		s_hw_render_initialized = false;
		s_frontend_read_fbo = 0;
		s_frontend_read_rbo_attached = 0;
		s_gpu_context_made_current = false;
		s_frontend_context_gone = true;
		return;
	}

	// No check for a GPU thread that was created but has not run its first line
	// yet, and none for one still inside the renderer's bring-up. Both were
	// real - the second is where the Mali abort came from - and both belong to
	// a startup that ran on a thread of its own. It runs in the first retro_run
	// now, on the frontend's thread, and Latte_Start does not return until the
	// GPU thread has reported its init finished. This function arrives on that
	// same thread, so by the time it can run there is either no GPU thread at
	// all or one that is past both windows.
	//
	// Two waits below, because they are two questions and only one of them is about
	// liveness. Reaching the gate is the thread answering at all - it happens
	// at a command boundary, so half a second is generous and a thread that
	// misses it is stuck inside a command handler.
	// A thread on its way out is the second way this ends, and not a failure:
	// a close sets the stop signal first, so the thread that reads it leaves
	// through LatteThread_Exit and runs the same teardown there. Waiting for a
	// gate it will never reach is how that turned into the whole budget spent
	// and then the teardown racing the device's destruction.
	for (int i = 0; i < 500 && !Latte_IsGpuAtPauseGate() && Latte_IsGpuThreadAlive(); i++)
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	if (!Latte_IsGpuAtPauseGate())
	{
		// It may still arrive, so the request is withdrawn rather than left
		// standing: a teardown that runs after this point would hand back a
		// context that is already gone, and the pause would hold the thread
		// for a frontend that has stopped waiting.
		Latte_CancelGpuTeardownForContextLoss();
		Latte_ReleaseGpuPause();
		libretro_frame_gate_hold_open(false);
		if (!libretro_wait_for_gpu_handover("the GPU thread left instead of reaching the pause gate"))
			libretro_gpu_thread_late("the GPU thread did not reach the pause gate before the graphics context went away");
		s_hw_render_initialized = false;
		s_frontend_read_fbo = 0;
		s_frontend_read_rbo_attached = 0;
		s_gpu_context_made_current = false;
		s_frontend_context_gone = true;
		return;
	}
	// Finishing there is work rather than an answer: freeing every texture,
	// shader and pipeline this run built and then destroying the renderer.
	// Measured between 120 ms and over half a second on the same title, which
	// is why it had a budget of its own after the first version put both
	// questions behind one half-second wait and aborted on a teardown that was
	// simply still going. Ten seconds is long enough that only a wedge reaches
	// it.
	for (int i = 0; i < 10000 && !Latte_IsGpuParked(); i++)
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	libretro_frame_gate_hold_open(false);
	if (!Latte_IsGpuParked())
	{
		// Reached the gate and is still working there, ten seconds in. Nothing
		// to withdraw - the teardown is already running - so this is only said
		// out loud; what it is freeing belongs to a context that is about to go,
		// and the unload deletes whatever is left.
		libretro_gpu_thread_late("the GPU thread reached the pause gate but did not finish handing the graphics context back");
	}
	if (Latte_GpuTeardownForContextLossDone())
		libretro_log(RETRO_LOG_INFO, "handed the core's GPU objects back before the context went away\n");

	s_hw_render_initialized = false;
	s_frontend_read_fbo = 0;
	s_frontend_read_rbo_attached = 0;
	s_gpu_context_made_current = false;
	s_frontend_context_gone = true;

	// Nothing is left to clean up here: the GPU thread gave the context its
	// contents back on the way into the park, including the renderer itself.
}

// A .wud/.wux is encrypted, and without its disc key nothing downstream says so
// in a way anyone can act on: the mount fails, the title scan then finds no
// title, and what reaches the user is "could not find base title ID" - which
// reads like the file is broken rather than like a key is missing.
//
// The question is cheap to ask here, and asking it before anything else in the
// load means the answer can be a refused load with a sentence naming the file
// and the key file that was searched, rather than a black screen several
// seconds later. FindDiscKey is the same call the mount would make.
static bool libretro_disc_key_available(const fs::path& gamePath)
{
	std::string ext = _pathToUtf8(gamePath.extension());
	std::transform(ext.begin(), ext.end(), ext.begin(), [](unsigned char c) { return (char)std::tolower(c); });
	if (ext != ".wud" && ext != ".wux")
		return true;

	KeyCache_Prepare();

	// FindDiscKey decrypts the partition header to recognise a key, and the two
	// AES entry points are function pointers that stay null until AES128_init
	// picks an implementation. The emulator does that in CemuCommonInit, which
	// runs from the first retro_run - after this, and only if this lets the load
	// through. Asking here therefore means asking before the crypto exists:
	// with a key to try, the first one dereferences a null pointer and takes
	// the process down before Cemu has even opened its log.
	// It is idempotent, so CemuCommonInit calling it again later is no matter.
	AES128_init();

	NCrypto::AesKey discTitleKey;
	bool imageOpened = false;
	if (FSTVolume::FindDiscKey(gamePath, discTitleKey, &imageOpened))
		return true;

	// The image would not open or its header would not read: whatever is wrong
	// with it, a missing key is not it, and saying so would send the user off
	// editing keys.txt for nothing. Let the normal load path report it.
	if (!imageOpened)
		return true;

	const fs::path keysPath = ActiveSettings::GetUserDataPath("keys.txt");
	libretro_show_message(RETRO_LOG_ERROR, 8000,
		fmt::format("No disc key for {}. Put it beside the image as {}, or add it to {}",
			_pathToUtf8(gamePath.filename()), _pathToUtf8(fs::path(gamePath.filename()).replace_extension(".key")), _pathToUtf8(keysPath)));
	return false;
}

RETRO_API bool retro_load_game(const struct retro_game_info* game)
{
	if (!game || !game->path)
		return false;

	// Before the renderer, the context and the title: a load that cannot
	// possibly succeed should fail while the frontend is still in a position to
	// say so and stay in its menu.
	if (!libretro_disc_key_available(_utf8ToPath(game->path)))
		return false;

	libretro_reset_install_switches();

	// Re-decided below for this load; a stale value from a previous one would
	// hide a frontend that cannot give this core a context the second time.
	s_use_hw_render = false;

	// 5.1 when asked for and RetroArch has multi-channel output (asked once,
	// at load); otherwise the audio goes out as stereo
	{
		static retro_audio_sample_multi_callback s_multi{};
		s_multi = {};
		const char* channels = libretro_get_option_value("cemu_audio_channels");
		const bool surround = channels && libretro_iequals(channels, "surround");
		if (surround &&
			!(environ_cb(RETRO_ENVIRONMENT_GET_AUDIO_SAMPLE_BATCH_MULTI, &s_multi) && s_multi.batch_int16))
		{
			libretro_log(RETRO_LOG_WARN, "audio: the frontend has no multi-channel output, 5.1 is mixed down to stereo\n");
			s_multi = {};
		}
		LibretroAudioAPI::SetOutput(s_multi.batch_int16 ? 6 : 2, s_multi.batch_int16
			? [](const int16_t* data, size_t frames, unsigned ch, unsigned layout) -> size_t {
				return s_audio_submission_allowed && data && frames > 0 ? s_multi.batch_int16(data, frames, ch, layout) : 0;
			}
			: nullptr);
		libretro_log(RETRO_LOG_INFO, "audio: %u channels to the frontend\n", s_multi.batch_int16 ? 6u : 2u);
	}

	// Set up pixel format
	enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
	if (!environ_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt))
	{
		libretro_log(RETRO_LOG_ERROR, "XRGB8888 pixel format not supported\n");
		return false;
	}

	// Set up HW render context based on selected graphics API
#ifdef ENABLE_VULKAN
	if (s_graphics_api == SelectedGraphicsAPI::Vulkan)
	{
		// Set negotiation interface so RetroArch lets us create the VkDevice
		environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER_CONTEXT_NEGOTIATION_INTERFACE, &s_vk_negotiation);

		s_hw_render.context_type = RETRO_HW_CONTEXT_VULKAN;
		s_hw_render.version_major = VK_API_VERSION_MAJOR(VK_API_VERSION_1_1);
		s_hw_render.version_minor = VK_API_VERSION_MINOR(VK_API_VERSION_1_1);
		s_hw_render.context_reset = libretro_context_reset;
		s_hw_render.context_destroy = libretro_context_destroy;
		// Keep the context across a video driver rebuild (fullscreen toggle,
		// av_info change). Every Vulkan object the renderer owns lives on the
		// frontend's device, so letting RetroArch throw that away mid-title
		// leaves the driver calling through freed memory.
		s_hw_render.cache_context = true;
		s_hw_render.debug_context = false;

		if (environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
		{
			s_use_hw_render = true;
			libretro_log(RETRO_LOG_INFO, "Vulkan HW render context requested\n");
		}
		else
		{
#ifdef ENABLE_OPENGL
			libretro_log(RETRO_LOG_WARN, "Vulkan not supported by frontend, falling back to OpenGL\n");
			s_graphics_api = SelectedGraphicsAPI::OpenGL;
			GetConfig().graphic_api = kOpenGL;
#else
			// Nothing to fall back to: a build without the OpenGL backend (macOS,
			// where Cemu uses Metal and Vulkan) has only this path.
			libretro_log(RETRO_LOG_ERROR, "Vulkan not supported by frontend and this core has no OpenGL backend\n");
			return false;
#endif
		}
	}
#ifdef ENABLE_OPENGL
	if (s_graphics_api == SelectedGraphicsAPI::OpenGL)
#endif
#endif
#ifdef ENABLE_OPENGL
	{
		// OpenGL path
		s_hw_render.context_type = RETRO_HW_CONTEXT_OPENGL_CORE;
		s_hw_render.version_major = 4;
		s_hw_render.version_minor = 5;
		s_hw_render.context_reset = libretro_context_reset;
		s_hw_render.context_destroy = libretro_context_destroy;
		s_hw_render.bottom_left_origin = true;
		s_hw_render.depth = true;
		s_hw_render.stencil = true;
		s_hw_render.cache_context = true;

		// Request shared GL context so Cemu GPU thread can use it from another thread
		environ_cb(RETRO_ENVIRONMENT_SET_HW_SHARED_CONTEXT, nullptr);

		if (environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
		{
			s_use_hw_render = true;
			libretro_log(RETRO_LOG_INFO, "Using OpenGL 4.5 HW rendering\n");
		}
		else
		{
			// Try lower GL version
			s_hw_render.context_type = RETRO_HW_CONTEXT_OPENGL_CORE;
			s_hw_render.version_major = 4;
			s_hw_render.version_minor = 1;
			if (environ_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
			{
				s_use_hw_render = true;
				libretro_log(RETRO_LOG_INFO, "Using OpenGL 4.1 HW rendering\n");
			}
			else
			{
				libretro_log(RETRO_LOG_ERROR, "HW rendering not available - OpenGL 4.1+ required\n");
				return false;
			}
		}
	}
#endif // ENABLE_OPENGL

	// Register input descriptors. These are the names a frontend puts on its
	// remapping screen and on an overlay button, so they have to say the same
	// thing the core actually does - they used to carry the same crossed-over
	// pair as the mapping did, which meant the remapper agreed with the bug.
	static const struct retro_input_descriptor input_desc[] = {
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A,      "A" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B,      "B" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X,      "X" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y,      "Y" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L,      "L" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R,      "R" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L2,     "ZL" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R2,     "ZR" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START,  "+" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT, "-" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_UP,     "D-Pad Up" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_DOWN,   "D-Pad Down" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_LEFT,   "D-Pad Left" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_RIGHT,  "D-Pad Right" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_L3,     "LS" },
		{ 0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_R3,     "RS" },
		{ 0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_X,     "Touchscreen X" },
		{ 0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_Y,     "Touchscreen Y" },
		{ 0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_PRESSED, "Touchscreen Press" },
		{ 0, 0, 0, 0, NULL },
	};
	environ_cb(RETRO_ENVIRONMENT_SET_INPUT_DESCRIPTORS, (void*)input_desc);

	// Nothing above managed to set a hardware render context: the title would
	// never boot - the first retro_run starts it, and it will not start one
	// without a renderer to run on - and the frontend would be left with a core
	// that hands it no frames. Fail the load instead, so the frontend says so
	// rather than the user staring at a black screen.
	if (!s_use_hw_render)
	{
		libretro_log(RETRO_LOG_ERROR, "no hardware renderer available - this core needs a Vulkan (or OpenGL 4.1+) capable frontend\n");
		return false;
	}

	// Store the path. The title itself starts in the first retro_run, once
	// context_reset has built a renderer for it to run on.
	s_game_path = game->path;

	// An update's or DLC's title.tmd is content to install, not to boot.
	// Reading it decrypts it, and the crypto is otherwise set up only by
	// CemuCommonInit in the first retro_run; both calls are idempotent.
	{
		KeyCache_Prepare();
		AES128_init();
		// and it mounts the title, in the emulator's file system that
		// CafeSystem::Initialize sets up at the first launch in this process
		if (!s_cafe_system_initialized)
			fsc_init();
		TitleInfo content{_utf8ToPath(s_game_path)};
		const auto type = content.IsValid() ? TitleIdParser(content.GetAppTitleId()).GetType() : TitleIdParser::TITLE_TYPE::BASE_TITLE;
		s_install_content = type == TitleIdParser::TITLE_TYPE::BASE_TITLE_UPDATE || type == TitleIdParser::TITLE_TYPE::AOC;
	}

	// Whether the conversion options are declared at all depends on there being
	// somewhere to write, so the destinations have to be known before the list
	// is published: an option the core does not declare here is one the
	// frontend has no way of being told about later.
	//
	// Forced, because the answer belongs to this title - where it sits decides
	// whether "beside the content" is offered at all - and the previous one in
	// this process will have left its own behind.
	libretro_collect_wua_destinations(true);
	LibretroGraphicPacks_InstallBundled();
	libretro_collect_pack_options(s_game_path);
	if (environ_cb)
	{
		const bool hasReplacements = std::any_of(s_pack_options.begin(), s_pack_options.end(),
			[](const LibretroPackOption& option) { return !option.originalKey.empty(); });
		if (hasReplacements)
		{
			libretro_publish_core_options(environ_cb, false);
			libretro_default_replacements_to_originals();
		}
		libretro_publish_core_options(environ_cb);
	}
	libretro_update_convert_visibility();
	libretro_update_resolution_visibility();
	libretro_update_pack_visibility();

	// Vulkan: context_reset is called by RetroArch after RETRO_HW_CONTEXT_VULKAN is set up

	return true;
}

RETRO_API bool retro_load_game_special(unsigned game_type, const struct retro_game_info* info, size_t num_info)
{
	return false;
}

// Closing content used to end the RetroArch process. The reason was real - the
// renderer draws through a Vulkan device the frontend owns, and tearing that
// down under a live GPU thread faults inside the driver - but the cost was the
// user's whole session, and a frontend is entitled to unload a core and carry
// on. So the order is: stop the title, which stops the GPU thread, and only
// then take the renderer apart. ~VulkanRenderer waits for the device to go idle
// and already knows to leave the device and instance themselves alone when they
// are not ours (m_useExternalDevice), so what it destroys is exactly what this
// core allocated.

// Stops one service.
static bool libretro_stop_service(const char* name, void (*stop)())
{
	// Inline, and with no deadline: every one of these services stops by
	// joining its own thread (IPCService::Stop), which is what upstream does
	// and what it expects to finish. The line before it is what turns a hang
	// into something findable - the log ends with the name of the service that
	// did not come back.
	cemuLog_log(LogType::Force, "[libretro] stopping the {} service", name);
	stop();
	libretro_log(RETRO_LOG_INFO, "%s service stopped\n", name);
	return true;
}

// CafeSystem::Shutdown() is what normally stops these, and calling it here
// hangs the frontend every time without saying which of the four does not come
// back (#17). One at a time instead, each with its own line in the log before
// it: a log that ends on one of those names the service that did not stop.
//
// Only ever once - mcp and fsa join their thread unconditionally, so a second
// pass would be a std::terminate on an already-joined thread.
static void libretro_stop_system_services()
{
	if (s_system_services_stopped || !s_cafe_system_initialized)
		return;
	s_system_services_stopped = true;

	libretro_stop_service("/dev/odm", &iosu::odm::Shutdown);
	libretro_stop_service("/dev/act", &iosu::act::Stop);
	libretro_stop_service("/dev/mcp", &iosu::mcp::Shutdown);
	libretro_stop_service("/dev/fsa", &iosu::fsa::Shutdown);
	// The deprecated IOSU workers (act, mcp, acp, nim) are started detached, so
	// there is no thread object left to join - but they do leave their loops
	// when asked, and now they say so, which is the half that was missing. What
	// used to be here waited 200 ms for the semaphore waiter count to reach
	// zero and carried on regardless, and a waiter count is not the question:
	// it counts threads blocked in the semaphore, not threads that have gone.
	//
	// They must be gone before the semaphores are destroyed at dlclose, or the
	// destructor blocks in pthread_cond_destroy() and the frontend hangs - and
	// a worker that outlives the request is one still answering ioctls for a
	// title that ended, which is the shape of every bug this evening.
	//
	// The one deadline left in this core, because these are the one set of
	// threads that cannot be joined: upstream detaches them and keeps no
	// handle. Five seconds, and then the process stops rather than leaving an
	// orphan answering ioctls - including save-data ones - for a title that has
	// ended, with the next run reading the same files.
	iosuIoctl_requestShutdown();
	if (!iosuIoctl_waitForWorkersToStop(5000))
	{
		libretro_fail_fast("IOSU",
			fmt::format("{} deprecated worker(s) did not stop when asked. They answer ioctls for a title that "
						"has ended, and the semaphores they are parked on are about to be destroyed.",
				iosuIoctl_runningWorkerCount()));
	}
	// They are gone, so the queues and their semaphores can go back to how init
	// left them rather than being handed to the next run with a shutdown's
	// worth of leftover posts in them.
	iosuIoctl_resetAfterWorkersStopped();

	// The modules' own hooks, which is where /dev/ccr_nfc joins its thread.
	// Without them that thread is still joinable when this library is unloaded,
	// and its std::thread destructor is a std::terminate with no stack to it -
	// the "terminate called without an active exception" on a clean exit.
	libretro_stop_service("IOSU modules", &CafeSystem::ShutdownIOSUModules);
}

RETRO_API void retro_unload_game()
{
	// The next content takes the output size afresh from the option.
	s_out_size_taken = false;
	libretro_reset_install_switches();

	// Before anything else: stop handing the frontend audio. This used to be
	// the line that mattered, back when Cemu's AX thread called the frontend
	// directly and could outlive the close. It no longer can: AX writes into
	// the ring and nothing but FlushAudio takes it out, from retro_run, on the
	// thread the frontend is standing on right now. So nothing can submit
	// between here and the end of this function, and the flag is kept for the
	// close the core asks for itself, where frames do still go out between the
	// request and the unload - see the SHUTDOWN in retro_run.
	s_audio_submission_allowed = false;

	// The title now starts inside retro_run, so a close cannot arrive while it
	// is starting - the frontend is in this core either way, and it is
	// in only one place at a time. What this flag still does is stop the frame
	// path once the close is under way.
	s_shutting_down = true;

	// A GPU device/renderer may have been created even if the title failed to finish
	// loading (s_game_loaded false), and that renderer still has to go.
	if (!s_game_loaded && !s_gpu_context_created)
	{
		// Nothing was torn down, so nothing is shutting down either: the flag
		// above belongs to this close and the next load has to start with it
		// clear, or retro_run skips every frame of a run that is fine.
		s_shutting_down = false;
		return;
	}

	// Whichever way it goes, this wakes anything still waiting on a frame that
	// is never coming: both of its paths call libretro_wake_frame_waiters.
	const bool stopped = libretro_stop_title();

	if (!stopped)
	{
		// The teardown below runs anyway. A title that would not stop still has
		// threads submitting work through the device the renderer is about to
		// destroy, so this is where the process may fault - and that fault is the
		// bug, with a backtrace pointing at whatever would not park. Exiting here
		// instead would hide it behind a silent process death that no crash
		// reporter picks up.
		libretro_log(RETRO_LOG_ERROR,
			"the title did not stop; tearing the renderer down with threads still live\n");
	}

	// After the title, never before it: the input update thread and the emulated
	// controllers are reachable from guest code, and joining the thread and
	// resetting the pads underneath a title that is still running deadlocks the
	// core it was running on - measured, six hangs out of six. With the title
	// stopped nothing calls into them any more. Nothing else stops this thread,
	// and left alone it outlives the core: it kept running after RetroArch
	// dlclosed the library and took the process down with a fault in unmapped
	// memory, plus "terminate called without an active exception" from the
	// still-joinable std::thread.
	InputManager::instance().Shutdown();

#ifdef ENABLE_VULKAN
	// Before the renderer goes, not after: every one of these threads works
	// through it. The GPU thread's teardown does this for any run that had a
	// title in it, at context_destroy, with the device still alive - so what is
	// left for this is a load that built a renderer and never started one.
	if (s_graphics_api == SelectedGraphicsAPI::Vulkan)
	{
		// The same three stops the GPU thread's teardown makes, in the same
		// order, through the same upstream functions - see
		// Latte_TeardownGpuState. This is only the run where that teardown
		// never happened, which means no title ever started: the renderer was
		// built, its thread pools with it, and nothing was ever compiled on
		// them. They are asleep on their queues and leave as soon as they are
		// woken, so joining them here costs nothing and leaves nothing behind.
		RendererShaderVk::Shutdown();
		VulkanPipelineStableCache::GetInstance().Close();
		PipelineCompiler::CompileThreadPool_Stop();
	}
#endif

	// Not g_renderer.reset(): ~VulkanRenderer reaches back through
	// VulkanRenderer::GetInstance(), which reads g_renderer itself - the sampler
	// cache's destructor asks it for the logical device. reset() nulls the
	// stored pointer *before* it deletes, so those destructors would be handed a
	// null halfway through the teardown, which is a SIGSEGV in
	// ~VKRObjectSampler every time. Deleting first and releasing after keeps the
	// pointer valid for the whole destructor - the order the standalone build
	// unwinds in, where the renderer outlives its own teardown by construction.
	// Usually there is nothing here: the GPU thread gave the context its
	// contents back, the renderer included, before this was reached. What is
	// left for this is a load that built a renderer and never started a title,
	// so no GPU thread ever existed to tear it down.
	if (Renderer* renderer = g_renderer.get())
	{
		if (s_emu_initialized)
		{
			cemuLog_log(LogType::Force, "[libretro] destroying the renderer on unload");
			delete renderer;
		}
		else
		{
			// No title ever started, so the GPU thread never ran and never
			// initialised this renderer: its GL entry points were never loaded,
			// and on Vulkan its command buffer was never set up. Its destructor
			// cleans up exactly those - a call through a null pointer on
			// OpenGL, a fault inside the driver on Vulkan - after nothing more
			// than a content that failed to load. It holds nothing else, so it
			// is let go; the next load builds a new one.
			cemuLog_log(LogType::Force, "[libretro] the renderer was never initialised (no title started) - not destroying it");
		}
		(void)g_renderer.release();
	}

	// A GPU thread parked at the pause gate is asleep with no renderer to come
	// back to, and nothing here wakes it - the next thing that does is the
	// *next* title's context_reset, seconds later, by which point it is a
	// thread from a finished run running against a renderer that does not exist
	// yet. That is where the close-early-then-run-again crash came from. Waking
	// it now lets it see there is nothing to render on and leave while this is
	// still its own close.
	Latte_ReleaseGpuPause();
	// And then wait for it to actually go. Waking it is not the same as it
	// being gone: what it does next is LatteThread_Exit, and the teardown there
	// deletes whatever g_renderer points at. If this returns first, the
	// frontend is free to load the next title, whose context_reset builds a
	// renderer - and the straggler from the last run deletes that one, leaving
	// the new title with nothing to render on. What that looks like is a black
	// screen with no shader cache progress at all, and nothing in the log to
	// say why: the next run's renderer is deleted by a thread the last run was
	// supposed to have taken with it.
	//
	// By joining it, which is how every other thread on a terminate path is
	// waited for here and upstream. This is the one case Latte_Stop does not
	// cover - a thread that left through its own exit was never joined by
	// anyone - and there is nothing left for it to do but leave: it has no
	// renderer, so its own stop check takes it out at the next command
	// boundary.
	if (Latte_IsGpuThreadAlive() || Latte_IsGpuHandingContextBack())
		cemuLog_log(LogType::Force, "[LatteThread] waiting for the GPU thread from this run to finish leaving");
	Latte_JoinGpuThreadIfLeft();

#ifdef ENABLE_OPENGL
	s_gl_callbacks.reset();
#endif
#ifdef ENABLE_VULKAN
	s_vk_interface = nullptr;
	LibretroVkQueue::SetInterface(nullptr);
#endif

	// Back to the state a fresh retro_load_game expects. s_initialized belongs to
	// retro_init/retro_deinit and is deliberately left alone.
	s_gpu_context_created = false;
	s_hw_render_initialized = false;
	s_gpu_context_made_current = false;
	s_emu_initialized = false;
	s_launch_attempted = false;
	s_reset_requested.store(false, std::memory_order_release);
	s_shutting_down = false;
	s_frame_ready = false;
	{
		std::lock_guard lock(s_gate_mutex);
		s_gate_released = false;
		s_gate_tokens = 1;
		s_frame_permit = true;
		s_gate_hold_open = 0;
	}
	s_ppc_process_exited = false;
	// An install loaded as content has nothing else to wait for it
	if (s_install_content && s_convert_thread.joinable())
	{
		s_convert_cancel.store(true);
		s_convert_thread.join();
		s_convert_mode.store(false);
	}
	s_install_content = false;
	// The title is down, so what it had in use can go now
	libretro_run_removals();
	s_game_path.clear();
	// The destinations belong to the title that just stopped; the next load
	// works out its own.
	s_wua_destinations_collected = false;
	s_wua_destinations.clear();
	s_wua_unavailable_reason.clear();
	s_frontend_read_fbo = 0;
	s_frontend_read_rbo_attached = 0;
	s_frontend_upload_tex = 0;

	libretro_log(RETRO_LOG_INFO, "content closed, core unloaded\n");
}

RETRO_API void retro_deinit()
{
	// retro_unload_game has normally already taken the renderer apart and cleared
	// these. If it has not - a frontend that deinits without unloading, or an
	// unload that bailed out - then a GPU device still exists and running this
	// library's static destructors is not safe.
	if ((s_emu_initialized || s_gpu_context_created) && log_cb)
		libretro_log(RETRO_LOG_ERROR,
			"deinit with a GPU device still alive - static teardown from here is not safe\n");

	// A conversion that is still running holds the title mounted, so it has to
	// stop before anything below takes the system apart.
	if (s_convert_thread.joinable())
	{
		s_convert_cancel.store(true);
		s_convert_thread.join();
	}
	s_convert_game_info.reset();

	// The IOSU services outlive a title on purpose - they belong to the system,
	// and ShutdownTitle leaves them alone - but they must not outlive the
	// library. They are stopped here rather than in retro_unload_game because
	// a frontend may load more content into the same core, and that content
	// still needs /dev/fsa.
	libretro_stop_system_services();

	// Anything still joinable when this library is unloaded is a std::terminate
	// in a static destructor, with no stack to explain it.
	//
	// CafeSystem::Shutdown would be the obvious thing to call here as well - it
	// is what joins the IOSU service threads (/dev/fsa, /dev/odm, MCP), which
	// ShutdownTitle leaves alone because they belong to the system rather than
	// to the title. It does not return: measured six times out of six, the
	// frontend never exits. Until those services can be stopped without
	// blocking, the threads are left as they are.
	CafeTitleList::Shutdown();

	// The shader cache writer is a thread owned by a static. Left to the
	// static's destructor, it is joined inside FreeLibrary under the loader
	// lock, which the thread needs in order to exit: the frontend hangs.
	FileCache_StopAsyncWriter();

	// What would otherwise keep this library loaded, or point into it once it
	// is gone. OpenSSL is built with no-pinshared (the overlay port), so it
	// no longer pins the library, and its cleanup runs here instead of at
	// process exit, when the code would not be there any more. The crash
	// handlers go back to the frontend's.
	OPENSSL_cleanup();
	ExceptionHandler_Shutdown();

	s_initialized = false;
}

// ============================================================================
// Input mapping
// ============================================================================

static void libretro_poll_input()
{
	if (!input_poll_cb || !input_state_cb)
		return;

	input_poll_cb();

	s_layout_combo_held_this_frame = false;

	// Raw pad state for the ports that drive something, for the Wii Remotes
	// behind InputManager - and for the GamePad below, which is built from
	// port 0 rather than asking the frontend the same twenty questions a
	// second time.
	for (uint32_t port = 0; port < s_polled_ports; ++port)
	{
		auto& pad = s_port_state[port];
		for (uint32_t id = 0; id < 16; ++id)
			pad.buttons[id] = input_state_cb(port, RETRO_DEVICE_JOYPAD, 0, id);

		pad.left_x = input_state_cb(port, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_X);
		pad.left_y = input_state_cb(port, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_Y);
		pad.right_x = input_state_cb(port, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X);
		pad.right_y = input_state_cb(port, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y);
	}

	auto& state = s_input_state;
	const auto& pad0 = s_port_state[0];

	// Map libretro joypad buttons to Wii U GamePad.
	//
	// One for one, and the reason is worth writing down because the code here
	// used to swap both pairs. The RetroPad is modelled on a SNES controller:
	// libretro.h says B is the south face button, A the east, Y the west and X
	// the north. The Wii U GamePad has exactly that arrangement - A east, B
	// south, X north, Y west - so matching by name and matching by position are
	// the same thing, and nothing needs crossing over. The swap that was here
	// came from the Xbox convention, where the button printed B sits east, and
	// it made the pad answer with the wrong one of each pair: pressing the
	// south button, which is B on a RetroPad and B on a GamePad, arrived in the
	// title as A. Reported from the other end as "b is a ingame".
	state.buttons[VPADController::kButtonId_A] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_A]; // east
	state.buttons[VPADController::kButtonId_B] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_B]; // south
	state.buttons[VPADController::kButtonId_X] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_X]; // north
	state.buttons[VPADController::kButtonId_Y] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_Y]; // west

	state.buttons[VPADController::kButtonId_L] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_L];
	state.buttons[VPADController::kButtonId_R] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_R];
	state.buttons[VPADController::kButtonId_ZL] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_L2];
	state.buttons[VPADController::kButtonId_ZR] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_R2];

	state.buttons[VPADController::kButtonId_Plus] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_START];
	state.buttons[VPADController::kButtonId_Minus] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_SELECT];

	state.buttons[VPADController::kButtonId_Up] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_UP];
	state.buttons[VPADController::kButtonId_Down] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_DOWN];
	state.buttons[VPADController::kButtonId_Left] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_LEFT];
	state.buttons[VPADController::kButtonId_Right] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_RIGHT];

	state.buttons[VPADController::kButtonId_StickL] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_L3];
	state.buttons[VPADController::kButtonId_StickR] = pad0.buttons[RETRO_DEVICE_ID_JOYPAD_R3];

	// Analog sticks
	state.left_x = pad0.left_x;
	state.left_y = pad0.left_y;
	state.right_x = pad0.right_x;
	state.right_y = pad0.right_y;

	// The layout shortcut, on the press rather than while it is held. One
	// setting, so at most one of these two is looked at in a frame: disabled
	// reads neither, Tab reads the keyboard and never the pad, a pad
	// combination reads the array that is already in hand and never asks the
	// frontend for a key.
	if (s_next_layout_button == LibretroLayoutButton::KeyTab)
	{
		const bool down = input_state_cb(0, RETRO_DEVICE_KEYBOARD, 0, RETROK_TAB) != 0;
		if (down && !s_next_layout_button_held)
			libretro_next_screen_layout();
		if (down)
			s_layout_combo_held_this_frame = true;
		s_next_layout_button_held = down;
	}
	else if (s_next_layout_button != LibretroLayoutButton::None)
	{
		const auto& pad = s_port_state[0];
		const bool l3 = pad.buttons[RETRO_DEVICE_ID_JOYPAD_L3] != 0;
		const bool r3 = pad.buttons[RETRO_DEVICE_ID_JOYPAD_R3] != 0;
		const bool select = pad.buttons[RETRO_DEVICE_ID_JOYPAD_SELECT] != 0;
		bool down = false;
		switch (s_next_layout_button)
		{
		// Both handled above; named so the switch stays exhaustive.
		case LibretroLayoutButton::None:
		case LibretroLayoutButton::KeyTab: break;
		case LibretroLayoutButton::SelectL3: down = select && l3; break;
		case LibretroLayoutButton::SelectR3: down = select && r3; break;
		case LibretroLayoutButton::AllShoulders:
			down = pad.buttons[RETRO_DEVICE_ID_JOYPAD_L] != 0 &&
				pad.buttons[RETRO_DEVICE_ID_JOYPAD_R] != 0 &&
				pad.buttons[RETRO_DEVICE_ID_JOYPAD_L2] != 0 &&
				pad.buttons[RETRO_DEVICE_ID_JOYPAD_R2] != 0 && l3 && r3;
			break;
		}
		if (down && !s_next_layout_button_held)
			libretro_next_screen_layout();
		if (down)
			s_layout_combo_held_this_frame = true;
		s_next_layout_button_held = down;
	}

	// Any frame the combination is held in is a frame the title does not see. The
	// pad state above is already built, so it is cleared here rather than
	// guarded at every assignment, and the accessors the Wii Remotes read
	// through answer the same way for this frame.
	if (s_layout_combo_held_this_frame)
	{
		std::memset(state.buttons, 0, sizeof(state.buttons));
		state.left_x = 0;
		state.left_y = 0;
		state.right_x = 0;
		state.right_y = 0;
	}

	// Touchscreen (mouse/pointer mapped to GamePad touchscreen)
	state.touch_pressed = input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_PRESSED) != 0;
	if (state.touch_pressed)
	{
		state.touch_x = input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_X);
		state.touch_y = input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_Y);
	}
}

// Expose input state to the VPAD emulation
// Called from vpad.cpp VPADRead in libretro mode

bool libretro_get_button_state(uint32_t button_id)
{
	if (s_layout_combo_held_this_frame)
		return false;
	if (button_id >= VPADController::kButtonId_Max)
		return false;
	return s_input_state.buttons[button_id] != 0;
}

// Expose the raw per-port state to LibretroController (src/input/api/Libretro)

bool libretro_get_joypad_button(uint32_t port, uint32_t retro_id)
{
	if (s_layout_combo_held_this_frame)
		return false;
	if (port >= kLibretroMaxPorts || retro_id >= 16)
		return false;
	return s_port_state[port].buttons[retro_id] != 0;
}

void libretro_get_joypad_analog(uint32_t port, float* lx, float* ly, float* rx, float* ry)
{
	if (port >= kLibretroMaxPorts)
	{
		*lx = *ly = *rx = *ry = 0.0f;
		return;
	}

	const auto& pad = s_port_state[port];
	*lx = pad.left_x / 32767.0f;
	*ly = -(pad.left_y / 32767.0f);
	*rx = pad.right_x / 32767.0f;
	*ry = -(pad.right_y / 32767.0f);
}

void libretro_get_analog_state(float* lx, float* ly, float* rx, float* ry)
{
	*lx = s_input_state.left_x / 32767.0f;
	*ly = -(s_input_state.left_y / 32767.0f);
	*rx = s_input_state.right_x / 32767.0f;
	*ry = -(s_input_state.right_y / 32767.0f);
}

bool libretro_get_touch_state(uint16_t* x, uint16_t* y)
{
	if (!s_input_state.touch_pressed)
		return false;
	// Pointer comes in as (-0x7fff..0x7fff) over the libretro presentation
	// surface, which we treat as a 1280x720 (SCREEN_WIDTH x SCREEN_HEIGHT)
	// virtual canvas. In composite DRC modes (SBS / TopBottom / PiP) only the
	// DRC sub-rect is the touchable area; clicks elsewhere don't belong on the
	// GamePad. Map pointer → canvas → DRC sub-rect → GamePad touchscreen.
	const int canvasX = (int)(((int32_t)s_input_state.touch_x + 0x7fff) * (int)libretro_out_width()  / (2 * 0x7fff));
	const int canvasY = (int)(((int32_t)s_input_state.touch_y + 0x7fff) * (int)libretro_out_height() / (2 * 0x7fff));
	int drcX, drcY, drcW, drcH;
	LibretroDRC_ComputeViewport(true, (int)libretro_out_width(), (int)libretro_out_height(), drcX, drcY, drcW, drcH);
	if (drcW <= 0 || drcH <= 0)
		return false;
	if (canvasX < drcX || canvasX >= drcX + drcW || canvasY < drcY || canvasY >= drcY + drcH)
		return false;
	*x = (uint16_t)((canvasX - drcX) * 853 / drcW);
	*y = (uint16_t)((canvasY - drcY) * 479 / drcH);
	return true;
}

// ============================================================================
// Main run loop
// ============================================================================

// GL function pointers for blitting in retro_run (frontend GL context)
// Use function pointers to avoid conflicts with CemuGL namespace
typedef void (*PFNGLBINDFRAMEBUFFERPROC_)(unsigned int, unsigned int);
typedef void (*PFNGLGENFRAMEBUFFERSPROC_)(int, unsigned int*);
typedef void (*PFNGLBLITFRAMEBUFFERPROC_)(int, int, int, int, int, int, int, int, unsigned int, unsigned int);

static PFNGLBINDFRAMEBUFFERPROC_ s_glBindFramebuffer = nullptr;
static PFNGLGENFRAMEBUFFERSPROC_ s_glGenFramebuffers = nullptr;
static PFNGLBLITFRAMEBUFFERPROC_ s_glBlitFramebuffer = nullptr;

#ifdef ENABLE_OPENGL
static void libretro_load_blit_gl_funcs()
{
	if (s_glBindFramebuffer) return;
	s_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC_)cemu_gl_get_proc("glBindFramebuffer");
	s_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC_)cemu_gl_get_proc("glGenFramebuffers");
	s_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC_)cemu_gl_get_proc("glBlitFramebuffer");
}
#endif // ENABLE_OPENGL

#define GL_COLOR_BUFFER_BIT_ 0x00004000
#define GL_NEAREST_ 0x2600
#define GL_COLOR_ATTACHMENT0_ 0x8CE0
#define GL_DRAW_FRAMEBUFFER_ 0x8CA9

// Get the shared renderbuffer from the GPU thread's FBO. Only the GL path has
// one; the declaration follows the GL headers that define its return type.
#ifdef ENABLE_OPENGL
extern GLuint libretro_getBackbufferRBO();
#endif

// The end of every retro_run that got as far as a frame: hand the audio over,
// and account for where the frame's time went (cemu_log_audio).
// How long the last hand-over of audio kept retro_run waiting in the
// frontend's audio callback (see the audio grant in retro_run).
static int64_t s_last_audio_wait_us = 0;

// The game's own frame rate, once a second, as a status line on the
// frontend's OSD. RetroArch's FPS counter cannot show it: retro_run keeps
// coming at 60 Hz whatever the title renders at, presenting the last image
// again when no new one is ready, so a title dropping to 40 still counts 60
// there and only the frame time shows it (NNshi).
static void libretro_report_game_fps(std::chrono::steady_clock::time_point now)
{
	static std::chrono::steady_clock::time_point s_since{};
	static bool s_have_ext = false, s_checked_ext = false;
	static std::string s_text;

	if (!s_show_game_fps || !environ_cb)
	{
		s_since = {};
		s_game_frames.store(0, std::memory_order_relaxed);
		return;
	}
	if (!s_checked_ext)
	{
		unsigned version = 0;
		s_have_ext = environ_cb(RETRO_ENVIRONMENT_GET_MESSAGE_INTERFACE_VERSION, &version) && version >= 1;
		s_checked_ext = true;
	}
	if (s_since == std::chrono::steady_clock::time_point{})
	{
		s_since = now;
		s_game_frames.store(0, std::memory_order_relaxed);
		return;
	}

	const double seconds = std::chrono::duration<double>(now - s_since).count();
	if (seconds < 1.0)
		return;

	const uint32_t frames = s_game_frames.exchange(0, std::memory_order_relaxed);
	s_since = now;
	s_text = fmt::format("Game: {:.1f} FPS", frames / seconds);

	if (s_have_ext)
	{
		// A status message is the frontend's line for figures like this one,
		// replaced in place rather than stacked up as notifications.
		struct retro_message_ext message = {};
		message.msg = s_text.c_str();
		message.duration = 1500;
		message.priority = 1;
		message.level = RETRO_LOG_INFO;
		message.target = RETRO_MESSAGE_TARGET_OSD;
		message.type = RETRO_MESSAGE_TYPE_STATUS;
		message.progress = -1;
		environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE_EXT, &message);
	}
	else
	{
		struct retro_message message{s_text.c_str(), 90};
		environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &message);
	}
}

// How busy each thread that can hold a frame up was (cemu_log_thread_time):
// CPU time each spent in the last second, against the wall clock. The PPC core
// threads and the GPU thread are read from outside by their handles; they
// live between OSSchedulerBegin/Latte_Start and the stop, which never runs
// during retro_run. s_log_thread_time is declared above libretro_apply_core_options.

namespace coreinit
{
	std::vector<std::thread::native_handle_type>& OSGetSchedulerThreads();
}
extern std::thread sLatteThread;

#if defined(__linux__)
#include <unistd.h>

// Whether the CPU throttles (sco8487: heat with the charger in): each core's
// clock now, and which core each PPC thread last ran on, from /sys and /proc
namespace coreinit
{
	std::vector<pid_t>& OSGetSchedulerThreadIds();
}

static long libretro_read_long(const std::string& path)
{
	long value = -1;
	if (FILE* file = fopen(path.c_str(), "r"))
	{
		if (fscanf(file, "%ld", &value) != 1)
			value = -1;
		fclose(file);
	}
	return value;
}

// Field 39 of /proc/self/task/<tid>/stat: the CPU it last ran on
static int libretro_thread_last_cpu(pid_t tid)
{
	FILE* file = fopen(fmt::format("/proc/self/task/{}/stat", tid).c_str(), "r");
	if (!file)
		return -1;
	char buf[1024];
	const size_t n = fread(buf, 1, sizeof(buf) - 1, file);
	fclose(file);
	buf[n] = 0;
	const char* p = strrchr(buf, ')');
	if (!p)
		return -1;
	// After the name come fields 3 on; the CPU is the 37th of them
	int field = 2;
	for (; *p && field < 39; p++)
		if (*p == ' ')
			field++;
	return field == 39 ? atoi(p) : -1;
}

static std::string libretro_cpu_clocks()
{
	std::string line = "cpu MHz now:";
	const long count = sysconf(_SC_NPROCESSORS_CONF);
	for (long i = 0; i < count; i++)
	{
		const long cur = libretro_read_long(fmt::format("/sys/devices/system/cpu/cpu{}/cpufreq/scaling_cur_freq", i));
		const long max = libretro_read_long(fmt::format("/sys/devices/system/cpu/cpu{}/cpufreq/cpuinfo_max_freq", i));
		if (cur < 0)
			line += fmt::format(" {}:?", i);
		else if (max > 0)
			line += fmt::format(" {}:{}/{}", i, cur / 1000, max / 1000);
		else
			line += fmt::format(" {}:{}", i, cur / 1000);
	}
	line += "; PPC cores last ran on cpu";
	const auto& ids = coreinit::OSGetSchedulerThreadIds();
	for (size_t i = 0; i < ids.size(); i++)
		line += fmt::format("{}{}", i ? ", " : " ", libretro_thread_last_cpu(ids[i]));
	return line;
}
#endif

static int64_t libretro_thread_cpu_us(std::thread::native_handle_type h)
{
#if BOOST_OS_WINDOWS
	// MSVC's std::thread handle is the thread's HANDLE; MinGW's (winpthreads)
	// is a pthread_t, whose HANDLE winpthreads gives
#if defined(__MINGW32__)
	const HANDLE thread = pthread_gethandle(h);
#else
	const HANDLE thread = (HANDLE)h;
#endif
	FILETIME created, exited, kernel, user;
	if (!GetThreadTimes(thread, &created, &exited, &kernel, &user))
		return -1;
	auto ticks = [](const FILETIME& f) { return ((int64_t)f.dwHighDateTime << 32) | f.dwLowDateTime; };
	return (ticks(kernel) + ticks(user)) / 10;
#elif BOOST_OS_MACOS || BOOST_OS_IOS
	// Apple has no pthread_getcpuclockid
	thread_basic_info_data_t info;
	mach_msg_type_number_t count = THREAD_BASIC_INFO_COUNT;
	if (thread_info(pthread_mach_thread_np(h), THREAD_BASIC_INFO, (thread_info_t)&info, &count) != KERN_SUCCESS)
		return -1;
	return (int64_t)(info.user_time.seconds + info.system_time.seconds) * 1000000 +
		info.user_time.microseconds + info.system_time.microseconds;
#else
	clockid_t clock;
	struct timespec ts;
	if (pthread_getcpuclockid(h, &clock) != 0 || clock_gettime(clock, &ts) != 0)
		return -1;
	return (int64_t)ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
#endif
}

static void libretro_log_thread_time(std::chrono::steady_clock::time_point now)
{
	static std::chrono::steady_clock::time_point s_since{};
	static std::vector<int64_t> s_last;
	if (!s_log_thread_time || !s_game_loaded)
	{
		s_since = {};
		return;
	}

	std::vector<std::thread::native_handle_type> threads = coreinit::OSGetSchedulerThreads();
	const size_t cores = threads.size();
	threads.push_back(sLatteThread.native_handle());
#if BOOST_OS_WINDOWS && !defined(__MINGW32__)
	threads.push_back(GetCurrentThread());
#else
	threads.push_back(pthread_self());
#endif
	std::vector<int64_t> cpu(threads.size());
	for (size_t i = 0; i < threads.size(); i++)
		cpu[i] = libretro_thread_cpu_us(threads[i]);

	if (s_since == std::chrono::steady_clock::time_point{} || s_last.size() != cpu.size())
	{
		s_since = now;
		s_last = cpu;
		return;
	}
	const int64_t wall = std::chrono::duration_cast<std::chrono::microseconds>(now - s_since).count();
	if (wall < 1000000)
		return;

	auto busy = [&](size_t i) -> std::string {
		if (cpu[i] < 0 || s_last[i] < 0)
			return "?";
		return fmt::format("{}%", (cpu[i] - s_last[i]) * 100 / wall);
	};
	std::string line = "threads, % of one host core:";
	for (size_t i = 0; i < cores; i++)
		line += fmt::format(" PPC core {} {},", i, busy(i));
	line += fmt::format(" GPU {}, frontend {}", busy(cores), busy(cores + 1));
	cemuLog_log(LogType::Force, "{}", line);
#if defined(__linux__)
	cemuLog_log(LogType::Force, "{}", libretro_cpu_clocks());
#endif
	s_since = now;
	s_last = cpu;
}

static void libretro_finish_run(std::chrono::steady_clock::time_point start,
	std::chrono::steady_clock::time_point waited, bool timedOut)
{
	using prof_clock = std::chrono::steady_clock;
	const auto presented = prof_clock::now();
	libretro_report_game_fps(presented);
	libretro_log_thread_time(presented);

	LibretroAudioAPI::FlushAudio();
	s_last_audio_wait_us = std::chrono::duration_cast<std::chrono::microseconds>(prof_clock::now() - presented).count();

	if (LibretroAudioAPI::IsStatsLogging())
	{
		static auto s_since = start;
		static auto s_last_end = start;
		static uint64_t s_runs = 0, s_timeouts = 0;
		static int64_t s_wait_us = 0, s_present_us = 0, s_audio_us = 0, s_outside_us = 0;
		const auto end = prof_clock::now();
		auto us = [](auto d) { return (int64_t)std::chrono::duration_cast<std::chrono::microseconds>(d).count(); };
		s_runs++;
		s_timeouts += timedOut ? 1 : 0;
		s_wait_us += us(waited - start);
		s_present_us += us(presented - waited);
		s_audio_us += us(end - presented);
		s_outside_us += us(start - s_last_end);
		s_last_end = end;
		if (end - s_since >= std::chrono::seconds(1))
		{
			cemuLog_log(LogType::Force,
				"frame: {} retro_run ({} timed out waiting for the GPU), {} frames ready; ms in retro_run: "
				"wait {}, present {}, audio {}; ms outside retro_run {}; GPU thread waited at the gate {} ms",
				s_runs, s_timeouts, s_prof_frames_ready.exchange(0),
				s_wait_us / 1000, s_present_us / 1000, s_audio_us / 1000, s_outside_us / 1000,
				s_prof_gate_wait_us.exchange(0) / 1000);
			s_since = end;
			s_runs = s_timeouts = 0;
			s_wait_us = s_present_us = s_audio_us = s_outside_us = 0;
		}
	}
}

RETRO_API void retro_run()
{
	if (s_ppc_process_exited.exchange(false, std::memory_order_acq_rel) && environ_cb)
	{
		cemuLog_log(LogType::Force, "[Libretro] emulated process exited, asking the frontend to shut down");
		// Nothing more into the frontend's audio driver from here on. This is
		// the one close the core starts itself, so it is the one close where
		// there is a "before" to stop in - a close the user asks for arrives as
		// retro_unload_game with no warning ahead of it. The title has exited
		// either way, so what is left in the ring is a title's worth of nothing.
		s_audio_submission_allowed = false;
		environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, nullptr);
	}

	if (s_convert_mode.load())
	{
		// The conversion runs on its own thread; this is the only place the
		// core can say anything to the user, so it repeats where it has got to
		// rather than leaving them looking at a black screen for minutes.
		static std::string s_shown;
		static int s_shown_progress = -2;
		static bool s_logged_this = false;
		std::string text;
		int progress = -1;
		{
			std::lock_guard lock(s_convert_mutex);
			text = s_convert_status;
			progress = s_convert_progress;
		}
		if (!text.empty() && environ_cb)
		{
			// A progress message rather than a notification, and sent every
			// frame rather than every sixtieth: a notification is a toast with
			// a lifetime, so it came and went and hid behind an open menu,
			// while a progress message is a bar the frontend keeps on screen
			// and updates in place until the figure reaches 100.
			unsigned version = 0;
			const bool have_ext = environ_cb(RETRO_ENVIRONMENT_GET_MESSAGE_INTERFACE_VERSION, &version) && version >= 1;
			if (have_ext)
			{
				s_shown = text;
				struct retro_message_ext message = {};
				message.msg = s_shown.c_str();
				message.duration = 4000;
				message.priority = 3;
				message.level = RETRO_LOG_INFO;
				message.target = RETRO_MESSAGE_TARGET_OSD;
				message.type = RETRO_MESSAGE_TYPE_PROGRESS;
				message.progress = (int8_t)((progress < 0) ? -1 : (progress > 100 ? 100 : progress));
				environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE_EXT, &message);
			}
			else if (text != s_shown)
			{
				// No message interface: the old call is all there is, and it
				// takes a frame count rather than a bar, so it stays throttled
				// to when the text actually changes.
				s_shown = text;
				struct retro_message message{s_shown.c_str(), 240};
				environ_cb(RETRO_ENVIRONMENT_SET_MESSAGE, &message);
			}

			// Also in the frontend's log, once per distinct message: the OSD is
			// gone in seconds, and this is the only record of a conversion that
			// went wrong.
			if (progress != s_shown_progress || !s_logged_this)
			{
				if (progress < 0 || progress / 10 != s_shown_progress / 10)
				{
					libretro_log(RETRO_LOG_INFO, "%s\n", text.c_str());
					s_logged_this = true;
				}
				s_shown_progress = progress;
			}
		}

		// Finished, one way or the other. The title never stopped, so there is
		// nothing to close and nothing to return to: the conversion simply
		// stops being in progress, the submenu comes back, and the last message
		// stays up its own few seconds.
		if (s_convert_finished.load())
		{
			if (s_convert_thread.joinable())
				s_convert_thread.join();
			s_convert_mode.store(false);
			s_convert_finished = false;
			libretro_update_convert_visibility();
			if (s_install_switch_on)
			{
				s_install_switch_on = false;
				libretro_set_option_value("cemu_install_titles", "disabled");
			}
			if (s_install_game_switch_on)
			{
				s_install_game_switch_on = false;
				libretro_set_option_value("cemu_install_game", "disabled");
			}
		}
	}

	// The startup handshake, and the reason most of the startup machinery that
	// used to be here is gone. The title starts on this thread, in this call,
	// and this call does not return until it is running or has failed. While
	// the core is inside retro_run the frontend cannot close the content, so
	// the window a launch on its own thread had to be guarded against - a close
	// arriving mid-launch, a renderer released from under Latte_Start, a GPU
	// thread entering on a context that is already gone - does not exist.
	//
	// The cost is the frontend's menu waiting for the load, which is what it is
	// waiting for anyway.
	if (s_reset_requested.exchange(false, std::memory_order_acq_rel) && s_game_loaded)
	{
		// Both halves here, on this thread, one after the other. CemuCommonInit
		// is deliberately not repeated - it sets up the emulated machine, not
		// the title, and it has already run - so the start is the title half of
		// the launch only. The renderer went down with the title:
		// LatteThread_Exit deletes it and releases g_renderer, and the Latte
		// thread this starts dereferences that pointer before anything else it
		// does.
		//
		// Options changed in the menu are read first. The menu stops retro_run,
		// so a change made there and the reset that follows it reach this run
		// together, and the check further down came too late for the start
		// below: it ran with the old account (Shoegzer), and anything else
		// that applies at a start.
		bool options_updated = false;
		if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &options_updated) && options_updated)
		{
			libretro_apply_core_options();
			libretro_update_output_fps();
		}
		if (libretro_reset_stop_title())
		{
			libretro_create_renderer();
			libretro_setup_graphic_packs(); // pack options changed since are taken now
			libretro_prepare_and_launch_title();
		}
		video_cb(NULL, libretro_out_width(), libretro_out_height(), 0);
		return;
	}

	if (!s_game_loaded && !s_launch_attempted && !s_game_path.empty() &&
		(!s_use_hw_render || s_hw_render_initialized))
	{
		s_launch_attempted = true;
		if (s_use_hw_render && !g_renderer)
		{
			// context_reset ran and left no renderer behind. There is nothing to
			// start a GPU thread on, and every later symptom of carrying on -
			// the null dereference inside the driver, the black screen - is
			// worse than saying so here.
			cemuLog_log(LogType::Force, "[libretro] the frontend's context produced no renderer - not launching");
			libretro_log(RETRO_LOG_ERROR, "could not create a renderer on the frontend's graphics context\n");
			if (environ_cb)
				environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, nullptr);
			video_cb(NULL, libretro_out_width(), libretro_out_height(), 0);
			return;
		}
		try
		{
			libretro_launch_game();
		}
		catch (const std::exception& ex)
		{
			cemuLog_log(LogType::Force, "[libretro] the launch ended with an exception: {}", ex.what());
			libretro_log(RETRO_LOG_ERROR, "could not launch the title: %s\n", ex.what());
		}
		catch (...)
		{
			cemuLog_log(LogType::Force, "[libretro] the launch ended with an exception of unknown type");
			libretro_log(RETRO_LOG_ERROR, "could not launch the title\n");
		}
		if (!s_game_loaded && !s_install_content)
		{
			// The launch is not retried: whatever stopped it - a missing key, a
			// title that would not prepare - is still true next frame, and a
			// core that keeps trying says nothing about why.
			if (environ_cb)
				environ_cb(RETRO_ENVIRONMENT_SHUTDOWN, nullptr);
		}
		// The title's graphic packs are active now, and one may set a frame rate
		if (s_game_loaded)
			libretro_update_output_fps();
		// The first frame belongs to the title, not to the load that just ran.
		video_cb(NULL, libretro_out_width(), libretro_out_height(), 0);
		return;
	}

	if (!s_game_loaded)
	{
		video_cb(NULL, libretro_out_width(), libretro_out_height(), 0);
		return;
	}

	// Check if core options changed
	bool options_updated = false;
	if (environ_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &options_updated) && options_updated)
	{
		libretro_apply_core_options();
		libretro_update_output_fps();
	}

	// Poll input
	libretro_poll_input();
	libretro_update_rumble();

	using prof_clock = std::chrono::steady_clock;
	const auto profStart = prof_clock::now();
	bool profTimedOut = false;

	// Ask for a frame: the GPU thread is parked at the gate after the last swap.
	libretro_frame_gate_grant();
	// And for the audio of the time since the last retro_run, at 48000 Hz,
	// less what of it went on waiting in the frontend's audio callback.
	//
	// Not a fixed 800 samples (48000 / 60): a device that manages retro_run
	// only 20 times a second - sco8487's phone in Deus Ex - got a third of
	// the audio it needed, and titles that follow their audio slowed down
	// with it; where the phone's GPU holds each frame up for 100 ms, the
	// audio of those 100 ms is still due.
	//
	// Not the plain time either. RetroArch waits in the audio callback until
	// what it was given fits, so granting that wait too feeds it back: more
	// audio, a longer wait, a larger grant - how the wall-clock audio before
	// 296e8e01 drifted down to 10 fps. Leaving the wait out makes it undo
	// itself instead: a long wait means a smaller grant next time, the
	// frontend's buffer has room again, and the wait goes away. Capped at
	// 250 ms against a stall.
	//
	// But never less than one frame's worth. With audio sync on, waiting in
	// the audio callback is how RetroArch holds retro_run to 60 a second, so
	// a device that keeps up spends much of every frame there - and leaving
	// all of it out granted a fraction of the 800 samples a 60 Hz frame
	// needs. sco8487's phone sat in its menu at 60 fps with the frontend's
	// buffer underrunning 70-90% of the time. 800 a frame is what any core
	// hands over; only the time beyond it is what a slow frame adds.
	//
	// And never more than has played. The floor on its own gave 800 to every
	// retro_run however soon it came after the last, so a frontend that runs
	// them unevenly - 10 ms, then 23 ms - was granted more audio than the time
	// that passed, and one running faster than 60 Hz more still. NNshi saw it
	// as RetroArch blocking 20-50 % of the time on audio it had too much of.
	// Wall time fills a bucket, capped at the same 250 ms, and a grant takes
	// no more than the bucket holds: at 60 Hz that is 800 either way, and over
	// any stretch of time the grants add up to at most the time itself.
	{
		static std::chrono::steady_clock::time_point s_last_audio_grant{};
		static int64_t s_audio_bucket = 0; // in thousandths of a sample, so no fraction is lost
		const auto now = std::chrono::steady_clock::now();
		// One frame's worth at the reported rate: 800 at 60 Hz, 400 at 120
		const int32_t frameSamples = (int32_t)(48000.0 / s_output_fps);
		int32_t samples = frameSamples;
		if (s_last_audio_grant.time_since_epoch().count() != 0)
		{
			const int64_t elapsed_us = std::chrono::duration_cast<std::chrono::microseconds>(now - s_last_audio_grant).count();
			s_audio_bucket = std::min<int64_t>(s_audio_bucket + elapsed_us * 48, 12000 * 1000);
			const int64_t us = elapsed_us - s_last_audio_wait_us;
			samples = (int32_t)std::min<int64_t>(std::clamp<int64_t>(us * 48 / 1000, frameSamples, 12000), s_audio_bucket / 1000);
			s_audio_bucket -= int64_t(samples) * 1000;
		}
		s_last_audio_grant = now;
		snd_core::AXOut_LibretroGrantSamples(samples);
	}

	// Wait for frame from GPU thread - but not for long. retro_run has to keep
	// coming at the rate the core reports (60 Hz unless a graphic pack says
	// otherwise) whatever rate the title renders at, because each one is one
	// frame's worth of audio: a 30 fps title waited on for up to 33 ms made
	// retro_run itself 30 Hz and the audio half speed. Most of a frame - 12 ms
	// at 60 Hz - leaves a frame that is a little late its chance;
	// a frame that is not there by then shows up in the next retro_run, and
	// this one presents the last image again.
	{
		std::unique_lock lock(s_frame_mutex);
		profTimedOut = !s_frame_cv.wait_for(lock, std::chrono::microseconds((int64_t)(720000.0 / s_output_fps)), [] {
			return s_frame_ready.load();
		});
		s_frame_ready = false;
	}
	const auto profWaited = prof_clock::now();

#ifdef ENABLE_VULKAN
	// Vulkan: present via HW render interface
	if (s_graphics_api == SelectedGraphicsAPI::Vulkan)
	{
		if (s_vk_interface)
		{
			// RetroArch rebuilds its video driver behind the core's back (a
			// fullscreen toggle does exactly that) and frees the interface it
			// handed over, without calling context_destroy or context_reset. Ask
			// for the current one every frame instead of presenting through the
			// pointer cached when the renderer was created.
			{
				const struct retro_hw_render_interface* cur_iface = nullptr;
				if (environ_cb(RETRO_ENVIRONMENT_GET_HW_RENDER_INTERFACE, &cur_iface) && cur_iface &&
					cur_iface->interface_type == RETRO_HW_RENDER_INTERFACE_VULKAN)
				{
					s_vk_interface = (const struct retro_hw_render_interface_vulkan*)cur_iface;
					LibretroVkQueue::SetInterface(s_vk_interface);
				}
				else
				{
					s_vk_interface = nullptr;
					LibretroVkQueue::SetInterface(nullptr);
				}
			}

			auto* vkRenderer = VulkanRenderer::GetInstance();
			// Nothing drawn into it yet: its memory is whatever the driver had,
			// and handing that over is the band of corrupt pixels that showed
			// after a reset until the title drew its first frame. A fresh start
			// never showed it only because the frontend gets null frames until
			// the title is loaded, and a reset skips that window.
			if (vkRenderer && !vkRenderer->m_presentImageHasContent)
			{
				video_cb(NULL, libretro_out_width(), libretro_out_height(), 0);
				libretro_finish_run(profStart, profWaited, profTimedOut);
				return;
			}
			if (vkRenderer && vkRenderer->m_presentImageView && s_vk_interface && s_vk_interface->set_image)
			{
				// Set the presentation image for RetroArch to display
				s_vk_present_image.image_view = vkRenderer->m_presentImageView;
				s_vk_present_image.image_layout = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
				s_vk_present_image.create_info.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
				s_vk_present_image.create_info.image = vkRenderer->m_presentImage;
				s_vk_present_image.create_info.viewType = VK_IMAGE_VIEW_TYPE_2D;
				s_vk_present_image.create_info.format = VK_FORMAT_R8G8B8A8_UNORM;
				s_vk_present_image.create_info.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};

				s_vk_interface->set_image(s_vk_interface->handle, &s_vk_present_image,
					0, nullptr, VK_QUEUE_FAMILY_IGNORED);
			}
		}
		libretro_report_out_size();
		video_cb(RETRO_HW_FRAME_BUFFER_VALID, libretro_out_width(), libretro_out_height(), 0);
		libretro_finish_run(profStart, profWaited, profTimedOut);
		return;
	}
#endif

	// OpenGL: Upload CPU framebuffer (from GPU thread's glReadPixels) to RetroArch's HW FBO
#ifdef ENABLE_OPENGL
	{
		typedef void (*PFNGLGENTEXTURESPROC_)(int, unsigned int*);
		typedef void (*PFNGLBINDTEXTUREPROC_)(unsigned int, unsigned int);
		typedef void (*PFNGLTEXIMAGE2DPROC_)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void*);
		typedef void (*PFNGLTEXPARAMETERIPROC_)(unsigned int, unsigned int, int);
		typedef void (*PFNGLENABLEPROC_)(unsigned int);
		typedef void (*PFNGLDISABLEPROC_)(unsigned int);
		typedef void (*PFNGLVIEWPORTPROC_)(int, int, int, int);
		typedef void (*PFNGLDRAWARRAYSPROC_)(unsigned int, int, int);
		typedef unsigned int (*PFNGLGETERRORPROC_)();

		static PFNGLGENTEXTURESPROC_ _glGenTextures = nullptr;
		static PFNGLBINDTEXTUREPROC_ _glBindTexture = nullptr;
		static PFNGLTEXIMAGE2DPROC_ _glTexImage2D = nullptr;
		static PFNGLTEXPARAMETERIPROC_ _glTexParameteri = nullptr;
		static PFNGLENABLEPROC_ _glEnable = nullptr;
		static PFNGLDISABLEPROC_ _glDisable = nullptr;
		static PFNGLVIEWPORTPROC_ _glViewport = nullptr;
		static PFNGLDRAWARRAYSPROC_ _glDrawArrays = nullptr;

		if (!_glGenTextures)
		{
			_glGenTextures = (PFNGLGENTEXTURESPROC_)cemu_gl_get_proc("glGenTextures");
			_glBindTexture = (PFNGLBINDTEXTUREPROC_)cemu_gl_get_proc("glBindTexture");
			_glTexImage2D = (PFNGLTEXIMAGE2DPROC_)cemu_gl_get_proc("glTexImage2D");
			_glTexParameteri = (PFNGLTEXPARAMETERIPROC_)cemu_gl_get_proc("glTexParameteri");
			_glEnable = (PFNGLENABLEPROC_)cemu_gl_get_proc("glEnable");
			_glDisable = (PFNGLDISABLEPROC_)cemu_gl_get_proc("glDisable");
			_glViewport = (PFNGLVIEWPORTPROC_)cemu_gl_get_proc("glViewport");
			_glDrawArrays = (PFNGLDRAWARRAYSPROC_)cemu_gl_get_proc("glDrawArrays");
		}

		if (!s_glBindFramebuffer) libretro_load_blit_gl_funcs();

		// Bind RetroArch's FBO
		uintptr_t ra_fbo = s_hw_render.get_current_framebuffer();
		s_glBindFramebuffer(GL_DRAW_FRAMEBUFFER_, (GLuint)ra_fbo);

		// Create/recreate upload texture after context reset
		if (s_frontend_upload_tex == 0 && _glGenTextures)
			_glGenTextures(1, &s_frontend_upload_tex);

		if (s_frontend_upload_tex && _glBindTexture && _glTexImage2D)
		{
			_glBindTexture(0x0DE1 /*GL_TEXTURE_2D*/, s_frontend_upload_tex);
			// Upload flipped (OpenGL is bottom-up, framebuffer is top-down from glReadPixels).
			// glTexImage2D is done with the client memory when it returns.
			uint32_t frameWidth, frameHeight;
			{
				std::lock_guard lock(s_gl_frame_mutex);
				frameWidth = s_gl_frame_width;
				frameHeight = s_gl_frame_height;
				_glTexImage2D(0x0DE1, 0, 0x8058 /*GL_RGBA8*/, frameWidth, frameHeight, 0,
					0x80E1 /*GL_BGRA*/, 0x1401 /*GL_UNSIGNED_BYTE*/, s_framebuffer.data());
			}
			s_gl_shown_width = frameWidth;
			s_gl_shown_height = frameHeight;
			_glTexParameteri(0x0DE1, 0x2801 /*GL_TEXTURE_MIN_FILTER*/, 0x2600 /*GL_NEAREST*/);
			_glTexParameteri(0x0DE1, 0x2800 /*GL_TEXTURE_MAG_FILTER*/, 0x2600 /*GL_NEAREST*/);

			// Draw fullscreen quad using texture
			// In Core Profile we need a shader, but we can use glBlitFramebuffer from a texture-attached FBO instead
			if (s_frontend_read_fbo == 0 && s_glGenFramebuffers)
				s_glGenFramebuffers(1, &s_frontend_read_fbo);

			if (s_frontend_read_fbo && s_glBlitFramebuffer)
			{
				// Attach texture to read FBO
				typedef void (*PFNGLFRAMEBUFFERTEXTURE2DPROC_)(unsigned int, unsigned int, unsigned int, unsigned int, int);
				static PFNGLFRAMEBUFFERTEXTURE2DPROC_ _glFramebufferTexture2D = nullptr;
				if (!_glFramebufferTexture2D)
					_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC_)cemu_gl_get_proc("glFramebufferTexture2D");

				s_glBindFramebuffer(GL_READ_FRAMEBUFFER_EXT, s_frontend_read_fbo);
				if (_glFramebufferTexture2D)
					_glFramebufferTexture2D(GL_READ_FRAMEBUFFER_EXT, GL_COLOR_ATTACHMENT0_, 0x0DE1 /*GL_TEXTURE_2D*/, s_frontend_upload_tex, 0);

				// Blit directly (no flip needed - glReadPixels already gives bottom-up which matches RetroArch)
				s_glBlitFramebuffer(
					0, 0, frameWidth, frameHeight,    // src
					0, 0, frameWidth, frameHeight,    // dst
					GL_COLOR_BUFFER_BIT_, GL_NEAREST_);

				s_glBindFramebuffer(GL_READ_FRAMEBUFFER_EXT, 0);
			}
		}
	}
#endif // ENABLE_OPENGL

	libretro_report_out_size();
	video_cb(RETRO_HW_FRAME_BUFFER_VALID, libretro_out_width(), libretro_out_height(), 0);
	// Flush audio
	libretro_finish_run(profStart, profWaited, profTimedOut);
}

// ============================================================================
// Save states (not supported yet)
// ============================================================================

RETRO_API size_t retro_serialize_size()
{
	return 0; // Save states not supported
}

RETRO_API bool retro_serialize(void* data, size_t size)
{
	return false;
}

RETRO_API bool retro_unserialize(const void* data, size_t size)
{
	return false;
}

// ============================================================================
// Memory maps, for the frontend's cheat search and memory viewer
// ============================================================================

// Cemu keeps the whole PowerPC address space in one host allocation, so a
// window into it is a pointer and a length: memory_base plus the guest address.
// The ranges are described rather than the whole 4 GiB, because a search over
// space that was never mapped is both slow and full of false hits. The
// addresses the frontend then shows are Wii U effective addresses, which is
// what published codes use, and they are stable across runs.
//
// The pointers are only good while a title is mounted, so the map is registered
// after the title launches and cleared when it shuts down.
static std::vector<retro_memory_descriptor> s_memory_descriptors;

static void libretro_add_memory_range(const MMURange& range, const char* name)
{
	if (!range.isMapped())
		return;

	retro_memory_descriptor desc{};
	desc.flags = RETRO_MEMDESC_BIGENDIAN | RETRO_MEMDESC_SYSTEM_RAM; // Espresso is big-endian
	desc.ptr = range.getPtr();
	desc.offset = 0;
	desc.start = range.getBase();
	desc.len = range.getSize();
	desc.addrspace = name;
	s_memory_descriptors.push_back(desc);
}

static void libretro_publish_memory_maps()
{
	s_memory_descriptors.clear();
	if (!memory_base)
		return;

	libretro_add_memory_range(mmuRange_MEM2, "MEM2");
	libretro_add_memory_range(mmuRange_MEM1, "MEM1");
	libretro_add_memory_range(mmuRange_FGBUCKET, "FGBUCKET");

	if (s_memory_descriptors.empty())
		return;

	retro_memory_map map{};
	map.descriptors = s_memory_descriptors.data();
	map.num_descriptors = static_cast<unsigned>(s_memory_descriptors.size());
	if (!environ_cb(RETRO_ENVIRONMENT_SET_MEMORY_MAPS, &map))
	{
		libretro_log(RETRO_LOG_INFO, "frontend took no memory maps\n");
		s_memory_descriptors.clear();
		return;
	}

	for (const retro_memory_descriptor& desc : s_memory_descriptors)
		libretro_log(RETRO_LOG_INFO, "memory map: %s at 0x%08X, %u KB\n",
			desc.addrspace, static_cast<unsigned>(desc.start),
			static_cast<unsigned>(desc.len / 1024));
}

static void libretro_clear_memory_maps()
{
	if (s_memory_descriptors.empty())
		return;

	// Hand the frontend an empty map rather than leaving it holding pointers
	// into memory that shutdown is about to unmap.
	retro_memory_map map{};
	environ_cb(RETRO_ENVIRONMENT_SET_MEMORY_MAPS, &map);
	s_memory_descriptors.clear();
}

// ============================================================================
// Cheats (not supported)
// ============================================================================

RETRO_API void retro_cheat_reset() {}
RETRO_API void retro_cheat_set(unsigned index, bool enabled, const char* code) {}

// ============================================================================
// Memory access
// ============================================================================

RETRO_API unsigned retro_get_region()
{
	return RETRO_REGION_NTSC;
}

RETRO_API void* retro_get_memory_data(unsigned id)
{
	return nullptr;
}

RETRO_API size_t retro_get_memory_size(unsigned id)
{
	return 0;
}
