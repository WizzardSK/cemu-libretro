#include "Common/precompiled.h"

#include "libretro/libretro.h"
#include <boost/algorithm/string/predicate.hpp>

#include "Common/GLInclude/GLInclude.h"
#include "Common/VFSFileStream.h"
#include "gui/interface/WindowSystem.h"

#include "Cafe/CafeSystem.h"

std::atomic_bool g_isGPUInitFinished = false;

#include "config/ActiveSettings.h"
#include "config/CemuConfig.h"
#include "config/NetworkSettings.h"
#include "Cafe/Account/Account.h"
#include "libretro/LibretroLogging.h"
#include "Cafe/CafeSystem.h"
#include "Cafe/TitleList/TitleList.h"
#include "Cafe/TitleList/TitleInfo.h"
#include "Cafe/TitleList/SaveList.h"
#include "Cafe/GraphicPack/GraphicPack2.h"
#include "Cafe/GameProfile/GameProfile.h"
#include "input/InputManager.h"
#include "input/api/Controller.h"
#include "audio/IAudioAPI.h"
#include "audio/IAudioInputAPI.h"
#include "audio/LibretroAudioAPI.h"
#include "util/crypto/aes128.h"
#include "Cafe/HW/Latte/Core/Latte.h"
#include "Cafe/HW/Latte/Core/LatteTiming.h"
#include "Cafe/HW/Latte/Renderer/OpenGL/OpenGLRenderer.h"
#ifdef ENABLE_VULKAN
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanRenderer.h"
#include "Cafe/HW/Latte/Renderer/Vulkan/VulkanAPI.h"
#include "libretro/libretro_vulkan.h"
#endif
#include "Cafe/HW/Espresso/PPCState.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"
#include "Cafe/OS/libs/coreinit/coreinit_Scheduler.h"
#include "Cafe/OS/RPL/rpl_structs.h"
#include "Cafe/OS/RPL/rpl_symbol_storage.h"
#include "Cafe/OS/common/OSCommon.h"
#include "Cafe/HW/MMU/MMU.h"
#include "Cafe/HW/Latte/Renderer/Renderer.h"
#include "Common/ExceptionHandler/ExceptionHandler.h"
#include "Common/FileStream.h"
#include "Common/version.h"
#include "WindowSystem.h"

#include <curl/curl.h>
#include <zip.h>
#include <rapidjson/document.h>

#include <cstdlib>
#include <cstring>
#include <chrono>
#include <ctime>
#include <functional>
#include <thread>

static uint64_t libretro_get_thread_id()
{
	return (uint64_t)std::hash<std::thread::id>{}(std::this_thread::get_id());
}

static bool libretro_debug_enabled()
{
	static int s_cached = -1;
	if (s_cached == -1)
	{
		const char* env = std::getenv("CEMU_LIBRETRO_DEBUG");
		s_cached = (env && env[0] != '\0' && env[0] != '0') ? 1 : 0;
	}
	return s_cached != 0;
}

static bool libretro_debug_verbose()
{
	static int s_cached = -1;
	if (s_cached == -1)
	{
		const char* env = std::getenv("CEMU_LIBRETRO_DEBUG_VERBOSE");
		s_cached = (env && env[0] != '\0' && env[0] != '0') ? 1 : 0;
	}
	return s_cached != 0;
}

static retro_environment_t s_env_cb = nullptr;
static retro_video_refresh_t s_video_cb = nullptr;
static retro_audio_sample_t s_audio_cb = nullptr;
static retro_audio_sample_batch_t s_audio_batch_cb = nullptr;
static retro_input_poll_t s_input_poll_cb = nullptr;
static retro_input_state_t s_input_state_cb = nullptr;

retro_log_printf_t s_log_cb = nullptr;

static struct retro_vfs_interface *s_vfs_interface = nullptr;

static bool s_core_options_registered = false;
static bool s_core_options_supported = false;
static bool s_core_options_runtime_change_warned = false;

// Performance optimization flags
static bool s_input_bitmask_supported = false;  // RETRO_ENVIRONMENT_GET_INPUT_BITMASKS
static bool s_frame_dupe_supported = false;     // Frame duplication for skipped frames
static bool s_skip_draw_on_dupe = false;        // Skip rendering entirely on duplicate frames
static bool s_use_multicore = true;             // Use multi-core CPU emulation (default: true)

// DRC display modes
enum class DRCDisplayMode
{
	Disabled,      // TV only
	Toggle,        // Toggle between TV and DRC
	SideBySide,    // TV and DRC side by side (not overlapping)
	TopBottom,     // TV on top (larger), DRC on bottom
	PictureInPicture // DRC as overlay on TV
};

static DRCDisplayMode s_drc_display_mode = DRCDisplayMode::Disabled;
static bool s_drc_position_swapped = false;  // When true, swap TV/DRC positions
static bool s_drc_showing_gamepad = false;   // For Toggle mode: which screen is currently shown

// Graphics API selection
enum class GraphicsAPI
{
	OpenGL,
	Vulkan
};

static GraphicsAPI s_graphics_api = GraphicsAPI::OpenGL;

enum class GraphicPacksUpdateMode
{
	Disabled,
	Startup,
	RunOnce
};

static GraphicPacksUpdateMode s_graphic_packs_update_mode = GraphicPacksUpdateMode::Disabled;
static bool s_graphic_packs_update_done = false;

enum class GraphicPacksUpdateAsyncState
{
	Idle,
	Running,
	FinishedOk,
	FinishedFail
};

static std::thread s_graphic_packs_update_thread;
static std::atomic<GraphicPacksUpdateAsyncState> s_graphic_packs_update_async_state = GraphicPacksUpdateAsyncState::Idle;

static struct retro_core_option_v2_definition s_core_options_v2_defs[] = {
	{
		"cemu_cpu_mode",
		"CPU Mode",
		NULL,
		"Select CPU emulation mode. Auto selects based on core count.",
		NULL,
		NULL,
		{
			{ "auto", "Auto" },
			{ "singlecore_interpreter", "Single-core Interpreter" },
			{ "singlecore_recompiler", "Single-core Recompiler" },
			{ "multicore_recompiler", "Multi-core Recompiler" },
			{ NULL, NULL }
		},
		"auto"
	},
	{
		"cemu_console_language",
		"Console Language",
		NULL,
		"Set the emulated console language.",
		NULL,
		NULL,
		{
			{ "English", NULL },
			{ "Japanese", NULL },
			{ "French", NULL },
			{ "German", NULL },
			{ "Italian", NULL },
			{ "Spanish", NULL },
			{ "Chinese", NULL },
			{ "Korean", NULL },
			{ "Dutch", NULL },
			{ "Portuguese", NULL },
			{ "Russian", NULL },
			{ "Taiwanese", NULL },
			{ NULL, NULL }
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		"Async Shader Compile",
		NULL,
		"Compile shaders asynchronously to reduce stutter.",
		NULL,
		NULL,
		{
			{ "enabled", "Enabled" },
			{ "disabled", "Disabled" },
			{ NULL, NULL }
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		"GX2DrawDone Sync",
		NULL,
		"Synchronize GX2DrawDone calls for accuracy.",
		NULL,
		NULL,
		{
			{ "enabled", "Enabled" },
			{ "disabled", "Disabled" },
			{ NULL, NULL }
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		"Precompiled Shaders",
		NULL,
		"Use precompiled shaders if available.",
		NULL,
		"Shaders",
		{
			{ "auto", "Auto" },
			{ "enabled", "Enabled" },
			{ "disabled", "Disabled" },
			{ NULL, NULL }
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		"Accurate Shader Multiplication",
		NULL,
		"Emulate non-IEEE multiplication (0*anything=0). Required for some games, may reduce performance.",
		NULL,
		"Shaders",
		{
			{ "enabled", "Enabled (Accurate)" },
			{ "disabled", "Disabled (Fast)" },
			{ NULL, NULL }
		},
		"enabled"
	},
	{
		"cemu_shader_fast_math",
		"Shader Fast Math",
		NULL,
		"Enable fast math optimizations in shaders. May improve performance but can cause visual glitches in some games.",
		NULL,
		"Shaders",
		{
			{ "enabled", "Enabled" },
			{ "disabled", "Disabled" },
			{ NULL, NULL }
		},
		"enabled"
	},
	{
		"cemu_upscale_filter",
		"Upscale Filter",
		NULL,
		"Filter used when upscaling the image.",
		NULL,
		NULL,
		{
			{ "linear", "Bilinear" },
			{ "bicubic", "Bicubic" },
			{ "bicubic_hermite", "Bicubic Hermite" },
			{ "nearest", "Nearest Neighbor" },
			{ NULL, NULL }
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		"Internal Resolution",
		NULL,
		"Set the internal rendering resolution. Higher values improve image quality but require more GPU power.",
		NULL,
		NULL,
		{
			{ "1920x1080", "1920x1080 (1080p)" },
			{ "1280x720", "1280x720 (720p)" },
			{ "2560x1440", "2560x1440 (1440p)" },
			{ "3840x2160", "3840x2160 (4K)" },
			{ NULL, NULL }
		},
		"1920x1080"
	},
	{
		"cemu_fullscreen_scaling",
		"Fullscreen Scaling",
		NULL,
		"How to scale the image in fullscreen.",
		NULL,
		NULL,
		{
			{ "keep_aspect", "Keep Aspect Ratio" },
			{ "stretch", "Stretch" },
			{ NULL, NULL }
		},
		"keep_aspect"
	},
	{
		"cemu_graphic_packs_update",
		"Update community graphic packs",
		NULL,
		"Download/update community graphic packs into the Cemu user folder. Requires network access.",
		NULL,
		NULL,
		{
			{ "disabled", "Disabled" },
			{ "startup", "On startup" },
			{ "run_once", "Run once" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_drc_mode",
		"DRC Display Mode",
		NULL,
		"How to display the GamePad screen (DRC). Toggle switches between TV/DRC. Side-by-side shows both. Top-bottom shows TV larger on top. Picture-in-picture shows DRC as overlay.",
		NULL,
		NULL,
		{
			{ "disabled", "Disabled (TV Only)" },
			{ "toggle", "Toggle (TV or DRC)" },
			{ "side_by_side", "Side by Side" },
			{ "top_bottom", "Top and Bottom" },
			{ "picture_in_picture", "Picture in Picture" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_drc_position",
		"DRC Position Swap",
		NULL,
		"Swap positions of TV and DRC screens. In Toggle mode, this switches which screen is shown.",
		NULL,
		NULL,
		{
			{ "normal", "Normal (TV Primary)" },
			{ "swapped", "Swapped (DRC Primary)" },
			{ NULL, NULL }
		},
		"normal"
	},
	{
		"cemu_dsu_host",
		"DSU Client Host",
		NULL,
		"IP address of the DSU (motion) server.",
		NULL,
		NULL,
		{
			{ "127.0.0.1", NULL },
			{ "localhost", NULL },
			{ "192.168.0.2", NULL },
			{ "192.168.0.3", NULL },
			{ "192.168.1.2", NULL },
			{ "192.168.1.3", NULL },
			{ NULL, NULL }
		},
		"127.0.0.1"
	},
	{
		"cemu_dsu_port",
		"DSU Client Port",
		NULL,
		"Port of the DSU (motion) server.",
		NULL,
		NULL,
		{
			{ "26760", NULL },
			{ "26761", NULL },
			{ "26762", NULL },
			{ "26763", NULL },
			{ "26764", NULL },
			{ NULL, NULL }
		},
		"26760"
	},
	{
		"cemu_thread_quantum",
		"Thread Quantum",
		NULL,
		"CPU thread time slice in cycles. Lower values improve responsiveness but may reduce performance. Higher values improve throughput.",
		NULL,
		"CPU",
		{
			{ "20000", "20000 (Fast switching)" },
			{ "45000", "45000 (Default)" },
			{ "60000", "60000" },
			{ "80000", "80000" },
			{ "100000", "100000 (High throughput)" },
			{ NULL, NULL }
		},
		"45000"
	},
	{
		"cemu_audio_latency",
		"Audio Latency",
		NULL,
		"Audio buffer size in blocks. Lower values reduce latency but may cause audio crackling. Higher values are more stable.",
		NULL,
		"Audio",
		{
			{ "1", "1 (Low latency)" },
			{ "2", "2 (Default)" },
			{ "3", "3" },
			{ "4", "4 (High stability)" },
			{ NULL, NULL }
		},
		"2"
	},
	{
		"cemu_vsync",
		"VSync",
		NULL,
		"Synchronize frame presentation to display refresh rate.",
		NULL,
		"Video",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_downscale_filter",
		"Downscale Filter",
		NULL,
		"Filter used when downscaling the image.",
		NULL,
		"Video",
		{
			{ "linear", "Bilinear" },
			{ "bicubic", "Bicubic" },
			{ "bicubic_hermite", "Bicubic Hermite" },
			{ "nearest", "Nearest Neighbor" },
			{ NULL, NULL }
		},
		"linear"
	},
	{
		"cemu_render_upside_down",
		"Render Upside Down",
		NULL,
		"Flip the rendered image vertically. May be needed for some display configurations.",
		NULL,
		"Video",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_shader_compile_notification",
		"Shader Compile Notification",
		NULL,
		"Show notification when shaders are being compiled.",
		NULL,
		"Shaders",
		{
			{ "enabled", "Enabled" },
			{ "disabled", "Disabled" },
			{ NULL, NULL }
		},
		"enabled"
	},
	{
		"cemu_emulate_skylander_portal",
		"Emulate Skylander Portal",
		NULL,
		"Emulate the Skylanders Portal of Power USB peripheral for Skylanders games.",
		NULL,
		"USB Devices",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		"Emulate Infinity Base",
		NULL,
		"Emulate the Disney Infinity Base USB peripheral for Disney Infinity games.",
		NULL,
		"USB Devices",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		"Emulate Dimensions Toypad",
		NULL,
		"Emulate the LEGO Dimensions Toypad USB peripheral for LEGO Dimensions.",
		NULL,
		"USB Devices",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_skip_draw_on_dupe",
		"Skip Draw on Duplicate Frames",
		NULL,
		"Skip rendering when duplicating frames. May improve performance but can cause visual issues.",
		NULL,
		"Performance",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_cpu_cores",
		"CPU Cores",
		NULL,
		"Number of CPU cores to use for emulation. Multi-core provides better performance but may be less stable in some games.",
		NULL,
		"CPU",
		{
			{ "multicore", "Multi-core (Default)" },
			{ "singlecore", "Single-core (Stable)" },
			{ NULL, NULL }
		},
		"multicore"
	},
	{
		"cemu_network_service",
		"Network Service",
		NULL,
		"Select online service. Pretendo is a community replacement for Nintendo Network. Requires dumped console files (otp.bin, seeprom.bin) and valid account.",
		NULL,
		"Online",
		{
			{ "offline", "Offline" },
			{ "pretendo", "Pretendo" },
			{ "custom", "Custom (network_services.xml)" },
			{ NULL, NULL }
		},
		"offline"
	},
	{
		"cemu_disable_ssl_verify",
		"Disable SSL Verification",
		NULL,
		"Disable SSL certificate verification for custom servers. Not recommended for security reasons.",
		NULL,
		"Online",
		{
			{ "disabled", "Disabled (Secure)" },
			{ "enabled", "Enabled (Insecure)" },
			{ NULL, NULL }
		},
		"disabled"
	},
	{
		"cemu_account_id",
		"Account",
		NULL,
		"Select which account to use. Account 1 is the default. Accounts must be set up in the Cemu data folder.",
		NULL,
		"Online",
		{
			{ "1", "Account 1 (Default)" },
			{ "2", "Account 2" },
			{ "3", "Account 3" },
			{ "4", "Account 4" },
			{ "5", "Account 5" },
			{ "6", "Account 6" },
			{ "7", "Account 7" },
			{ "8", "Account 8" },
			{ NULL, NULL }
		},
		"1"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL }
};

static struct retro_core_options_v2 s_core_options_v2 = {
	NULL,
	s_core_options_v2_defs
};

static void libretro_register_core_options()
{
	// Only register if frontend is ready (log_cb is set means GET_LOG_INTERFACE succeeded)
	if (!s_env_cb || !s_log_cb || s_core_options_registered)
		return;

	s_core_options_registered = true;
	s_log_cb(RETRO_LOG_INFO, "[Cemu] Registering core options...\n");

	// Use legacy SET_VARIABLES API (most compatible)
	static const retro_variable s_core_options_legacy[] = {
		{ "cemu_cpu_mode", "CPU Mode; auto|singlecore_interpreter|singlecore_recompiler|multicore_recompiler" },
		{ "cemu_console_language", "Console Language; English|Japanese|French|German|Italian|Spanish|Chinese|Korean|Dutch|Portuguese|Russian|Taiwanese" },
		{ "cemu_async_shader_compile", "Async Shader Compile; enabled|disabled" },
		{ "cemu_gx2drawdone_sync", "GX2DrawDone Sync; enabled|disabled" },
		{ "cemu_precompiled_shaders", "Precompiled shaders; auto|enabled|disabled" },
		{ "cemu_accurate_shader_mul", "Accurate Shader Multiplication; enabled|disabled" },
		{ "cemu_shader_fast_math", "Shader Fast Math; enabled|disabled" },
		{ "cemu_upscale_filter", "Upscale filter; linear|bicubic|bicubic_hermite|nearest" },
		{ "cemu_downscale_filter", "Downscale filter; linear|bicubic|bicubic_hermite|nearest" },
		{ "cemu_internal_resolution", "Internal Resolution; 1920x1080|1280x720|2560x1440|3840x2160" },
		{ "cemu_fullscreen_scaling", "Fullscreen scaling; keep_aspect|stretch" },
		{ "cemu_graphic_packs_update", "Update community graphic packs; disabled|startup|run_once" },
		{ "cemu_drc_mode", "DRC Display Mode; disabled|toggle|side_by_side|top_bottom|picture_in_picture" },
		{ "cemu_drc_position", "DRC Position Swap; normal|swapped" },
		{ "cemu_dsu_host", "DSU client host; 127.0.0.1|localhost|192.168.0.2|192.168.0.3|192.168.1.2|192.168.1.3" },
		{ "cemu_dsu_port", "DSU client port; 26760|26761|26762|26763|26764" },
		{ "cemu_thread_quantum", "Thread Quantum; 45000|20000|60000|80000|100000" },
		{ "cemu_audio_latency", "Audio Latency; 2|1|3|4" },
		{ "cemu_vsync", "VSync; disabled|enabled" },
		{ "cemu_render_upside_down", "Render Upside Down; disabled|enabled" },
		{ "cemu_shader_compile_notification", "Shader Compile Notification; enabled|disabled" },
		{ "cemu_emulate_skylander_portal", "Emulate Skylander Portal; disabled|enabled" },
		{ "cemu_emulate_infinity_base", "Emulate Infinity Base; disabled|enabled" },
		{ "cemu_emulate_dimensions_toypad", "Emulate Dimensions Toypad; disabled|enabled" },
		{ "cemu_skip_draw_on_dupe", "Skip Draw on Duplicate Frames; disabled|enabled" },
		{ "cemu_cpu_cores", "CPU Cores; multicore|singlecore" },
		{ "cemu_network_service", "Network Service; offline|pretendo|custom" },
		{ "cemu_disable_ssl_verify", "Disable SSL Verification; disabled|enabled" },
		{ "cemu_account_id", "Account; 1|2|3|4|5|6|7|8" },
		{ NULL, NULL }
	};

	const bool ok = s_env_cb(RETRO_ENVIRONMENT_SET_VARIABLES, (void*)s_core_options_legacy);
	s_core_options_supported = ok;
	s_log_cb(RETRO_LOG_INFO, "[Cemu] Core options SET_VARIABLES: %s\n", ok ? "accepted" : "rejected");
}

static const char* libretro_get_option_value(const char* key)
{
	if (!s_core_options_supported)
		return nullptr;
	if (!s_env_cb || !key)
		return nullptr;
	retro_variable var{ key, nullptr };
	if (!s_env_cb(RETRO_ENVIRONMENT_GET_VARIABLE, &var))
		return nullptr;
	return var.value;
}

static bool libretro_iequals(const char* a, const char* b)
{
	if (!a || !b)
		return false;
	return boost::iequals(std::string_view(a), std::string_view(b));
}

static bool libretro_parse_enabled_disabled(const char* v, bool& out)
{
	if (!v)
		return false;
	if (libretro_iequals(v, "enabled") || libretro_iequals(v, "true") || libretro_iequals(v, "1") || libretro_iequals(v, "on"))
	{
		out = true;
		return true;
	}
	if (libretro_iequals(v, "disabled") || libretro_iequals(v, "false") || libretro_iequals(v, "0") || libretro_iequals(v, "off"))
	{
		out = false;
		return true;
	}
	return false;
}

struct LibretroDownloadState
{
	std::vector<uint8> data;
};

static size_t libretro_curl_write_cb(void* ptr, size_t size, size_t nmemb, void* userdata)
{
	const size_t writeSize = size * nmemb;
	auto* st = reinterpret_cast<LibretroDownloadState*>(userdata);
	const size_t currentSize = st->data.size();
	st->data.resize(currentSize + writeSize);
	memcpy(st->data.data() + currentSize, ptr, writeSize);
	return writeSize;
}

static bool libretro_curl_download_to_memory(const char* url, LibretroDownloadState& out)
{
	CURL* curl = curl_easy_init();
	if (!curl)
		return false;

	out.data.clear();
	curl_easy_setopt(curl, CURLOPT_URL, url);
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, libretro_curl_write_cb);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &out);
	curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);
	curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
	curl_easy_setopt(curl, CURLOPT_USERAGENT, BUILD_VERSION_WITH_NAME_STRING);

	const CURLcode res = curl_easy_perform(curl);
	curl_easy_cleanup(curl);
	return res == CURLE_OK;
}

static bool libretro_graphic_packs_version_matches(const char* nameVersion, bool& hasVersionFile)
{
	hasVersionFile = false;
	const auto path = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks/version.txt");
	std::unique_ptr<FileStream> file(FileStream::openFile2(path));

	std::string versionInFile;
	if (file && file->readLine(versionInFile))
	{
		hasVersionFile = true;
		return boost::iequals(versionInFile, nameVersion);
	}
	return false;
}

static void libretro_write_graphic_packs_version(const char* nameVersion)
{
	const auto path = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks/version.txt");
	std::unique_ptr<FileStream> file(FileStream::createFile2(path));
	if (file)
		file->writeString(nameVersion);
}

static void libretro_delete_downloaded_graphic_packs()
{
	const auto path = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks");
	std::error_code er;
	if (!fs::exists(path, er))
		return;
	try
	{
		for (auto& p : fs::directory_iterator(path))
			fs::remove_all(p.path(), er);
	}
	catch (...)
	{
	}
}

static bool libretro_extract_zip_to_downloaded_graphic_packs(const std::vector<uint8>& zipData)
{
	zip_error_t error;
	zip_error_init(&error);
	zip_source_t* src = zip_source_buffer_create(zipData.data(), zipData.size(), 0, &error);
	if (!src)
	{
		zip_error_fini(&error);
		return false;
	}

	zip_t* za = zip_open_from_source(src, 0, &error);
	if (!za)
	{
		zip_source_free(src);
		zip_error_fini(&error);
		return false;
	}

	auto path = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks");
	std::error_code er;
	libretro_delete_downloaded_graphic_packs();
	fs::create_directories(path, er);

	const sint32 numEntries = (sint32)zip_get_num_entries(za, 0);
	for (sint32 i = 0; i < numEntries; ++i)
	{
		zip_stat_t sb = {};
		if (zip_stat_index(za, i, 0, &sb) != 0)
			continue;
		if (!sb.name)
			continue;

		if (std::strstr(sb.name, "../") != nullptr || std::strstr(sb.name, "..\\") != nullptr)
			continue;

		path = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks/{}", sb.name);
		const size_t sbNameLen = strlen(sb.name);
		if (sbNameLen == 0)
			continue;
		if (sb.name[sbNameLen - 1] == '/')
		{
			fs::create_directories(path, er);
			continue;
		}
		if (sb.size == 0)
			continue;
		if (sb.size > (1024ULL * 1024ULL * 128ULL))
			continue;

		zip_file_t* zipFile = zip_fopen_index(za, i, 0);
		if (!zipFile)
			continue;

		std::vector<uint8> fileBuffer;
		fileBuffer.resize((size_t)sb.size);
		const zip_int64_t readBytes = zip_fread(zipFile, fileBuffer.data(), fileBuffer.size());
		zip_fclose(zipFile);
		if (readBytes != (zip_int64_t)fileBuffer.size())
			continue;

		FileStream* fsOut = FileStream::createFile2(path);
		if (fsOut)
		{
			fsOut->writeData(fileBuffer.data(), (sint32)fileBuffer.size());
			delete fsOut;
		}
	}

	zip_close(za);
	zip_error_fini(&error);
	return true;
}

static bool libretro_update_community_graphic_packs(bool log)
{
	// get github url
	std::string githubAPIUrl;
	LibretroDownloadState tempDownloadState;
	std::string queryUrl("https://cemu.info/api2/query_graphicpack_url.php?");
	char temp[64];
	sprintf(temp, "version=%d.%d.%d", EMULATOR_VERSION_MAJOR, EMULATOR_VERSION_MINOR, EMULATOR_VERSION_PATCH);
	queryUrl.append(temp);
	queryUrl.append("&");
	sprintf(temp, "t=%u", (uint32)std::chrono::seconds(std::time(NULL)).count());
	queryUrl.append(temp);
	if (libretro_curl_download_to_memory(queryUrl.c_str(), tempDownloadState) &&
		tempDownloadState.data.size() > 4 &&
		boost::starts_with((const char*)tempDownloadState.data.data(), "http"))
	{
		githubAPIUrl.assign(tempDownloadState.data.cbegin(), tempDownloadState.data.cend());
	}
	else
	{
		githubAPIUrl = "https://api.github.com/repos/cemu-project/cemu_graphic_packs/releases/latest";
	}

	if (log && s_log_cb)
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs update: fetching release info...\n");
	if (!libretro_curl_download_to_memory(githubAPIUrl.c_str(), tempDownloadState))
		return false;

	rapidjson::Document d;
	d.Parse((const char*)tempDownloadState.data.data(), tempDownloadState.data.size());
	if (d.HasParseError() || !d.IsObject())
		return false;
	if (!d.HasMember("name") || !d["name"].IsString())
		return false;
	const char* assetName = d["name"].GetString();
	if (!d.HasMember("assets") || !d["assets"].IsArray() || d["assets"].GetArray().Size() == 0)
		return false;
	const auto& jsonAsset0 = d["assets"].GetArray()[0];
	if (!jsonAsset0.IsObject() || !jsonAsset0.HasMember("browser_download_url") || !jsonAsset0["browser_download_url"].IsString())
		return false;
	const char* browserDownloadUrl = jsonAsset0["browser_download_url"].GetString();

	bool hasVersionFile = false;
	if (libretro_graphic_packs_version_matches(assetName, hasVersionFile))
	{
		if (log && s_log_cb)
			s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs update: already up to date (%s)\n", assetName);
		return true;
	}

	if (log && s_log_cb)
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs update: downloading...\n");
	LibretroDownloadState zip;
	if (!libretro_curl_download_to_memory(browserDownloadUrl, zip))
		return false;

	if (log && s_log_cb)
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs update: extracting...\n");
	if (!libretro_extract_zip_to_downloaded_graphic_packs(zip.data))
		return false;

	libretro_write_graphic_packs_version(assetName);
	if (log && s_log_cb)
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs update: done (%s)\n", assetName);
	return true;
}

static void libretro_start_graphic_packs_update_async()
{
	if (s_graphic_packs_update_async_state.load() != GraphicPacksUpdateAsyncState::Idle)
		return;
	s_graphic_packs_update_async_state.store(GraphicPacksUpdateAsyncState::Running);
	s_graphic_packs_update_thread = std::thread([]() {
		const bool ok = libretro_update_community_graphic_packs(true);
		s_graphic_packs_update_async_state.store(ok ? GraphicPacksUpdateAsyncState::FinishedOk : GraphicPacksUpdateAsyncState::FinishedFail);
	});
}

static std::optional<CPUMode> libretro_parse_cpu_mode(const char* v)
{
	if (!v)
		return std::nullopt;
	if (libretro_iequals(v, "auto"))
		return CPUMode::Auto;
	if (libretro_iequals(v, "singlecore_interpreter"))
		return CPUMode::SinglecoreInterpreter;
	if (libretro_iequals(v, "singlecore_recompiler"))
		return CPUMode::SinglecoreRecompiler;
	if (libretro_iequals(v, "multicore_recompiler"))
		return CPUMode::MulticoreRecompiler;
	return std::nullopt;
}

static std::optional<PrecompiledShaderOption> libretro_parse_precompiled_shaders(const char* v)
{
	if (!v)
		return std::nullopt;
	if (libretro_iequals(v, "auto"))
		return PrecompiledShaderOption::Auto;
	if (libretro_iequals(v, "enabled") || libretro_iequals(v, "true") || libretro_iequals(v, "1"))
		return PrecompiledShaderOption::Enable;
	if (libretro_iequals(v, "disabled") || libretro_iequals(v, "false") || libretro_iequals(v, "0"))
		return PrecompiledShaderOption::Disable;
	return std::nullopt;
}

static std::optional<CafeConsoleLanguage> libretro_parse_console_language(const char* v)
{
	if (!v)
		return std::nullopt;
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

static std::optional<int> libretro_parse_upscale_filter(const char* v)
{
	if (!v)
		return std::nullopt;
	if (libretro_iequals(v, "linear")) return (int)kLinearFilter;
	if (libretro_iequals(v, "bicubic")) return (int)kBicubicFilter;
	if (libretro_iequals(v, "bicubic_hermite")) return (int)kBicubicHermiteFilter;
	if (libretro_iequals(v, "nearest")) return (int)kNearestNeighborFilter;
	return std::nullopt;
}

static DRCDisplayMode libretro_parse_drc_mode(const char* v)
{
	if (!v)
		return DRCDisplayMode::Disabled;
	if (libretro_iequals(v, "disabled")) return DRCDisplayMode::Disabled;
	if (libretro_iequals(v, "toggle")) return DRCDisplayMode::Toggle;
	if (libretro_iequals(v, "side_by_side")) return DRCDisplayMode::SideBySide;
	if (libretro_iequals(v, "top_bottom")) return DRCDisplayMode::TopBottom;
	if (libretro_iequals(v, "picture_in_picture")) return DRCDisplayMode::PictureInPicture;
	return DRCDisplayMode::Disabled;
}

static bool libretro_drc_needs_pad_view()
{
	return s_drc_display_mode != DRCDisplayMode::Disabled;
}

static bool libretro_drc_showing_only_gamepad()
{
	// In Toggle mode when showing gamepad, or when position is swapped in certain modes
	if (s_drc_display_mode == DRCDisplayMode::Toggle)
		return s_drc_showing_gamepad;
	return false;
}

static std::optional<int> libretro_parse_fullscreen_scaling(const char* v)
{
	if (!v)
		return std::nullopt;
	if (libretro_iequals(v, "keep_aspect"))
		return 0;
	if (libretro_iequals(v, "stretch"))
		return 1;
	return std::nullopt;
}

static bool libretro_parse_internal_resolution(const char* v, unsigned& outWidth, unsigned& outHeight)
{
	if (!v)
		return false;
	
	if (libretro_iequals(v, "1280x720")) {
		outWidth = 1280;
		outHeight = 720;
		return true;
	}
	if (libretro_iequals(v, "1920x1080")) {
		outWidth = 1920;
		outHeight = 1080;
		return true;
	}
	if (libretro_iequals(v, "2560x1440")) {
		outWidth = 2560;
		outHeight = 1440;
		return true;
	}
	if (libretro_iequals(v, "3840x2160")) {
		outWidth = 3840;
		outHeight = 2160;
		return true;
	}
	return false;
}

// Video/audio configuration
static unsigned s_video_width = 1920;
static unsigned s_video_height = 1080;
static std::vector<uint32_t> s_framebuffer;
static constexpr double s_audio_sample_rate = 48000.0;
static constexpr double s_fps = 60.0;
static std::vector<int16_t> s_audio_silence_interleaved;

// Game state
static bool s_cemu_initialized = false;
static bool s_game_loaded = false;
static bool s_game_launched = false;
static bool s_hw_context_ready = false;

static void libretro_apply_core_options(bool log)
{
	if (!s_env_cb)
		return;

	libretro_register_core_options();
	if (!s_core_options_supported)
		return;

	auto& cfg = GetConfig();

	// Options that can be applied before title launch
	if (const char* v = libretro_get_option_value("cemu_async_shader_compile"))
	{
		bool b;
		if (libretro_parse_enabled_disabled(v, b))
			cfg.async_compile = b;
	}

	if (const char* v = libretro_get_option_value("cemu_gx2drawdone_sync"))
	{
		bool b;
		if (libretro_parse_enabled_disabled(v, b))
			cfg.gx2drawdone_sync = b;
	}

	if (const char* v = libretro_get_option_value("cemu_console_language"))
	{
		const auto lang = libretro_parse_console_language(v);
		if (lang.has_value())
			cfg.console_language = lang.value();
	}

	if (const char* v = libretro_get_option_value("cemu_upscale_filter"))
	{
		const auto f = libretro_parse_upscale_filter(v);
		if (f.has_value())
			cfg.upscale_filter = (sint32)f.value();
	}

	if (const char* v = libretro_get_option_value("cemu_fullscreen_scaling"))
	{
		const auto fs = libretro_parse_fullscreen_scaling(v);
		if (fs.has_value())
			cfg.fullscreen_scaling = (sint32)fs.value();
	}

	if (const char* v = libretro_get_option_value("cemu_dsu_host"))
	{
		cfg.dsu_client.host.SetValue(std::string_view(v));
	}
	if (const char* v = libretro_get_option_value("cemu_dsu_port"))
	{
		const int port = atoi(v);
		if (port > 0 && port <= 65535)
			cfg.dsu_client.port = (uint16)port;
	}

	// ActiveSettings overrides
	ActiveSettings::SetLibretroCPUModeOverride(libretro_parse_cpu_mode(libretro_get_option_value("cemu_cpu_mode")));
	ActiveSettings::SetLibretroPrecompiledShadersOverride(libretro_parse_precompiled_shaders(libretro_get_option_value("cemu_precompiled_shaders")));

	// DRC display mode
	if (const char* v = libretro_get_option_value("cemu_drc_mode"))
	{
		s_drc_display_mode = libretro_parse_drc_mode(v);
		const bool drcEnabled = s_drc_display_mode != DRCDisplayMode::Disabled;
		// Enable DRC in Cemu if any DRC mode is active
		ActiveSettings::SetLibretroDisplayDRCOverride(drcEnabled);
		// Set pad_open flag so window system provides DRC dimensions
		auto& windowInfo = WindowSystem::GetWindowInfo();
		windowInfo.pad_open = drcEnabled;
	}
	if (const char* v = libretro_get_option_value("cemu_drc_position"))
	{
		s_drc_position_swapped = libretro_iequals(v, "swapped");
		// In Toggle mode, position swap determines which screen is shown
		if (s_drc_display_mode == DRCDisplayMode::Toggle)
			s_drc_showing_gamepad = s_drc_position_swapped;
	}

	// Internal resolution
	if (const char* v = libretro_get_option_value("cemu_internal_resolution"))
	{
		unsigned newWidth = 1920;
		unsigned newHeight = 1080;
		if (libretro_parse_internal_resolution(v, newWidth, newHeight))
		{
			if (s_video_width != newWidth || s_video_height != newHeight)
			{
				s_video_width = newWidth;
				s_video_height = newHeight;
				
				// Update window info to match internal resolution
				auto& windowInfo = WindowSystem::GetWindowInfo();
				windowInfo.width = newWidth;
				windowInfo.height = newHeight;
				windowInfo.phys_width = newWidth;
				windowInfo.phys_height = newHeight;
				
				// Resize framebuffer for software rendering
				s_framebuffer.assign(s_video_width * s_video_height, 0u);
				
				if (s_log_cb)
					s_log_cb(RETRO_LOG_INFO, "[Cemu] Internal resolution set to %ux%u\n", newWidth, newHeight);
				
				// Notify frontend of geometry change if game is loaded
				if (s_game_loaded && s_env_cb)
				{
					struct retro_system_av_info av_info;
					retro_get_system_av_info(&av_info);
					s_env_cb(RETRO_ENVIRONMENT_SET_GEOMETRY, &av_info.geometry);
				}
			}
		}
	}

	if (const char* v = libretro_get_option_value("cemu_graphic_packs_update"))
	{
		if (libretro_iequals(v, "startup"))
			s_graphic_packs_update_mode = GraphicPacksUpdateMode::Startup;
		else if (libretro_iequals(v, "run_once"))
			s_graphic_packs_update_mode = GraphicPacksUpdateMode::RunOnce;
		else
			s_graphic_packs_update_mode = GraphicPacksUpdateMode::Disabled;
	}

	// Thread quantum - affects CPU thread scheduling
	if (const char* v = libretro_get_option_value("cemu_thread_quantum"))
	{
		const int quantum = atoi(v);
		if (quantum >= 1000 && quantum <= 536870912)
		{
			extern uint32 ppcThreadQuantum;
			ppcThreadQuantum = (uint32)quantum;
		}
	}

	// Audio latency
	if (const char* v = libretro_get_option_value("cemu_audio_latency"))
	{
		const int delay = atoi(v);
		if (delay >= 1 && delay <= 8)
			cfg.audio_delay = delay;
	}

	// Accurate shader multiplication - applies via game profile
	if (const char* v = libretro_get_option_value("cemu_accurate_shader_mul"))
	{
		bool enabled = true;
		if (libretro_parse_enabled_disabled(v, enabled))
		{
			if (g_current_game_profile)
				g_current_game_profile->SetAccurateShaderMul(enabled ? AccurateShaderMulOption::True : AccurateShaderMulOption::False);
		}
	}

	// Shader fast math - applies via game profile
	if (const char* v = libretro_get_option_value("cemu_shader_fast_math"))
	{
		bool enabled = true;
		if (libretro_parse_enabled_disabled(v, enabled))
		{
			if (g_current_game_profile)
				g_current_game_profile->SetShaderFastMath(enabled);
		}
	}

	// VSync
	if (const char* v = libretro_get_option_value("cemu_vsync"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.vsync = enabled ? 1 : 0;
	}

	// Downscale filter
	if (const char* v = libretro_get_option_value("cemu_downscale_filter"))
	{
		if (libretro_iequals(v, "linear"))
			cfg.downscale_filter = kLinearFilter;
		else if (libretro_iequals(v, "bicubic"))
			cfg.downscale_filter = kBicubicFilter;
		else if (libretro_iequals(v, "bicubic_hermite"))
			cfg.downscale_filter = kBicubicHermiteFilter;
		else if (libretro_iequals(v, "nearest"))
			cfg.downscale_filter = kNearestNeighborFilter;
	}

	// Render upside down
	if (const char* v = libretro_get_option_value("cemu_render_upside_down"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.render_upside_down = enabled;
	}

	// Shader compile notification
	if (const char* v = libretro_get_option_value("cemu_shader_compile_notification"))
	{
		bool enabled = true;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.notification.shader_compiling = enabled;
	}

	// USB Device emulation - Skylander Portal
	if (const char* v = libretro_get_option_value("cemu_emulate_skylander_portal"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_skylander_portal = enabled;
	}

	// USB Device emulation - Infinity Base
	if (const char* v = libretro_get_option_value("cemu_emulate_infinity_base"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_infinity_base = enabled;
	}

	// USB Device emulation - Dimensions Toypad
	if (const char* v = libretro_get_option_value("cemu_emulate_dimensions_toypad"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			cfg.emulated_usb_devices.emulate_dimensions_toypad = enabled;
	}

	// Skip draw on duplicate frames
	if (const char* v = libretro_get_option_value("cemu_skip_draw_on_dupe"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
			s_skip_draw_on_dupe = enabled;
	}

	// CPU cores
	if (const char* v = libretro_get_option_value("cemu_cpu_cores"))
	{
		s_use_multicore = !libretro_iequals(v, "singlecore");
		CafeSystem::SetLibretroMultiCoreEnabled(s_use_multicore);
	}

	// Network service selection
	if (const char* v = libretro_get_option_value("cemu_network_service"))
	{
		NetworkService service = NetworkService::Offline;
		if (libretro_iequals(v, "pretendo"))
			service = NetworkService::Pretendo;
		else if (libretro_iequals(v, "custom"))
			service = NetworkService::Custom;
		// Apply to the current account
		cfg.SetAccountSelectedService(cfg.account.m_persistent_id.GetValue(), service);
	}

	// SSL verification for custom servers
	if (const char* v = libretro_get_option_value("cemu_disable_ssl_verify"))
	{
		bool enabled = false;
		if (libretro_parse_enabled_disabled(v, enabled))
		{
			auto& netCfg = GetNetworkConfig();
			netCfg.disablesslver = enabled;
		}
	}

	// Account selection
	if (const char* v = libretro_get_option_value("cemu_account_id"))
	{
		const int accountIndex = atoi(v);
		if (accountIndex >= 1 && accountIndex <= 12)
		{
			// Account persistent IDs start at 0x80000001
			const uint32 persistentId = Account::kMinPersistendId + (accountIndex - 1);
			cfg.account.m_persistent_id = persistentId;
		}
	}

	if (log && s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Core options applied\n");
}

struct LibretroInputSnapshot
{
	std::atomic<uint32_t> buttons_mask{0};
	std::atomic<uint8_t> l2{0};
	std::atomic<uint8_t> r2{0};
	std::atomic<int32_t> lx{0};
	std::atomic<int32_t> ly{0};
	std::atomic<int32_t> rx{0};
	std::atomic<int32_t> ry{0};
	std::atomic<uint8_t> pointer_pressed{0};
	std::atomic<int32_t> pointer_x{0};
	std::atomic<int32_t> pointer_y{0};
};

static LibretroInputSnapshot s_libretro_input;
static std::atomic_bool s_libretro_input_active{false};
static std::shared_ptr<ControllerBase> s_libretro_controller;
static std::atomic_bool s_libretro_keyboard_active{false};

std::atomic_bool s_frame_ready = false;
static std::atomic<GLuint> s_current_fbo = 0;
static std::atomic_uint32_t s_make_current_calls = 0;
static std::atomic_uint32_t s_make_current_failures = 0;
static std::atomic_uint32_t s_swapbuffers_calls = 0;

static fs::path s_system_path;
static fs::path s_save_path;
static fs::path s_content_path;

static std::atomic_uint32_t s_stall_reported = 0;
static uint64 s_stall_last_ihb[3]{};
static uint32 s_stall_consecutive = 0;

static retro_hw_render_callback s_hw_render = {};

#ifdef ENABLE_VULKAN
// Vulkan presentation resources
static const retro_hw_render_interface_vulkan* s_vulkan_interface = nullptr;
static std::vector<retro_vulkan_image> s_vulkan_images;
static std::vector<VkImage> s_vulkan_image_handles;
static std::vector<VkDeviceMemory> s_vulkan_image_memory;
static std::vector<VkFramebuffer> s_vulkan_framebuffers;
static uint32_t s_vulkan_num_swapchain_images = 0;
#endif

#ifdef _WIN32
static HDC s_ra_hdc = nullptr;
static HGLRC s_ra_hglrc = nullptr;
static HGLRC s_shared_hglrc = nullptr;

static void libretro_wgl_log(enum retro_log_level level, const char* msg)
{
    if (!s_env_cb)
        return;
    retro_log_callback log_cb = {};
    if (s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb) && log_cb.log)
        log_cb.log(level, "%s", msg);
}

static void DestroySharedWGLContext()
{
	if (libretro_debug_enabled())
		libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] WGL: DestroySharedWGLContext\n");
    if (s_shared_hglrc)
    {
        wglDeleteContext(s_shared_hglrc);
        s_shared_hglrc = nullptr;
    }
    s_ra_hdc = nullptr;
    s_ra_hglrc = nullptr;
}

static bool CreateSharedWGLContextFromCurrent()
{
    // capture RetroArch context/DC (must be current on this thread)
    s_ra_hdc = wglGetCurrentDC();
    s_ra_hglrc = wglGetCurrentContext();
    if (!s_ra_hdc || !s_ra_hglrc)
    {
        libretro_wgl_log(RETRO_LOG_ERROR, "[Cemu] WGL: RetroArch context not current in context_reset\n");
        return false;
    }

	if (libretro_debug_enabled())
		libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] WGL: Captured RA DC/RC\n");

    DestroySharedWGLContext();
    s_ra_hdc = wglGetCurrentDC();
    s_ra_hglrc = wglGetCurrentContext();

    // Create a compatibility shared context (RetroArch video driver is 'gl')
    HGLRC newCtx = wglCreateContext(s_ra_hdc);
    if (!newCtx)
    {
        libretro_wgl_log(RETRO_LOG_ERROR, "[Cemu] WGL: wglCreateContext failed\n");
        return false;
    }
	if (libretro_debug_enabled())
		libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] WGL: Created shared context handle\n");

    if (!wglShareLists(s_ra_hglrc, newCtx))
    {
        libretro_wgl_log(RETRO_LOG_ERROR, "[Cemu] WGL: wglShareLists failed\n");
        wglDeleteContext(newCtx);
        return false;
    }
	if (libretro_debug_enabled())
		libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] WGL: ShareLists successful\n");

    s_shared_hglrc = newCtx;
    libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] WGL: shared context created\n");
    return true;
}
#endif

static void libretro_context_reset();
static void libretro_context_destroy();

class LibretroOpenGLCanvasCallbacks : public OpenGLCanvasCallbacks
{
public:
    LibretroOpenGLCanvasCallbacks()
    {
        SetOpenGLCanvasCallbacks(this);
    }

    ~LibretroOpenGLCanvasCallbacks() override
    {
        ClearOpenGLCanvasCallbacks();
    }

    bool HasPadViewOpen() const override
    {
        const bool result = libretro_drc_needs_pad_view();
        if (s_log_cb && libretro_debug_enabled())
        {
            static uint64 s_calls = 0;
            if ((s_calls++ % 600) == 0)
                s_log_cb(RETRO_LOG_INFO, "[Cemu:DRC] HasPadViewOpen() = %d (mode=%d)\n", result ? 1 : 0, (int)s_drc_display_mode);
        }
        return result;
    }

    bool MakeCurrent(bool /*padView*/) override
    {
        s_make_current_calls.fetch_add(1, std::memory_order_relaxed);
        #ifdef _WIN32
        // Ensure the calling thread has a current GL context.
        // Cemu's Latte thread may call into the renderer on a different thread than RetroArch.
        if (s_shared_hglrc && s_ra_hdc)
        {
            // Thread-local cache to avoid wglGetCurrentContext syscall overhead
            static thread_local HGLRC t_cached_context = nullptr;
            if (t_cached_context == s_shared_hglrc)
                return true;
            
            // Check actual context (cache miss or first call on this thread)
            HGLRC current = wglGetCurrentContext();
            if (current == s_shared_hglrc)
            {
                t_cached_context = s_shared_hglrc;
                return true;
            }
            
            // Release any current context first to avoid conflicts
            if (current != nullptr)
                wglMakeCurrent(nullptr, nullptr);
            
            if (wglMakeCurrent(s_ra_hdc, s_shared_hglrc) == TRUE)
            {
                t_cached_context = s_shared_hglrc;
                return true;
            }
            t_cached_context = nullptr;
            s_make_current_failures.fetch_add(1, std::memory_order_relaxed);
            if (s_make_current_failures.load() % 100 == 0)
                libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] MakeCurrent failed (x100)\n");
            return false;
        }
        #endif
        return true;
    }

    void SwapBuffers(bool /*swapTV*/, bool /*swapDRC*/) override
    {
        // Signal that a frame is ready - will be presented in retro_run on main thread
        s_swapbuffers_calls.fetch_add(1, std::memory_order_relaxed);
        if (s_swapbuffers_calls.load() % 100 == 0)
            libretro_wgl_log(RETRO_LOG_INFO, "[Cemu] Render thread active (SwapBuffers x100)\n");
        s_frame_ready = true;
    }

    GLuint GetOutputFramebuffer() const override
    {
        // Return cached FBO (set by main thread in retro_run)
        return s_current_fbo.load();
    }

    bool ShouldRenderScreen(bool padView) const override
    {
        bool result = true;
        switch (s_drc_display_mode)
        {
        case DRCDisplayMode::Disabled:
            result = !padView;
            break;
        case DRCDisplayMode::Toggle:
            result = s_drc_position_swapped ? padView : !padView;
            break;
        case DRCDisplayMode::SideBySide:
        case DRCDisplayMode::TopBottom:
        case DRCDisplayMode::PictureInPicture:
            result = true;
            break;
        }
        if (s_log_cb && libretro_debug_enabled())
        {
            static uint64 s_calls = 0;
            if ((s_calls++ % 600) == 0)
                s_log_cb(RETRO_LOG_INFO, "[Cemu:DRC] ShouldRenderScreen(padView=%d) = %d (mode=%d swap=%d)\n", 
                    padView ? 1 : 0, result ? 1 : 0, (int)s_drc_display_mode, s_drc_position_swapped ? 1 : 0);
        }
        return result;
    }

    void AdjustScreenViewport(bool padView, sint32 windowWidth, sint32 windowHeight,
        sint32& outX, sint32& outY, sint32& outWidth, sint32& outHeight) const override
    {
        // Determine which is "primary" (larger) and which is "secondary" (smaller)
        // Position swap controls which screen is primary
        const bool isPrimary = s_drc_position_swapped ? padView : !padView;
        
        if (s_log_cb && libretro_debug_enabled())
        {
            static uint64 s_calls = 0;
            if ((s_calls++ % 600) == 0)
                s_log_cb(RETRO_LOG_INFO, "[Cemu:DRC] AdjustScreenViewport(padView=%d isPrimary=%d winSize=%dx%d mode=%d)\n", 
                    padView ? 1 : 0, isPrimary ? 1 : 0, windowWidth, windowHeight, (int)s_drc_display_mode);
        }

        switch (s_drc_display_mode)
        {
        case DRCDisplayMode::Disabled:
        case DRCDisplayMode::Toggle:
            // Full screen for the single displayed screen
            outX = 0;
            outY = 0;
            outWidth = windowWidth;
            outHeight = windowHeight;
            break;

        case DRCDisplayMode::SideBySide:
            // Side by side: primary top-left (80% width, 16:9 aspect), secondary bottom-right (20%)
            {
                const sint32 primaryWidth = (windowWidth * 80) / 100;
                const sint32 secondaryWidth = windowWidth - primaryWidth;
                
                // Calculate height for 16:9 aspect ratio on primary screen
                sint32 primaryHeight = (primaryWidth * 9) / 16;
                if (primaryHeight > windowHeight)
                    primaryHeight = windowHeight;
                
                // Calculate secondary height (same aspect as DRC which is ~16:9)
                sint32 secondaryHeight = (secondaryWidth * 9) / 16;
                if (secondaryHeight > windowHeight)
                    secondaryHeight = windowHeight;
                
                if (isPrimary)
                {
                    // Top-left corner (OpenGL Y is bottom-up, so top = windowHeight - height)
                    outX = 0;
                    outY = windowHeight - primaryHeight;
                    outWidth = primaryWidth;
                    outHeight = primaryHeight;
                }
                else
                {
                    // Bottom-right corner
                    outX = primaryWidth;
                    outY = 0;
                    outWidth = secondaryWidth;
                    outHeight = secondaryHeight;
                }
            }
            break;

        case DRCDisplayMode::TopBottom:
            // Top and bottom: primary on top (70%), secondary on bottom (30%)
            if (isPrimary)
            {
                outX = 0;
                outY = (windowHeight * 30) / 100;  // OpenGL Y is bottom-up
                outWidth = windowWidth;
                outHeight = (windowHeight * 70) / 100;
            }
            else
            {
                outX = 0;
                outY = 0;
                outWidth = windowWidth;
                outHeight = (windowHeight * 30) / 100;
            }
            break;

        case DRCDisplayMode::PictureInPicture:
            // Primary full screen, secondary as small overlay in corner
            if (isPrimary)
            {
                outX = 0;
                outY = 0;
                outWidth = windowWidth;
                outHeight = windowHeight;
            }
            else
            {
                // Small overlay in bottom-right corner (20% size)
                outWidth = (windowWidth * 20) / 100;
                outHeight = (windowHeight * 20) / 100;
                outX = windowWidth - outWidth - 10;  // 10px margin
                outY = 10;  // OpenGL Y is bottom-up, so this is bottom-right
            }
            break;
        }
    }
};

static std::unique_ptr<LibretroOpenGLCanvasCallbacks> s_gl_callbacks;

static uint32_t libretro_key_to_platform_key(unsigned keycode, uint32_t character)
{
#ifdef _WIN32
	// Use if-else instead of switch because RETROK_* are not constexpr in MSVC
	if (keycode == RETROK_BACKSPACE) return VK_BACK;
	if (keycode == RETROK_TAB) return VK_TAB;
	if (keycode == RETROK_CLEAR) return VK_CLEAR;
	if (keycode == RETROK_RETURN) return VK_RETURN;
	if (keycode == RETROK_PAUSE) return VK_PAUSE;
	if (keycode == RETROK_ESCAPE) return VK_ESCAPE;
	if (keycode == RETROK_SPACE) return VK_SPACE;
	if (keycode == RETROK_DELETE) return VK_DELETE;

	if (keycode == RETROK_LEFT) return VK_LEFT;
	if (keycode == RETROK_UP) return VK_UP;
	if (keycode == RETROK_RIGHT) return VK_RIGHT;
	if (keycode == RETROK_DOWN) return VK_DOWN;
	if (keycode == RETROK_INSERT) return VK_INSERT;
	if (keycode == RETROK_HOME) return VK_HOME;
	if (keycode == RETROK_END) return VK_END;
	if (keycode == RETROK_PAGEUP) return VK_PRIOR;
	if (keycode == RETROK_PAGEDOWN) return VK_NEXT;

	if (keycode == RETROK_F1) return VK_F1;
	if (keycode == RETROK_F2) return VK_F2;
	if (keycode == RETROK_F3) return VK_F3;
	if (keycode == RETROK_F4) return VK_F4;
	if (keycode == RETROK_F5) return VK_F5;
	if (keycode == RETROK_F6) return VK_F6;
	if (keycode == RETROK_F7) return VK_F7;
	if (keycode == RETROK_F8) return VK_F8;
	if (keycode == RETROK_F9) return VK_F9;
	if (keycode == RETROK_F10) return VK_F10;
	if (keycode == RETROK_F11) return VK_F11;
	if (keycode == RETROK_F12) return VK_F12;

	if (keycode == RETROK_LSHIFT) return VK_LSHIFT;
	if (keycode == RETROK_RSHIFT) return VK_RSHIFT;
	if (keycode == RETROK_LCTRL) return VK_LCONTROL;
	if (keycode == RETROK_RCTRL) return VK_RCONTROL;
	if (keycode == RETROK_LALT) return VK_LMENU;
	if (keycode == RETROK_RALT) return VK_RMENU;

	// common printable keys map 1:1 to Win32 VK_* (letters/digits/punctuation)
	if (keycode >= 'a' && keycode <= 'z')
		return (uint32_t)(keycode - 'a' + 'A');
	if ((keycode >= '0' && keycode <= '9') || (keycode >= 'A' && keycode <= 'Z'))
		return (uint32_t)keycode;
	if (keycode >= 0x20 && keycode <= 0x7E)
		return (uint32_t)keycode;

	if (character >= 0x20 && character <= 0x7E)
		return character;

	return 0;
#else
	(void)character;
	return (uint32_t)keycode;
#endif
}

static void RETRO_CALLCONV libretro_keyboard_event(bool down, unsigned keycode, uint32_t character, uint16_t key_modifiers)
{
	(void)key_modifiers;
	const uint32_t platformKey = libretro_key_to_platform_key(keycode, character);
	if (platformKey == 0)
		return;
	WindowSystem::GetWindowInfo().set_keystate(platformKey, down);

#ifdef _WIN32
	// keep generic modifiers in sync as well (libretro doesn't distinguish L/R in modifier bits)
	WindowSystem::GetWindowInfo().set_keystate(VK_LSHIFT, (key_modifiers & RETROKMOD_SHIFT) != 0);
	WindowSystem::GetWindowInfo().set_keystate(VK_RSHIFT, (key_modifiers & RETROKMOD_SHIFT) != 0);
	WindowSystem::GetWindowInfo().set_keystate(VK_LCONTROL, (key_modifiers & RETROKMOD_CTRL) != 0);
	WindowSystem::GetWindowInfo().set_keystate(VK_RCONTROL, (key_modifiers & RETROKMOD_CTRL) != 0);
	WindowSystem::GetWindowInfo().set_keystate(VK_LMENU, (key_modifiers & RETROKMOD_ALT) != 0);
	WindowSystem::GetWindowInfo().set_keystate(VK_RMENU, (key_modifiers & RETROKMOD_ALT) != 0);
#endif
}

static float libretro_axis_to_float(int32_t v)
{
    constexpr float denom = 32767.0f;
    if (v >= 0)
        return std::min(1.0f, (float)v / denom);
    return std::max(-1.0f, (float)v / 32768.0f);
}

class LibretroController final : public ControllerBase
{
public:
    LibretroController()
        : ControllerBase("libretro0", "Libretro Controller")
    {
        ControllerBase::Settings s{};
        s.axis.deadzone = 0.15f;
        s.rotation.deadzone = 0.15f;
        s.trigger.deadzone = 0.05f;
        set_settings(s);
    }

    std::string_view api_name() const override
    {
        return InputAPI::to_string(InputAPI::Libretro);
    }
    InputAPI::Type api() const override { return InputAPI::Libretro; }

    bool is_connected() override { return true; }

    bool has_position() override
    {
        return s_libretro_input.pointer_pressed.load(std::memory_order_relaxed) != 0;
    }

    glm::vec2 get_position() override
    {
        const int32_t px = s_libretro_input.pointer_x.load(std::memory_order_relaxed);
        const int32_t py = s_libretro_input.pointer_y.load(std::memory_order_relaxed);
        constexpr float denom = 32767.0f;
        const float nx = (std::clamp((float)px, -denom, denom) + denom) / (2.0f * denom);
        const float ny = (std::clamp((float)py, -denom, denom) + denom) / (2.0f * denom);
        return { nx, ny };
    }

    glm::vec2 get_prev_position() override
    {
        return get_position();
    }

    PositionVisibility GetPositionVisibility() override
    {
        return PositionVisibility::FULL;
    }

protected:
    ControllerState raw_state() override
    {
        ControllerState result{};
        const uint32_t mask = s_libretro_input.buttons_mask.load(std::memory_order_relaxed);
        for (uint32_t i = 0; i <= (uint32_t)kButton31; i++)
            result.buttons.SetButtonState(i, (mask & (1u << i)) != 0);

        const int32_t lx = s_libretro_input.lx.load(std::memory_order_relaxed);
        const int32_t ly = s_libretro_input.ly.load(std::memory_order_relaxed);
        const int32_t rx = s_libretro_input.rx.load(std::memory_order_relaxed);
        const int32_t ry = s_libretro_input.ry.load(std::memory_order_relaxed);

        result.axis.x = libretro_axis_to_float(lx);
        result.axis.y = libretro_axis_to_float(ly);

        result.rotation.x = libretro_axis_to_float(rx);
        result.rotation.y = libretro_axis_to_float(ry);

        result.trigger.x = (s_libretro_input.l2.load(std::memory_order_relaxed) != 0) ? 1.0f : 0.0f;
        result.trigger.y = (s_libretro_input.r2.load(std::memory_order_relaxed) != 0) ? 1.0f : 0.0f;

        return result;
    }
};

static void libretro_poll_input()
{
    if (!s_input_state_cb)
        return;

    static uint64 s_input_frames = 0;
    s_input_frames++;

    uint32_t mask = 0;
    bool l2_pressed = false;
    bool r2_pressed = false;

    // Use batched input bitmask if supported (single call instead of 16+ calls)
    if (s_input_bitmask_supported)
    {
        const int16_t buttons = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_MASK);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_B)) mask |= (1u << (uint32_t)kButton0);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_A)) mask |= (1u << (uint32_t)kButton1);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_Y)) mask |= (1u << (uint32_t)kButton2);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_X)) mask |= (1u << (uint32_t)kButton3);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_SELECT)) mask |= (1u << (uint32_t)kButton4);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_START)) mask |= (1u << (uint32_t)kButton6);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_L3)) mask |= (1u << (uint32_t)kButton7);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_R3)) mask |= (1u << (uint32_t)kButton8);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_L)) mask |= (1u << (uint32_t)kButton9);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_R)) mask |= (1u << (uint32_t)kButton10);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_UP)) mask |= (1u << (uint32_t)kButton11);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_DOWN)) mask |= (1u << (uint32_t)kButton12);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_LEFT)) mask |= (1u << (uint32_t)kButton13);
        if (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_RIGHT)) mask |= (1u << (uint32_t)kButton14);
        l2_pressed = (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_L2)) != 0;
        r2_pressed = (buttons & (1 << RETRO_DEVICE_ID_JOYPAD_R2)) != 0;
    }
    else
    {
        // Fallback: individual button queries
        auto joy = [](unsigned id) -> bool
        {
            return s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, id) != 0;
        };

        if (joy(RETRO_DEVICE_ID_JOYPAD_B)) mask |= (1u << (uint32_t)kButton0);
        if (joy(RETRO_DEVICE_ID_JOYPAD_A)) mask |= (1u << (uint32_t)kButton1);
        if (joy(RETRO_DEVICE_ID_JOYPAD_Y)) mask |= (1u << (uint32_t)kButton2);
        if (joy(RETRO_DEVICE_ID_JOYPAD_X)) mask |= (1u << (uint32_t)kButton3);
        if (joy(RETRO_DEVICE_ID_JOYPAD_SELECT)) mask |= (1u << (uint32_t)kButton4);
        if (joy(RETRO_DEVICE_ID_JOYPAD_START)) mask |= (1u << (uint32_t)kButton6);
        if (joy(RETRO_DEVICE_ID_JOYPAD_L3)) mask |= (1u << (uint32_t)kButton7);
        if (joy(RETRO_DEVICE_ID_JOYPAD_R3)) mask |= (1u << (uint32_t)kButton8);
        if (joy(RETRO_DEVICE_ID_JOYPAD_L)) mask |= (1u << (uint32_t)kButton9);
        if (joy(RETRO_DEVICE_ID_JOYPAD_R)) mask |= (1u << (uint32_t)kButton10);
        if (joy(RETRO_DEVICE_ID_JOYPAD_UP)) mask |= (1u << (uint32_t)kButton11);
        if (joy(RETRO_DEVICE_ID_JOYPAD_DOWN)) mask |= (1u << (uint32_t)kButton12);
        if (joy(RETRO_DEVICE_ID_JOYPAD_LEFT)) mask |= (1u << (uint32_t)kButton13);
        if (joy(RETRO_DEVICE_ID_JOYPAD_RIGHT)) mask |= (1u << (uint32_t)kButton14);
        l2_pressed = joy(RETRO_DEVICE_ID_JOYPAD_L2);
        r2_pressed = joy(RETRO_DEVICE_ID_JOYPAD_R2);
    }

    s_libretro_input.buttons_mask.store(mask, std::memory_order_relaxed);
    s_libretro_input.l2.store(l2_pressed ? 1 : 0, std::memory_order_relaxed);
    s_libretro_input.r2.store(r2_pressed ? 1 : 0, std::memory_order_relaxed);

    const int32_t lx = (int32_t)s_input_state_cb(0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_X);
    const int32_t ly = (int32_t)s_input_state_cb(0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_LEFT, RETRO_DEVICE_ID_ANALOG_Y);
    const int32_t rx = (int32_t)s_input_state_cb(0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_X);
    const int32_t ry = (int32_t)s_input_state_cb(0, RETRO_DEVICE_ANALOG, RETRO_DEVICE_INDEX_ANALOG_RIGHT, RETRO_DEVICE_ID_ANALOG_Y);
    s_libretro_input.lx.store(lx, std::memory_order_relaxed);
    s_libretro_input.ly.store(-ly, std::memory_order_relaxed);
    s_libretro_input.rx.store(rx, std::memory_order_relaxed);
    s_libretro_input.ry.store(-ry, std::memory_order_relaxed);

    const uint8_t pointerPressed = (uint8_t)(s_input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_PRESSED) ? 1 : 0);
    s_libretro_input.pointer_pressed.store(pointerPressed, std::memory_order_relaxed);
    if (pointerPressed)
    {
        const int32_t px = (int32_t)s_input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_X);
        const int32_t py = (int32_t)s_input_state_cb(0, RETRO_DEVICE_POINTER, 0, RETRO_DEVICE_ID_POINTER_Y);
        s_libretro_input.pointer_x.store(px, std::memory_order_relaxed);
        s_libretro_input.pointer_y.store(py, std::memory_order_relaxed);
    }

    if (s_libretro_input_active.load(std::memory_order_relaxed))
        return;

    // Fallback keyboard simulation for menu navigation (rarely used)
    // This is primarily for Windows standalone mode; libretro input takes precedence
#ifdef _WIN32
    auto& windowInfo = WindowSystem::GetWindowInfo();

    struct ButtonMapping {
        unsigned retroId;
        uint32 keyCode;
    };

    static const ButtonMapping mappings[] = {
        { RETRO_DEVICE_ID_JOYPAD_A, 'Z' },
        { RETRO_DEVICE_ID_JOYPAD_B, 'X' },
        { RETRO_DEVICE_ID_JOYPAD_X, 'A' },
        { RETRO_DEVICE_ID_JOYPAD_Y, 'S' },
        { RETRO_DEVICE_ID_JOYPAD_UP, VK_UP },
        { RETRO_DEVICE_ID_JOYPAD_DOWN, VK_DOWN },
        { RETRO_DEVICE_ID_JOYPAD_LEFT, VK_LEFT },
        { RETRO_DEVICE_ID_JOYPAD_RIGHT, VK_RIGHT },
        { RETRO_DEVICE_ID_JOYPAD_START, VK_RETURN },
        { RETRO_DEVICE_ID_JOYPAD_SELECT, VK_BACK },
        { RETRO_DEVICE_ID_JOYPAD_L, 'Q' },
        { RETRO_DEVICE_ID_JOYPAD_R, 'W' },
        { RETRO_DEVICE_ID_JOYPAD_L2, 'E' },
        { RETRO_DEVICE_ID_JOYPAD_R2, 'R' },
    };

    for (const auto& mapping : mappings)
    {
        bool pressed = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, mapping.retroId) != 0;
        windowInfo.set_keystate(mapping.keyCode, pressed);
        if (pressed && libretro_debug_verbose() && s_log_cb)
            s_log_cb(RETRO_LOG_INFO, "[Cemu] Input pressed: retroId=%u keyCode=%u\n", mapping.retroId, (unsigned)mapping.keyCode);
    }
#endif

    if (libretro_debug_enabled() && s_log_cb && (s_input_frames <= 120 || (s_input_frames % 60) == 0))
    {
        int16_t a = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_A);
        int16_t b = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_B);
        int16_t x = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_X);
        int16_t y = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_Y);
        int16_t st = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_START);
        int16_t sel = s_input_state_cb(0, RETRO_DEVICE_JOYPAD, 0, RETRO_DEVICE_ID_JOYPAD_SELECT);
        s_log_cb(RETRO_LOG_INFO, "[Cemu] Input summary @frame %llu: A=%d B=%d X=%d Y=%d START=%d SELECT=%d\n",
            (unsigned long long)s_input_frames, (int)a, (int)b, (int)x, (int)y, (int)st, (int)sel);
    }
}

typedef void(*GL_IMPORT)();

static void LoadOpenGLImportsLibretro()
{
    if (!s_hw_render.get_proc_address)
        return;

#define STRINGIFY2(X) #X
#define STRINGIFY(X) STRINGIFY2(X)
#define GLFUNC(__type, __name) CemuGL::__name = (__type)s_hw_render.get_proc_address(STRINGIFY(__name));
#define EGLFUNC(__type, __name)
#include "Common/GLInclude/glFunctions.h"
#undef GLFUNC
#undef EGLFUNC
#undef STRINGIFY
#undef STRINGIFY2
}

static void RETRO_CALLCONV libretro_context_reset()
{
    if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] context_reset called (tid=%llu)\n", (unsigned long long)libretro_get_thread_id());

    if (!s_hw_render.get_proc_address)
    {
        if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] No get_proc_address!\n");
        return;
    }

    try {
        LoadOpenGLImportsLibretro();
        if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] OpenGL imports loaded\n");

        // Cache current HW framebuffer early so the render thread has a valid default FBO
        if (s_hw_render.get_current_framebuffer)
        {
            s_current_fbo = (GLuint)s_hw_render.get_current_framebuffer();
        }

        if (s_graphics_api == GraphicsAPI::Vulkan)
        {
#ifdef ENABLE_VULKAN
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] Creating Vulkan renderer (will be initialized on Latte thread)\n");
            // Create VulkanRenderer with standalone Vulkan instance/device
            g_renderer = std::make_unique<VulkanRenderer>();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] VulkanRenderer created\n");
            // NOTE: Do NOT call Initialize() here - it will be called on the Latte thread
#else
            if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] Vulkan selected but not compiled in!\n");
            throw std::runtime_error("Vulkan not available");
#endif
        }
        else
        {
            LoadOpenGLImportsLibretro();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] OpenGL imports loaded\n");

            // Cache current HW framebuffer early so the render thread has a valid default FBO
            if (s_hw_render.get_current_framebuffer)
            {
                s_current_fbo = (GLuint)s_hw_render.get_current_framebuffer();
            }

#ifdef _WIN32
            // Create a shared WGL context for Cemu's render/GPU thread (RetroArch driver: gl)
            CreateSharedWGLContextFromCurrent();
#endif

            s_gl_callbacks = std::make_unique<LibretroOpenGLCanvasCallbacks>();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] GL callbacks created\n");

            g_renderer = std::make_unique<OpenGLRenderer>();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] OpenGLRenderer created\n");

            // Initialize() is required to set up GL state, pipelines, buffers, ImGui
            // It calls LoadOpenGLImports() internally which overwrites our libretro-loaded functions,
            // so we re-load them afterwards via libretro's get_proc_address
            g_renderer->Initialize();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] OpenGLRenderer initialized\n");

            // Re-load GL imports via libretro's get_proc_address (Initialize() overwrote them)
            LoadOpenGLImportsLibretro();
            if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] OpenGL imports re-loaded for libretro\n");
        }

        g_isGPUInitFinished = true;
        s_hw_context_ready = true;
        if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] HW context ready\n");
    }
    catch (const std::exception& e) {
        if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] context_reset exception: %s\n", e.what());
    }
    catch (...) {
        if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] context_reset unknown exception\n");
    }
}

static void RETRO_CALLCONV libretro_context_destroy()
{
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] context_destroy called (tid=%llu)\n", (unsigned long long)libretro_get_thread_id());
    s_hw_context_ready = false;

#ifdef ENABLE_VULKAN
    // Cleanup Vulkan presentation resources
    if (s_vulkan_interface && s_vulkan_interface->device)
    {
        VkDevice device = s_vulkan_interface->device;
        vkDeviceWaitIdle(device);
        
        for (uint32_t i = 0; i < s_vulkan_num_swapchain_images; i++)
        {
            if (s_vulkan_framebuffers[i] != VK_NULL_HANDLE)
                vkDestroyFramebuffer(device, s_vulkan_framebuffers[i], nullptr);
            if (s_vulkan_images[i].image_view != VK_NULL_HANDLE)
                vkDestroyImageView(device, s_vulkan_images[i].image_view, nullptr);
            if (s_vulkan_image_memory[i] != VK_NULL_HANDLE)
                vkFreeMemory(device, s_vulkan_image_memory[i], nullptr);
            if (s_vulkan_image_handles[i] != VK_NULL_HANDLE)
                vkDestroyImage(device, s_vulkan_image_handles[i], nullptr);
        }
        
        s_vulkan_images.clear();
        s_vulkan_image_handles.clear();
        s_vulkan_image_memory.clear();
        s_vulkan_framebuffers.clear();
        s_vulkan_num_swapchain_images = 0;
        s_vulkan_interface = nullptr;
        
        if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] Vulkan presentation resources cleaned up\n");
    }
#endif

#ifdef _WIN32
    DestroySharedWGLContext();
#endif
	s_gl_callbacks.reset();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] context_destroy done\n");
}

static bool libretro_init_hw_context()
{
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] init_hw_context begin\n");

	// Try Vulkan first if compiled in
#ifdef ENABLE_VULKAN
	if (InitializeGlobalVulkan() && g_vulkan_available)
	{
		// Request Vulkan context from RetroArch
		s_hw_render.context_type = RETRO_HW_CONTEXT_VULKAN;
		s_hw_render.version_major = VK_API_VERSION_MAJOR(VK_API_VERSION_1_2);
		s_hw_render.version_minor = VK_API_VERSION_MINOR(VK_API_VERSION_1_2);
		s_hw_render.context_reset = libretro_context_reset;
		s_hw_render.context_destroy = libretro_context_destroy;
		s_hw_render.cache_context = false;
		s_hw_render.debug_context = false;

		if (s_env_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
		{
			s_graphics_api = GraphicsAPI::Vulkan;
			if (s_log_cb)
				s_log_cb(RETRO_LOG_INFO, "[Cemu] Vulkan context requested successfully\n");
			return true;
		}
		else if (s_log_cb)
		{
			s_log_cb(RETRO_LOG_INFO, "[Cemu] Vulkan not supported by frontend, falling back to OpenGL\n");
		}
	}
#endif

	// OpenGL initialization (fallback or default)
	bool shared = true;
	s_env_cb(RETRO_ENVIRONMENT_SET_HW_SHARED_CONTEXT, &shared);

	s_hw_render.context_type = RETRO_HW_CONTEXT_OPENGL_CORE;
	s_hw_render.version_major = 4;
	s_hw_render.version_minor = 5;
	s_hw_render.context_reset = libretro_context_reset;
	s_hw_render.context_destroy = libretro_context_destroy;
	s_hw_render.depth = true;
	s_hw_render.stencil = true;
	s_hw_render.bottom_left_origin = true;
	s_hw_render.cache_context = true;
	s_hw_render.debug_context = false;

	if (!s_env_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
	{
		s_hw_render.context_type = RETRO_HW_CONTEXT_OPENGL;
		s_hw_render.version_major = 0;
		s_hw_render.version_minor = 0;

		if (!s_env_cb(RETRO_ENVIRONMENT_SET_HW_RENDER, &s_hw_render))
			return false;
	}
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] init_hw_context end type=%u v=%u.%u shared=%d\n",
			(unsigned)s_hw_render.context_type,
			(unsigned)s_hw_render.version_major,
			(unsigned)s_hw_render.version_minor,
			shared ? 1 : 0);

	return true;
}

static void libretro_get_paths()
{
	const char* sys_dir = nullptr;
	const char* save_dir = nullptr;

	if (s_env_cb)
	{
		s_env_cb(RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY, &sys_dir);
		s_env_cb(RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY, &save_dir);
	}

	if (sys_dir)
		s_system_path = fs::path(sys_dir) / "Cemu";
	else
		s_system_path = fs::current_path() / "Cemu";

	if (save_dir)
		s_save_path = fs::path(save_dir) / "Cemu";
	else
		s_save_path = s_system_path;

	std::error_code ec;
	fs::create_directories(s_system_path, ec);
	fs::create_directories(s_save_path, ec);
}

static void libretro_init_cemu()
{
	if (s_cemu_initialized)
		return;
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] libretro_init_cemu begin sys=%s save=%s\n",
			s_system_path.u8string().c_str(),
			s_save_path.u8string().c_str());

	libretro_get_paths();

	fs::path exe_path = s_system_path / "cemu_libretro";
	fs::path user_path = s_system_path;  // Use system path for keys.txt
	fs::path config_path = s_system_path / "config";
	fs::path cache_path = s_save_path / "cache";
	fs::path data_path = s_system_path;

	std::error_code ec;
	fs::create_directories(config_path, ec);
	fs::create_directories(cache_path, ec);

	std::set<fs::path> failedWriteAccess;
	ActiveSettings::SetPaths(false, exe_path, user_path, config_path, cache_path, data_path, failedWriteAccess);
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Paths: exe=%s user=%s config=%s cache=%s data=%s\n",
			exe_path.u8string().c_str(),
			user_path.u8string().c_str(),
			config_path.u8string().c_str(),
			cache_path.u8string().c_str(),
			data_path.u8string().c_str());

	AES128_init();
	// Init PPC timer early - it measures RDTSC frequency asynchronously over ~3 seconds
	PPCTimer_init();
	ExceptionHandler_Init();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] AES/PPCTimer/ExceptionHandler init done\n");

	GetConfigHandle().SetFilename(ActiveSettings::GetConfigPath("settings.xml").generic_wstring());
	GetConfigHandle().Load();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Config loaded\n");

	libretro_apply_core_options(false);

	IAudioAPI::InitializeStatic();
	IAudioInputAPI::InitializeStatic();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Audio subsystems initialized\n");
	GraphicPack2::LoadAll();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] Graphic packs loaded\n");
	InputManager::instance().load();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] InputManager loaded\n");

	CafeSystem::Initialize();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] CafeSystem initialized\n");

	CafeTitleList::Initialize(ActiveSettings::GetUserDataPath("title_list_cache.xml"));
	fs::path mlcPath = ActiveSettings::GetMlcPath();
	if (!mlcPath.empty())
		CafeTitleList::SetMLCPath(mlcPath);

	CafeSaveList::Initialize();
	if (!mlcPath.empty())
	{
		CafeSaveList::SetMLCPath(mlcPath);
	}

	WindowSystem::Create();
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] WindowSystem created\n");

	s_cemu_initialized = true;
	if (s_log_cb && libretro_debug_enabled())
		s_log_cb(RETRO_LOG_INFO, "[Cemu] libretro_init_cemu end\n");
}

extern "C"
{
	RETRO_API unsigned RETRO_CALLCONV retro_api_version(void)
	{
		return RETRO_API_VERSION;
	}

	RETRO_API void RETRO_CALLCONV retro_set_environment(retro_environment_t cb)
	{
		s_env_cb = cb;
		
		// Get log interface early so it's available during context_reset
		retro_log_callback log_interface = {};
		if (cb && cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_interface))
			s_log_cb = log_interface.log;

		if (cb)
		{
			// Request VFS interface (version 1 is minimum required)
			struct retro_vfs_interface_info vfs_info = { 1, nullptr };
			if (cb(RETRO_ENVIRONMENT_GET_VFS_INTERFACE, &vfs_info) && vfs_info.iface)
			{
				s_vfs_interface = vfs_info.iface;
				VFSFileStream::SetVFSInterface(s_vfs_interface);
				if (s_log_cb && libretro_debug_enabled())
					s_log_cb(RETRO_LOG_INFO, "[Cemu] VFS interface v%u obtained and initialized\n", vfs_info.required_interface_version);
			}
			else if (s_log_cb && libretro_debug_enabled())
			{
				s_log_cb(RETRO_LOG_INFO, "[Cemu] VFS interface not available, using native file I/O\n");
			}

			libretro_register_core_options();

			retro_keyboard_callback kb = {};
			kb.callback = libretro_keyboard_event;
			const bool ok = cb(RETRO_ENVIRONMENT_SET_KEYBOARD_CALLBACK, &kb);
			s_libretro_keyboard_active.store(ok, std::memory_order_relaxed);
			if (s_log_cb && libretro_debug_enabled())
				s_log_cb(RETRO_LOG_INFO, "[Cemu] Keyboard callback: %s\n", ok ? "enabled" : "unsupported");
		}
	}

	RETRO_API void RETRO_CALLCONV retro_set_video_refresh(retro_video_refresh_t cb)
	{
		s_video_cb = cb;
	}

	RETRO_API void RETRO_CALLCONV retro_set_audio_sample(retro_audio_sample_t cb)
	{
		s_audio_cb = cb;
	}

	RETRO_API void RETRO_CALLCONV retro_set_audio_sample_batch(retro_audio_sample_batch_t cb)
	{
		s_audio_batch_cb = cb;
	}

	RETRO_API void RETRO_CALLCONV retro_set_input_poll(retro_input_poll_t cb)
	{
		s_input_poll_cb = cb;
	}

	RETRO_API void RETRO_CALLCONV retro_set_input_state(retro_input_state_t cb)
	{
		s_input_state_cb = cb;
	}

	RETRO_API void RETRO_CALLCONV retro_init(void)
	{
		// Initialize internal resolution to 1920x1080 by default
		s_video_width = 1920;
		s_video_height = 1080;
		
#ifdef _WIN32
		CoInitializeEx(nullptr, COINIT_MULTITHREADED);
#endif
		libretro_register_core_options();
		if (s_graphic_packs_update_thread.joinable())
			s_graphic_packs_update_thread.join();
		s_graphic_packs_update_done = false;
		s_graphic_packs_update_async_state.store(GraphicPacksUpdateAsyncState::Idle);
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_init (tid=%llu)\n", (unsigned long long)libretro_get_thread_id());

		if (s_env_cb)
		{
			enum retro_pixel_format fmt = RETRO_PIXEL_FORMAT_XRGB8888;
			s_env_cb(RETRO_ENVIRONMENT_SET_PIXEL_FORMAT, &fmt);
		}

		s_framebuffer.assign(s_video_width * s_video_height, 0u);

		const size_t frames_per_run = static_cast<size_t>(s_audio_sample_rate / s_fps);
		s_audio_silence_interleaved.assign(frames_per_run * 2, 0);

		LibretroAudioAPI::SetAudioCallback([](const int16_t* data, size_t frames) -> size_t {
			if (libretro_debug_enabled() && s_log_cb && (frames > 0) && (frames < 128 || (frames % 512) == 0))
				s_log_cb(RETRO_LOG_INFO, "[Cemu] Audio callback: frames=%llu\n", (unsigned long long)frames);
			if (s_audio_batch_cb && data && frames > 0)
				return s_audio_batch_cb(data, frames);
			return 0;
		});

		libretro_init_logging();
		libretro_init_cemu();
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_init done (cemu_initialized=%d)\n", s_cemu_initialized ? 1 : 0);
	}

	RETRO_API void RETRO_CALLCONV retro_deinit(void)
	{
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_deinit begin loaded=%d launched=%d\n", s_game_loaded ? 1 : 0, s_game_launched ? 1 : 0);
		libretro_shutdown_logging();
		if (s_graphic_packs_update_thread.joinable())
			s_graphic_packs_update_thread.join();
		s_graphic_packs_update_async_state.store(GraphicPacksUpdateAsyncState::Idle);
		if (s_game_loaded)
		{
			retro_unload_game();
		}

		if (s_cemu_initialized)
		{
			CafeSystem::Shutdown();
			s_cemu_initialized = false;
		}

		s_framebuffer.clear();
		s_framebuffer.shrink_to_fit();

		s_audio_silence_interleaved.clear();
		s_audio_silence_interleaved.shrink_to_fit();

#ifdef _WIN32
		CoUninitialize();
#endif
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_deinit end\n");
	}

	RETRO_API void RETRO_CALLCONV retro_get_system_info(struct retro_system_info* info)
	{
		if (!info)
			return;
		info->library_name = "Cemu";
		info->library_version = "0";
		info->valid_extensions = "rpx|elf|wud|wux|wua|iso";
		info->need_fullpath = true;
		info->block_extract = false;
	}

	RETRO_API void RETRO_CALLCONV retro_get_system_av_info(struct retro_system_av_info* info)
	{
		if (!info)
			return;

		info->geometry.base_width = s_video_width;
		info->geometry.base_height = s_video_height;
		info->geometry.max_width = s_video_width;
		info->geometry.max_height = s_video_height;
		info->geometry.aspect_ratio = static_cast<float>(s_video_width) / static_cast<float>(s_video_height);

		info->timing.fps = s_fps;
		info->timing.sample_rate = s_audio_sample_rate;
	}

	RETRO_API void RETRO_CALLCONV retro_set_controller_port_device(unsigned /*port*/, unsigned /*device*/)
	{
	}

	RETRO_API void RETRO_CALLCONV retro_reset(void)
	{
	}

	static int s_frame_count = 0;
	static bool s_logged_thread_counters = false;
	static uint64 s_sched_last_hb0 = 0;
	static uint64 s_sched_last_hb1 = 0;
	static uint64 s_sched_last_hb2 = 0;
	static uint64 s_sched_last_ts0 = 0;
	static uint64 s_sched_last_ts1 = 0;
	static uint64 s_sched_last_ts2 = 0;

	RETRO_API void RETRO_CALLCONV retro_run(void)
	{
		s_frame_count++;
		if (s_log_cb && libretro_debug_enabled() && (s_frame_count <= 10 || (s_frame_count % 600) == 0))
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_run frame=%d loaded=%d launched=%d hwReady=%d\n", s_frame_count, s_game_loaded ? 1 : 0, s_game_launched ? 1 : 0, s_hw_context_ready ? 1 : 0);
		
		if (s_frame_count == 1 && s_log_cb)
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_run first frame\n");

		// Trigger vsync for emulation - this controls frame pacing
		// When menu is open and retro_run stops being called, vsync stops, emulation pauses
		if (s_game_launched)
		{
			LatteTiming_TriggerVSync();
		}

		// Launch the game on first frame when GL context is ready
		if (s_game_loaded && !s_game_launched && s_hw_context_ready)
		{
			bool canLaunch = true;
			// Apply core options immediately before launch so they take effect.
			libretro_apply_core_options(false);
			if (!s_graphic_packs_update_done && s_graphic_packs_update_mode != GraphicPacksUpdateMode::Disabled)
			{
				const auto asyncState = s_graphic_packs_update_async_state.load();
				if (asyncState == GraphicPacksUpdateAsyncState::Idle)
				{
					if (s_log_cb)
						s_log_cb(RETRO_LOG_INFO, "[Cemu] Updating community graphic packs...\n");
					libretro_start_graphic_packs_update_async();
					canLaunch = false;
				}
				else if (asyncState == GraphicPacksUpdateAsyncState::Running)
				{
					// Wait until finished before launching the game.
					canLaunch = false;
				}
				else
				{
					if (s_graphic_packs_update_thread.joinable())
						s_graphic_packs_update_thread.join();
					const bool ok = (asyncState == GraphicPacksUpdateAsyncState::FinishedOk);
					s_graphic_packs_update_done = true;
					if (ok)
					{
						GraphicPack2::ClearGraphicPacks();
						GraphicPack2::LoadAll();
					}
					else if (s_log_cb)
					{
						s_log_cb(RETRO_LOG_WARN, "[Cemu] Graphic packs update failed\n");
					}
					if (s_graphic_packs_update_mode == GraphicPacksUpdateMode::RunOnce)
						s_graphic_packs_update_mode = GraphicPacksUpdateMode::Disabled;
				}
			}
			if (!canLaunch)
				goto skip_launch;
			if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] Launching game...\n");
			try {
				// Enable libretro vsync mode - frontend controls frame timing
				LatteTiming_EnableLibretroVSync();
				CafeSystem::LaunchForegroundTitle();
				s_game_launched = true;
				if (s_log_cb) s_log_cb(RETRO_LOG_INFO, "[Cemu] Game launched with libretro vsync mode\n");
				// Snapshot counters right after launch
				if (s_log_cb)
					s_log_cb(RETRO_LOG_INFO, "[Cemu] Counters after launch: MakeCurrent=%u SwapBuffers=%u MakeCurrentFail=%u\n",
						(unsigned)s_make_current_calls.load(), (unsigned)s_swapbuffers_calls.load(), (unsigned)s_make_current_failures.load());
			}
			catch (const std::exception& e) {
				if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] Launch exception: %s\n", e.what());
			}
			catch (...) {
				if (s_log_cb) s_log_cb(RETRO_LOG_ERROR, "[Cemu] Launch unknown exception\n");
			}
			skip_launch:;
		}

		if (s_env_cb)
		{
			bool updated = false;
			if (s_env_cb(RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE, &updated) && updated)
			{
				if (!s_game_launched)
					libretro_apply_core_options(true);
				else if (!s_core_options_runtime_change_warned)
				{
					s_core_options_runtime_change_warned = true;
					if (s_log_cb)
						s_log_cb(RETRO_LOG_WARN, "[Cemu] Core options changed while game is running; changes will apply on next load.\n");
				}
			}
		}

		// Periodically report counters (about once every ~2 seconds at 60fps)
		if (!s_logged_thread_counters && s_frame_count >= 180)
		{
			s_logged_thread_counters = true;
			if (s_log_cb)
				s_log_cb(RETRO_LOG_INFO, "[Cemu] Counters @frame %d: MakeCurrent=%u SwapBuffers=%u MakeCurrentFail=%u\n",
					s_frame_count, (unsigned)s_make_current_calls.load(), (unsigned)s_swapbuffers_calls.load(), (unsigned)s_make_current_failures.load());
		}

		// PPC diagnostics - only run when debug is enabled (expensive operations)
		if (s_log_cb && libretro_debug_enabled())
		{
			const bool logPpcDiag = (s_frame_count <= 20) ? true : ((s_frame_count <= 120) ? ((s_frame_count % 5) == 0) : ((s_frame_count % 30) == 0));
			if (!(s_frame_count == 1 || logPpcDiag))
				goto skip_ppc_diag;
			const bool schedActive = coreinit::OSSchedulerIsActive();
			const uint64 hb0 = coreinit::OSSchedulerGetHeartbeat(0);
			const uint64 hb1 = coreinit::OSSchedulerGetHeartbeat(1);
			const uint64 hb2 = coreinit::OSSchedulerGetHeartbeat(2);
			const uint64 ts0 = coreinit::OSSchedulerGetTimesliceCount(0);
			const uint64 ts1 = coreinit::OSSchedulerGetTimesliceCount(1);
			const uint64 ts2 = coreinit::OSSchedulerGetTimesliceCount(2);
			const uint32 launchStage = CafeSystem::GetLaunchThreadStage();
			const uint32 cemuInitStage = CafeSystem::GetCemuInitForGameStage();
			const uint64 dhb0 = hb0 - s_sched_last_hb0;
			const uint64 dhb1 = hb1 - s_sched_last_hb1;
			const uint64 dhb2 = hb2 - s_sched_last_hb2;
			const uint64 dts0 = ts0 - s_sched_last_ts0;
			const uint64 dts1 = ts1 - s_sched_last_ts1;
			const uint64 dts2 = ts2 - s_sched_last_ts2;
			const uint32 hostAlive0 = coreinit::OSSchedulerGetHostAlive(0);
			const uint32 hostAlive1 = coreinit::OSSchedulerGetHostAlive(1);
			const uint32 hostAlive2 = coreinit::OSSchedulerGetHostAlive(2);
			const uint64 ihb0 = (uint64)coreinit::OSSchedulerGetPpcFiberInstructionHeartbeatCount(0);
			const uint64 ihb1 = (uint64)coreinit::OSSchedulerGetPpcFiberInstructionHeartbeatCount(1);
			const uint64 ihb2 = (uint64)coreinit::OSSchedulerGetPpcFiberInstructionHeartbeatCount(2);
			bool stalled = true;
			if (hostAlive0)
				stalled &= (dts0 == 0) && (ihb0 == s_stall_last_ihb[0]);
			if (hostAlive1)
				stalled &= (dts1 == 0) && (ihb1 == s_stall_last_ihb[1]);
			if (hostAlive2)
				stalled &= (dts2 == 0) && (ihb2 == s_stall_last_ihb[2]);
			if (hostAlive0 == 0 && hostAlive1 == 0 && hostAlive2 == 0)
				stalled = false;

			if (stalled)
				s_stall_consecutive++;
			else
			{
				s_stall_consecutive = 0;
				s_stall_reported.store(0, std::memory_order_relaxed);
			}
			s_stall_last_ihb[0] = ihb0;
			s_stall_last_ihb[1] = ihb1;
			s_stall_last_ihb[2] = ihb2;
			if (stalled && s_stall_consecutive >= 4 && s_stall_reported.exchange(1, std::memory_order_relaxed) == 0)
			{
						auto logResolved = [&](int coreIndex)
						{
							const uint32 ip = (uint32)coreinit::OSSchedulerGetPpcFiberLastInstructionPointer(coreIndex);
							const uint32 lr = (uint32)coreinit::OSSchedulerGetPpcFiberLastLR(coreIndex);
							RPLStoredSymbol* sym = rplSymbolStorage_getByClosestAddress(ip);
							RPLModule* mod = RPLLoader_FindModuleByCodeAddr(ip);
							uint32 ipOp = 0;
							uint32 lrOp = 0;
							uint32 ipWin0 = 0;
							uint32 ipWin1 = 0;
							uint32 ipWin2 = 0;
							uint32 ipWin3 = 0;
							uint32 ipWin4 = 0;
							const bool ipOpValid = memory_isAddressRangeAccessible(ip, 4);
							const bool lrOpValid = memory_isAddressRangeAccessible(lr, 4);
							if (ipOpValid)
								ipOp = memory_readU32(ip);
							if (lrOpValid)
								lrOp = memory_readU32(lr);
							const uint32 ipWinBase = (ip >= 8) ? (ip - 8) : ip;
							if (memory_isAddressRangeAccessible(ipWinBase + 0, 4)) ipWin0 = memory_readU32(ipWinBase + 0);
							if (memory_isAddressRangeAccessible(ipWinBase + 4, 4)) ipWin1 = memory_readU32(ipWinBase + 4);
							if (memory_isAddressRangeAccessible(ipWinBase + 8, 4)) ipWin2 = memory_readU32(ipWinBase + 8);
							if (memory_isAddressRangeAccessible(ipWinBase + 12, 4)) ipWin3 = memory_readU32(ipWinBase + 12);
							if (memory_isAddressRangeAccessible(ipWinBase + 16, 4)) ipWin4 = memory_readU32(ipWinBase + 16);
							const bool isTrampoline = (ip >= MEMORY_CODE_TRAMPOLINE_AREA_ADDR) && (ip < (MEMORY_CODE_TRAMPOLINE_AREA_ADDR + MEMORY_CODE_TRAMPOLINE_AREA_SIZE));
							uint32 hleIdx = 0xFFFFFFFFu;
							std::string_view hleName;
							MPTR hleReadAddr = 0;
							if (isTrampoline)
							{
								// In logs we often capture IP a few bytes into the stub (e.g. +4), because IP is sampled while executing.
								// Prefer using the closest symbol address (created by rplSymbolStorage_store for mapped imports) if it's within the same 8-byte window.
								if (sym)
								{
									const uint32 saddr = (uint32)sym->address;
									if (ip >= saddr && (ip - saddr) <= 8)
										hleReadAddr = saddr;
								}
								// Fallback: most mapped import stubs are a single 32-bit opcode at the allocation address.
								if (!hleReadAddr && ip >= (MEMORY_CODE_TRAMPOLINE_AREA_ADDR + 4))
									hleReadAddr = ip - 4;
								// Final fallback: decode directly at the sampled IP.
								if (!hleReadAddr)
									hleReadAddr = ip;
								if (hleReadAddr && memory_isAddressRangeAccessible(hleReadAddr, 4))
								{
									const uint32 opcode = memory_readU32(hleReadAddr);
									if ((opcode >> 26) == 1)
									{
										hleIdx = (opcode & 0xFFFFu);
										hleName = osLib_getFunctionNameByIndex((sint32)hleIdx);
									}
								}
							}
							const char* modName = mod ? mod->moduleName2.c_str() : "?";
							const uint32 modTextBase = mod ? (uint32)mod->regionMappingBase_text.GetMPTR() : 0;
							const uint32 modTextSize = mod ? (uint32)mod->regionSize_text : 0;
							const uint32 modOff = (mod && ip >= modTextBase) ? (ip - modTextBase) : 0;
							const uint32 lrOff = (mod && lr >= modTextBase) ? (lr - modTextBase) : 0;
							const char* libName = sym ? (const char*)sym->libName : "?";
							const char* symName = sym ? (const char*)sym->symbolName : "?";
							const uint32 symAddr = sym ? (uint32)sym->address : 0;
							const uint32 delta = sym ? (ip - symAddr) : 0;
							if (s_log_cb)
								s_log_cb(RETRO_LOG_WARN, "[Cemu] PPC stall: core=%d ip=%08X lr=%08X ipOp=%08X lrOp=%08X ipW=%08X,%08X,%08X,%08X,%08X module=%s textBase=%08X textSize=%08X off=%08X lrOff=%08X tramp=%u hleIdx=%u hle=%.*s sym=%s:%s+0x%X\n",
									coreIndex,
									ip,
									lr,
									ipOpValid ? ipOp : 0u,
									lrOpValid ? lrOp : 0u,
									ipWin0,
									ipWin1,
									ipWin2,
									ipWin3,
									ipWin4,
									modName,
									(unsigned)modTextBase,
									(unsigned)modTextSize,
									(unsigned)modOff,
									(unsigned)lrOff,
									isTrampoline ? 1u : 0u,
									(unsigned)hleIdx,
									(int)hleName.size(),
									hleName.data() ? hleName.data() : "",
									libName,
									symName,
									(unsigned)delta);
						};
						if (hostAlive0) logResolved(0);
						if (hostAlive1) logResolved(1);
						if (hostAlive2) logResolved(2);
			}
			s_sched_last_hb0 = hb0;
			s_sched_last_hb1 = hb1;
			s_sched_last_hb2 = hb2;
			s_sched_last_ts0 = ts0;
			s_sched_last_ts1 = ts1;
			s_sched_last_ts2 = ts2;
			s_log_cb(RETRO_LOG_INFO,
				"[Cemu] PPC @frame %d: launchStage=%u cemuInitStage=%u sched=%d hb=[%llu,%llu,%llu] dhb=[%llu,%llu,%llu] ts=[%llu,%llu,%llu] dts=[%llu,%llu,%llu] hostAlive=[%u,%u,%u] hostEnter=[%llu,%llu,%llu] idle=[%llu,%llu,%llu] wait=[%llu,%llu,%llu] wake=[%llu,%llu,%llu] sysEvtStage=%u sysEvtCount=%llu ppcStage=[%u,%u,%u] ppcIP=[%08X,%08X,%08X] ppcIHb=[%llu,%llu,%llu] ppcLoop=[%llu,%llu,%llu] ppcRes=[%llu,%llu,%llu] ppcRem=[%d,%d,%d] lockHeld=%u lockOwnerTid=%u lockTick=%llu intDis=[%llu,%llu,%llu] intRes=[%llu,%llu,%llu] intMask=[%u,%u,%u] remCyc=[%d,%d,%d] gx2InitCalled=%u gpuInit=%d\n",
				s_frame_count,
				(unsigned)launchStage,
				(unsigned)cemuInitStage,
				schedActive ? 1 : 0,
				(unsigned long long)hb0, (unsigned long long)hb1, (unsigned long long)hb2,
				(unsigned long long)dhb0, (unsigned long long)dhb1, (unsigned long long)dhb2,
				(unsigned long long)ts0, (unsigned long long)ts1, (unsigned long long)ts2,
				(unsigned long long)dts0, (unsigned long long)dts1, (unsigned long long)dts2,
				(unsigned)hostAlive0,
				(unsigned)hostAlive1,
				(unsigned)hostAlive2,
				(unsigned long long)coreinit::OSSchedulerGetHostEnterCount(0),
				(unsigned long long)coreinit::OSSchedulerGetHostEnterCount(1),
				(unsigned long long)coreinit::OSSchedulerGetHostEnterCount(2),
				(unsigned long long)coreinit::OSSchedulerGetIdleLoopCount(0),
				(unsigned long long)coreinit::OSSchedulerGetIdleLoopCount(1),
				(unsigned long long)coreinit::OSSchedulerGetIdleLoopCount(2),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitEnterCount(0),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitEnterCount(1),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitEnterCount(2),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitWakeCount(0),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitWakeCount(1),
				(unsigned long long)coreinit::OSSchedulerGetIdleWaitWakeCount(2),
				(unsigned)coreinit::OSSchedulerGetSystemEventStage(),
				(unsigned long long)coreinit::OSSchedulerGetSystemEventCount(),
				(unsigned)coreinit::OSSchedulerGetPpcFiberStage(0),
				(unsigned)coreinit::OSSchedulerGetPpcFiberStage(1),
				(unsigned)coreinit::OSSchedulerGetPpcFiberStage(2),
				(unsigned)coreinit::OSSchedulerGetPpcFiberLastInstructionPointer(0),
				(unsigned)coreinit::OSSchedulerGetPpcFiberLastInstructionPointer(1),
				(unsigned)coreinit::OSSchedulerGetPpcFiberLastInstructionPointer(2),
				(unsigned long long)ihb0,
				(unsigned long long)ihb1,
				(unsigned long long)ihb2,
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberLoopCount(0),
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberLoopCount(1),
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberLoopCount(2),
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberRescheduleCount(0),
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberRescheduleCount(1),
				(unsigned long long)coreinit::OSSchedulerGetPpcFiberRescheduleCount(2),
				(int)coreinit::OSSchedulerGetPpcFiberLastRemainingCycles(0),
				(int)coreinit::OSSchedulerGetPpcFiberLastRemainingCycles(1),
				(int)coreinit::OSSchedulerGetPpcFiberLastRemainingCycles(2),
				(unsigned)__OSGetSchedulerLockHeld(),
				(unsigned)__OSGetSchedulerLockOwnerTid(),
				(unsigned long long)__OSGetSchedulerLockLastChangeTick(),
				(unsigned long long)__OSGetInterruptDisableCount(0),
				(unsigned long long)__OSGetInterruptDisableCount(1),
				(unsigned long long)__OSGetInterruptDisableCount(2),
				(unsigned long long)__OSGetInterruptRestoreCount(0),
				(unsigned long long)__OSGetInterruptRestoreCount(1),
				(unsigned long long)__OSGetInterruptRestoreCount(2),
				(unsigned)__OSGetLastCoreInterruptMask(0),
				(unsigned)__OSGetLastCoreInterruptMask(1),
				(unsigned)__OSGetLastCoreInterruptMask(2),
				(int)__OSGetLastRemainingCycles(0),
				(int)__OSGetLastRemainingCycles(1),
				(int)__OSGetLastRemainingCycles(2),
				(unsigned)LatteGPUState.gx2InitCalled,
				g_isGPUInitFinished.load() ? 1 : 0);
		}
		skip_ppc_diag:;

		if (s_input_poll_cb)
			s_input_poll_cb();

		libretro_poll_input();

		// Cache the current FBO for the render thread to use (value is stable, but update defensively)
		if (s_hw_context_ready && s_hw_render.get_current_framebuffer)
		{
			GLuint fbo = (GLuint)s_hw_render.get_current_framebuffer();
			s_current_fbo = fbo;
			if (s_frame_count <= 5 && s_log_cb)
				s_log_cb(RETRO_LOG_INFO, "[Cemu] FBO from RetroArch: %u\n", (unsigned)fbo);
		}

		// Present frame to RetroArch
		// RetroArch expects exactly one video callback per retro_run
		// Always present whatever we have - let RetroArch handle the pacing
		if (s_hw_context_ready && s_video_cb)
		{
			// Consume frame ready flag and always present
			const bool hasNewFrame = s_frame_ready.exchange(false);
			(void)hasNewFrame; // We present regardless - RetroArch controls timing
			{
#ifdef ENABLE_VULKAN
				if (s_graphics_api == GraphicsAPI::Vulkan && s_vulkan_interface)
				{
					uint32_t sync_index = s_vulkan_interface->get_sync_index(s_vulkan_interface->handle);
					if (sync_index < s_vulkan_images.size())
					{
						s_vulkan_interface->set_image(s_vulkan_interface->handle, 
							&s_vulkan_images[sync_index], 
							0, nullptr, 
							VK_QUEUE_FAMILY_IGNORED);
					}
				}
#endif
				// Always present the current framebuffer state
				// RetroArch handles frame pacing - we just provide content
				s_video_cb(RETRO_HW_FRAME_BUFFER_VALID, s_video_width, s_video_height, 0);
			}
		}
		else if (s_video_cb && !s_framebuffer.empty())
		{
			s_video_cb(s_framebuffer.data(), s_video_width, s_video_height, s_video_width * sizeof(uint32_t));
		}

		LibretroAudioAPI::FlushAudio();
		if (s_log_cb && libretro_debug_verbose() && (s_frame_count <= 120 || (s_frame_count % 60) == 0))
			s_log_cb(RETRO_LOG_INFO, "[Cemu] post FlushAudio frame=%d\n", s_frame_count);
	}

	RETRO_API size_t RETRO_CALLCONV retro_serialize_size(void)
	{
		return 0;
	}

	RETRO_API bool RETRO_CALLCONV retro_serialize(void* /*data*/, size_t /*size*/)
	{
		return false;
	}

	RETRO_API bool RETRO_CALLCONV retro_unserialize(const void* /*data*/, size_t /*size*/)
	{
		return false;
	}

	RETRO_API void RETRO_CALLCONV retro_cheat_reset(void)
	{
	}

	RETRO_API void RETRO_CALLCONV retro_cheat_set(unsigned /*index*/, bool /*enabled*/, const char* /*code*/)
	{
	}

	RETRO_API bool RETRO_CALLCONV retro_load_game(const struct retro_game_info* game)
	{
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_load_game begin path=%s\n", (game && game->path) ? game->path : "(null)");
		if (!game || !game->path)
		{
			if (s_env_cb) { retro_log_callback log_cb; if (s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb)) log_cb.log(RETRO_LOG_ERROR, "[Cemu] No game path provided\n"); }
			return false;
		}

		if (!s_cemu_initialized)
		{
			if (s_env_cb) { retro_log_callback log_cb; if (s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb)) log_cb.log(RETRO_LOG_ERROR, "[Cemu] Not initialized\n"); }
			return false;
		}

		if (!libretro_init_hw_context())
		{
			if (s_env_cb) { retro_log_callback log_cb; if (s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb)) log_cb.log(RETRO_LOG_ERROR, "[Cemu] HW context init failed\n"); }
			return false;
		}

		// Query performance optimization capabilities
		if (s_env_cb)
		{
			s_input_bitmask_supported = s_env_cb(RETRO_ENVIRONMENT_GET_INPUT_BITMASKS, nullptr);
			if (s_log_cb)
				s_log_cb(RETRO_LOG_INFO, "[Cemu] Input bitmask support: %s\n", s_input_bitmask_supported ? "yes" : "no");
		}

		fs::path gamePath(game->path);
		s_content_path = gamePath;
		
		CafeSystem::PREPARE_STATUS_CODE status;
		std::string ext = gamePath.extension().string();
		std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);

		retro_log_callback log_cb = {};
		if (s_env_cb) s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb);
		if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] Extension: '%s'\n", ext.c_str());

		if (ext == ".rpx" || ext == ".elf")
		{
			TitleInfo launchTitle{ gamePath };
			if (launchTitle.IsValid())
			{
				CafeTitleList::AddTitleFromPath(gamePath);
				TitleId baseTitleId;
				if (!CafeTitleList::FindBaseTitleId(launchTitle.GetAppTitleId(), baseTitleId))
					return false;
				status = CafeSystem::PrepareForegroundTitle(baseTitleId);
			}
			else
			{
				status = CafeSystem::PrepareForegroundTitleFromStandaloneRPX(gamePath);
			}
		}
		else if (ext == ".wud" || ext == ".wux" || ext == ".wua" || ext == ".iso")
		{
			retro_log_callback log_cb = {};
			s_env_cb(RETRO_ENVIRONMENT_GET_LOG_INTERFACE, &log_cb);
			if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] Loading WUX/WUD file\n");

			CafeTitleList::AddTitleFromPath(gamePath);
			if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] Added to title list\n");

			TitleInfo launchTitle{ gamePath };
			if (!launchTitle.IsValid())
			{
				if (log_cb.log) log_cb.log(RETRO_LOG_ERROR, "[Cemu] TitleInfo invalid, reason: %d\n", (int)launchTitle.GetInvalidReason());
				return false;
			}

			if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] TitleInfo valid\n");

			TitleId baseTitleId;
			if (!CafeTitleList::FindBaseTitleId(launchTitle.GetAppTitleId(), baseTitleId))
			{
				if (log_cb.log) log_cb.log(RETRO_LOG_ERROR, "[Cemu] FindBaseTitleId failed\n");
				return false;
			}

			if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] Found base title ID\n");
			status = CafeSystem::PrepareForegroundTitle(baseTitleId);
			if (log_cb.log) log_cb.log(RETRO_LOG_INFO, "[Cemu] PrepareForegroundTitle status: %d\n", (int)status);
		}
		else
		{
			return false;
		}

		if (status != CafeSystem::PREPARE_STATUS_CODE::SUCCESS)
		{
			if (s_log_cb)
				s_log_cb(RETRO_LOG_ERROR, "[Cemu] PrepareForegroundTitle failed: %d\n", (int)status);
			return false;
		}

		if (!s_libretro_controller)
			s_libretro_controller = std::make_shared<LibretroController>();
		auto vpad = InputManager::instance().get_vpad_controller(0);
		if (!vpad)
		{
			InputManager::instance().set_controller(0, EmulatedController::Type::VPAD);
			vpad = InputManager::instance().get_vpad_controller(0);
		}
		if (vpad)
		{
			bool already = false;
			for (const auto& c : vpad->get_controllers())
			{
				if (c && c->api() == InputAPI::Libretro)
				{
					already = true;
					break;
				}
			}
			if (!already)
				vpad->add_controller(s_libretro_controller);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_A)) vpad->set_mapping(VPADController::kButtonId_A, s_libretro_controller, kButton1);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_B)) vpad->set_mapping(VPADController::kButtonId_B, s_libretro_controller, kButton0);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_X)) vpad->set_mapping(VPADController::kButtonId_X, s_libretro_controller, kButton3);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_Y)) vpad->set_mapping(VPADController::kButtonId_Y, s_libretro_controller, kButton2);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_L)) vpad->set_mapping(VPADController::kButtonId_L, s_libretro_controller, kButton9);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_R)) vpad->set_mapping(VPADController::kButtonId_R, s_libretro_controller, kButton10);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_ZL)) vpad->set_mapping(VPADController::kButtonId_ZL, s_libretro_controller, kTriggerXP);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_ZR)) vpad->set_mapping(VPADController::kButtonId_ZR, s_libretro_controller, kTriggerYP);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_Plus)) vpad->set_mapping(VPADController::kButtonId_Plus, s_libretro_controller, kButton6);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_Minus)) vpad->set_mapping(VPADController::kButtonId_Minus, s_libretro_controller, kButton4);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_Up)) vpad->set_mapping(VPADController::kButtonId_Up, s_libretro_controller, kButton11);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_Down)) vpad->set_mapping(VPADController::kButtonId_Down, s_libretro_controller, kButton12);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_Left)) vpad->set_mapping(VPADController::kButtonId_Left, s_libretro_controller, kButton13);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_Right)) vpad->set_mapping(VPADController::kButtonId_Right, s_libretro_controller, kButton14);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickL)) vpad->set_mapping(VPADController::kButtonId_StickL, s_libretro_controller, kButton7);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickR)) vpad->set_mapping(VPADController::kButtonId_StickR, s_libretro_controller, kButton8);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickL_Left)) vpad->set_mapping(VPADController::kButtonId_StickL_Left, s_libretro_controller, kAxisXN);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickL_Right)) vpad->set_mapping(VPADController::kButtonId_StickL_Right, s_libretro_controller, kAxisXP);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickL_Up)) vpad->set_mapping(VPADController::kButtonId_StickL_Up, s_libretro_controller, kAxisYP);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickL_Down)) vpad->set_mapping(VPADController::kButtonId_StickL_Down, s_libretro_controller, kAxisYN);

			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickR_Left)) vpad->set_mapping(VPADController::kButtonId_StickR_Left, s_libretro_controller, kRotationXN);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickR_Right)) vpad->set_mapping(VPADController::kButtonId_StickR_Right, s_libretro_controller, kRotationXP);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickR_Up)) vpad->set_mapping(VPADController::kButtonId_StickR_Up, s_libretro_controller, kRotationYP);
			if (!vpad->get_mapping_controller(VPADController::kButtonId_StickR_Down)) vpad->set_mapping(VPADController::kButtonId_StickR_Down, s_libretro_controller, kRotationYN);

			s_libretro_input_active.store(true, std::memory_order_relaxed);
		}

		// Don't launch yet - wait for OpenGL context to be ready
		s_game_loaded = true;
		s_game_launched = false;
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_load_game end loaded=1 hwReady=%d\n", s_hw_context_ready ? 1 : 0);

		return true;
	}

	RETRO_API bool RETRO_CALLCONV retro_load_game_special(unsigned /*game_type*/, const struct retro_game_info* /*info*/, size_t /*num_info*/)
	{
		return false;
	}

	RETRO_API void RETRO_CALLCONV retro_unload_game(void)
	{
		// Force log to Cemu log.txt immediately to ensure we see this before any crash
		cemuLog_log(LogType::Force, "[Libretro] retro_unload_game ENTRY launched={} loaded={} tid={}",
			s_game_launched ? 1 : 0, s_game_loaded ? 1 : 0, (unsigned long long)libretro_get_thread_id());
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_unload_game begin launched=%d\n", s_game_launched ? 1 : 0);

		s_libretro_input_active.store(false, std::memory_order_relaxed);
		WindowSystem::GetWindowInfo().set_keystatesup();

		if (s_game_launched)
		{
			cemuLog_log(LogType::Force, "[Libretro] retro_unload_game calling ShutdownTitle");
			if (s_log_cb && libretro_debug_enabled())
				s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_unload_game calling CafeSystem::ShutdownTitle\n");
			CafeSystem::ShutdownTitle();
			cemuLog_log(LogType::Force, "[Libretro] retro_unload_game ShutdownTitle returned");
			if (s_log_cb && libretro_debug_enabled())
				s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_unload_game CafeSystem::ShutdownTitle returned\n");
		}
		s_game_loaded = false;
		s_game_launched = false;
		cemuLog_log(LogType::Force, "[Libretro] retro_unload_game EXIT");
		if (s_log_cb && libretro_debug_enabled())
			s_log_cb(RETRO_LOG_INFO, "[Cemu] retro_unload_game end\n");
	}

	RETRO_API unsigned RETRO_CALLCONV retro_get_region(void)
	{
		return RETRO_REGION_NTSC;

}

        RETRO_API void* RETRO_CALLCONV retro_get_memory_data(unsigned id)
        {
                return nullptr;
        }

        RETRO_API size_t RETRO_CALLCONV retro_get_memory_size(unsigned id)
        {
                return 0;
        }
}