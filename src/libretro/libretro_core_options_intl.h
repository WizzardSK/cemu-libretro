#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include "libretro.h"

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR "الفيديو"
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_SHADERS_LABEL_AR "الظلال"
#define CATEGORY_SHADERS_INFO_0_AR NULL
#define CATEGORY_SCREEN_LABEL_AR NULL
#define CATEGORY_SCREEN_INFO_0_AR NULL
#define CATEGORY_SYSTEM_LABEL_AR "نظام"
#define CATEGORY_SYSTEM_INFO_0_AR NULL
#define CATEGORY_ADDONS_LABEL_AR NULL
#define CATEGORY_ADDONS_INFO_0_AR NULL
#define CATEGORY_ACCOUNTS_LABEL_AR "الحسابات"
#define CATEGORY_ACCOUNTS_INFO_0_AR NULL
#define CATEGORY_INSTALL_LABEL_AR "محتوى"
#define CATEGORY_INSTALL_INFO_0_AR NULL
#define CATEGORY_CONVERT_LABEL_AR NULL
#define CATEGORY_CONVERT_INFO_0_AR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_AR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_AR NULL
#define CATEGORY_CHEATS_LABEL_AR "شفرات الغش"
#define CATEGORY_CHEATS_INFO_0_AR NULL
#define CATEGORY_LOGGING_LABEL_AR "تسجيل الدخول"
#define CATEGORY_LOGGING_INFO_0_AR NULL
#define CEMU_CPU_MODE_LABEL_AR NULL
#define CEMU_CPU_MODE_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_SINGLECORE_INTERPRETER_AR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_AR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_AR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_AR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_AR NULL
#define OPTION_VAL_ENGLISH_AR NULL
#define OPTION_VAL_JAPANESE_AR "Japanese - 日本語"
#define OPTION_VAL_FRENCH_AR "French - Français"
#define OPTION_VAL_GERMAN_AR "German - Deutsch"
#define OPTION_VAL_ITALIAN_AR "Italian - Italiano"
#define OPTION_VAL_SPANISH_AR "Spanish - Español"
#define OPTION_VAL_CHINESE_AR NULL
#define OPTION_VAL_KOREAN_AR NULL
#define OPTION_VAL_DUTCH_AR NULL
#define OPTION_VAL_PORTUGUESE_AR NULL
#define OPTION_VAL_RUSSIAN_AR NULL
#define OPTION_VAL_TAIWANESE_AR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_AR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_AR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_AR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_AR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_AR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_AR NULL
#define CEMU_UPSCALE_FILTER_LABEL_AR NULL
#define OPTION_VAL_LINEAR_AR "خطي"
#define OPTION_VAL_BICUBIC_AR "ثنائي تكعيبي"
#define OPTION_VAL_BICUBIC_HERMITE_AR NULL
#define OPTION_VAL_NEAREST_AR "أقرب"
#define CEMU_DOWNSCALE_FILTER_LABEL_AR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_AR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_AR NULL
#define OPTION_VAL_0_25X_AR NULL
#define OPTION_VAL_0_5X_AR NULL
#define OPTION_VAL_0_75X_AR NULL
#define OPTION_VAL_NATIVE_AR "الأصل"
#define OPTION_VAL_1_5X_AR NULL
#define OPTION_VAL_2X_AR NULL
#define OPTION_VAL_3X_AR NULL
#define CEMU_THREAD_QUANTUM_LABEL_AR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_AR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_AR NULL
#define OPTION_VAL_25_AR NULL
#define OPTION_VAL_50_AR NULL
#define OPTION_VAL_75_AR NULL
#define OPTION_VAL_100_AR NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_AR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_AR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_AR NULL
#define OPTION_VAL_DEFAULT_SCREEN_AR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_AR NULL
#define OPTION_VAL_SIDE_BY_SIDE_AR NULL
#define OPTION_VAL_TOP_BOTTOM_AR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_AR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_AR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_AR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_AR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_AR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_AR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_AR NULL
#define OPTION_VAL_SELECT_L3_AR NULL
#define OPTION_VAL_SELECT_R3_AR NULL
#define OPTION_VAL_TAB_AR NULL
#define CEMU_DRC_POSITION_LABEL_AR NULL
#define OPTION_VAL_NORMAL_AR "عادي"
#define OPTION_VAL_SWAPPED_AR NULL
#define CEMU_LOG_TO_FILE_LABEL_AR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_AR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_AR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_AR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_AR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_AR NULL
#define CEMU_LOG_INPUT_API_LABEL_AR NULL
#define CEMU_LOG_INPUT_API_INFO_0_AR NULL
#define CEMU_LOG_AUDIO_LABEL_AR NULL
#define CEMU_LOG_AUDIO_INFO_0_AR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_AR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_AR NULL
#define CEMU_DUMP_SHADERS_LABEL_AR NULL
#define CEMU_DUMP_SHADERS_INFO_0_AR NULL
#define CEMU_BC1_16BIT_LABEL_AR NULL
#define CEMU_BC1_16BIT_INFO_0_AR NULL
#define CEMU_GPU_API_LABEL_AR NULL
#define CEMU_GPU_API_INFO_0_AR NULL
#define OPTION_VAL_OPENGL_AR NULL
#define OPTION_VAL_VULKAN_AR NULL
#define CEMU_ACCOUNT_LABEL_AR NULL
#define CEMU_ACCOUNT_INFO_0_AR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_AR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_AR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_AR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_AR NULL
#define CEMU_INSTALL_GAME_LABEL_AR NULL
#define CEMU_INSTALL_GAME_INFO_0_AR NULL
#define CEMU_UNINSTALL_GAME_LABEL_AR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_AR NULL
#define CEMU_INSTALL_TITLES_LABEL_AR NULL
#define CEMU_INSTALL_TITLES_INFO_0_AR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_AR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_AR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_AR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_AR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_AR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_AR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_AR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
	{ "video", CATEGORY_VIDEO_LABEL_AR, CATEGORY_VIDEO_INFO_0_AR },
	{ "shaders", CATEGORY_SHADERS_LABEL_AR, CATEGORY_SHADERS_INFO_0_AR },
	{ "screen", CATEGORY_SCREEN_LABEL_AR, CATEGORY_SCREEN_INFO_0_AR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_AR, CATEGORY_SYSTEM_INFO_0_AR },
	{ "addons", CATEGORY_ADDONS_LABEL_AR, CATEGORY_ADDONS_INFO_0_AR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_AR, CATEGORY_ACCOUNTS_INFO_0_AR },
	{ "install", CATEGORY_INSTALL_LABEL_AR, CATEGORY_INSTALL_INFO_0_AR },
	{ "convert", CATEGORY_CONVERT_LABEL_AR, CATEGORY_CONVERT_INFO_0_AR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_AR, CATEGORY_GRAPHIC_PACKS_INFO_0_AR },
	{ "cheats", CATEGORY_CHEATS_LABEL_AR, CATEGORY_CHEATS_INFO_0_AR },
	{ "logging", CATEGORY_LOGGING_LABEL_AR, CATEGORY_LOGGING_INFO_0_AR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_AR,
		NULL,
		CEMU_CPU_MODE_INFO_0_AR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_AR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_AR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_AR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_AR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_AR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_AR },
			{ "Japanese", OPTION_VAL_JAPANESE_AR },
			{ "French", OPTION_VAL_FRENCH_AR },
			{ "German", OPTION_VAL_GERMAN_AR },
			{ "Italian", OPTION_VAL_ITALIAN_AR },
			{ "Spanish", OPTION_VAL_SPANISH_AR },
			{ "Chinese", OPTION_VAL_CHINESE_AR },
			{ "Korean", OPTION_VAL_KOREAN_AR },
			{ "Dutch", OPTION_VAL_DUTCH_AR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_AR },
			{ "Russian", OPTION_VAL_RUSSIAN_AR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_AR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_AR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_AR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_AR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_AR },
			{ "bicubic", OPTION_VAL_BICUBIC_AR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_AR },
			{ "nearest", OPTION_VAL_NEAREST_AR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_AR },
			{ "bicubic", OPTION_VAL_BICUBIC_AR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_AR },
			{ "nearest", OPTION_VAL_NEAREST_AR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_AR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_AR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_AR },
			{ "0.5x", OPTION_VAL_0_5X_AR },
			{ "0.75x", OPTION_VAL_0_75X_AR },
			{ "native", OPTION_VAL_NATIVE_AR },
			{ "1.5x", OPTION_VAL_1_5X_AR },
			{ "2x", OPTION_VAL_2X_AR },
			{ "3x", OPTION_VAL_3X_AR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_AR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_AR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_AR },
			{ "50", OPTION_VAL_50_AR },
			{ "75", OPTION_VAL_75_AR },
			{ "100", OPTION_VAL_100_AR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_AR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_AR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_AR },
			{ "Tab", OPTION_VAL_TAB_AR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_AR },
			{ "swapped", OPTION_VAL_SWAPPED_AR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_AR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_AR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_AR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_AR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_AR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_AR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_AR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_AR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_AR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_AR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_AR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_AR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_AR,
		NULL,
		CEMU_GPU_API_INFO_0_AR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_AR },
			{ "Vulkan", OPTION_VAL_VULKAN_AR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_AR,
		NULL,
		CEMU_ACCOUNT_INFO_0_AR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_AR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_AR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_AR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_AR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_AR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_AR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_AR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_AR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_AR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_AR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_AR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_AR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_AR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_AR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_AR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_AR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_AR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_AR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST "Videu"
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_SHADERS_LABEL_AST "Asolombradores"
#define CATEGORY_SHADERS_INFO_0_AST NULL
#define CATEGORY_SCREEN_LABEL_AST NULL
#define CATEGORY_SCREEN_INFO_0_AST NULL
#define CATEGORY_SYSTEM_LABEL_AST "Sistema"
#define CATEGORY_SYSTEM_INFO_0_AST NULL
#define CATEGORY_ADDONS_LABEL_AST NULL
#define CATEGORY_ADDONS_INFO_0_AST NULL
#define CATEGORY_ACCOUNTS_LABEL_AST "Cuentes"
#define CATEGORY_ACCOUNTS_INFO_0_AST NULL
#define CATEGORY_INSTALL_LABEL_AST "Conteníu"
#define CATEGORY_INSTALL_INFO_0_AST NULL
#define CATEGORY_CONVERT_LABEL_AST NULL
#define CATEGORY_CONVERT_INFO_0_AST NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_AST NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_AST NULL
#define CATEGORY_CHEATS_LABEL_AST "Trampes"
#define CATEGORY_CHEATS_INFO_0_AST NULL
#define CATEGORY_LOGGING_LABEL_AST "Rexistru"
#define CATEGORY_LOGGING_INFO_0_AST NULL
#define CEMU_CPU_MODE_LABEL_AST NULL
#define CEMU_CPU_MODE_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_AST NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_AST NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_AST NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_AST NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_AST NULL
#define OPTION_VAL_ENGLISH_AST "Inglés"
#define OPTION_VAL_JAPANESE_AST "Xaponés"
#define OPTION_VAL_FRENCH_AST "Francés"
#define OPTION_VAL_GERMAN_AST "Alemán"
#define OPTION_VAL_ITALIAN_AST "Italianu"
#define OPTION_VAL_SPANISH_AST "Castellán"
#define OPTION_VAL_CHINESE_AST NULL
#define OPTION_VAL_KOREAN_AST NULL
#define OPTION_VAL_DUTCH_AST NULL
#define OPTION_VAL_PORTUGUESE_AST NULL
#define OPTION_VAL_RUSSIAN_AST NULL
#define OPTION_VAL_TAIWANESE_AST NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_AST NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_AST NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_AST NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_AST NULL
#define CEMU_SHOW_GAME_FPS_LABEL_AST NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_AST NULL
#define CEMU_UPSCALE_FILTER_LABEL_AST NULL
#define OPTION_VAL_LINEAR_AST NULL
#define OPTION_VAL_BICUBIC_AST "Bicúbicu"
#define OPTION_VAL_BICUBIC_HERMITE_AST NULL
#define OPTION_VAL_NEAREST_AST NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_AST NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_AST "Resolución interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_AST NULL
#define OPTION_VAL_0_25X_AST NULL
#define OPTION_VAL_0_5X_AST NULL
#define OPTION_VAL_0_75X_AST NULL
#define OPTION_VAL_NATIVE_AST NULL
#define OPTION_VAL_1_5X_AST NULL
#define OPTION_VAL_2X_AST NULL
#define OPTION_VAL_3X_AST NULL
#define CEMU_THREAD_QUANTUM_LABEL_AST NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_AST NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_AST NULL
#define OPTION_VAL_25_AST NULL
#define OPTION_VAL_50_AST NULL
#define OPTION_VAL_75_AST NULL
#define OPTION_VAL_100_AST NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AST NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_AST NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AST NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_AST NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_AST NULL
#define OPTION_VAL_DEFAULT_SCREEN_AST NULL
#define OPTION_VAL_GAMEPAD_SCREEN_AST NULL
#define OPTION_VAL_SIDE_BY_SIDE_AST NULL
#define OPTION_VAL_TOP_BOTTOM_AST NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_AST NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_AST NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_AST NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_AST NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_AST NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_AST NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_AST NULL
#define OPTION_VAL_SELECT_L3_AST NULL
#define OPTION_VAL_SELECT_R3_AST NULL
#define OPTION_VAL_TAB_AST NULL
#define CEMU_DRC_POSITION_LABEL_AST NULL
#define OPTION_VAL_NORMAL_AST NULL
#define OPTION_VAL_SWAPPED_AST NULL
#define CEMU_LOG_TO_FILE_LABEL_AST NULL
#define CEMU_LOG_FILESYSTEM_LABEL_AST NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_AST NULL
#define CEMU_LOG_SYSTEM_API_LABEL_AST NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_AST NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_AST NULL
#define CEMU_LOG_INPUT_API_LABEL_AST NULL
#define CEMU_LOG_INPUT_API_INFO_0_AST NULL
#define CEMU_LOG_AUDIO_LABEL_AST NULL
#define CEMU_LOG_AUDIO_INFO_0_AST NULL
#define CEMU_LOG_THREAD_TIME_LABEL_AST NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_AST NULL
#define CEMU_DUMP_SHADERS_LABEL_AST NULL
#define CEMU_DUMP_SHADERS_INFO_0_AST NULL
#define CEMU_BC1_16BIT_LABEL_AST NULL
#define CEMU_BC1_16BIT_INFO_0_AST NULL
#define CEMU_GPU_API_LABEL_AST NULL
#define CEMU_GPU_API_INFO_0_AST NULL
#define OPTION_VAL_OPENGL_AST NULL
#define OPTION_VAL_VULKAN_AST NULL
#define CEMU_ACCOUNT_LABEL_AST NULL
#define CEMU_ACCOUNT_INFO_0_AST NULL
#define CEMU_CREATE_ACCOUNT_LABEL_AST NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_AST NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_AST NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_AST NULL
#define CEMU_INSTALL_GAME_LABEL_AST NULL
#define CEMU_INSTALL_GAME_INFO_0_AST NULL
#define CEMU_UNINSTALL_GAME_LABEL_AST NULL
#define CEMU_UNINSTALL_GAME_INFO_0_AST NULL
#define CEMU_INSTALL_TITLES_LABEL_AST NULL
#define CEMU_INSTALL_TITLES_INFO_0_AST NULL
#define CEMU_UNINSTALL_TITLES_LABEL_AST NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_AST NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_AST NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_AST NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_AST NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_AST NULL
#define CEMU_CONVERT_TO_WUA_LABEL_AST NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
	{ "video", CATEGORY_VIDEO_LABEL_AST, CATEGORY_VIDEO_INFO_0_AST },
	{ "shaders", CATEGORY_SHADERS_LABEL_AST, CATEGORY_SHADERS_INFO_0_AST },
	{ "screen", CATEGORY_SCREEN_LABEL_AST, CATEGORY_SCREEN_INFO_0_AST },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_AST, CATEGORY_SYSTEM_INFO_0_AST },
	{ "addons", CATEGORY_ADDONS_LABEL_AST, CATEGORY_ADDONS_INFO_0_AST },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_AST, CATEGORY_ACCOUNTS_INFO_0_AST },
	{ "install", CATEGORY_INSTALL_LABEL_AST, CATEGORY_INSTALL_INFO_0_AST },
	{ "convert", CATEGORY_CONVERT_LABEL_AST, CATEGORY_CONVERT_INFO_0_AST },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_AST, CATEGORY_GRAPHIC_PACKS_INFO_0_AST },
	{ "cheats", CATEGORY_CHEATS_LABEL_AST, CATEGORY_CHEATS_INFO_0_AST },
	{ "logging", CATEGORY_LOGGING_LABEL_AST, CATEGORY_LOGGING_INFO_0_AST },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_AST,
		NULL,
		CEMU_CPU_MODE_INFO_0_AST,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_AST },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_AST },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_AST },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_AST },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_AST },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_AST },
			{ "Japanese", OPTION_VAL_JAPANESE_AST },
			{ "French", OPTION_VAL_FRENCH_AST },
			{ "German", OPTION_VAL_GERMAN_AST },
			{ "Italian", OPTION_VAL_ITALIAN_AST },
			{ "Spanish", OPTION_VAL_SPANISH_AST },
			{ "Chinese", OPTION_VAL_CHINESE_AST },
			{ "Korean", OPTION_VAL_KOREAN_AST },
			{ "Dutch", OPTION_VAL_DUTCH_AST },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_AST },
			{ "Russian", OPTION_VAL_RUSSIAN_AST },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_AST },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_AST },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_AST,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_AST,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_AST },
			{ "bicubic", OPTION_VAL_BICUBIC_AST },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_AST },
			{ "nearest", OPTION_VAL_NEAREST_AST },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_AST },
			{ "bicubic", OPTION_VAL_BICUBIC_AST },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_AST },
			{ "nearest", OPTION_VAL_NEAREST_AST },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_AST,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_AST,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_AST },
			{ "0.5x", OPTION_VAL_0_5X_AST },
			{ "0.75x", OPTION_VAL_0_75X_AST },
			{ "native", OPTION_VAL_NATIVE_AST },
			{ "1.5x", OPTION_VAL_1_5X_AST },
			{ "2x", OPTION_VAL_2X_AST },
			{ "3x", OPTION_VAL_3X_AST },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_AST,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_AST,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_AST },
			{ "50", OPTION_VAL_50_AST },
			{ "75", OPTION_VAL_75_AST },
			{ "100", OPTION_VAL_100_AST },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AST },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AST },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AST },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AST },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AST },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AST },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AST },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AST },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AST },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AST },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AST },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AST },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AST },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AST },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AST },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AST },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AST },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AST },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AST },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AST },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_AST },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_AST },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_AST },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_AST },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_AST },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_AST },
			{ "Select + L3", OPTION_VAL_SELECT_L3_AST },
			{ "Select + R3", OPTION_VAL_SELECT_R3_AST },
			{ "Tab", OPTION_VAL_TAB_AST },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_AST },
			{ "swapped", OPTION_VAL_SWAPPED_AST },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_AST,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_AST,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_AST,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_AST,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_AST,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_AST,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_AST,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_AST,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_AST,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_AST,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_AST,
		NULL,
		CEMU_BC1_16BIT_INFO_0_AST,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_AST,
		NULL,
		CEMU_GPU_API_INFO_0_AST,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_AST },
			{ "Vulkan", OPTION_VAL_VULKAN_AST },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_AST,
		NULL,
		CEMU_ACCOUNT_INFO_0_AST,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_AST,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_AST,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_AST,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_AST,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_AST,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_AST,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_AST,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_AST,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_AST,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_AST,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_AST,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_AST,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_AST,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_AST,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_AST,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_AST,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_AST,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_AST,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_BE */

#define CATEGORY_VIDEO_LABEL_BE "Відэа"
#define CATEGORY_VIDEO_INFO_0_BE NULL
#define CATEGORY_SHADERS_LABEL_BE "Шэйдары"
#define CATEGORY_SHADERS_INFO_0_BE NULL
#define CATEGORY_SCREEN_LABEL_BE NULL
#define CATEGORY_SCREEN_INFO_0_BE NULL
#define CATEGORY_SYSTEM_LABEL_BE "Сістэма"
#define CATEGORY_SYSTEM_INFO_0_BE NULL
#define CATEGORY_ADDONS_LABEL_BE NULL
#define CATEGORY_ADDONS_INFO_0_BE NULL
#define CATEGORY_ACCOUNTS_LABEL_BE "Уліковыя запісы"
#define CATEGORY_ACCOUNTS_INFO_0_BE NULL
#define CATEGORY_INSTALL_LABEL_BE "Змесціва"
#define CATEGORY_INSTALL_INFO_0_BE NULL
#define CATEGORY_CONVERT_LABEL_BE NULL
#define CATEGORY_CONVERT_INFO_0_BE NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_BE NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_BE NULL
#define CATEGORY_CHEATS_LABEL_BE "Чыт-коды"
#define CATEGORY_CHEATS_INFO_0_BE NULL
#define CATEGORY_LOGGING_LABEL_BE "Вядзенне журнала"
#define CATEGORY_LOGGING_INFO_0_BE NULL
#define CEMU_CPU_MODE_LABEL_BE NULL
#define CEMU_CPU_MODE_INFO_0_BE NULL
#define OPTION_VAL_AUTO_BE "Аўта"
#define OPTION_VAL_SINGLECORE_INTERPRETER_BE NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_BE NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_BE NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_BE NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_BE NULL
#define OPTION_VAL_ENGLISH_BE "Англійская"
#define OPTION_VAL_JAPANESE_BE "Японскі"
#define OPTION_VAL_FRENCH_BE "Французская"
#define OPTION_VAL_GERMAN_BE "Нямецкая"
#define OPTION_VAL_ITALIAN_BE "Італьянская"
#define OPTION_VAL_SPANISH_BE "Іспанская"
#define OPTION_VAL_CHINESE_BE NULL
#define OPTION_VAL_KOREAN_BE NULL
#define OPTION_VAL_DUTCH_BE NULL
#define OPTION_VAL_PORTUGUESE_BE NULL
#define OPTION_VAL_RUSSIAN_BE NULL
#define OPTION_VAL_TAIWANESE_BE NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_BE NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_BE NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_BE NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_BE NULL
#define CEMU_SHOW_GAME_FPS_LABEL_BE NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_BE NULL
#define CEMU_UPSCALE_FILTER_LABEL_BE NULL
#define OPTION_VAL_LINEAR_BE "Лінейны"
#define OPTION_VAL_BICUBIC_BE "Бікубічная"
#define OPTION_VAL_BICUBIC_HERMITE_BE NULL
#define OPTION_VAL_NEAREST_BE "Бліжэйшы"
#define CEMU_DOWNSCALE_FILTER_LABEL_BE NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_BE "Унутраная раздзяляльнасць"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_BE NULL
#define OPTION_VAL_0_25X_BE NULL
#define OPTION_VAL_0_5X_BE NULL
#define OPTION_VAL_0_75X_BE NULL
#define OPTION_VAL_NATIVE_BE "Родная"
#define OPTION_VAL_1_5X_BE NULL
#define OPTION_VAL_2X_BE NULL
#define OPTION_VAL_3X_BE NULL
#define CEMU_THREAD_QUANTUM_LABEL_BE NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_BE NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_BE NULL
#define OPTION_VAL_25_BE NULL
#define OPTION_VAL_50_BE "50 %"
#define OPTION_VAL_75_BE "75 %"
#define OPTION_VAL_100_BE "100 %"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BE NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_BE NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BE NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_BE NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_BE NULL
#define OPTION_VAL_DEFAULT_SCREEN_BE NULL
#define OPTION_VAL_GAMEPAD_SCREEN_BE NULL
#define OPTION_VAL_SIDE_BY_SIDE_BE NULL
#define OPTION_VAL_TOP_BOTTOM_BE NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_BE NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_BE NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_BE NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_BE NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_BE NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_BE NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_BE NULL
#define OPTION_VAL_SELECT_L3_BE NULL
#define OPTION_VAL_SELECT_R3_BE NULL
#define OPTION_VAL_TAB_BE NULL
#define CEMU_DRC_POSITION_LABEL_BE NULL
#define OPTION_VAL_NORMAL_BE "Звычайна"
#define OPTION_VAL_SWAPPED_BE NULL
#define CEMU_LOG_TO_FILE_LABEL_BE NULL
#define CEMU_LOG_FILESYSTEM_LABEL_BE NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_BE NULL
#define CEMU_LOG_SYSTEM_API_LABEL_BE NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_BE NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_BE NULL
#define CEMU_LOG_INPUT_API_LABEL_BE NULL
#define CEMU_LOG_INPUT_API_INFO_0_BE NULL
#define CEMU_LOG_AUDIO_LABEL_BE NULL
#define CEMU_LOG_AUDIO_INFO_0_BE NULL
#define CEMU_LOG_THREAD_TIME_LABEL_BE NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_BE NULL
#define CEMU_DUMP_SHADERS_LABEL_BE NULL
#define CEMU_DUMP_SHADERS_INFO_0_BE NULL
#define CEMU_BC1_16BIT_LABEL_BE NULL
#define CEMU_BC1_16BIT_INFO_0_BE NULL
#define CEMU_GPU_API_LABEL_BE NULL
#define CEMU_GPU_API_INFO_0_BE NULL
#define OPTION_VAL_OPENGL_BE NULL
#define OPTION_VAL_VULKAN_BE NULL
#define CEMU_ACCOUNT_LABEL_BE NULL
#define CEMU_ACCOUNT_INFO_0_BE NULL
#define CEMU_CREATE_ACCOUNT_LABEL_BE NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_BE NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_BE NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_BE NULL
#define CEMU_INSTALL_GAME_LABEL_BE NULL
#define CEMU_INSTALL_GAME_INFO_0_BE NULL
#define CEMU_UNINSTALL_GAME_LABEL_BE NULL
#define CEMU_UNINSTALL_GAME_INFO_0_BE NULL
#define CEMU_INSTALL_TITLES_LABEL_BE NULL
#define CEMU_INSTALL_TITLES_INFO_0_BE NULL
#define CEMU_UNINSTALL_TITLES_LABEL_BE NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_BE NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_BE NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_BE NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_BE NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_BE NULL
#define CEMU_CONVERT_TO_WUA_LABEL_BE NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
	{ "video", CATEGORY_VIDEO_LABEL_BE, CATEGORY_VIDEO_INFO_0_BE },
	{ "shaders", CATEGORY_SHADERS_LABEL_BE, CATEGORY_SHADERS_INFO_0_BE },
	{ "screen", CATEGORY_SCREEN_LABEL_BE, CATEGORY_SCREEN_INFO_0_BE },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_BE, CATEGORY_SYSTEM_INFO_0_BE },
	{ "addons", CATEGORY_ADDONS_LABEL_BE, CATEGORY_ADDONS_INFO_0_BE },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_BE, CATEGORY_ACCOUNTS_INFO_0_BE },
	{ "install", CATEGORY_INSTALL_LABEL_BE, CATEGORY_INSTALL_INFO_0_BE },
	{ "convert", CATEGORY_CONVERT_LABEL_BE, CATEGORY_CONVERT_INFO_0_BE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_BE, CATEGORY_GRAPHIC_PACKS_INFO_0_BE },
	{ "cheats", CATEGORY_CHEATS_LABEL_BE, CATEGORY_CHEATS_INFO_0_BE },
	{ "logging", CATEGORY_LOGGING_LABEL_BE, CATEGORY_LOGGING_INFO_0_BE },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_be[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_BE,
		NULL,
		CEMU_CPU_MODE_INFO_0_BE,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_BE },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_BE },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_BE },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_BE },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_BE },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_BE },
			{ "Japanese", OPTION_VAL_JAPANESE_BE },
			{ "French", OPTION_VAL_FRENCH_BE },
			{ "German", OPTION_VAL_GERMAN_BE },
			{ "Italian", OPTION_VAL_ITALIAN_BE },
			{ "Spanish", OPTION_VAL_SPANISH_BE },
			{ "Chinese", OPTION_VAL_CHINESE_BE },
			{ "Korean", OPTION_VAL_KOREAN_BE },
			{ "Dutch", OPTION_VAL_DUTCH_BE },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_BE },
			{ "Russian", OPTION_VAL_RUSSIAN_BE },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_BE },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_BE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_BE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_BE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_BE },
			{ "bicubic", OPTION_VAL_BICUBIC_BE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_BE },
			{ "nearest", OPTION_VAL_NEAREST_BE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_BE },
			{ "bicubic", OPTION_VAL_BICUBIC_BE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_BE },
			{ "nearest", OPTION_VAL_NEAREST_BE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_BE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_BE,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_BE },
			{ "0.5x", OPTION_VAL_0_5X_BE },
			{ "0.75x", OPTION_VAL_0_75X_BE },
			{ "native", OPTION_VAL_NATIVE_BE },
			{ "1.5x", OPTION_VAL_1_5X_BE },
			{ "2x", OPTION_VAL_2X_BE },
			{ "3x", OPTION_VAL_3X_BE },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_BE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_BE,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_BE },
			{ "50", OPTION_VAL_50_BE },
			{ "75", OPTION_VAL_75_BE },
			{ "100", OPTION_VAL_100_BE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BE },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BE },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BE },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BE },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BE },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_BE },
			{ "Select + L3", OPTION_VAL_SELECT_L3_BE },
			{ "Select + R3", OPTION_VAL_SELECT_R3_BE },
			{ "Tab", OPTION_VAL_TAB_BE },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_BE },
			{ "swapped", OPTION_VAL_SWAPPED_BE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_BE,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_BE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_BE,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_BE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_BE,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_BE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_BE,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_BE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_BE,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_BE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_BE,
		NULL,
		CEMU_BC1_16BIT_INFO_0_BE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_BE,
		NULL,
		CEMU_GPU_API_INFO_0_BE,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_BE },
			{ "Vulkan", OPTION_VAL_VULKAN_BE },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_BE,
		NULL,
		CEMU_ACCOUNT_INFO_0_BE,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_BE,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_BE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_BE,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_BE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_BE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_BE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_BE,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_BE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_BE,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_BE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_BE,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_BE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_BE,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_BE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_BE,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_BE,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_BE,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_BE,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_be = {
   option_cats_be,
   option_defs_be
};

/* RETRO_LANGUAGE_BG */

#define CATEGORY_VIDEO_LABEL_BG "Видео"
#define CATEGORY_VIDEO_INFO_0_BG NULL
#define CATEGORY_SHADERS_LABEL_BG NULL
#define CATEGORY_SHADERS_INFO_0_BG NULL
#define CATEGORY_SCREEN_LABEL_BG NULL
#define CATEGORY_SCREEN_INFO_0_BG NULL
#define CATEGORY_SYSTEM_LABEL_BG NULL
#define CATEGORY_SYSTEM_INFO_0_BG NULL
#define CATEGORY_ADDONS_LABEL_BG NULL
#define CATEGORY_ADDONS_INFO_0_BG NULL
#define CATEGORY_ACCOUNTS_LABEL_BG NULL
#define CATEGORY_ACCOUNTS_INFO_0_BG NULL
#define CATEGORY_INSTALL_LABEL_BG NULL
#define CATEGORY_INSTALL_INFO_0_BG NULL
#define CATEGORY_CONVERT_LABEL_BG NULL
#define CATEGORY_CONVERT_INFO_0_BG NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_BG NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_BG NULL
#define CATEGORY_CHEATS_LABEL_BG NULL
#define CATEGORY_CHEATS_INFO_0_BG NULL
#define CATEGORY_LOGGING_LABEL_BG NULL
#define CATEGORY_LOGGING_INFO_0_BG NULL
#define CEMU_CPU_MODE_LABEL_BG NULL
#define CEMU_CPU_MODE_INFO_0_BG NULL
#define OPTION_VAL_AUTO_BG NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_BG NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_BG NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_BG NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_BG NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_BG NULL
#define OPTION_VAL_ENGLISH_BG NULL
#define OPTION_VAL_JAPANESE_BG NULL
#define OPTION_VAL_FRENCH_BG NULL
#define OPTION_VAL_GERMAN_BG NULL
#define OPTION_VAL_ITALIAN_BG NULL
#define OPTION_VAL_SPANISH_BG NULL
#define OPTION_VAL_CHINESE_BG NULL
#define OPTION_VAL_KOREAN_BG NULL
#define OPTION_VAL_DUTCH_BG NULL
#define OPTION_VAL_PORTUGUESE_BG NULL
#define OPTION_VAL_RUSSIAN_BG NULL
#define OPTION_VAL_TAIWANESE_BG NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_BG NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_BG NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_BG NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_BG NULL
#define CEMU_SHOW_GAME_FPS_LABEL_BG NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_BG NULL
#define CEMU_UPSCALE_FILTER_LABEL_BG NULL
#define OPTION_VAL_LINEAR_BG NULL
#define OPTION_VAL_BICUBIC_BG NULL
#define OPTION_VAL_BICUBIC_HERMITE_BG NULL
#define OPTION_VAL_NEAREST_BG NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_BG NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_BG NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_BG NULL
#define OPTION_VAL_0_25X_BG NULL
#define OPTION_VAL_0_5X_BG NULL
#define OPTION_VAL_0_75X_BG NULL
#define OPTION_VAL_NATIVE_BG NULL
#define OPTION_VAL_1_5X_BG NULL
#define OPTION_VAL_2X_BG NULL
#define OPTION_VAL_3X_BG NULL
#define CEMU_THREAD_QUANTUM_LABEL_BG NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_BG NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_BG NULL
#define OPTION_VAL_25_BG NULL
#define OPTION_VAL_50_BG NULL
#define OPTION_VAL_75_BG NULL
#define OPTION_VAL_100_BG NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BG NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_BG NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BG NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_BG NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_BG NULL
#define OPTION_VAL_DEFAULT_SCREEN_BG NULL
#define OPTION_VAL_GAMEPAD_SCREEN_BG NULL
#define OPTION_VAL_SIDE_BY_SIDE_BG NULL
#define OPTION_VAL_TOP_BOTTOM_BG NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_BG NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_BG NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_BG NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_BG NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_BG NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_BG NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_BG NULL
#define OPTION_VAL_SELECT_L3_BG NULL
#define OPTION_VAL_SELECT_R3_BG NULL
#define OPTION_VAL_TAB_BG NULL
#define CEMU_DRC_POSITION_LABEL_BG NULL
#define OPTION_VAL_NORMAL_BG NULL
#define OPTION_VAL_SWAPPED_BG NULL
#define CEMU_LOG_TO_FILE_LABEL_BG NULL
#define CEMU_LOG_FILESYSTEM_LABEL_BG NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_BG NULL
#define CEMU_LOG_SYSTEM_API_LABEL_BG NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_BG NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_BG NULL
#define CEMU_LOG_INPUT_API_LABEL_BG NULL
#define CEMU_LOG_INPUT_API_INFO_0_BG NULL
#define CEMU_LOG_AUDIO_LABEL_BG NULL
#define CEMU_LOG_AUDIO_INFO_0_BG NULL
#define CEMU_LOG_THREAD_TIME_LABEL_BG NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_BG NULL
#define CEMU_DUMP_SHADERS_LABEL_BG NULL
#define CEMU_DUMP_SHADERS_INFO_0_BG NULL
#define CEMU_BC1_16BIT_LABEL_BG NULL
#define CEMU_BC1_16BIT_INFO_0_BG NULL
#define CEMU_GPU_API_LABEL_BG NULL
#define CEMU_GPU_API_INFO_0_BG NULL
#define OPTION_VAL_OPENGL_BG NULL
#define OPTION_VAL_VULKAN_BG NULL
#define CEMU_ACCOUNT_LABEL_BG NULL
#define CEMU_ACCOUNT_INFO_0_BG NULL
#define CEMU_CREATE_ACCOUNT_LABEL_BG NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_BG NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_BG NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_BG NULL
#define CEMU_INSTALL_GAME_LABEL_BG NULL
#define CEMU_INSTALL_GAME_INFO_0_BG NULL
#define CEMU_UNINSTALL_GAME_LABEL_BG NULL
#define CEMU_UNINSTALL_GAME_INFO_0_BG NULL
#define CEMU_INSTALL_TITLES_LABEL_BG NULL
#define CEMU_INSTALL_TITLES_INFO_0_BG NULL
#define CEMU_UNINSTALL_TITLES_LABEL_BG NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_BG NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_BG NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_BG NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_BG NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_BG NULL
#define CEMU_CONVERT_TO_WUA_LABEL_BG NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_BG NULL

struct retro_core_option_v2_category option_cats_bg[] = {
	{ "video", CATEGORY_VIDEO_LABEL_BG, CATEGORY_VIDEO_INFO_0_BG },
	{ "shaders", CATEGORY_SHADERS_LABEL_BG, CATEGORY_SHADERS_INFO_0_BG },
	{ "screen", CATEGORY_SCREEN_LABEL_BG, CATEGORY_SCREEN_INFO_0_BG },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_BG, CATEGORY_SYSTEM_INFO_0_BG },
	{ "addons", CATEGORY_ADDONS_LABEL_BG, CATEGORY_ADDONS_INFO_0_BG },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_BG, CATEGORY_ACCOUNTS_INFO_0_BG },
	{ "install", CATEGORY_INSTALL_LABEL_BG, CATEGORY_INSTALL_INFO_0_BG },
	{ "convert", CATEGORY_CONVERT_LABEL_BG, CATEGORY_CONVERT_INFO_0_BG },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_BG, CATEGORY_GRAPHIC_PACKS_INFO_0_BG },
	{ "cheats", CATEGORY_CHEATS_LABEL_BG, CATEGORY_CHEATS_INFO_0_BG },
	{ "logging", CATEGORY_LOGGING_LABEL_BG, CATEGORY_LOGGING_INFO_0_BG },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_bg[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_BG,
		NULL,
		CEMU_CPU_MODE_INFO_0_BG,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_BG },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_BG },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_BG },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_BG },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_BG },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_BG },
			{ "Japanese", OPTION_VAL_JAPANESE_BG },
			{ "French", OPTION_VAL_FRENCH_BG },
			{ "German", OPTION_VAL_GERMAN_BG },
			{ "Italian", OPTION_VAL_ITALIAN_BG },
			{ "Spanish", OPTION_VAL_SPANISH_BG },
			{ "Chinese", OPTION_VAL_CHINESE_BG },
			{ "Korean", OPTION_VAL_KOREAN_BG },
			{ "Dutch", OPTION_VAL_DUTCH_BG },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_BG },
			{ "Russian", OPTION_VAL_RUSSIAN_BG },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_BG },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_BG },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_BG,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_BG,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_BG },
			{ "bicubic", OPTION_VAL_BICUBIC_BG },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_BG },
			{ "nearest", OPTION_VAL_NEAREST_BG },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_BG },
			{ "bicubic", OPTION_VAL_BICUBIC_BG },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_BG },
			{ "nearest", OPTION_VAL_NEAREST_BG },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_BG,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_BG,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_BG },
			{ "0.5x", OPTION_VAL_0_5X_BG },
			{ "0.75x", OPTION_VAL_0_75X_BG },
			{ "native", OPTION_VAL_NATIVE_BG },
			{ "1.5x", OPTION_VAL_1_5X_BG },
			{ "2x", OPTION_VAL_2X_BG },
			{ "3x", OPTION_VAL_3X_BG },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_BG,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_BG,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_BG },
			{ "50", OPTION_VAL_50_BG },
			{ "75", OPTION_VAL_75_BG },
			{ "100", OPTION_VAL_100_BG },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BG },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BG },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BG },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BG },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BG },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BG },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BG },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BG },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BG },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BG },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BG },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BG },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BG },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BG },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BG },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BG },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BG },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BG },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BG },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BG },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_BG },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_BG },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_BG },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_BG },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_BG },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_BG },
			{ "Select + L3", OPTION_VAL_SELECT_L3_BG },
			{ "Select + R3", OPTION_VAL_SELECT_R3_BG },
			{ "Tab", OPTION_VAL_TAB_BG },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_BG },
			{ "swapped", OPTION_VAL_SWAPPED_BG },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_BG,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_BG,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_BG,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_BG,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_BG,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_BG,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_BG,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_BG,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_BG,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_BG,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_BG,
		NULL,
		CEMU_BC1_16BIT_INFO_0_BG,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_BG,
		NULL,
		CEMU_GPU_API_INFO_0_BG,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_BG },
			{ "Vulkan", OPTION_VAL_VULKAN_BG },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_BG,
		NULL,
		CEMU_ACCOUNT_INFO_0_BG,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_BG,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_BG,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_BG,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_BG,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_BG,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_BG,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_BG,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_BG,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_BG,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_BG,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_BG,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_BG,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_BG,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_BG,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_BG,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_BG,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_BG,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_BG,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_bg = {
   option_cats_bg,
   option_defs_bg
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA "Vídeo"
#define CATEGORY_VIDEO_INFO_0_CA "Resolució, escalat i espaiat de fotogrames."
#define CATEGORY_SHADERS_LABEL_CA NULL
#define CATEGORY_SHADERS_INFO_0_CA "Traducció de shaders, memòria cau i configuració."
#define CATEGORY_SCREEN_LABEL_CA "Pantalla"
#define CATEGORY_SCREEN_INFO_0_CA "Quina pantalla de la Wii U es mostra, i com."
#define CATEGORY_SYSTEM_LABEL_CA "Sistema"
#define CATEGORY_SYSTEM_INFO_0_CA "Procesador, idioma i programació de tasques."
#define CATEGORY_ADDONS_LABEL_CA "Complements"
#define CATEGORY_ADDONS_INFO_0_CA "Portals Skylanders, Infinity i Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_CA "Compte"
#define CATEGORY_ACCOUNTS_INFO_0_CA "Administra els comptes a la carpeta de Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_CA "Contingut"
#define CATEGORY_INSTALL_INFO_0_CA "Gestiona els jocs, les actualitzacions i els DLC a saves/Cemu/mlc01, la carpeta d'emmagatzematge de la consola."
#define CATEGORY_CONVERT_LABEL_CA "Converteix a WUA"
#define CATEGORY_CONVERT_INFO_0_CA "Desa el joc en execució com a un arxiu .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_CA "Paquets gràfics"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CA "Els paquets gràfics carregats del joc i la seva configuració. Els canvis s'aplicaran la pròxima vegada que es carregui el joc."
#define CATEGORY_CHEATS_LABEL_CA "Trucs"
#define CATEGORY_CHEATS_INFO_0_CA "Els paquets de trucs del joc carregat, provinents de la carpeta «Cheats» dels paquets gràfics. Els canvis s'apliquen la pròxima vegada que es carregui el joc."
#define CATEGORY_LOGGING_LABEL_CA "Registres"
#define CATEGORY_LOGGING_INFO_0_CA "Sortida extra de registre, per problemes de diagnosi."
#define CEMU_CPU_MODE_LABEL_CA "Mode de CPU"
#define CEMU_CPU_MODE_INFO_0_CA "Com s'emulen els nuclis PowerPC de la Wii U. L'opció «Auto» selecciona el recompilador multinucli en CPU amb quatre o més nuclis físics i el de nucli únic en cas contrari. Els intèrprets són molt més lents i estan pensats per a la depuració. (Cal reiniciar)"
#define OPTION_VAL_AUTO_CA "Automàtic"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CA "Intèrpret mononucli"
#define OPTION_VAL_SINGLECORE_RECOMPILER_CA "Recompilador mononucli"
#define OPTION_VAL_MULTICORE_RECOMPILER_CA "Recompilador multinucli"
#define OPTION_VAL_MULTICORE_INTERPRETER_CA "Intèrpret multinucli"
#define CEMU_CONSOLE_LANGUAGE_LABEL_CA "Idioma de la consola"
#define OPTION_VAL_ENGLISH_CA "Anglès"
#define OPTION_VAL_JAPANESE_CA "Japonès"
#define OPTION_VAL_FRENCH_CA "Francès"
#define OPTION_VAL_GERMAN_CA "Alemany"
#define OPTION_VAL_ITALIAN_CA "Italià"
#define OPTION_VAL_SPANISH_CA "Espanyol"
#define OPTION_VAL_CHINESE_CA "Xinès"
#define OPTION_VAL_KOREAN_CA "Coreà"
#define OPTION_VAL_DUTCH_CA "Neerlandès"
#define OPTION_VAL_PORTUGUESE_CA "Portuguès"
#define OPTION_VAL_RUSSIAN_CA "Rus"
#define OPTION_VAL_TAIWANESE_CA "Taiwanès"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CA "Compila els shaders de forma asíncrona"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CA "Sincronització de GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_CA "Shaders precompilats"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CA "Multiplicació precisa de shaders"
#define CEMU_SHOW_GAME_FPS_LABEL_CA "Mostra els fotogrames per segon del joc"
#define CEMU_SHOW_GAME_FPS_INFO_0_CA "Mostra la taxa de fotogrames a què es renderitza el joc. El comptador de FPS propi de RetroArch mesura la freqüència d'execució del nucli, i aquesta es manté en 60 fins i tot quan el joc perd fotogrames, ja que cada execució processa una quantitat d'àudio equivalent a un fotograma."
#define CEMU_UPSCALE_FILTER_LABEL_CA "Filtre d'escalat"
#define OPTION_VAL_LINEAR_CA "Lineal"
#define OPTION_VAL_BICUBIC_CA "Bicúbica"
#define OPTION_VAL_BICUBIC_HERMITE_CA "Bicúbic de Hermite"
#define OPTION_VAL_NEAREST_CA "Més proper"
#define CEMU_DOWNSCALE_FILTER_LABEL_CA "Filtre de baixada d'escala"
#define CEMU_INTERNAL_RESOLUTION_LABEL_CA "Resolució Interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CA "Una opció alternativa genèrica per a jocs que no disposen d'un paquet gràfic de resolució: redimensiona tots els objectius de renderització amb format de pantalla, els quals alguns jocs utilitzen per a elements que deixen de funcionar correctament en canviar-ne la mida. Es basa en un múltiple de la resolució nativa del joc: per a un joc a 720p, 0,5x equival a 640x360 (una quarta part dels píxels) i 2x a 2560x1440; per a un joc a 1080p, 0,5x equival a 960x540. Quan s'activa un paquet de resolució per al joc carregat (dins de l'apartat de paquets gràfics), és el paquet el que determina la resolució i aquesta opció queda oculta."
#define OPTION_VAL_0_25X_CA "0.25x (320x180 a 720p)"
#define OPTION_VAL_0_5X_CA "0.5x (640x360 a 720p)"
#define OPTION_VAL_0_75X_CA "0.75x (960x540 a 720p)"
#define OPTION_VAL_NATIVE_CA "Nativa"
#define OPTION_VAL_1_5X_CA "1.5x (1920x1080 a 720p)"
#define OPTION_VAL_2X_CA "2x (2560x1440 a 720p)"
#define OPTION_VAL_3X_CA "3x (3840x2160 a 720p)"
#define CEMU_THREAD_QUANTUM_LABEL_CA "Fil quàntic"
#define CEMU_RUMBLE_STRENGTH_LABEL_CA "Intensitat de la vibració"
#define CEMU_RUMBLE_STRENGTH_INFO_0_CA "La intensitat de la vibració del comandament quan el joc la requereix: la del motor del GamePad i la del Wii Remote o el Pro Controller. L'opció «Desactivat» fa que no s'enviï cap vibració a la interfície."
#define OPTION_VAL_25_CA NULL
#define OPTION_VAL_50_CA NULL
#define OPTION_VAL_75_CA NULL
#define OPTION_VAL_100_CA NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CA "Emula el portal de poder Skylander"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CA "Emula Infinity Base"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CA "Emula el toypad Dimensions"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CA "# de disposicons de pantalla"
#define CEMU_SCREEN_LAYOUT1_LABEL_CA "Disposició 1"
#define OPTION_VAL_DEFAULT_SCREEN_CA "Pantalla per defecte"
#define OPTION_VAL_GAMEPAD_SCREEN_CA "Pantalla del GamePad"
#define OPTION_VAL_SIDE_BY_SIDE_CA "A Banda i Banda"
#define OPTION_VAL_TOP_BOTTOM_CA "Superior/Inferior"
#define OPTION_VAL_PICTURE_IN_PICTURE_CA "Imatge superposada"
#define CEMU_SCREEN_LAYOUT2_LABEL_CA "Disposició 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_CA "Disposició 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_CA "Disposició 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_CA "Disposició 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CA "Següent disposició de pantalla"
#define OPTION_VAL_L_R_L2_R2_L3_R3_CA NULL
#define OPTION_VAL_SELECT_L3_CA NULL
#define OPTION_VAL_SELECT_R3_CA NULL
#define OPTION_VAL_TAB_CA "Tabulador"
#define CEMU_DRC_POSITION_LABEL_CA "Posició del GamePad"
#define OPTION_VAL_NORMAL_CA NULL
#define OPTION_VAL_SWAPPED_CA "Convertit"
#define CEMU_LOG_TO_FILE_LABEL_CA "Escriu el registre de Cemu a log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_CA "Accés al fitxer de registre (depurant)"
#define CEMU_LOG_THREAD_SYNC_LABEL_CA "Registre de sincronització de fils (depuració)"
#define CEMU_LOG_SYSTEM_API_LABEL_CA "Registre de trucades a API del sistema (depuració)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CA "Registre de memòria de textures (depuració)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CA "Informa de la quantitat de memòria de les textures és BC i ha de ser descomprimida perquè la targeta gràfica no pot mostrar-la."
#define CEMU_LOG_INPUT_API_LABEL_CA "Registre de trucades a la API de controladors (depuració)"
#define CEMU_LOG_INPUT_API_INFO_0_CA "Enregistra cada trucada al controlador que fa el joc - quins controladors ha cercat i quins han donat resposta. És molt molest; es mostra durant uns quants segons."
#define CEMU_LOG_AUDIO_LABEL_CA "Registre del ritme d'àudio i fotogrames (depuració)"
#define CEMU_LOG_AUDIO_INFO_0_CA "Cada segon: quantes mostres ha generat l'AX, quantes n'ha hagut de descartar l'anell i quantes n'ha processat el *frontend*; així com quantes vegades el *frontend* ha executat el nucli, quants fotogrames ha completat el títol i en què s'ha invertit el temps (espera del fil de la GPU, presentació, àudio). Això serveix per determinar si el rendiment lent d'un joc es deu a la CPU emulada, a la GPU o al *frontend*."
#define CEMU_LOG_THREAD_TIME_LABEL_CA "Registre del fil de temps del procesador (depuració)"
#define CEMU_LOG_THREAD_TIME_INFO_0_CA "Un cop per segon, es mesura el nivell d'activitat de cada fil de nucli PowerPC emulat, del fil de la GPU i del fil del *frontend*, expressat com a fracció d'un nucli de l'amfitrió. Un fil amb una activitat propera al 100 % és aquell que provoca l'espera en un joc lent."
#define CEMU_DUMP_SHADERS_LABEL_CA "Aboca els shaders (depurant)"
#define CEMU_DUMP_SHADERS_INFO_0_CA "Escriu el codi font de tots els *shaders* que utilitza el joc a `system/Cemu/dump/shaders`, amb els noms basats en els seus *hashes* tal com apareixen a `log.txt`. Serveix per informar d'un *shader* que falla o es renderitza incorrectament en una GPU concreta. Aquest procés alenteix la compilació dels *shaders* i omple la carpeta ràpidament, així que recorda desactivar-lo després."
#define CEMU_BC1_16BIT_LABEL_CA "Redueix la memòria de textures BC1"
#define CEMU_BC1_16BIT_INFO_0_CA "Redueix a la meitat el cost de les textures BC1 que la targeta gràfica no pot mostrar, a costa de mostrar una mica de verd. No afecta si la targeta gràfica suporta el format BC."
#define CEMU_GPU_API_LABEL_CA "API de gràfics"
#define CEMU_GPU_API_INFO_0_CA "La API de gràfics amb la qual renderitza Cemu. (Cal reiniciar)"
#define OPTION_VAL_OPENGL_CA NULL
#define OPTION_VAL_VULKAN_CA NULL
#define CEMU_ACCOUNT_LABEL_CA "Activa el compte"
#define CEMU_ACCOUNT_INFO_0_CA "El compte de Wii U amb què s'executa el joc, cadascun amb les seves pròpies dades de partida i el seu Mii. La llista mostra els comptes que figuren al directori de comptes.\n\nEls canvis s'apliquen quan es tanca el títol i es torna a iniciar, o bé quan es reinicia. Fins aleshores, el títol en execució continua desant les dades al compte amb què es va iniciar."
#define CEMU_CREATE_ACCOUNT_LABEL_CA "Crea un compte"
#define CEMU_CREATE_ACCOUNT_INFO_0_CA "Crea un compte nou, anomenat Jugador 2, Jugador 3 i successivament, i activa cada compte. Després torna a la posició d'apagada. La consola admet fins a 12 comptes."
#define CEMU_REMOVE_ACCOUNT_LABEL_CA "Elimina el compte"
#define CEMU_REMOVE_ACCOUNT_INFO_0_CA "AVÍS: eliminar un compte també en suprimeix les dades de partida de tots els jocs, i aquesta acció és irreversible.\n\nElimina el compte seleccionat, tal com ho fa l'opció d'esborrar un usuari de la consola: el compte desapareix del registre de comptes i les seves dades de partida s'eliminen de la carpeta corresponent de cada títol. El compte s'elimina en sortir del menú, moment en què l'opció torna a l'estat «Desactivat».\n\nNo es pot eliminar el compte actiu ni tampoc el compte amb què s'ha iniciat el joc en curs fins que aquest no es tanqui. Per tant, no és possible eliminar l'últim compte."
#define CEMU_INSTALL_GAME_LABEL_CA "Instal·la els jocs"
#define CEMU_INSTALL_GAME_INFO_0_CA "Instal·la tots els jocs situats a `system/Cemu/titles` (incloses les subcarpetes) al directori de jocs instal·lats de la Wii U emulada (`saves/Cemu/mlc01/usr/title/00050000`), tal com ho faria la consola en instal·lar un joc des del disc. Un joc pot ser una imatge de disc (`.wud`, `.wux`, `.iso`) o un fitxer `.wua`; les actualitzacions del títol i els continguts addicionals (DLC) que contingui el fitxer `.wua` s'instal·len conjuntament amb el joc. Si un joc ja està instal·lat en la mateixa versió o en una de més recent, no es modifica.\n\nQuan aquesta opció està activada, la instal·lació comença immediatament i el progrés es mostra mitjançant una notificació; l'opció es desactiva automàticament un cop s'han instal·lat tots els jocs. Per iniciar un joc instal·lat, cal carregar el fitxer `.rpx` que es troba a la seva carpeta de codi dins del directori de jocs instal·lats; ja no cal utilitzar la imatge de disc original."
#define CEMU_UNINSTALL_GAME_LABEL_CA "Desinstal·la el joc"
#define CEMU_UNINSTALL_GAME_INFO_0_CA "Desinstal·la el joc en execució del directori d'instal·lació (saves/Cemu/mlc01/usr/title/00050000) un cop es tanca o es reinicia el joc, incloent-hi l'actualització del títol i el DLC instal·lats; l'opció roman activada fins aleshores. Les partides desades es mantenen intactes, així com la imatge de disc o el fitxer .wua a partir del qual es va instal·lar."
#define CEMU_INSTALL_TITLES_LABEL_CA "Instal·la el contingut"
#define CEMU_INSTALL_TITLES_INFO_0_CA "Instal·la totes les actualitzacions de títol i els DLC situats a `system/Cemu/titles` (incloses les subcarpetes) a l'emmagatzematge de la Wii U emulada (`saves/Cemu/mlc01/usr/title`). Cada element es desa en la seva pròpia carpeta dins de `system/Cemu/titles`; una descàrrega NUS (fitxers `.app`) requereix que els fitxers `title.tmd` i `title.tik` (la clau de desxifratge) estiguin situats al costat. Si ja hi ha instal·lada una versió igual o més recent, no es modifica.\n\nQuan aquesta opció està activada, la instal·lació comença immediatament i el progrés es mostra mitjançant una notificació; l'opció es desactiva automàticament un cop s'ha instal·lat tot el contingut i se surt del menú o es canvia una altra opció. El joc utilitza el contingut instal·lat un cop es reinicia.\n\nEs pot instal·lar contingut des d'altres ubicacions mitjançant el menú principal de RetroArch (*Main Menu* > *Load Content*), seleccionant el fitxer `title.tmd` corresponent i assegurant-se que el fitxer `title.tik` es trobi al costat."
#define CEMU_UNINSTALL_TITLES_LABEL_CA "Desinstal·la el contingut"
#define CEMU_UNINSTALL_TITLES_INFO_0_CA "Desinstal·la l'actualització del títol i el contingut descarregable (DLC) del joc en execució de l'emmagatzematge de la Wii U emulada (saves/Cemu/mlc01/usr/title) un cop es tanca o es reinicia el joc; l'opció roman activada fins aleshores. Les còpies situades a system/Cemu/titles no es modifiquen."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CA "Elimina els fitxers després de la instal·lació"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CA "AVÍS: això esborra fitxers de system/Cemu/titles i l'acció és irreversible. La carpeta system/Cemu/titles és per a la gestió del nucli; guarda la còpia única d'un bolcat en un altre lloc.\n\nEsborra de system/Cemu/titles allò que s'hagi instal·lat mitjançant «Install Games» i «Install Content»: la carpeta d'una actualització de títol o d'un DLC un cop instal·lats, i una imatge de disc o un fitxer .wua un cop s'hagi instal·lat tot el contingut que contenen (l'opció «Install Content» per si sola deixa un fitxer .wua que també conté el joc). Els fitxers que utilitza el joc en execució s'eliminen quan aquest es tanca o es reinicia. El contingut carregat mitjançant «Load Content» es manté on és."
#define CEMU_WUA_OUTPUT_DIR_LABEL_CA "Carpeta de sortida"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CA "Indica on es desa el fitxer .wua. Cal que hi hagi espai suficient."
#define CEMU_CONVERT_TO_WUA_LABEL_CA "Inicia la conversió a WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_CA "Desa el joc actual a la carpeta de sortida com a fitxer .wua. Manté el joc en funcionament mentre es desa."

struct retro_core_option_v2_category option_cats_ca[] = {
	{ "video", CATEGORY_VIDEO_LABEL_CA, CATEGORY_VIDEO_INFO_0_CA },
	{ "shaders", CATEGORY_SHADERS_LABEL_CA, CATEGORY_SHADERS_INFO_0_CA },
	{ "screen", CATEGORY_SCREEN_LABEL_CA, CATEGORY_SCREEN_INFO_0_CA },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_CA, CATEGORY_SYSTEM_INFO_0_CA },
	{ "addons", CATEGORY_ADDONS_LABEL_CA, CATEGORY_ADDONS_INFO_0_CA },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_CA, CATEGORY_ACCOUNTS_INFO_0_CA },
	{ "install", CATEGORY_INSTALL_LABEL_CA, CATEGORY_INSTALL_INFO_0_CA },
	{ "convert", CATEGORY_CONVERT_LABEL_CA, CATEGORY_CONVERT_INFO_0_CA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CA, CATEGORY_GRAPHIC_PACKS_INFO_0_CA },
	{ "cheats", CATEGORY_CHEATS_LABEL_CA, CATEGORY_CHEATS_INFO_0_CA },
	{ "logging", CATEGORY_LOGGING_LABEL_CA, CATEGORY_LOGGING_INFO_0_CA },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_CA,
		NULL,
		CEMU_CPU_MODE_INFO_0_CA,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_CA },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_CA },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_CA },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_CA },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_CA },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_CA },
			{ "Japanese", OPTION_VAL_JAPANESE_CA },
			{ "French", OPTION_VAL_FRENCH_CA },
			{ "German", OPTION_VAL_GERMAN_CA },
			{ "Italian", OPTION_VAL_ITALIAN_CA },
			{ "Spanish", OPTION_VAL_SPANISH_CA },
			{ "Chinese", OPTION_VAL_CHINESE_CA },
			{ "Korean", OPTION_VAL_KOREAN_CA },
			{ "Dutch", OPTION_VAL_DUTCH_CA },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_CA },
			{ "Russian", OPTION_VAL_RUSSIAN_CA },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_CA },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_CA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CA },
			{ "bicubic", OPTION_VAL_BICUBIC_CA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CA },
			{ "nearest", OPTION_VAL_NEAREST_CA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CA },
			{ "bicubic", OPTION_VAL_BICUBIC_CA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CA },
			{ "nearest", OPTION_VAL_NEAREST_CA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CA,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_CA },
			{ "0.5x", OPTION_VAL_0_5X_CA },
			{ "0.75x", OPTION_VAL_0_75X_CA },
			{ "native", OPTION_VAL_NATIVE_CA },
			{ "1.5x", OPTION_VAL_1_5X_CA },
			{ "2x", OPTION_VAL_2X_CA },
			{ "3x", OPTION_VAL_3X_CA },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CA,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_CA },
			{ "50", OPTION_VAL_50_CA },
			{ "75", OPTION_VAL_75_CA },
			{ "100", OPTION_VAL_100_CA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CA },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CA },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CA },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CA },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CA },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_CA },
			{ "Select + L3", OPTION_VAL_SELECT_L3_CA },
			{ "Select + R3", OPTION_VAL_SELECT_R3_CA },
			{ "Tab", OPTION_VAL_TAB_CA },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_CA },
			{ "swapped", OPTION_VAL_SWAPPED_CA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_CA,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_CA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_CA,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_CA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_CA,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_CA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_CA,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_CA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_CA,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_CA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_CA,
		NULL,
		CEMU_BC1_16BIT_INFO_0_CA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_CA,
		NULL,
		CEMU_GPU_API_INFO_0_CA,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CA },
			{ "Vulkan", OPTION_VAL_VULKAN_CA },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CA,
		NULL,
		CEMU_ACCOUNT_INFO_0_CA,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_CA,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_CA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_CA,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_CA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_CA,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_CA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_CA,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_CA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_CA,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_CA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_CA,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_CA,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_CA,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_CA,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_CA,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS "视频"
#define CATEGORY_VIDEO_INFO_0_CHS "分辨率、缩放与帧节奏控制。"
#define CATEGORY_SHADERS_LABEL_CHS "着色器"
#define CATEGORY_SHADERS_INFO_0_CHS "着色器转换、缓存与编译。"
#define CATEGORY_SCREEN_LABEL_CHS "屏幕"
#define CATEGORY_SCREEN_INFO_0_CHS "决定显示哪个 Wii U 屏幕以及显示方式。"
#define CATEGORY_SYSTEM_LABEL_CHS "系统"
#define CATEGORY_SYSTEM_INFO_0_CHS "CPU、语言及调度设置。"
#define CATEGORY_ADDONS_LABEL_CHS "附加配件"
#define CATEGORY_ADDONS_INFO_0_CHS "宝可梦/小兵立人（Skylanders）、迪士尼无限（Infinity）及乐高维度（Dimensions）底座门户设置。"
#define CATEGORY_ACCOUNTS_LABEL_CHS "账户"
#define CATEGORY_ACCOUNTS_INFO_0_CHS "在 Wii U 的账户目录（saves/Cemu/mlc01/usr/save/system/act）中管理账户。"
#define CATEGORY_INSTALL_LABEL_CHS "游戏"
#define CATEGORY_INSTALL_INFO_0_CHS "管理模拟主机存储目录（saves/Cemu/mlc01）中的游戏本体、更新补丁与 DLC。"
#define CATEGORY_CONVERT_LABEL_CHS "转换为 WUA 格式"
#define CATEGORY_CONVERT_INFO_0_CHS "将已加载的游戏导出打包为 .wua 归档格式。"
#define CATEGORY_GRAPHIC_PACKS_LABEL_CHS "图形包 (Graphic Packs)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CHS "当前加载游戏的图形包及其预设设置。更改将在下次加载游戏时生效。"
#define CATEGORY_CHEATS_LABEL_CHS "金手指"
#define CATEGORY_CHEATS_INFO_0_CHS "来自图形包中 Cheats 文件夹的已加载游戏作弊码包。更改将在下次加载游戏时生效。"
#define CATEGORY_LOGGING_LABEL_CHS "日志"
#define CATEGORY_LOGGING_INFO_0_CHS "额外日志输出，用于诊断问题。"
#define CEMU_CPU_MODE_LABEL_CHS "CPU 运行模式"
#define CEMU_CPU_MODE_INFO_0_CHS "模拟 Wii U PowerPC 核心的方式。“自动 (Auto)”模式下，若 CPU 拥有 4 个或更多物理核心则采用多核重编译器，否则采用单核重编译器。解释器模式速度极慢，仅用于调试。（需要重启核心）"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CHS "单核解释器"
#define OPTION_VAL_SINGLECORE_RECOMPILER_CHS "单核重编译器"
#define OPTION_VAL_MULTICORE_RECOMPILER_CHS "多核重编译器"
#define OPTION_VAL_MULTICORE_INTERPRETER_CHS "多核解释器"
#define CEMU_CONSOLE_LANGUAGE_LABEL_CHS "主机系统语言"
#define OPTION_VAL_ENGLISH_CHS "英语"
#define OPTION_VAL_JAPANESE_CHS "日语"
#define OPTION_VAL_FRENCH_CHS "法语"
#define OPTION_VAL_GERMAN_CHS "德语"
#define OPTION_VAL_ITALIAN_CHS "意大利语"
#define OPTION_VAL_SPANISH_CHS "西班牙语"
#define OPTION_VAL_CHINESE_CHS "中文"
#define OPTION_VAL_KOREAN_CHS "韩语"
#define OPTION_VAL_DUTCH_CHS "荷兰语"
#define OPTION_VAL_PORTUGUESE_CHS "葡萄牙语"
#define OPTION_VAL_RUSSIAN_CHS "俄语"
#define OPTION_VAL_TAIWANESE_CHS "繁体中文"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CHS "异步着色器编译"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CHS "GX2DrawDone 画面同步"
#define CEMU_PRECOMPILED_SHADERS_LABEL_CHS "预编译着色器"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CHS "精确着色器乘法计算"
#define CEMU_SHOW_GAME_FPS_LABEL_CHS "显示游戏帧率 (FPS)"
#define CEMU_SHOW_GAME_FPS_INFO_0_CHS "显示游戏内部实际渲染的帧率。RetroArch 自带的帧率计数器计算的是核心运行频率，即使游戏丢帧，它也会因每一帧都携带音频而保持在 60 帧。"
#define CEMU_UPSCALE_FILTER_LABEL_CHS "放大过滤算法"
#define OPTION_VAL_LINEAR_CHS "线性"
#define OPTION_VAL_BICUBIC_CHS "双立方"
#define OPTION_VAL_BICUBIC_HERMITE_CHS "双三次 Hermite 差值算法"
#define OPTION_VAL_NEAREST_CHS "最邻"
#define CEMU_DOWNSCALE_FILTER_LABEL_CHS "缩小过滤算法"
#define CEMU_INTERNAL_RESOLUTION_LABEL_CHS "内部分辨率"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CHS NULL
#define OPTION_VAL_0_25X_CHS NULL
#define OPTION_VAL_0_5X_CHS NULL
#define OPTION_VAL_0_75X_CHS NULL
#define OPTION_VAL_NATIVE_CHS "原生"
#define OPTION_VAL_1_5X_CHS NULL
#define OPTION_VAL_2X_CHS NULL
#define OPTION_VAL_3X_CHS NULL
#define CEMU_THREAD_QUANTUM_LABEL_CHS "线程时间片 (Thread Quantum)   "
#define CEMU_RUMBLE_STRENGTH_LABEL_CHS "震动强度"
#define CEMU_RUMBLE_STRENGTH_INFO_0_CHS "当游戏请求震动时手柄的振动强度：包括 GamePad 马达、Wii 双节棍手柄或 Pro 手柄。关闭时将完全不向前端发送震动信号。"
#define OPTION_VAL_25_CHS NULL
#define OPTION_VAL_50_CHS NULL
#define OPTION_VAL_75_CHS NULL
#define OPTION_VAL_100_CHS NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHS "模拟宝可梦/小兵立人 (Skylanders) 力量之门"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CHS "模拟 Infinity 迪士尼无限底座"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHS "模拟乐高维度 (Dimensions) 玩具垫"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CHS "屏幕布局数量"
#define CEMU_SCREEN_LAYOUT1_LABEL_CHS "布局 1"
#define OPTION_VAL_DEFAULT_SCREEN_CHS "默认屏幕"
#define OPTION_VAL_GAMEPAD_SCREEN_CHS "GamePad 贴身屏幕"
#define OPTION_VAL_SIDE_BY_SIDE_CHS "左右分屏"
#define OPTION_VAL_TOP_BOTTOM_CHS "上下分屏"
#define OPTION_VAL_PICTURE_IN_PICTURE_CHS "画中画"
#define CEMU_SCREEN_LAYOUT2_LABEL_CHS "布局 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_CHS "布局 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_CHS "布局 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_CHS "布局 4"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CHS "切换下一个屏幕布局快捷键"
#define OPTION_VAL_L_R_L2_R2_L3_R3_CHS NULL
#define OPTION_VAL_SELECT_L3_CHS NULL
#define OPTION_VAL_SELECT_R3_CHS NULL
#define OPTION_VAL_TAB_CHS "Tab 键"
#define CEMU_DRC_POSITION_LABEL_CHS "GamePad 屏幕位置"
#define OPTION_VAL_NORMAL_CHS "普通"
#define OPTION_VAL_SWAPPED_CHS "对调"
#define CEMU_LOG_TO_FILE_LABEL_CHS "写入 Cemu 日志至 log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_CHS "记录文件系统访问（调试用）"
#define CEMU_LOG_THREAD_SYNC_LABEL_CHS "记录线程同步（调试用）"
#define CEMU_LOG_SYSTEM_API_LABEL_CHS "记录系统 API 调用（调试用）"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CHS "记录纹理内存（调试用）"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CHS "报告纹理内存中有多少因当前 GPU 无法采样而必须解压缩的 BC 格式纹理。"
#define CEMU_LOG_INPUT_API_LABEL_CHS "记录控制器 API 调用（调试用）"
#define CEMU_LOG_INPUT_API_INFO_0_CHS "记录游戏发起的每一次手柄调用——包括探测了哪些手柄及返回的具体指令。日志量极大，建议仅单次开启数秒。"
#define CEMU_LOG_AUDIO_LABEL_CHS NULL
#define CEMU_LOG_AUDIO_INFO_0_CHS NULL
#define CEMU_LOG_THREAD_TIME_LABEL_CHS NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_CHS NULL
#define CEMU_DUMP_SHADERS_LABEL_CHS "转储着色器（调试用）"
#define CEMU_DUMP_SHADERS_INFO_0_CHS "将游戏使用的每个着色器源码写入 system/Cemu/dump/shaders 目录，文件名取自 log.txt 中显示的哈希值。用于提交或报告在特定 GPU 上编译失败或渲染错误的着色器。这会拖慢着色器编译速度并迅速填满文件夹，因此使用完毕后请及时关闭。"
#define CEMU_BC1_16BIT_LABEL_CHS "降低 BC1 纹理内存占用"
#define CEMU_BC1_16BIT_INFO_0_CHS "在不支持直接采样 BC 格式的 GPU 上将 BC1 纹理的内存开销减半，代价是损失 1 位的绿色色彩精度。在支持 BC 采样的设备上无效果。"
#define CEMU_GPU_API_LABEL_CHS "图形 API"
#define CEMU_GPU_API_INFO_0_CHS "Cemu 用于渲染画面所使用的图形 API。（需要重启核心）"
#define OPTION_VAL_OPENGL_CHS NULL
#define OPTION_VAL_VULKAN_CHS NULL
#define CEMU_ACCOUNT_LABEL_CHS "当前激活账户"
#define CEMU_ACCOUNT_INFO_0_CHS "运行游戏所使用的 Wii U 账户，每个账户拥有独立的存档和 Mii 形象。列表显示的是账户目录中的所有账户。\n\n更改将在游戏关闭并重新启动或重置时生效。在此之前，运行中的游戏将继续保存到启动时使用的账户中。"
#define CEMU_CREATE_ACCOUNT_LABEL_CHS "创建账户"
#define CEMU_CREATE_ACCOUNT_INFO_0_CHS "创建一个名为 Player 2、Player 3 等的新账户，并将其设为当前激活账户。随后此选项会自动切回“关闭”状态。主机最多可容纳 12 个账户。"
#define CEMU_REMOVE_ACCOUNT_LABEL_CHS "删除账户"
#define CEMU_REMOVE_ACCOUNT_INFO_0_CHS "警告：删除账户会同时删除该账户在所有游戏中的存档数据，且此操作不可逆。\n\n删除选定的账户（效果等同于在主机上删除用户）：该账户将从账户目录中移除，其在每个游戏中的存档文件夹也将被删除。离开菜单时将执行删除操作，随后此选项切回“关闭”状态。\n\n当前激活的账户无法被删除，运行中游戏所使用的账户在游戏关闭前也无法被删除。因此，主机上的最后一个账户无法被删除。"
#define CEMU_INSTALL_GAME_LABEL_CHS "安装游戏"
#define CEMU_INSTALL_GAME_INFO_0_CHS "将 system/Cemu/titles（包含子文件夹）中的所有游戏安装至模拟 Wii U 的已安装游戏目录（saves/Cemu/mlc01/usr/title/00050000），如同实体主机从光盘安装游戏一般。游戏支持光盘镜像（.wud、.wux、.iso）或 .wua 格式；.wua 所包含的更新补丁与 DLC 会一并安装。已安装相同或更新版本的游戏将被忽略。\n\n开启此选项后将立即开始安装，进度以通知形式显示，当所有游戏安装完毕后该选项会自动关闭。安装后的游戏可通过加载已安装游戏目录中代码文件夹内的 .rpx 文件启动，不再需要原光盘镜像。"
#define CEMU_UNINSTALL_GAME_LABEL_CHS "卸载游戏"
#define CEMU_UNINSTALL_GAME_INFO_0_CHS "在游戏关闭或重置时，从已安装游戏目录（saves/Cemu/mlc01/usr/title/00050000）中卸载当前运行的游戏及其已安装的更新补丁和 DLC；在此之前该选项保持开启。其存档数据以及用于安装的原光盘镜像或 .wua 文件均会被保留。"
#define CEMU_INSTALL_TITLES_LABEL_CHS "安装内容"
#define CEMU_INSTALL_TITLES_INFO_0_CHS "将 system/Cemu/titles（包含子文件夹）中的所有更新补丁与 DLC 安装至模拟 Wii U 的存储目录（saves/Cemu/mlc01/usr/title）中。每个内容在 system/Cemu/titles 中应存放在各自的文件夹内；NUS 下载内容（.app 文件）需要在同级目录下包含对应的 title.tmd 与解密密钥文件 title.tik。已安装相同或更新版本的内容将被忽略。\n\n开启此选项后将立即开始安装，进度以通知形式显示，当所有内容安装完毕且退出此菜单或更改其他选项时，该选项会自动关闭。重启后游戏将使用已安装的内容。\n\n其他路径的内容可通过 RetroArch 的“主菜单 > 加载内容”来安装：选中对应的 title.tmd 文件（需保证同级目录下存在 title.tik）即可。"
#define CEMU_UNINSTALL_TITLES_LABEL_CHS "卸载内容"
#define CEMU_UNINSTALL_TITLES_INFO_0_CHS "在游戏关闭或重置时，从模拟 Wii U 存储目录（saves/Cemu/mlc01/usr/title）中卸载当前运行游戏的更新补丁与 DLC；在此之前该选项保持开启。system/Cemu/titles 中的副本不会受影响。"
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CHS "安装后删除源文件"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CHS "警告：此选项会删除 system/Cemu/titles 中的文件，且操作不可逆。system/Cemu/titles 为核心管理的文件夹，请将转储文件的唯一副本备份在别处。\n\n通过“安装游戏”和“安装内容”成功安装后，自动删除 system/Cemu/titles 中的对应文件：已安装的更新补丁或 DLC 文件夹；以及当内部所有内容安装完毕后的光盘镜像或 .wua 文件（若仅使用“安装内容”，包含游戏本体的 .wua 文件将被保留）。正在运行的游戏所占用的文件将在游戏关闭或重置时被删除。通过“加载内容”方式加载的内容则保留在原路径。"
#define CEMU_WUA_OUTPUT_DIR_LABEL_CHS "导出输出目录"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CHS "导出生成的 .wua 文件的保存位置。需要保证有足够的存储空间。"
#define CEMU_CONVERT_TO_WUA_LABEL_CHS "开始转换为 WUA 格式"
#define CEMU_CONVERT_TO_WUA_INFO_0_CHS "将当前游戏打包写入指定输出目录为 .wua 归档文件。转换过程中游戏仍会正常维持运行。"

struct retro_core_option_v2_category option_cats_chs[] = {
	{ "video", CATEGORY_VIDEO_LABEL_CHS, CATEGORY_VIDEO_INFO_0_CHS },
	{ "shaders", CATEGORY_SHADERS_LABEL_CHS, CATEGORY_SHADERS_INFO_0_CHS },
	{ "screen", CATEGORY_SCREEN_LABEL_CHS, CATEGORY_SCREEN_INFO_0_CHS },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_CHS, CATEGORY_SYSTEM_INFO_0_CHS },
	{ "addons", CATEGORY_ADDONS_LABEL_CHS, CATEGORY_ADDONS_INFO_0_CHS },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_CHS, CATEGORY_ACCOUNTS_INFO_0_CHS },
	{ "install", CATEGORY_INSTALL_LABEL_CHS, CATEGORY_INSTALL_INFO_0_CHS },
	{ "convert", CATEGORY_CONVERT_LABEL_CHS, CATEGORY_CONVERT_INFO_0_CHS },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CHS, CATEGORY_GRAPHIC_PACKS_INFO_0_CHS },
	{ "cheats", CATEGORY_CHEATS_LABEL_CHS, CATEGORY_CHEATS_INFO_0_CHS },
	{ "logging", CATEGORY_LOGGING_LABEL_CHS, CATEGORY_LOGGING_INFO_0_CHS },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_CHS,
		NULL,
		CEMU_CPU_MODE_INFO_0_CHS,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_CHS },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_CHS },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_CHS },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_CHS },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_CHS },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_CHS },
			{ "Japanese", OPTION_VAL_JAPANESE_CHS },
			{ "French", OPTION_VAL_FRENCH_CHS },
			{ "German", OPTION_VAL_GERMAN_CHS },
			{ "Italian", OPTION_VAL_ITALIAN_CHS },
			{ "Spanish", OPTION_VAL_SPANISH_CHS },
			{ "Chinese", OPTION_VAL_CHINESE_CHS },
			{ "Korean", OPTION_VAL_KOREAN_CHS },
			{ "Dutch", OPTION_VAL_DUTCH_CHS },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_CHS },
			{ "Russian", OPTION_VAL_RUSSIAN_CHS },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_CHS },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_CHS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CHS,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CHS,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CHS },
			{ "bicubic", OPTION_VAL_BICUBIC_CHS },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CHS },
			{ "nearest", OPTION_VAL_NEAREST_CHS },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CHS },
			{ "bicubic", OPTION_VAL_BICUBIC_CHS },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CHS },
			{ "nearest", OPTION_VAL_NEAREST_CHS },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CHS,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CHS,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_CHS },
			{ "0.5x", OPTION_VAL_0_5X_CHS },
			{ "0.75x", OPTION_VAL_0_75X_CHS },
			{ "native", OPTION_VAL_NATIVE_CHS },
			{ "1.5x", OPTION_VAL_1_5X_CHS },
			{ "2x", OPTION_VAL_2X_CHS },
			{ "3x", OPTION_VAL_3X_CHS },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CHS,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CHS,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_CHS },
			{ "50", OPTION_VAL_50_CHS },
			{ "75", OPTION_VAL_75_CHS },
			{ "100", OPTION_VAL_100_CHS },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHS },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHS },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHS },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHS },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHS },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_CHS },
			{ "Select + L3", OPTION_VAL_SELECT_L3_CHS },
			{ "Select + R3", OPTION_VAL_SELECT_R3_CHS },
			{ "Tab", OPTION_VAL_TAB_CHS },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_CHS },
			{ "swapped", OPTION_VAL_SWAPPED_CHS },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_CHS,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_CHS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_CHS,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_CHS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_CHS,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_CHS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_CHS,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_CHS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_CHS,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_CHS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_CHS,
		NULL,
		CEMU_BC1_16BIT_INFO_0_CHS,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_CHS,
		NULL,
		CEMU_GPU_API_INFO_0_CHS,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CHS },
			{ "Vulkan", OPTION_VAL_VULKAN_CHS },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CHS,
		NULL,
		CEMU_ACCOUNT_INFO_0_CHS,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_CHS,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_CHS,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_CHS,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_CHS,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CHS,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CHS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_CHS,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_CHS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_CHS,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_CHS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_CHS,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_CHS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_CHS,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CHS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_CHS,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_CHS,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_CHS,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_CHS,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT "顯示"
#define CATEGORY_VIDEO_INFO_0_CHT NULL
#define CATEGORY_SHADERS_LABEL_CHT "著色器"
#define CATEGORY_SHADERS_INFO_0_CHT NULL
#define CATEGORY_SCREEN_LABEL_CHT NULL
#define CATEGORY_SCREEN_INFO_0_CHT NULL
#define CATEGORY_SYSTEM_LABEL_CHT "系統"
#define CATEGORY_SYSTEM_INFO_0_CHT NULL
#define CATEGORY_ADDONS_LABEL_CHT NULL
#define CATEGORY_ADDONS_INFO_0_CHT NULL
#define CATEGORY_ACCOUNTS_LABEL_CHT "帳號"
#define CATEGORY_ACCOUNTS_INFO_0_CHT NULL
#define CATEGORY_INSTALL_LABEL_CHT "媒體"
#define CATEGORY_INSTALL_INFO_0_CHT NULL
#define CATEGORY_CONVERT_LABEL_CHT NULL
#define CATEGORY_CONVERT_INFO_0_CHT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CHT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CHT NULL
#define CATEGORY_CHEATS_LABEL_CHT "金手指"
#define CATEGORY_CHEATS_INFO_0_CHT NULL
#define CATEGORY_LOGGING_LABEL_CHT "系統日誌"
#define CATEGORY_LOGGING_INFO_0_CHT NULL
#define CEMU_CPU_MODE_LABEL_CHT NULL
#define CEMU_CPU_MODE_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CHT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CHT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CHT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CHT NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_CHT NULL
#define OPTION_VAL_ENGLISH_CHT "英語"
#define OPTION_VAL_JAPANESE_CHT "日語"
#define OPTION_VAL_FRENCH_CHT "法語"
#define OPTION_VAL_GERMAN_CHT "德語"
#define OPTION_VAL_ITALIAN_CHT "意大利語"
#define OPTION_VAL_SPANISH_CHT "西班牙語"
#define OPTION_VAL_CHINESE_CHT NULL
#define OPTION_VAL_KOREAN_CHT NULL
#define OPTION_VAL_DUTCH_CHT NULL
#define OPTION_VAL_PORTUGUESE_CHT NULL
#define OPTION_VAL_RUSSIAN_CHT NULL
#define OPTION_VAL_TAIWANESE_CHT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CHT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CHT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CHT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CHT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CHT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CHT NULL
#define CEMU_UPSCALE_FILTER_LABEL_CHT NULL
#define OPTION_VAL_LINEAR_CHT "線性"
#define OPTION_VAL_BICUBIC_CHT "雙三次"
#define OPTION_VAL_BICUBIC_HERMITE_CHT NULL
#define OPTION_VAL_NEAREST_CHT "最近"
#define CEMU_DOWNSCALE_FILTER_LABEL_CHT NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_CHT "內部解析度"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CHT NULL
#define OPTION_VAL_0_25X_CHT NULL
#define OPTION_VAL_0_5X_CHT NULL
#define OPTION_VAL_0_75X_CHT NULL
#define OPTION_VAL_NATIVE_CHT "原始"
#define OPTION_VAL_1_5X_CHT NULL
#define OPTION_VAL_2X_CHT NULL
#define OPTION_VAL_3X_CHT NULL
#define CEMU_THREAD_QUANTUM_LABEL_CHT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CHT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CHT NULL
#define OPTION_VAL_25_CHT NULL
#define OPTION_VAL_50_CHT NULL
#define OPTION_VAL_75_CHT NULL
#define OPTION_VAL_100_CHT NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CHT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHT NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CHT NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_CHT NULL
#define OPTION_VAL_DEFAULT_SCREEN_CHT NULL
#define OPTION_VAL_GAMEPAD_SCREEN_CHT NULL
#define OPTION_VAL_SIDE_BY_SIDE_CHT NULL
#define OPTION_VAL_TOP_BOTTOM_CHT NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_CHT NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_CHT NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_CHT NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_CHT NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_CHT NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CHT NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_CHT NULL
#define OPTION_VAL_SELECT_L3_CHT NULL
#define OPTION_VAL_SELECT_R3_CHT NULL
#define OPTION_VAL_TAB_CHT NULL
#define CEMU_DRC_POSITION_LABEL_CHT NULL
#define OPTION_VAL_NORMAL_CHT "正常"
#define OPTION_VAL_SWAPPED_CHT NULL
#define CEMU_LOG_TO_FILE_LABEL_CHT NULL
#define CEMU_LOG_FILESYSTEM_LABEL_CHT NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_CHT NULL
#define CEMU_LOG_SYSTEM_API_LABEL_CHT NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CHT NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CHT NULL
#define CEMU_LOG_INPUT_API_LABEL_CHT NULL
#define CEMU_LOG_INPUT_API_INFO_0_CHT NULL
#define CEMU_LOG_AUDIO_LABEL_CHT NULL
#define CEMU_LOG_AUDIO_INFO_0_CHT NULL
#define CEMU_LOG_THREAD_TIME_LABEL_CHT NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_CHT NULL
#define CEMU_DUMP_SHADERS_LABEL_CHT NULL
#define CEMU_DUMP_SHADERS_INFO_0_CHT NULL
#define CEMU_BC1_16BIT_LABEL_CHT NULL
#define CEMU_BC1_16BIT_INFO_0_CHT NULL
#define CEMU_GPU_API_LABEL_CHT NULL
#define CEMU_GPU_API_INFO_0_CHT NULL
#define OPTION_VAL_OPENGL_CHT NULL
#define OPTION_VAL_VULKAN_CHT NULL
#define CEMU_ACCOUNT_LABEL_CHT NULL
#define CEMU_ACCOUNT_INFO_0_CHT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CHT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CHT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CHT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CHT NULL
#define CEMU_INSTALL_GAME_LABEL_CHT NULL
#define CEMU_INSTALL_GAME_INFO_0_CHT NULL
#define CEMU_UNINSTALL_GAME_LABEL_CHT NULL
#define CEMU_UNINSTALL_GAME_INFO_0_CHT NULL
#define CEMU_INSTALL_TITLES_LABEL_CHT NULL
#define CEMU_INSTALL_TITLES_INFO_0_CHT NULL
#define CEMU_UNINSTALL_TITLES_LABEL_CHT NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_CHT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CHT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CHT NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_CHT NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CHT NULL
#define CEMU_CONVERT_TO_WUA_LABEL_CHT NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
	{ "video", CATEGORY_VIDEO_LABEL_CHT, CATEGORY_VIDEO_INFO_0_CHT },
	{ "shaders", CATEGORY_SHADERS_LABEL_CHT, CATEGORY_SHADERS_INFO_0_CHT },
	{ "screen", CATEGORY_SCREEN_LABEL_CHT, CATEGORY_SCREEN_INFO_0_CHT },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_CHT, CATEGORY_SYSTEM_INFO_0_CHT },
	{ "addons", CATEGORY_ADDONS_LABEL_CHT, CATEGORY_ADDONS_INFO_0_CHT },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_CHT, CATEGORY_ACCOUNTS_INFO_0_CHT },
	{ "install", CATEGORY_INSTALL_LABEL_CHT, CATEGORY_INSTALL_INFO_0_CHT },
	{ "convert", CATEGORY_CONVERT_LABEL_CHT, CATEGORY_CONVERT_INFO_0_CHT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CHT, CATEGORY_GRAPHIC_PACKS_INFO_0_CHT },
	{ "cheats", CATEGORY_CHEATS_LABEL_CHT, CATEGORY_CHEATS_INFO_0_CHT },
	{ "logging", CATEGORY_LOGGING_LABEL_CHT, CATEGORY_LOGGING_INFO_0_CHT },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_CHT,
		NULL,
		CEMU_CPU_MODE_INFO_0_CHT,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_CHT },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_CHT },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_CHT },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_CHT },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_CHT },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_CHT },
			{ "Japanese", OPTION_VAL_JAPANESE_CHT },
			{ "French", OPTION_VAL_FRENCH_CHT },
			{ "German", OPTION_VAL_GERMAN_CHT },
			{ "Italian", OPTION_VAL_ITALIAN_CHT },
			{ "Spanish", OPTION_VAL_SPANISH_CHT },
			{ "Chinese", OPTION_VAL_CHINESE_CHT },
			{ "Korean", OPTION_VAL_KOREAN_CHT },
			{ "Dutch", OPTION_VAL_DUTCH_CHT },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_CHT },
			{ "Russian", OPTION_VAL_RUSSIAN_CHT },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_CHT },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_CHT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CHT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CHT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CHT },
			{ "bicubic", OPTION_VAL_BICUBIC_CHT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CHT },
			{ "nearest", OPTION_VAL_NEAREST_CHT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CHT },
			{ "bicubic", OPTION_VAL_BICUBIC_CHT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CHT },
			{ "nearest", OPTION_VAL_NEAREST_CHT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CHT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CHT,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_CHT },
			{ "0.5x", OPTION_VAL_0_5X_CHT },
			{ "0.75x", OPTION_VAL_0_75X_CHT },
			{ "native", OPTION_VAL_NATIVE_CHT },
			{ "1.5x", OPTION_VAL_1_5X_CHT },
			{ "2x", OPTION_VAL_2X_CHT },
			{ "3x", OPTION_VAL_3X_CHT },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CHT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CHT,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_CHT },
			{ "50", OPTION_VAL_50_CHT },
			{ "75", OPTION_VAL_75_CHT },
			{ "100", OPTION_VAL_100_CHT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHT },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHT },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHT },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHT },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CHT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CHT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CHT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CHT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CHT },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_CHT },
			{ "Select + L3", OPTION_VAL_SELECT_L3_CHT },
			{ "Select + R3", OPTION_VAL_SELECT_R3_CHT },
			{ "Tab", OPTION_VAL_TAB_CHT },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_CHT },
			{ "swapped", OPTION_VAL_SWAPPED_CHT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_CHT,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_CHT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_CHT,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_CHT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_CHT,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_CHT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_CHT,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_CHT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_CHT,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_CHT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_CHT,
		NULL,
		CEMU_BC1_16BIT_INFO_0_CHT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_CHT,
		NULL,
		CEMU_GPU_API_INFO_0_CHT,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CHT },
			{ "Vulkan", OPTION_VAL_VULKAN_CHT },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CHT,
		NULL,
		CEMU_ACCOUNT_INFO_0_CHT,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_CHT,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_CHT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_CHT,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_CHT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CHT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CHT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_CHT,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_CHT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_CHT,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_CHT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_CHT,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_CHT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_CHT,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CHT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_CHT,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_CHT,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_CHT,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_CHT,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS NULL
#define CATEGORY_SHADERS_LABEL_CS "Shadery"
#define CATEGORY_SHADERS_INFO_0_CS NULL
#define CATEGORY_SCREEN_LABEL_CS NULL
#define CATEGORY_SCREEN_INFO_0_CS NULL
#define CATEGORY_SYSTEM_LABEL_CS "Systém"
#define CATEGORY_SYSTEM_INFO_0_CS NULL
#define CATEGORY_ADDONS_LABEL_CS NULL
#define CATEGORY_ADDONS_INFO_0_CS NULL
#define CATEGORY_ACCOUNTS_LABEL_CS "Účty"
#define CATEGORY_ACCOUNTS_INFO_0_CS NULL
#define CATEGORY_INSTALL_LABEL_CS "Obsah"
#define CATEGORY_INSTALL_INFO_0_CS NULL
#define CATEGORY_CONVERT_LABEL_CS NULL
#define CATEGORY_CONVERT_INFO_0_CS NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CS NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CS NULL
#define CATEGORY_CHEATS_LABEL_CS "Cheaty"
#define CATEGORY_CHEATS_INFO_0_CS NULL
#define CATEGORY_LOGGING_LABEL_CS "Logování"
#define CATEGORY_LOGGING_INFO_0_CS NULL
#define CEMU_CPU_MODE_LABEL_CS NULL
#define CEMU_CPU_MODE_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_CS NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CS NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CS NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CS NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_CS NULL
#define OPTION_VAL_ENGLISH_CS "Angličtina"
#define OPTION_VAL_JAPANESE_CS "Japonština"
#define OPTION_VAL_FRENCH_CS "Francouzština"
#define OPTION_VAL_GERMAN_CS "Němčina"
#define OPTION_VAL_ITALIAN_CS "Italský"
#define OPTION_VAL_SPANISH_CS "Španělština"
#define OPTION_VAL_CHINESE_CS NULL
#define OPTION_VAL_KOREAN_CS NULL
#define OPTION_VAL_DUTCH_CS NULL
#define OPTION_VAL_PORTUGUESE_CS NULL
#define OPTION_VAL_RUSSIAN_CS NULL
#define OPTION_VAL_TAIWANESE_CS NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CS NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CS NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CS NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CS NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CS NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CS NULL
#define CEMU_UPSCALE_FILTER_LABEL_CS NULL
#define OPTION_VAL_LINEAR_CS "Lineární"
#define OPTION_VAL_BICUBIC_CS "Bikubická"
#define OPTION_VAL_BICUBIC_HERMITE_CS NULL
#define OPTION_VAL_NEAREST_CS "Nejbližší"
#define CEMU_DOWNSCALE_FILTER_LABEL_CS NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_CS "Vnitřní rozlišení"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CS NULL
#define OPTION_VAL_0_25X_CS NULL
#define OPTION_VAL_0_5X_CS NULL
#define OPTION_VAL_0_75X_CS NULL
#define OPTION_VAL_NATIVE_CS "Nativní"
#define OPTION_VAL_1_5X_CS NULL
#define OPTION_VAL_2X_CS NULL
#define OPTION_VAL_3X_CS NULL
#define CEMU_THREAD_QUANTUM_LABEL_CS NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CS NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CS NULL
#define OPTION_VAL_25_CS NULL
#define OPTION_VAL_50_CS NULL
#define OPTION_VAL_75_CS NULL
#define OPTION_VAL_100_CS NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CS NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CS NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CS NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CS NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_CS NULL
#define OPTION_VAL_DEFAULT_SCREEN_CS NULL
#define OPTION_VAL_GAMEPAD_SCREEN_CS NULL
#define OPTION_VAL_SIDE_BY_SIDE_CS NULL
#define OPTION_VAL_TOP_BOTTOM_CS NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_CS NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_CS NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_CS NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_CS NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_CS NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CS NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_CS NULL
#define OPTION_VAL_SELECT_L3_CS NULL
#define OPTION_VAL_SELECT_R3_CS NULL
#define OPTION_VAL_TAB_CS NULL
#define CEMU_DRC_POSITION_LABEL_CS NULL
#define OPTION_VAL_NORMAL_CS "Normální"
#define OPTION_VAL_SWAPPED_CS NULL
#define CEMU_LOG_TO_FILE_LABEL_CS NULL
#define CEMU_LOG_FILESYSTEM_LABEL_CS NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_CS NULL
#define CEMU_LOG_SYSTEM_API_LABEL_CS NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CS NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CS NULL
#define CEMU_LOG_INPUT_API_LABEL_CS NULL
#define CEMU_LOG_INPUT_API_INFO_0_CS NULL
#define CEMU_LOG_AUDIO_LABEL_CS NULL
#define CEMU_LOG_AUDIO_INFO_0_CS NULL
#define CEMU_LOG_THREAD_TIME_LABEL_CS NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_CS NULL
#define CEMU_DUMP_SHADERS_LABEL_CS NULL
#define CEMU_DUMP_SHADERS_INFO_0_CS NULL
#define CEMU_BC1_16BIT_LABEL_CS NULL
#define CEMU_BC1_16BIT_INFO_0_CS NULL
#define CEMU_GPU_API_LABEL_CS NULL
#define CEMU_GPU_API_INFO_0_CS NULL
#define OPTION_VAL_OPENGL_CS NULL
#define OPTION_VAL_VULKAN_CS NULL
#define CEMU_ACCOUNT_LABEL_CS NULL
#define CEMU_ACCOUNT_INFO_0_CS NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CS NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CS NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CS NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CS NULL
#define CEMU_INSTALL_GAME_LABEL_CS NULL
#define CEMU_INSTALL_GAME_INFO_0_CS NULL
#define CEMU_UNINSTALL_GAME_LABEL_CS NULL
#define CEMU_UNINSTALL_GAME_INFO_0_CS NULL
#define CEMU_INSTALL_TITLES_LABEL_CS NULL
#define CEMU_INSTALL_TITLES_INFO_0_CS NULL
#define CEMU_UNINSTALL_TITLES_LABEL_CS NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_CS NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CS NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CS NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_CS NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CS NULL
#define CEMU_CONVERT_TO_WUA_LABEL_CS NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
	{ "video", CATEGORY_VIDEO_LABEL_CS, CATEGORY_VIDEO_INFO_0_CS },
	{ "shaders", CATEGORY_SHADERS_LABEL_CS, CATEGORY_SHADERS_INFO_0_CS },
	{ "screen", CATEGORY_SCREEN_LABEL_CS, CATEGORY_SCREEN_INFO_0_CS },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_CS, CATEGORY_SYSTEM_INFO_0_CS },
	{ "addons", CATEGORY_ADDONS_LABEL_CS, CATEGORY_ADDONS_INFO_0_CS },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_CS, CATEGORY_ACCOUNTS_INFO_0_CS },
	{ "install", CATEGORY_INSTALL_LABEL_CS, CATEGORY_INSTALL_INFO_0_CS },
	{ "convert", CATEGORY_CONVERT_LABEL_CS, CATEGORY_CONVERT_INFO_0_CS },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CS, CATEGORY_GRAPHIC_PACKS_INFO_0_CS },
	{ "cheats", CATEGORY_CHEATS_LABEL_CS, CATEGORY_CHEATS_INFO_0_CS },
	{ "logging", CATEGORY_LOGGING_LABEL_CS, CATEGORY_LOGGING_INFO_0_CS },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_CS,
		NULL,
		CEMU_CPU_MODE_INFO_0_CS,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_CS },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_CS },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_CS },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_CS },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_CS },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_CS },
			{ "Japanese", OPTION_VAL_JAPANESE_CS },
			{ "French", OPTION_VAL_FRENCH_CS },
			{ "German", OPTION_VAL_GERMAN_CS },
			{ "Italian", OPTION_VAL_ITALIAN_CS },
			{ "Spanish", OPTION_VAL_SPANISH_CS },
			{ "Chinese", OPTION_VAL_CHINESE_CS },
			{ "Korean", OPTION_VAL_KOREAN_CS },
			{ "Dutch", OPTION_VAL_DUTCH_CS },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_CS },
			{ "Russian", OPTION_VAL_RUSSIAN_CS },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_CS },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_CS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CS,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CS,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CS },
			{ "bicubic", OPTION_VAL_BICUBIC_CS },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CS },
			{ "nearest", OPTION_VAL_NEAREST_CS },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CS },
			{ "bicubic", OPTION_VAL_BICUBIC_CS },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CS },
			{ "nearest", OPTION_VAL_NEAREST_CS },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CS,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CS,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_CS },
			{ "0.5x", OPTION_VAL_0_5X_CS },
			{ "0.75x", OPTION_VAL_0_75X_CS },
			{ "native", OPTION_VAL_NATIVE_CS },
			{ "1.5x", OPTION_VAL_1_5X_CS },
			{ "2x", OPTION_VAL_2X_CS },
			{ "3x", OPTION_VAL_3X_CS },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CS,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CS,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_CS },
			{ "50", OPTION_VAL_50_CS },
			{ "75", OPTION_VAL_75_CS },
			{ "100", OPTION_VAL_100_CS },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CS },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CS },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CS },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CS },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CS },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CS },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CS },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CS },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CS },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_CS },
			{ "Select + L3", OPTION_VAL_SELECT_L3_CS },
			{ "Select + R3", OPTION_VAL_SELECT_R3_CS },
			{ "Tab", OPTION_VAL_TAB_CS },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_CS },
			{ "swapped", OPTION_VAL_SWAPPED_CS },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_CS,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_CS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_CS,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_CS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_CS,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_CS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_CS,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_CS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_CS,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_CS,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_CS,
		NULL,
		CEMU_BC1_16BIT_INFO_0_CS,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_CS,
		NULL,
		CEMU_GPU_API_INFO_0_CS,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CS },
			{ "Vulkan", OPTION_VAL_VULKAN_CS },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CS,
		NULL,
		CEMU_ACCOUNT_INFO_0_CS,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_CS,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_CS,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_CS,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_CS,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CS,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_CS,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_CS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_CS,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_CS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_CS,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_CS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_CS,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CS,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_CS,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_CS,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_CS,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_CS,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_SHADERS_LABEL_CY NULL
#define CATEGORY_SHADERS_INFO_0_CY NULL
#define CATEGORY_SCREEN_LABEL_CY NULL
#define CATEGORY_SCREEN_INFO_0_CY NULL
#define CATEGORY_SYSTEM_LABEL_CY NULL
#define CATEGORY_SYSTEM_INFO_0_CY NULL
#define CATEGORY_ADDONS_LABEL_CY NULL
#define CATEGORY_ADDONS_INFO_0_CY NULL
#define CATEGORY_ACCOUNTS_LABEL_CY NULL
#define CATEGORY_ACCOUNTS_INFO_0_CY NULL
#define CATEGORY_INSTALL_LABEL_CY NULL
#define CATEGORY_INSTALL_INFO_0_CY NULL
#define CATEGORY_CONVERT_LABEL_CY NULL
#define CATEGORY_CONVERT_INFO_0_CY NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CY NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CY NULL
#define CATEGORY_CHEATS_LABEL_CY NULL
#define CATEGORY_CHEATS_INFO_0_CY NULL
#define CATEGORY_LOGGING_LABEL_CY "Logio"
#define CATEGORY_LOGGING_INFO_0_CY NULL
#define CEMU_CPU_MODE_LABEL_CY NULL
#define CEMU_CPU_MODE_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_CY NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CY NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CY NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CY NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_CY NULL
#define OPTION_VAL_ENGLISH_CY NULL
#define OPTION_VAL_JAPANESE_CY NULL
#define OPTION_VAL_FRENCH_CY NULL
#define OPTION_VAL_GERMAN_CY NULL
#define OPTION_VAL_ITALIAN_CY NULL
#define OPTION_VAL_SPANISH_CY NULL
#define OPTION_VAL_CHINESE_CY NULL
#define OPTION_VAL_KOREAN_CY NULL
#define OPTION_VAL_DUTCH_CY NULL
#define OPTION_VAL_PORTUGUESE_CY NULL
#define OPTION_VAL_RUSSIAN_CY NULL
#define OPTION_VAL_TAIWANESE_CY NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CY NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CY NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CY NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CY NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CY NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CY NULL
#define CEMU_UPSCALE_FILTER_LABEL_CY NULL
#define OPTION_VAL_LINEAR_CY NULL
#define OPTION_VAL_BICUBIC_CY NULL
#define OPTION_VAL_BICUBIC_HERMITE_CY NULL
#define OPTION_VAL_NEAREST_CY NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_CY NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_CY NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CY NULL
#define OPTION_VAL_0_25X_CY NULL
#define OPTION_VAL_0_5X_CY NULL
#define OPTION_VAL_0_75X_CY NULL
#define OPTION_VAL_NATIVE_CY NULL
#define OPTION_VAL_1_5X_CY NULL
#define OPTION_VAL_2X_CY NULL
#define OPTION_VAL_3X_CY NULL
#define CEMU_THREAD_QUANTUM_LABEL_CY NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CY NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CY NULL
#define OPTION_VAL_25_CY NULL
#define OPTION_VAL_50_CY NULL
#define OPTION_VAL_75_CY NULL
#define OPTION_VAL_100_CY NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CY NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CY NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CY NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CY NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_CY NULL
#define OPTION_VAL_DEFAULT_SCREEN_CY NULL
#define OPTION_VAL_GAMEPAD_SCREEN_CY NULL
#define OPTION_VAL_SIDE_BY_SIDE_CY NULL
#define OPTION_VAL_TOP_BOTTOM_CY NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_CY NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_CY NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_CY NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_CY NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_CY NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CY NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_CY NULL
#define OPTION_VAL_SELECT_L3_CY NULL
#define OPTION_VAL_SELECT_R3_CY NULL
#define OPTION_VAL_TAB_CY NULL
#define CEMU_DRC_POSITION_LABEL_CY NULL
#define OPTION_VAL_NORMAL_CY NULL
#define OPTION_VAL_SWAPPED_CY NULL
#define CEMU_LOG_TO_FILE_LABEL_CY NULL
#define CEMU_LOG_FILESYSTEM_LABEL_CY NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_CY NULL
#define CEMU_LOG_SYSTEM_API_LABEL_CY NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CY NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CY NULL
#define CEMU_LOG_INPUT_API_LABEL_CY NULL
#define CEMU_LOG_INPUT_API_INFO_0_CY NULL
#define CEMU_LOG_AUDIO_LABEL_CY NULL
#define CEMU_LOG_AUDIO_INFO_0_CY NULL
#define CEMU_LOG_THREAD_TIME_LABEL_CY NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_CY NULL
#define CEMU_DUMP_SHADERS_LABEL_CY NULL
#define CEMU_DUMP_SHADERS_INFO_0_CY NULL
#define CEMU_BC1_16BIT_LABEL_CY NULL
#define CEMU_BC1_16BIT_INFO_0_CY NULL
#define CEMU_GPU_API_LABEL_CY NULL
#define CEMU_GPU_API_INFO_0_CY NULL
#define OPTION_VAL_OPENGL_CY NULL
#define OPTION_VAL_VULKAN_CY NULL
#define CEMU_ACCOUNT_LABEL_CY NULL
#define CEMU_ACCOUNT_INFO_0_CY NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CY NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CY NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CY NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CY NULL
#define CEMU_INSTALL_GAME_LABEL_CY NULL
#define CEMU_INSTALL_GAME_INFO_0_CY NULL
#define CEMU_UNINSTALL_GAME_LABEL_CY NULL
#define CEMU_UNINSTALL_GAME_INFO_0_CY NULL
#define CEMU_INSTALL_TITLES_LABEL_CY NULL
#define CEMU_INSTALL_TITLES_INFO_0_CY NULL
#define CEMU_UNINSTALL_TITLES_LABEL_CY NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_CY NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CY NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CY NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_CY NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CY NULL
#define CEMU_CONVERT_TO_WUA_LABEL_CY NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
	{ "video", CATEGORY_VIDEO_LABEL_CY, CATEGORY_VIDEO_INFO_0_CY },
	{ "shaders", CATEGORY_SHADERS_LABEL_CY, CATEGORY_SHADERS_INFO_0_CY },
	{ "screen", CATEGORY_SCREEN_LABEL_CY, CATEGORY_SCREEN_INFO_0_CY },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_CY, CATEGORY_SYSTEM_INFO_0_CY },
	{ "addons", CATEGORY_ADDONS_LABEL_CY, CATEGORY_ADDONS_INFO_0_CY },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_CY, CATEGORY_ACCOUNTS_INFO_0_CY },
	{ "install", CATEGORY_INSTALL_LABEL_CY, CATEGORY_INSTALL_INFO_0_CY },
	{ "convert", CATEGORY_CONVERT_LABEL_CY, CATEGORY_CONVERT_INFO_0_CY },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CY, CATEGORY_GRAPHIC_PACKS_INFO_0_CY },
	{ "cheats", CATEGORY_CHEATS_LABEL_CY, CATEGORY_CHEATS_INFO_0_CY },
	{ "logging", CATEGORY_LOGGING_LABEL_CY, CATEGORY_LOGGING_INFO_0_CY },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_CY,
		NULL,
		CEMU_CPU_MODE_INFO_0_CY,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_CY },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_CY },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_CY },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_CY },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_CY },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_CY },
			{ "Japanese", OPTION_VAL_JAPANESE_CY },
			{ "French", OPTION_VAL_FRENCH_CY },
			{ "German", OPTION_VAL_GERMAN_CY },
			{ "Italian", OPTION_VAL_ITALIAN_CY },
			{ "Spanish", OPTION_VAL_SPANISH_CY },
			{ "Chinese", OPTION_VAL_CHINESE_CY },
			{ "Korean", OPTION_VAL_KOREAN_CY },
			{ "Dutch", OPTION_VAL_DUTCH_CY },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_CY },
			{ "Russian", OPTION_VAL_RUSSIAN_CY },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_CY },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_CY },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CY,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CY,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CY },
			{ "bicubic", OPTION_VAL_BICUBIC_CY },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CY },
			{ "nearest", OPTION_VAL_NEAREST_CY },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_CY },
			{ "bicubic", OPTION_VAL_BICUBIC_CY },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_CY },
			{ "nearest", OPTION_VAL_NEAREST_CY },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CY,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CY,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_CY },
			{ "0.5x", OPTION_VAL_0_5X_CY },
			{ "0.75x", OPTION_VAL_0_75X_CY },
			{ "native", OPTION_VAL_NATIVE_CY },
			{ "1.5x", OPTION_VAL_1_5X_CY },
			{ "2x", OPTION_VAL_2X_CY },
			{ "3x", OPTION_VAL_3X_CY },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CY,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CY,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_CY },
			{ "50", OPTION_VAL_50_CY },
			{ "75", OPTION_VAL_75_CY },
			{ "100", OPTION_VAL_100_CY },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CY },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CY },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CY },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CY },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CY },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CY },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CY },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CY },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CY },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CY },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CY },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CY },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CY },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CY },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CY },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CY },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CY },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CY },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CY },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CY },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_CY },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_CY },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_CY },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_CY },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_CY },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_CY },
			{ "Select + L3", OPTION_VAL_SELECT_L3_CY },
			{ "Select + R3", OPTION_VAL_SELECT_R3_CY },
			{ "Tab", OPTION_VAL_TAB_CY },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_CY },
			{ "swapped", OPTION_VAL_SWAPPED_CY },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_CY,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_CY,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_CY,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_CY,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_CY,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_CY,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_CY,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_CY,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_CY,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_CY,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_CY,
		NULL,
		CEMU_BC1_16BIT_INFO_0_CY,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_CY,
		NULL,
		CEMU_GPU_API_INFO_0_CY,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CY },
			{ "Vulkan", OPTION_VAL_VULKAN_CY },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CY,
		NULL,
		CEMU_ACCOUNT_INFO_0_CY,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_CY,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_CY,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_CY,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_CY,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CY,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CY,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_CY,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_CY,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_CY,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_CY,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_CY,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_CY,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_CY,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CY,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_CY,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_CY,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_CY,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_CY,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_SHADERS_LABEL_DA NULL
#define CATEGORY_SHADERS_INFO_0_DA NULL
#define CATEGORY_SCREEN_LABEL_DA NULL
#define CATEGORY_SCREEN_INFO_0_DA NULL
#define CATEGORY_SYSTEM_LABEL_DA NULL
#define CATEGORY_SYSTEM_INFO_0_DA NULL
#define CATEGORY_ADDONS_LABEL_DA NULL
#define CATEGORY_ADDONS_INFO_0_DA NULL
#define CATEGORY_ACCOUNTS_LABEL_DA NULL
#define CATEGORY_ACCOUNTS_INFO_0_DA NULL
#define CATEGORY_INSTALL_LABEL_DA NULL
#define CATEGORY_INSTALL_INFO_0_DA NULL
#define CATEGORY_CONVERT_LABEL_DA NULL
#define CATEGORY_CONVERT_INFO_0_DA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_DA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_DA NULL
#define CATEGORY_CHEATS_LABEL_DA NULL
#define CATEGORY_CHEATS_INFO_0_DA NULL
#define CATEGORY_LOGGING_LABEL_DA "Logning"
#define CATEGORY_LOGGING_INFO_0_DA NULL
#define CEMU_CPU_MODE_LABEL_DA NULL
#define CEMU_CPU_MODE_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_DA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_DA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_DA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_DA NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_DA NULL
#define OPTION_VAL_ENGLISH_DA NULL
#define OPTION_VAL_JAPANESE_DA NULL
#define OPTION_VAL_FRENCH_DA NULL
#define OPTION_VAL_GERMAN_DA NULL
#define OPTION_VAL_ITALIAN_DA NULL
#define OPTION_VAL_SPANISH_DA NULL
#define OPTION_VAL_CHINESE_DA NULL
#define OPTION_VAL_KOREAN_DA NULL
#define OPTION_VAL_DUTCH_DA NULL
#define OPTION_VAL_PORTUGUESE_DA NULL
#define OPTION_VAL_RUSSIAN_DA NULL
#define OPTION_VAL_TAIWANESE_DA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_DA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_DA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_DA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_DA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_DA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_DA NULL
#define CEMU_UPSCALE_FILTER_LABEL_DA NULL
#define OPTION_VAL_LINEAR_DA NULL
#define OPTION_VAL_BICUBIC_DA NULL
#define OPTION_VAL_BICUBIC_HERMITE_DA NULL
#define OPTION_VAL_NEAREST_DA NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_DA NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_DA NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_DA NULL
#define OPTION_VAL_0_25X_DA NULL
#define OPTION_VAL_0_5X_DA NULL
#define OPTION_VAL_0_75X_DA NULL
#define OPTION_VAL_NATIVE_DA NULL
#define OPTION_VAL_1_5X_DA NULL
#define OPTION_VAL_2X_DA NULL
#define OPTION_VAL_3X_DA NULL
#define CEMU_THREAD_QUANTUM_LABEL_DA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_DA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_DA NULL
#define OPTION_VAL_25_DA NULL
#define OPTION_VAL_50_DA NULL
#define OPTION_VAL_75_DA NULL
#define OPTION_VAL_100_DA NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_DA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DA NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_DA NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_DA NULL
#define OPTION_VAL_DEFAULT_SCREEN_DA NULL
#define OPTION_VAL_GAMEPAD_SCREEN_DA NULL
#define OPTION_VAL_SIDE_BY_SIDE_DA NULL
#define OPTION_VAL_TOP_BOTTOM_DA NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_DA NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_DA NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_DA NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_DA NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_DA NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_DA NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_DA NULL
#define OPTION_VAL_SELECT_L3_DA NULL
#define OPTION_VAL_SELECT_R3_DA NULL
#define OPTION_VAL_TAB_DA NULL
#define CEMU_DRC_POSITION_LABEL_DA NULL
#define OPTION_VAL_NORMAL_DA NULL
#define OPTION_VAL_SWAPPED_DA NULL
#define CEMU_LOG_TO_FILE_LABEL_DA NULL
#define CEMU_LOG_FILESYSTEM_LABEL_DA NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_DA NULL
#define CEMU_LOG_SYSTEM_API_LABEL_DA NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_DA NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_DA NULL
#define CEMU_LOG_INPUT_API_LABEL_DA NULL
#define CEMU_LOG_INPUT_API_INFO_0_DA NULL
#define CEMU_LOG_AUDIO_LABEL_DA NULL
#define CEMU_LOG_AUDIO_INFO_0_DA NULL
#define CEMU_LOG_THREAD_TIME_LABEL_DA NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_DA NULL
#define CEMU_DUMP_SHADERS_LABEL_DA NULL
#define CEMU_DUMP_SHADERS_INFO_0_DA NULL
#define CEMU_BC1_16BIT_LABEL_DA NULL
#define CEMU_BC1_16BIT_INFO_0_DA NULL
#define CEMU_GPU_API_LABEL_DA NULL
#define CEMU_GPU_API_INFO_0_DA NULL
#define OPTION_VAL_OPENGL_DA NULL
#define OPTION_VAL_VULKAN_DA NULL
#define CEMU_ACCOUNT_LABEL_DA NULL
#define CEMU_ACCOUNT_INFO_0_DA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_DA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_DA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_DA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_DA NULL
#define CEMU_INSTALL_GAME_LABEL_DA NULL
#define CEMU_INSTALL_GAME_INFO_0_DA NULL
#define CEMU_UNINSTALL_GAME_LABEL_DA NULL
#define CEMU_UNINSTALL_GAME_INFO_0_DA NULL
#define CEMU_INSTALL_TITLES_LABEL_DA NULL
#define CEMU_INSTALL_TITLES_INFO_0_DA NULL
#define CEMU_UNINSTALL_TITLES_LABEL_DA NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_DA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_DA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_DA NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_DA NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_DA NULL
#define CEMU_CONVERT_TO_WUA_LABEL_DA NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
	{ "video", CATEGORY_VIDEO_LABEL_DA, CATEGORY_VIDEO_INFO_0_DA },
	{ "shaders", CATEGORY_SHADERS_LABEL_DA, CATEGORY_SHADERS_INFO_0_DA },
	{ "screen", CATEGORY_SCREEN_LABEL_DA, CATEGORY_SCREEN_INFO_0_DA },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_DA, CATEGORY_SYSTEM_INFO_0_DA },
	{ "addons", CATEGORY_ADDONS_LABEL_DA, CATEGORY_ADDONS_INFO_0_DA },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_DA, CATEGORY_ACCOUNTS_INFO_0_DA },
	{ "install", CATEGORY_INSTALL_LABEL_DA, CATEGORY_INSTALL_INFO_0_DA },
	{ "convert", CATEGORY_CONVERT_LABEL_DA, CATEGORY_CONVERT_INFO_0_DA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_DA, CATEGORY_GRAPHIC_PACKS_INFO_0_DA },
	{ "cheats", CATEGORY_CHEATS_LABEL_DA, CATEGORY_CHEATS_INFO_0_DA },
	{ "logging", CATEGORY_LOGGING_LABEL_DA, CATEGORY_LOGGING_INFO_0_DA },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_DA,
		NULL,
		CEMU_CPU_MODE_INFO_0_DA,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_DA },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_DA },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_DA },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_DA },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_DA },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_DA },
			{ "Japanese", OPTION_VAL_JAPANESE_DA },
			{ "French", OPTION_VAL_FRENCH_DA },
			{ "German", OPTION_VAL_GERMAN_DA },
			{ "Italian", OPTION_VAL_ITALIAN_DA },
			{ "Spanish", OPTION_VAL_SPANISH_DA },
			{ "Chinese", OPTION_VAL_CHINESE_DA },
			{ "Korean", OPTION_VAL_KOREAN_DA },
			{ "Dutch", OPTION_VAL_DUTCH_DA },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_DA },
			{ "Russian", OPTION_VAL_RUSSIAN_DA },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_DA },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_DA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_DA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_DA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_DA },
			{ "bicubic", OPTION_VAL_BICUBIC_DA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_DA },
			{ "nearest", OPTION_VAL_NEAREST_DA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_DA },
			{ "bicubic", OPTION_VAL_BICUBIC_DA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_DA },
			{ "nearest", OPTION_VAL_NEAREST_DA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_DA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_DA,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_DA },
			{ "0.5x", OPTION_VAL_0_5X_DA },
			{ "0.75x", OPTION_VAL_0_75X_DA },
			{ "native", OPTION_VAL_NATIVE_DA },
			{ "1.5x", OPTION_VAL_1_5X_DA },
			{ "2x", OPTION_VAL_2X_DA },
			{ "3x", OPTION_VAL_3X_DA },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_DA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_DA,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_DA },
			{ "50", OPTION_VAL_50_DA },
			{ "75", OPTION_VAL_75_DA },
			{ "100", OPTION_VAL_100_DA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DA },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DA },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DA },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DA },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DA },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_DA },
			{ "Select + L3", OPTION_VAL_SELECT_L3_DA },
			{ "Select + R3", OPTION_VAL_SELECT_R3_DA },
			{ "Tab", OPTION_VAL_TAB_DA },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_DA },
			{ "swapped", OPTION_VAL_SWAPPED_DA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_DA,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_DA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_DA,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_DA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_DA,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_DA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_DA,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_DA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_DA,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_DA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_DA,
		NULL,
		CEMU_BC1_16BIT_INFO_0_DA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_DA,
		NULL,
		CEMU_GPU_API_INFO_0_DA,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_DA },
			{ "Vulkan", OPTION_VAL_VULKAN_DA },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_DA,
		NULL,
		CEMU_ACCOUNT_INFO_0_DA,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_DA,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_DA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_DA,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_DA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_DA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_DA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_DA,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_DA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_DA,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_DA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_DA,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_DA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_DA,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_DA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_DA,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_DA,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_DA,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_DA,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE "Auflösung, Skalierung und Frame Pacing."
#define CATEGORY_SHADERS_LABEL_DE "Shader"
#define CATEGORY_SHADERS_INFO_0_DE "Shader-Übersetzung, -Caching und -Kompilierung."
#define CATEGORY_SCREEN_LABEL_DE "Bildschirm"
#define CATEGORY_SCREEN_INFO_0_DE "Welcher Wii-U-Bildschirm angezeigt wird und wie."
#define CATEGORY_SYSTEM_LABEL_DE NULL
#define CATEGORY_SYSTEM_INFO_0_DE "CPU, Sprache und Thread-Zuweisung."
#define CATEGORY_ADDONS_LABEL_DE NULL
#define CATEGORY_ADDONS_INFO_0_DE "Portale für Skylanders, Infinity und Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_DE "Benutzerkonten"
#define CATEGORY_ACCOUNTS_INFO_0_DE "Konten im Kontenverzeichnis der Wii U verwalten (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_DE "Inhalts-Icons"
#define CATEGORY_INSTALL_INFO_0_DE "Spiele, Titel-Updates und DLC in saves/Cemu/mlc01 verwalten, dem Speicher der emulierten Konsole."
#define CATEGORY_CONVERT_LABEL_DE "In WUA konvertieren"
#define CATEGORY_CONVERT_INFO_0_DE "Den geladenen Titel als .wua-Archiv speichern."
#define CATEGORY_GRAPHIC_PACKS_LABEL_DE "Grafikpakete"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_DE "Die Grafikpakete des geladenen Spiels und ihre Voreinstellungen. Änderungen werden beim nächsten Laden des Spiels wirksam."
#define CATEGORY_CHEATS_LABEL_DE NULL
#define CATEGORY_CHEATS_INFO_0_DE "Die Cheat-Pakete des geladenen Spiels aus dem Cheats-Ordner der Grafikpakete. Änderungen werden beim nächsten Laden des Spiels wirksam."
#define CATEGORY_LOGGING_LABEL_DE "Protokollierung"
#define CATEGORY_LOGGING_INFO_0_DE "Zusätzliche Protokollausgabe zur Diagnose von Problemen."
#define CEMU_CPU_MODE_LABEL_DE "CPU-Modus"
#define CEMU_CPU_MODE_INFO_0_DE "So werden die PowerPC-Kerne der Wii U emuliert. Die Option „Automatsch“ wählt den Multicore-Recompiler, wenn die CPU über vier oder mehr physische Kerne verfügt, andernfalls den Single-Core-Recompiler. Die Interpreter sind deutlich langsamer und sind für die Fehlersuche gedacht. (Neustart erforderlich)"
#define OPTION_VAL_AUTO_DE NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_DE "Einzelkern-Interpreter"
#define OPTION_VAL_SINGLECORE_RECOMPILER_DE "Einzelkern-Recompiler"
#define OPTION_VAL_MULTICORE_RECOMPILER_DE "Mehrkern-Recompiler"
#define OPTION_VAL_MULTICORE_INTERPRETER_DE "Mehrkern-Interpreter"
#define CEMU_CONSOLE_LANGUAGE_LABEL_DE "Konsolensprache"
#define OPTION_VAL_ENGLISH_DE "Englisch"
#define OPTION_VAL_JAPANESE_DE "Japanisch"
#define OPTION_VAL_FRENCH_DE "Französisch"
#define OPTION_VAL_GERMAN_DE "Deutsch"
#define OPTION_VAL_ITALIAN_DE "Italienisch"
#define OPTION_VAL_SPANISH_DE "Spanisch"
#define OPTION_VAL_CHINESE_DE "Chinesisch"
#define OPTION_VAL_KOREAN_DE "Koreanisch"
#define OPTION_VAL_DUTCH_DE "Niederländisch"
#define OPTION_VAL_PORTUGUESE_DE "Portugiesisch"
#define OPTION_VAL_RUSSIAN_DE "Russisch"
#define OPTION_VAL_TAIWANESE_DE "Taiwanesisch"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_DE "Asynchrone Shader-Kompilierung"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_DE "GX2DrawDone-Synchronisierung"
#define CEMU_PRECOMPILED_SHADERS_LABEL_DE "Vorkompilierte Shader"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_DE "Präzise Shader-Multiplikation"
#define CEMU_SHOW_GAME_FPS_LABEL_DE "Spiel-FPS anzeigen"
#define CEMU_SHOW_GAME_FPS_INFO_0_DE "Zeigt die Bildrate an, mit der das Spiel rendert. Der eigene FPS-Zähler von RetroArch zählt, wie oft der Core ausgeführt wird, und bleibt bei 60, wenn das Spiel Frames auslässt, da jeder Durchlauf die Audiomenge eines Frames enthält."
#define CEMU_UPSCALE_FILTER_LABEL_DE "Hochskalierungsfilter"
#define OPTION_VAL_LINEAR_DE NULL
#define OPTION_VAL_BICUBIC_DE "Bikubisch"
#define OPTION_VAL_BICUBIC_HERMITE_DE "Bikubisch-Hermite"
#define OPTION_VAL_NEAREST_DE "Nächster"
#define CEMU_DOWNSCALE_FILTER_LABEL_DE "Downscale-Filter"
#define CEMU_INTERNAL_RESOLUTION_LABEL_DE "Interne Auflösung"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_DE "Allgemeine Ersatzlösung für Spiele ohne Grafikpaket zur Auflösungsanpassung: Ändert die Größe jedes bildschirmgroßen Renderziels. Manche Spiele verwenden solche Renderziele für Elemente, die bei einer Größenänderung nicht mehr funktionieren. Die Auflösung wird als Vielfaches der spielinternen Auflösung festgelegt: Bei einem 720p-Spiel entspricht 0,5× einer Auflösung von 640 × 360 (einem Viertel der Pixelanzahl) und 2× einer Auflösung von 2560 × 1440. Bei einem 1080p-Spiel entspricht 0,5× einer Auflösung von 960 × 540.  Wenn für das geladene Spiel ein Auflösungspaket unter „Grafikpakete“ aktiviert ist, legt dieses die Auflösung fest und diese Option wird ausgeblende"
#define OPTION_VAL_0_25X_DE "0,25× (320×180 bei 720p)"
#define OPTION_VAL_0_5X_DE "0,5× (640×360 bei 720p)"
#define OPTION_VAL_0_75X_DE "0.75× (960×540 bei 720p)"
#define OPTION_VAL_NATIVE_DE "Nativ"
#define OPTION_VAL_1_5X_DE "1,5× (1920×1080 bei 720p)"
#define OPTION_VAL_2X_DE "2× (2560 × 1440 bei 720p)"
#define OPTION_VAL_3X_DE "3× (3840 × 2160 bei 720p)"
#define CEMU_THREAD_QUANTUM_LABEL_DE "Thread-Zeitquantum"
#define CEMU_RUMBLE_STRENGTH_LABEL_DE "Vibrationsstärke"
#define CEMU_RUMBLE_STRENGTH_INFO_0_DE "Wie stark der Controller vibriert, wenn das Spiel dies anfordert: sowohl der Motor des GamePads als auch der Motor der Wii-Fernbedienung bzw. des Pro Controllers. Bei „Aus“ werden vom Frontend überhaupt keine Vibrationssignale gesendet."
#define OPTION_VAL_25_DE "25 %"
#define OPTION_VAL_50_DE "50 %"
#define OPTION_VAL_75_DE "75 %"
#define OPTION_VAL_100_DE "100 %"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DE "Skylanders Portal of Power emulieren"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_DE "Infinity Base emulieren"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DE "Dimensions Toy Pad emulieren"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_DE "Anzahl der Bildschirmlayouts"
#define CEMU_SCREEN_LAYOUT1_LABEL_DE NULL
#define OPTION_VAL_DEFAULT_SCREEN_DE "Standardbildschirm"
#define OPTION_VAL_GAMEPAD_SCREEN_DE "GamePad-Bildschirm"
#define OPTION_VAL_SIDE_BY_SIDE_DE "Nebeneinander"
#define OPTION_VAL_TOP_BOTTOM_DE "Übereinander"
#define OPTION_VAL_PICTURE_IN_PICTURE_DE "Bild in Bild (PiP)"
#define CEMU_SCREEN_LAYOUT2_LABEL_DE NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_DE NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_DE NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_DE NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_DE "Nächstes Bildschirmlayout"
#define OPTION_VAL_L_R_L2_R2_L3_R3_DE NULL
#define OPTION_VAL_SELECT_L3_DE NULL
#define OPTION_VAL_SELECT_R3_DE NULL
#define OPTION_VAL_TAB_DE NULL
#define CEMU_DRC_POSITION_LABEL_DE "GamePad-Position"
#define OPTION_VAL_NORMAL_DE NULL
#define OPTION_VAL_SWAPPED_DE "Vertauscht"
#define CEMU_LOG_TO_FILE_LABEL_DE "Cemu-Log in log.txt schreiben"
#define CEMU_LOG_FILESYSTEM_LABEL_DE "Dateizugriffe protokollieren (Debugging)"
#define CEMU_LOG_THREAD_SYNC_LABEL_DE "Thread-Synchronisierung protokollieren (Debugging)"
#define CEMU_LOG_SYSTEM_API_LABEL_DE "System-API-Aufrufe protokollieren (Debugging)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_DE "Texturspeicher protokollieren (Debugging)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_DE "Gibt an, wie viel des Texturspeichers aus BC besteht, der dekomprimiert werden musste, da diese GPU ihn nicht abtasten kann."
#define CEMU_LOG_INPUT_API_LABEL_DE "Controller-API-Aufrufe protokollieren (Debugging)"
#define CEMU_LOG_INPUT_API_INFO_0_DE "Protokolliert jeden Controlleraufruf, den ein Titel auslöst – welche Pads er abgefragt hat und welche Rückmeldung er erhalten hat. Erzeugt viel Datenverkehr; jeweils für einige Sekunden."
#define CEMU_LOG_AUDIO_LABEL_DE "Audio- und Frame-Pacing protokollieren (Debug)"
#define CEMU_LOG_AUDIO_INFO_0_DE "Einmal pro Sekunde wird erfasst, wie viele Samples AX erzeugt hat, wie viele der Ringpuffer verwerfen musste und wie viele das Frontend abgerufen hat. Außerdem wird erfasst, wie oft das Frontend den Core ausgeführt hat, wie viele Frames der Titel abgeschlossen hat und wofür die Zeit aufgewendet wurde (Warten auf den GPU-Thread, Präsentation, Audio). So lässt sich herausfinden, ob ein langsames Spiel durch die emulierte CPU, die GPU oder das Frontend ausgebremst wird."
#define CEMU_LOG_THREAD_TIME_LABEL_DE "Thread-CPU-Zeit protokollieren (Debuggen)"
#define CEMU_LOG_THREAD_TIME_INFO_0_DE "Einmal pro Sekunde wird erfasst, wie stark die Threads der emulierten PowerPC-Kerne, der GPU-Thread und der Frontend-Thread ausgelastet waren – jeweils als Anteil der Auslastung eines Host-Kerns. Ein Thread mit nahezu 100 % Auslastung ist derjenige, auf den ein langsames Spiel wartet."
#define CEMU_DUMP_SHADERS_LABEL_DE "Shader dumpen (Debuggen)"
#define CEMU_DUMP_SHADERS_INFO_0_DE "Schreibt den Quelltext jedes vom Spiel verwendeten Shaders nach system/Cemu/dump/shaders. Die Dateien werden nach ihren Hashes benannt, wie sie in log.txt erscheinen. Zum Melden von Shadern, die auf einer bestimmten GPU fehlschlagen oder fehlerhaft dargestellt werden. Verlangsamt die Shader-Kompilierung und füllt den Ordner schnell, daher anschließend wieder deaktivieren."
#define CEMU_BC1_16BIT_LABEL_DE "BC1-Texturspeicher reduzieren"
#define CEMU_BC1_16BIT_INFO_0_DE "Halbiert den Speicherbedarf von BC1-Texturen auf GPUs, die BC nicht abtasten können, auf Kosten eines Bits im Grünkanal. Hat keine Auswirkungen, wenn BC unterstützt wird."
#define CEMU_GPU_API_LABEL_DE "Grafik-API"
#define CEMU_GPU_API_INFO_0_DE "Die Grafik-API, mit der Cemu rendert. (Neustart erforderlich)"
#define OPTION_VAL_OPENGL_DE NULL
#define OPTION_VAL_VULKAN_DE NULL
#define CEMU_ACCOUNT_LABEL_DE "Aktives Konto"
#define CEMU_ACCOUNT_INFO_0_DE "Das Wii-U-Konto, unter dem das Spiel ausgeführt wird, jeweils mit eigenen Spielständen und eigenem Mii. Die Liste enthält die Konten im Kontenverzeichnis.\n\nEine Änderung wird wirksam, wenn der Titel beendet und neu gestartet oder zurückgesetzt wird. Bis dahin speichert der laufende Titel weiterhin in dem Konto, mit dem er gestartet wurde."
#define CEMU_CREATE_ACCOUNT_LABEL_DE "Konto erstellen"
#define CEMU_CREATE_ACCOUNT_INFO_0_DE "Erstellt ein neues Konto mit der Bezeichnung „Player 2“, „Player 3“ usw. und macht es zum aktiven Konto. Anschließend wird diese Option wieder auf „Aus“ gesetzt. Die Konsole kann bis zu 12 Konten verwalten."
#define CEMU_REMOVE_ACCOUNT_LABEL_DE "Konto entfernen"
#define CEMU_REMOVE_ACCOUNT_INFO_0_DE "WARNUNG: Durch das Entfernen eines Kontos werden auch dessen Speicherdaten in allen Spielen gelöscht. Dieser Vorgang kann nicht rückgängig gemacht werden.\n\nEntfernt das ausgewählte Konto wie beim Löschen eines Benutzers auf der Konsole: Das Konto wird aus dem Kontoverzeichnis und seine Spielstände werden aus den Speicherordnern aller Titel entfernt. Das Konto wird beim Verlassen des Menüs entfernt; anschließend wird diese Option wieder auf AUS gesetzt.\n\nDas aktive Konto kann nicht entfernt werden. Ebenso wenig kann das Konto entfernt werden, mit dem das laufende Spiel gestartet wurde, solange das Spiel nicht geschlossen ist. Daher kann das letzte Konto nicht entfernt werden."
#define CEMU_INSTALL_GAME_LABEL_DE "Spiele installieren"
#define CEMU_INSTALL_GAME_INFO_0_DE "Installiert alle Spiele aus system/Cemu/titles einschließlich aller Unterordner in das Verzeichnis für installierte Spiele der emulierten Wii U (saves/Cemu/mlc01/usr/title/00050000), so wie die Konsole ein Spiel von einer Disc installiert. Ein Spiel ist ein Disc-Image (.wud, .wux, .iso) oder eine .wua-Datei. Darin enthaltene Titelupdates und DLC werden ebenfalls installiert. Ein Spiel, das bereits in derselben oder einer neueren Version installiert ist, bleibt unverändert.\n\nWenn diese Option auf EIN steht, beginnt die Installation sofort. Der Fortschritt wird als Benachrichtigung angezeigt. Die Option wird wieder auf AUS gesetzt, sobald alle Spiele installiert sind. Ein installiertes Spiel wird gestartet, indem die .rpx-Datei im code-Ordner des Spiels im Verzeichnis für installierte Spiele geladen wird. Das Disc-Image wird dafür nicht mehr benötigt."
#define CEMU_UNINSTALL_GAME_LABEL_DE "Spiel deinstallieren"
#define CEMU_UNINSTALL_GAME_INFO_0_DE "Deinstalliert das laufende Spiel aus dem Verzeichnis für installierte Spiele (saves/Cemu/mlc01/usr/title/00050000), sobald das Spiel beendet oder zurückgesetzt wurde, einschließlich des installierten Updates und DLCs; bis dahin bleibt die Option auf EIN. Die Spielstände sowie das Disk-Image oder die .wua-Datei, aus dem beziehungsweise der das Spiel installiert wurde, bleiben erhalten."
#define CEMU_INSTALL_TITLES_LABEL_DE "Inhalt installieren"
#define CEMU_INSTALL_TITLES_INFO_0_DE "Installiert alle Titelupdates und DLC aus system/Cemu/titles einschließlich aller Unterordner in den Speicher der emulierten Wii U (saves/Cemu/mlc01/usr/title). Jedes Update und jedes DLC muss sich in einem eigenen Ordner in system/Cemu/titles befinden. Für einen NUS-Download (.app-Dateien) müssen die zugehörigen title.tmd und title.tik sowie der Entschlüsselungsschlüssel danebenliegen. Eine bereits installierte Version, die gleich oder neuer ist, bleibt unverändert.\n\nWenn diese Option auf EIN steht, beginnt die Installation sofort. Der Fortschritt wird als Benachrichtigung angezeigt. Die Option wird wieder auf AUS gesetzt, sobald alle Inhalte installiert sind und dieses Menü verlassen oder eine andere Option geändert wird. Nach einem Neustart verwendet das Spiel die installierten Inhalte.\n\nInhalte von anderen Speicherorten lassen sich über RetroArchs „Hauptmenü“ > „Inhalte laden“ installieren. Dazu die zugehörige title.tmd auswählen; die title.tik muss danebenliegen."
#define CEMU_UNINSTALL_TITLES_LABEL_DE "Inhalt deinstallieren"
#define CEMU_UNINSTALL_TITLES_INFO_0_DE "Deinstalliert das Titelupdate und die DLC des laufenden Spiels aus dem Speicher der emulierten Wii U (saves/Cemu/mlc01/usr/title), sobald das Spiel geschlossen oder zurückgesetzt wird. Die Option bleibt bis dahin auf EIN. Kopien in system/Cemu/titles bleiben unberührt."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_DE "Dateien nach der Installation entfernen"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_DE "WARNUNG: Dadurch werden Dateien aus system/Cemu/titles gelöscht. Dieser Vorgang kann nicht rückgängig gemacht werden. system/Cemu/titles ist ein Ordner, der vom Core verwaltet wird. Die einzige Kopie eines Dumps sollte an anderer Stelle aufbewahrt werden.\n\nLöscht aus system/Cemu/titles alle Dateien, die über „Spiele installieren“ und „Inhalte installieren“ dort installiert wurden: einen Ordner mit einem Titel-Update oder DLC nach dessen Installation sowie ein Disc-Image oder eine .wua-Datei, sobald alle darin enthaltenen Inhalte installiert sind („Inhalte installieren“ allein lässt eine .wua-Datei zurück, die auch das Spiel enthält). Vom laufenden Spiel verwendete Dateien werden gelöscht, sobald es geschlossen oder zurückgesetzt wird. Über „Inhalte laden“ geladene Inhalte bleiben an ihrem Speicherort."
#define CEMU_WUA_OUTPUT_DIR_LABEL_DE "Ausgabeverzeichnis"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_DE "Wohin die .wua-Datei gespeichert wird. Dafür muss Speicherplatz vorhanden sein."
#define CEMU_CONVERT_TO_WUA_LABEL_DE "Konvertierung in WUA starten"
#define CEMU_CONVERT_TO_WUA_INFO_0_DE "Schreibt den Titel als .wua in das Ausgabeverzeichnis. Der Titel läuft währenddessen weiter."

struct retro_core_option_v2_category option_cats_de[] = {
	{ "video", CATEGORY_VIDEO_LABEL_DE, CATEGORY_VIDEO_INFO_0_DE },
	{ "shaders", CATEGORY_SHADERS_LABEL_DE, CATEGORY_SHADERS_INFO_0_DE },
	{ "screen", CATEGORY_SCREEN_LABEL_DE, CATEGORY_SCREEN_INFO_0_DE },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_DE, CATEGORY_SYSTEM_INFO_0_DE },
	{ "addons", CATEGORY_ADDONS_LABEL_DE, CATEGORY_ADDONS_INFO_0_DE },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_DE, CATEGORY_ACCOUNTS_INFO_0_DE },
	{ "install", CATEGORY_INSTALL_LABEL_DE, CATEGORY_INSTALL_INFO_0_DE },
	{ "convert", CATEGORY_CONVERT_LABEL_DE, CATEGORY_CONVERT_INFO_0_DE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_DE, CATEGORY_GRAPHIC_PACKS_INFO_0_DE },
	{ "cheats", CATEGORY_CHEATS_LABEL_DE, CATEGORY_CHEATS_INFO_0_DE },
	{ "logging", CATEGORY_LOGGING_LABEL_DE, CATEGORY_LOGGING_INFO_0_DE },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_DE,
		NULL,
		CEMU_CPU_MODE_INFO_0_DE,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_DE },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_DE },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_DE },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_DE },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_DE },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_DE },
			{ "Japanese", OPTION_VAL_JAPANESE_DE },
			{ "French", OPTION_VAL_FRENCH_DE },
			{ "German", OPTION_VAL_GERMAN_DE },
			{ "Italian", OPTION_VAL_ITALIAN_DE },
			{ "Spanish", OPTION_VAL_SPANISH_DE },
			{ "Chinese", OPTION_VAL_CHINESE_DE },
			{ "Korean", OPTION_VAL_KOREAN_DE },
			{ "Dutch", OPTION_VAL_DUTCH_DE },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_DE },
			{ "Russian", OPTION_VAL_RUSSIAN_DE },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_DE },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_DE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_DE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_DE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_DE },
			{ "bicubic", OPTION_VAL_BICUBIC_DE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_DE },
			{ "nearest", OPTION_VAL_NEAREST_DE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_DE },
			{ "bicubic", OPTION_VAL_BICUBIC_DE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_DE },
			{ "nearest", OPTION_VAL_NEAREST_DE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_DE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_DE,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_DE },
			{ "0.5x", OPTION_VAL_0_5X_DE },
			{ "0.75x", OPTION_VAL_0_75X_DE },
			{ "native", OPTION_VAL_NATIVE_DE },
			{ "1.5x", OPTION_VAL_1_5X_DE },
			{ "2x", OPTION_VAL_2X_DE },
			{ "3x", OPTION_VAL_3X_DE },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_DE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_DE,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_DE },
			{ "50", OPTION_VAL_50_DE },
			{ "75", OPTION_VAL_75_DE },
			{ "100", OPTION_VAL_100_DE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DE },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DE },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DE },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DE },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_DE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_DE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_DE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_DE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_DE },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_DE },
			{ "Select + L3", OPTION_VAL_SELECT_L3_DE },
			{ "Select + R3", OPTION_VAL_SELECT_R3_DE },
			{ "Tab", OPTION_VAL_TAB_DE },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_DE },
			{ "swapped", OPTION_VAL_SWAPPED_DE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_DE,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_DE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_DE,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_DE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_DE,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_DE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_DE,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_DE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_DE,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_DE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_DE,
		NULL,
		CEMU_BC1_16BIT_INFO_0_DE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_DE,
		NULL,
		CEMU_GPU_API_INFO_0_DE,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_DE },
			{ "Vulkan", OPTION_VAL_VULKAN_DE },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_DE,
		NULL,
		CEMU_ACCOUNT_INFO_0_DE,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_DE,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_DE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_DE,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_DE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_DE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_DE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_DE,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_DE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_DE,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_DE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_DE,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_DE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_DE,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_DE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_DE,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_DE,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_DE,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_DE,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL "Βίντεο"
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_SHADERS_LABEL_EL "Σκιάσεις"
#define CATEGORY_SHADERS_INFO_0_EL NULL
#define CATEGORY_SCREEN_LABEL_EL NULL
#define CATEGORY_SCREEN_INFO_0_EL NULL
#define CATEGORY_SYSTEM_LABEL_EL "Σύστημα"
#define CATEGORY_SYSTEM_INFO_0_EL NULL
#define CATEGORY_ADDONS_LABEL_EL NULL
#define CATEGORY_ADDONS_INFO_0_EL NULL
#define CATEGORY_ACCOUNTS_LABEL_EL "Λογαριασμοί"
#define CATEGORY_ACCOUNTS_INFO_0_EL NULL
#define CATEGORY_INSTALL_LABEL_EL "Περιεχόμενο"
#define CATEGORY_INSTALL_INFO_0_EL NULL
#define CATEGORY_CONVERT_LABEL_EL NULL
#define CATEGORY_CONVERT_INFO_0_EL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EL NULL
#define CATEGORY_CHEATS_LABEL_EL "Απάτες"
#define CATEGORY_CHEATS_INFO_0_EL NULL
#define CATEGORY_LOGGING_LABEL_EL "Αρχείο Καταγραφής"
#define CATEGORY_LOGGING_INFO_0_EL NULL
#define CEMU_CPU_MODE_LABEL_EL NULL
#define CEMU_CPU_MODE_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_SINGLECORE_INTERPRETER_EL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EL NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_EL NULL
#define OPTION_VAL_ENGLISH_EL "Αγγλικά"
#define OPTION_VAL_JAPANESE_EL "Ιαπωνικά"
#define OPTION_VAL_FRENCH_EL "Γαλλική γλώσσα"
#define OPTION_VAL_GERMAN_EL "Γερμανός"
#define OPTION_VAL_ITALIAN_EL "Ιταλικά"
#define OPTION_VAL_SPANISH_EL "Ισπανικά"
#define OPTION_VAL_CHINESE_EL NULL
#define OPTION_VAL_KOREAN_EL NULL
#define OPTION_VAL_DUTCH_EL NULL
#define OPTION_VAL_PORTUGUESE_EL NULL
#define OPTION_VAL_RUSSIAN_EL NULL
#define OPTION_VAL_TAIWANESE_EL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EL NULL
#define CEMU_UPSCALE_FILTER_LABEL_EL NULL
#define OPTION_VAL_LINEAR_EL "Γραμμικός"
#define OPTION_VAL_BICUBIC_EL NULL
#define OPTION_VAL_BICUBIC_HERMITE_EL NULL
#define OPTION_VAL_NEAREST_EL "Κοντινότερο"
#define CEMU_DOWNSCALE_FILTER_LABEL_EL NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_EL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EL NULL
#define OPTION_VAL_0_25X_EL NULL
#define OPTION_VAL_0_5X_EL NULL
#define OPTION_VAL_0_75X_EL NULL
#define OPTION_VAL_NATIVE_EL "Ντόπιος"
#define OPTION_VAL_1_5X_EL NULL
#define OPTION_VAL_2X_EL NULL
#define OPTION_VAL_3X_EL NULL
#define CEMU_THREAD_QUANTUM_LABEL_EL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EL NULL
#define OPTION_VAL_25_EL NULL
#define OPTION_VAL_50_EL NULL
#define OPTION_VAL_75_EL NULL
#define OPTION_VAL_100_EL NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EL NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EL NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_EL NULL
#define OPTION_VAL_DEFAULT_SCREEN_EL NULL
#define OPTION_VAL_GAMEPAD_SCREEN_EL NULL
#define OPTION_VAL_SIDE_BY_SIDE_EL NULL
#define OPTION_VAL_TOP_BOTTOM_EL NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_EL NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_EL NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_EL NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_EL NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_EL NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EL NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_EL NULL
#define OPTION_VAL_SELECT_L3_EL NULL
#define OPTION_VAL_SELECT_R3_EL NULL
#define OPTION_VAL_TAB_EL NULL
#define CEMU_DRC_POSITION_LABEL_EL NULL
#define OPTION_VAL_NORMAL_EL "Φυσιολογικά"
#define OPTION_VAL_SWAPPED_EL NULL
#define CEMU_LOG_TO_FILE_LABEL_EL NULL
#define CEMU_LOG_FILESYSTEM_LABEL_EL NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_EL NULL
#define CEMU_LOG_SYSTEM_API_LABEL_EL NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_EL NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_EL NULL
#define CEMU_LOG_INPUT_API_LABEL_EL NULL
#define CEMU_LOG_INPUT_API_INFO_0_EL NULL
#define CEMU_LOG_AUDIO_LABEL_EL NULL
#define CEMU_LOG_AUDIO_INFO_0_EL NULL
#define CEMU_LOG_THREAD_TIME_LABEL_EL NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_EL NULL
#define CEMU_DUMP_SHADERS_LABEL_EL NULL
#define CEMU_DUMP_SHADERS_INFO_0_EL NULL
#define CEMU_BC1_16BIT_LABEL_EL NULL
#define CEMU_BC1_16BIT_INFO_0_EL NULL
#define CEMU_GPU_API_LABEL_EL NULL
#define CEMU_GPU_API_INFO_0_EL NULL
#define OPTION_VAL_OPENGL_EL NULL
#define OPTION_VAL_VULKAN_EL NULL
#define CEMU_ACCOUNT_LABEL_EL NULL
#define CEMU_ACCOUNT_INFO_0_EL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EL NULL
#define CEMU_INSTALL_GAME_LABEL_EL NULL
#define CEMU_INSTALL_GAME_INFO_0_EL NULL
#define CEMU_UNINSTALL_GAME_LABEL_EL NULL
#define CEMU_UNINSTALL_GAME_INFO_0_EL NULL
#define CEMU_INSTALL_TITLES_LABEL_EL NULL
#define CEMU_INSTALL_TITLES_INFO_0_EL NULL
#define CEMU_UNINSTALL_TITLES_LABEL_EL NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_EL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_EL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EL NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_EL NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_EL NULL
#define CEMU_CONVERT_TO_WUA_LABEL_EL NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
	{ "video", CATEGORY_VIDEO_LABEL_EL, CATEGORY_VIDEO_INFO_0_EL },
	{ "shaders", CATEGORY_SHADERS_LABEL_EL, CATEGORY_SHADERS_INFO_0_EL },
	{ "screen", CATEGORY_SCREEN_LABEL_EL, CATEGORY_SCREEN_INFO_0_EL },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_EL, CATEGORY_SYSTEM_INFO_0_EL },
	{ "addons", CATEGORY_ADDONS_LABEL_EL, CATEGORY_ADDONS_INFO_0_EL },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_EL, CATEGORY_ACCOUNTS_INFO_0_EL },
	{ "install", CATEGORY_INSTALL_LABEL_EL, CATEGORY_INSTALL_INFO_0_EL },
	{ "convert", CATEGORY_CONVERT_LABEL_EL, CATEGORY_CONVERT_INFO_0_EL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EL, CATEGORY_GRAPHIC_PACKS_INFO_0_EL },
	{ "cheats", CATEGORY_CHEATS_LABEL_EL, CATEGORY_CHEATS_INFO_0_EL },
	{ "logging", CATEGORY_LOGGING_LABEL_EL, CATEGORY_LOGGING_INFO_0_EL },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_EL,
		NULL,
		CEMU_CPU_MODE_INFO_0_EL,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_EL },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_EL },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_EL },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_EL },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_EL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_EL },
			{ "Japanese", OPTION_VAL_JAPANESE_EL },
			{ "French", OPTION_VAL_FRENCH_EL },
			{ "German", OPTION_VAL_GERMAN_EL },
			{ "Italian", OPTION_VAL_ITALIAN_EL },
			{ "Spanish", OPTION_VAL_SPANISH_EL },
			{ "Chinese", OPTION_VAL_CHINESE_EL },
			{ "Korean", OPTION_VAL_KOREAN_EL },
			{ "Dutch", OPTION_VAL_DUTCH_EL },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_EL },
			{ "Russian", OPTION_VAL_RUSSIAN_EL },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_EL },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_EL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EL },
			{ "bicubic", OPTION_VAL_BICUBIC_EL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EL },
			{ "nearest", OPTION_VAL_NEAREST_EL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EL },
			{ "bicubic", OPTION_VAL_BICUBIC_EL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EL },
			{ "nearest", OPTION_VAL_NEAREST_EL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EL,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_EL },
			{ "0.5x", OPTION_VAL_0_5X_EL },
			{ "0.75x", OPTION_VAL_0_75X_EL },
			{ "native", OPTION_VAL_NATIVE_EL },
			{ "1.5x", OPTION_VAL_1_5X_EL },
			{ "2x", OPTION_VAL_2X_EL },
			{ "3x", OPTION_VAL_3X_EL },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EL,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_EL },
			{ "50", OPTION_VAL_50_EL },
			{ "75", OPTION_VAL_75_EL },
			{ "100", OPTION_VAL_100_EL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_EL },
			{ "Select + L3", OPTION_VAL_SELECT_L3_EL },
			{ "Select + R3", OPTION_VAL_SELECT_R3_EL },
			{ "Tab", OPTION_VAL_TAB_EL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_EL },
			{ "swapped", OPTION_VAL_SWAPPED_EL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_EL,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_EL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_EL,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_EL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_EL,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_EL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_EL,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_EL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_EL,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_EL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_EL,
		NULL,
		CEMU_BC1_16BIT_INFO_0_EL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_EL,
		NULL,
		CEMU_GPU_API_INFO_0_EL,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EL },
			{ "Vulkan", OPTION_VAL_VULKAN_EL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EL,
		NULL,
		CEMU_ACCOUNT_INFO_0_EL,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_EL,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_EL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_EL,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_EL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_EL,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_EL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_EL,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_EL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_EL,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_EL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_EL,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_EL,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_EL,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_EL,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_EL,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EN */

#define CATEGORY_VIDEO_LABEL_EN NULL
#define CATEGORY_VIDEO_INFO_0_EN NULL
#define CATEGORY_SHADERS_LABEL_EN NULL
#define CATEGORY_SHADERS_INFO_0_EN NULL
#define CATEGORY_SCREEN_LABEL_EN NULL
#define CATEGORY_SCREEN_INFO_0_EN NULL
#define CATEGORY_SYSTEM_LABEL_EN NULL
#define CATEGORY_SYSTEM_INFO_0_EN NULL
#define CATEGORY_ADDONS_LABEL_EN NULL
#define CATEGORY_ADDONS_INFO_0_EN NULL
#define CATEGORY_ACCOUNTS_LABEL_EN NULL
#define CATEGORY_ACCOUNTS_INFO_0_EN NULL
#define CATEGORY_INSTALL_LABEL_EN NULL
#define CATEGORY_INSTALL_INFO_0_EN NULL
#define CATEGORY_CONVERT_LABEL_EN NULL
#define CATEGORY_CONVERT_INFO_0_EN NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EN NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EN NULL
#define CATEGORY_CHEATS_LABEL_EN NULL
#define CATEGORY_CHEATS_INFO_0_EN NULL
#define CATEGORY_LOGGING_LABEL_EN NULL
#define CATEGORY_LOGGING_INFO_0_EN NULL
#define CEMU_CPU_MODE_LABEL_EN NULL
#define CEMU_CPU_MODE_INFO_0_EN NULL
#define OPTION_VAL_AUTO_EN NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_EN NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EN NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EN NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EN NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_EN NULL
#define OPTION_VAL_ENGLISH_EN NULL
#define OPTION_VAL_JAPANESE_EN NULL
#define OPTION_VAL_FRENCH_EN NULL
#define OPTION_VAL_GERMAN_EN NULL
#define OPTION_VAL_ITALIAN_EN NULL
#define OPTION_VAL_SPANISH_EN NULL
#define OPTION_VAL_CHINESE_EN NULL
#define OPTION_VAL_KOREAN_EN NULL
#define OPTION_VAL_DUTCH_EN NULL
#define OPTION_VAL_PORTUGUESE_EN NULL
#define OPTION_VAL_RUSSIAN_EN NULL
#define OPTION_VAL_TAIWANESE_EN NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EN NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EN NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EN NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EN NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EN NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EN NULL
#define CEMU_UPSCALE_FILTER_LABEL_EN NULL
#define OPTION_VAL_LINEAR_EN NULL
#define OPTION_VAL_BICUBIC_EN "Bi-cubic"
#define OPTION_VAL_BICUBIC_HERMITE_EN NULL
#define OPTION_VAL_NEAREST_EN NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_EN NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_EN NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EN NULL
#define OPTION_VAL_0_25X_EN NULL
#define OPTION_VAL_0_5X_EN NULL
#define OPTION_VAL_0_75X_EN NULL
#define OPTION_VAL_NATIVE_EN NULL
#define OPTION_VAL_1_5X_EN NULL
#define OPTION_VAL_2X_EN NULL
#define OPTION_VAL_3X_EN NULL
#define CEMU_THREAD_QUANTUM_LABEL_EN NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EN NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EN NULL
#define OPTION_VAL_25_EN NULL
#define OPTION_VAL_50_EN NULL
#define OPTION_VAL_75_EN NULL
#define OPTION_VAL_100_EN NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EN NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EN NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EN NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EN NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_EN NULL
#define OPTION_VAL_DEFAULT_SCREEN_EN NULL
#define OPTION_VAL_GAMEPAD_SCREEN_EN NULL
#define OPTION_VAL_SIDE_BY_SIDE_EN NULL
#define OPTION_VAL_TOP_BOTTOM_EN NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_EN NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_EN NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_EN NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_EN NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_EN NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EN NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_EN NULL
#define OPTION_VAL_SELECT_L3_EN NULL
#define OPTION_VAL_SELECT_R3_EN NULL
#define OPTION_VAL_TAB_EN NULL
#define CEMU_DRC_POSITION_LABEL_EN NULL
#define OPTION_VAL_NORMAL_EN NULL
#define OPTION_VAL_SWAPPED_EN NULL
#define CEMU_LOG_TO_FILE_LABEL_EN NULL
#define CEMU_LOG_FILESYSTEM_LABEL_EN NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_EN NULL
#define CEMU_LOG_SYSTEM_API_LABEL_EN NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_EN NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_EN NULL
#define CEMU_LOG_INPUT_API_LABEL_EN NULL
#define CEMU_LOG_INPUT_API_INFO_0_EN NULL
#define CEMU_LOG_AUDIO_LABEL_EN NULL
#define CEMU_LOG_AUDIO_INFO_0_EN NULL
#define CEMU_LOG_THREAD_TIME_LABEL_EN NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_EN NULL
#define CEMU_DUMP_SHADERS_LABEL_EN NULL
#define CEMU_DUMP_SHADERS_INFO_0_EN NULL
#define CEMU_BC1_16BIT_LABEL_EN NULL
#define CEMU_BC1_16BIT_INFO_0_EN NULL
#define CEMU_GPU_API_LABEL_EN NULL
#define CEMU_GPU_API_INFO_0_EN NULL
#define OPTION_VAL_OPENGL_EN NULL
#define OPTION_VAL_VULKAN_EN NULL
#define CEMU_ACCOUNT_LABEL_EN NULL
#define CEMU_ACCOUNT_INFO_0_EN NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EN NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EN NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EN NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EN NULL
#define CEMU_INSTALL_GAME_LABEL_EN NULL
#define CEMU_INSTALL_GAME_INFO_0_EN NULL
#define CEMU_UNINSTALL_GAME_LABEL_EN NULL
#define CEMU_UNINSTALL_GAME_INFO_0_EN NULL
#define CEMU_INSTALL_TITLES_LABEL_EN NULL
#define CEMU_INSTALL_TITLES_INFO_0_EN NULL
#define CEMU_UNINSTALL_TITLES_LABEL_EN NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_EN NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_EN NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EN NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_EN NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_EN NULL
#define CEMU_CONVERT_TO_WUA_LABEL_EN NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
	{ "video", CATEGORY_VIDEO_LABEL_EN, CATEGORY_VIDEO_INFO_0_EN },
	{ "shaders", CATEGORY_SHADERS_LABEL_EN, CATEGORY_SHADERS_INFO_0_EN },
	{ "screen", CATEGORY_SCREEN_LABEL_EN, CATEGORY_SCREEN_INFO_0_EN },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_EN, CATEGORY_SYSTEM_INFO_0_EN },
	{ "addons", CATEGORY_ADDONS_LABEL_EN, CATEGORY_ADDONS_INFO_0_EN },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_EN, CATEGORY_ACCOUNTS_INFO_0_EN },
	{ "install", CATEGORY_INSTALL_LABEL_EN, CATEGORY_INSTALL_INFO_0_EN },
	{ "convert", CATEGORY_CONVERT_LABEL_EN, CATEGORY_CONVERT_INFO_0_EN },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EN, CATEGORY_GRAPHIC_PACKS_INFO_0_EN },
	{ "cheats", CATEGORY_CHEATS_LABEL_EN, CATEGORY_CHEATS_INFO_0_EN },
	{ "logging", CATEGORY_LOGGING_LABEL_EN, CATEGORY_LOGGING_INFO_0_EN },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_en[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_EN,
		NULL,
		CEMU_CPU_MODE_INFO_0_EN,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_EN },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_EN },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_EN },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_EN },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_EN },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_EN },
			{ "Japanese", OPTION_VAL_JAPANESE_EN },
			{ "French", OPTION_VAL_FRENCH_EN },
			{ "German", OPTION_VAL_GERMAN_EN },
			{ "Italian", OPTION_VAL_ITALIAN_EN },
			{ "Spanish", OPTION_VAL_SPANISH_EN },
			{ "Chinese", OPTION_VAL_CHINESE_EN },
			{ "Korean", OPTION_VAL_KOREAN_EN },
			{ "Dutch", OPTION_VAL_DUTCH_EN },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_EN },
			{ "Russian", OPTION_VAL_RUSSIAN_EN },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_EN },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_EN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EN,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EN,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EN },
			{ "bicubic", OPTION_VAL_BICUBIC_EN },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EN },
			{ "nearest", OPTION_VAL_NEAREST_EN },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EN },
			{ "bicubic", OPTION_VAL_BICUBIC_EN },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EN },
			{ "nearest", OPTION_VAL_NEAREST_EN },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EN,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EN,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_EN },
			{ "0.5x", OPTION_VAL_0_5X_EN },
			{ "0.75x", OPTION_VAL_0_75X_EN },
			{ "native", OPTION_VAL_NATIVE_EN },
			{ "1.5x", OPTION_VAL_1_5X_EN },
			{ "2x", OPTION_VAL_2X_EN },
			{ "3x", OPTION_VAL_3X_EN },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EN,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EN,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_EN },
			{ "50", OPTION_VAL_50_EN },
			{ "75", OPTION_VAL_75_EN },
			{ "100", OPTION_VAL_100_EN },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EN },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EN },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EN },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EN },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EN },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_EN },
			{ "Select + L3", OPTION_VAL_SELECT_L3_EN },
			{ "Select + R3", OPTION_VAL_SELECT_R3_EN },
			{ "Tab", OPTION_VAL_TAB_EN },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_EN },
			{ "swapped", OPTION_VAL_SWAPPED_EN },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_EN,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_EN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_EN,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_EN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_EN,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_EN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_EN,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_EN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_EN,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_EN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_EN,
		NULL,
		CEMU_BC1_16BIT_INFO_0_EN,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_EN,
		NULL,
		CEMU_GPU_API_INFO_0_EN,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EN },
			{ "Vulkan", OPTION_VAL_VULKAN_EN },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EN,
		NULL,
		CEMU_ACCOUNT_INFO_0_EN,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_EN,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_EN,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_EN,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_EN,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EN,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_EN,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_EN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_EN,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_EN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_EN,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_EN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_EN,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_EN,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_EN,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_EN,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_EN,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_en = {
   option_cats_en,
   option_defs_en
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO NULL
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_SHADERS_LABEL_EO "Ombrigiloj"
#define CATEGORY_SHADERS_INFO_0_EO NULL
#define CATEGORY_SCREEN_LABEL_EO NULL
#define CATEGORY_SCREEN_INFO_0_EO NULL
#define CATEGORY_SYSTEM_LABEL_EO "Sistemo"
#define CATEGORY_SYSTEM_INFO_0_EO NULL
#define CATEGORY_ADDONS_LABEL_EO NULL
#define CATEGORY_ADDONS_INFO_0_EO NULL
#define CATEGORY_ACCOUNTS_LABEL_EO "Kontoj"
#define CATEGORY_ACCOUNTS_INFO_0_EO NULL
#define CATEGORY_INSTALL_LABEL_EO "Enhavo"
#define CATEGORY_INSTALL_INFO_0_EO NULL
#define CATEGORY_CONVERT_LABEL_EO NULL
#define CATEGORY_CONVERT_INFO_0_EO NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EO NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EO NULL
#define CATEGORY_CHEATS_LABEL_EO "Trompoj"
#define CATEGORY_CHEATS_INFO_0_EO NULL
#define CATEGORY_LOGGING_LABEL_EO "Protokolado"
#define CATEGORY_LOGGING_INFO_0_EO NULL
#define CEMU_CPU_MODE_LABEL_EO NULL
#define CEMU_CPU_MODE_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO "Aŭtomata"
#define OPTION_VAL_SINGLECORE_INTERPRETER_EO NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EO NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EO NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EO NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_EO NULL
#define OPTION_VAL_ENGLISH_EO "Angla"
#define OPTION_VAL_JAPANESE_EO "Japana"
#define OPTION_VAL_FRENCH_EO "Franca"
#define OPTION_VAL_GERMAN_EO "Germana"
#define OPTION_VAL_ITALIAN_EO "Itala"
#define OPTION_VAL_SPANISH_EO "Hispana"
#define OPTION_VAL_CHINESE_EO NULL
#define OPTION_VAL_KOREAN_EO NULL
#define OPTION_VAL_DUTCH_EO NULL
#define OPTION_VAL_PORTUGUESE_EO NULL
#define OPTION_VAL_RUSSIAN_EO NULL
#define OPTION_VAL_TAIWANESE_EO NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EO NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EO NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EO NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EO NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EO NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EO NULL
#define CEMU_UPSCALE_FILTER_LABEL_EO NULL
#define OPTION_VAL_LINEAR_EO "Lineara"
#define OPTION_VAL_BICUBIC_EO "Dukuba"
#define OPTION_VAL_BICUBIC_HERMITE_EO NULL
#define OPTION_VAL_NEAREST_EO "Plej proksima"
#define CEMU_DOWNSCALE_FILTER_LABEL_EO NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_EO "Interna distingivo"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EO NULL
#define OPTION_VAL_0_25X_EO NULL
#define OPTION_VAL_0_5X_EO NULL
#define OPTION_VAL_0_75X_EO NULL
#define OPTION_VAL_NATIVE_EO "Indiĝena"
#define OPTION_VAL_1_5X_EO NULL
#define OPTION_VAL_2X_EO NULL
#define OPTION_VAL_3X_EO NULL
#define CEMU_THREAD_QUANTUM_LABEL_EO NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EO NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EO NULL
#define OPTION_VAL_25_EO NULL
#define OPTION_VAL_50_EO NULL
#define OPTION_VAL_75_EO NULL
#define OPTION_VAL_100_EO NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EO NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EO NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EO NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_EO NULL
#define OPTION_VAL_DEFAULT_SCREEN_EO NULL
#define OPTION_VAL_GAMEPAD_SCREEN_EO NULL
#define OPTION_VAL_SIDE_BY_SIDE_EO NULL
#define OPTION_VAL_TOP_BOTTOM_EO NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_EO NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_EO NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_EO NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_EO NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_EO NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EO NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_EO NULL
#define OPTION_VAL_SELECT_L3_EO NULL
#define OPTION_VAL_SELECT_R3_EO NULL
#define OPTION_VAL_TAB_EO NULL
#define CEMU_DRC_POSITION_LABEL_EO NULL
#define OPTION_VAL_NORMAL_EO "Normala"
#define OPTION_VAL_SWAPPED_EO NULL
#define CEMU_LOG_TO_FILE_LABEL_EO NULL
#define CEMU_LOG_FILESYSTEM_LABEL_EO NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_EO NULL
#define CEMU_LOG_SYSTEM_API_LABEL_EO NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_EO NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_EO NULL
#define CEMU_LOG_INPUT_API_LABEL_EO NULL
#define CEMU_LOG_INPUT_API_INFO_0_EO NULL
#define CEMU_LOG_AUDIO_LABEL_EO NULL
#define CEMU_LOG_AUDIO_INFO_0_EO NULL
#define CEMU_LOG_THREAD_TIME_LABEL_EO NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_EO NULL
#define CEMU_DUMP_SHADERS_LABEL_EO NULL
#define CEMU_DUMP_SHADERS_INFO_0_EO NULL
#define CEMU_BC1_16BIT_LABEL_EO NULL
#define CEMU_BC1_16BIT_INFO_0_EO NULL
#define CEMU_GPU_API_LABEL_EO NULL
#define CEMU_GPU_API_INFO_0_EO NULL
#define OPTION_VAL_OPENGL_EO NULL
#define OPTION_VAL_VULKAN_EO NULL
#define CEMU_ACCOUNT_LABEL_EO NULL
#define CEMU_ACCOUNT_INFO_0_EO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EO NULL
#define CEMU_INSTALL_GAME_LABEL_EO NULL
#define CEMU_INSTALL_GAME_INFO_0_EO NULL
#define CEMU_UNINSTALL_GAME_LABEL_EO NULL
#define CEMU_UNINSTALL_GAME_INFO_0_EO NULL
#define CEMU_INSTALL_TITLES_LABEL_EO NULL
#define CEMU_INSTALL_TITLES_INFO_0_EO NULL
#define CEMU_UNINSTALL_TITLES_LABEL_EO NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_EO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_EO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EO NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_EO NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_EO NULL
#define CEMU_CONVERT_TO_WUA_LABEL_EO NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
	{ "video", CATEGORY_VIDEO_LABEL_EO, CATEGORY_VIDEO_INFO_0_EO },
	{ "shaders", CATEGORY_SHADERS_LABEL_EO, CATEGORY_SHADERS_INFO_0_EO },
	{ "screen", CATEGORY_SCREEN_LABEL_EO, CATEGORY_SCREEN_INFO_0_EO },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_EO, CATEGORY_SYSTEM_INFO_0_EO },
	{ "addons", CATEGORY_ADDONS_LABEL_EO, CATEGORY_ADDONS_INFO_0_EO },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_EO, CATEGORY_ACCOUNTS_INFO_0_EO },
	{ "install", CATEGORY_INSTALL_LABEL_EO, CATEGORY_INSTALL_INFO_0_EO },
	{ "convert", CATEGORY_CONVERT_LABEL_EO, CATEGORY_CONVERT_INFO_0_EO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EO, CATEGORY_GRAPHIC_PACKS_INFO_0_EO },
	{ "cheats", CATEGORY_CHEATS_LABEL_EO, CATEGORY_CHEATS_INFO_0_EO },
	{ "logging", CATEGORY_LOGGING_LABEL_EO, CATEGORY_LOGGING_INFO_0_EO },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_EO,
		NULL,
		CEMU_CPU_MODE_INFO_0_EO,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_EO },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_EO },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_EO },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_EO },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_EO },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_EO },
			{ "Japanese", OPTION_VAL_JAPANESE_EO },
			{ "French", OPTION_VAL_FRENCH_EO },
			{ "German", OPTION_VAL_GERMAN_EO },
			{ "Italian", OPTION_VAL_ITALIAN_EO },
			{ "Spanish", OPTION_VAL_SPANISH_EO },
			{ "Chinese", OPTION_VAL_CHINESE_EO },
			{ "Korean", OPTION_VAL_KOREAN_EO },
			{ "Dutch", OPTION_VAL_DUTCH_EO },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_EO },
			{ "Russian", OPTION_VAL_RUSSIAN_EO },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_EO },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_EO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EO },
			{ "bicubic", OPTION_VAL_BICUBIC_EO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EO },
			{ "nearest", OPTION_VAL_NEAREST_EO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_EO },
			{ "bicubic", OPTION_VAL_BICUBIC_EO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_EO },
			{ "nearest", OPTION_VAL_NEAREST_EO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EO,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_EO },
			{ "0.5x", OPTION_VAL_0_5X_EO },
			{ "0.75x", OPTION_VAL_0_75X_EO },
			{ "native", OPTION_VAL_NATIVE_EO },
			{ "1.5x", OPTION_VAL_1_5X_EO },
			{ "2x", OPTION_VAL_2X_EO },
			{ "3x", OPTION_VAL_3X_EO },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EO,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_EO },
			{ "50", OPTION_VAL_50_EO },
			{ "75", OPTION_VAL_75_EO },
			{ "100", OPTION_VAL_100_EO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EO },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EO },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EO },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EO },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_EO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_EO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_EO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_EO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_EO },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_EO },
			{ "Select + L3", OPTION_VAL_SELECT_L3_EO },
			{ "Select + R3", OPTION_VAL_SELECT_R3_EO },
			{ "Tab", OPTION_VAL_TAB_EO },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_EO },
			{ "swapped", OPTION_VAL_SWAPPED_EO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_EO,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_EO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_EO,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_EO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_EO,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_EO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_EO,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_EO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_EO,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_EO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_EO,
		NULL,
		CEMU_BC1_16BIT_INFO_0_EO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_EO,
		NULL,
		CEMU_GPU_API_INFO_0_EO,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EO },
			{ "Vulkan", OPTION_VAL_VULKAN_EO },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EO,
		NULL,
		CEMU_ACCOUNT_INFO_0_EO,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_EO,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_EO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_EO,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_EO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_EO,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_EO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_EO,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_EO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_EO,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_EO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_EO,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_EO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_EO,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_EO,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_EO,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_EO,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES "Vídeo"
#define CATEGORY_VIDEO_INFO_0_ES "Resolución, escalado y ritmo de fotogramas."
#define CATEGORY_SHADERS_LABEL_ES NULL
#define CATEGORY_SHADERS_INFO_0_ES "Traslación, cacheado y compilación de shaders."
#define CATEGORY_SCREEN_LABEL_ES "Pantalla"
#define CATEGORY_SCREEN_INFO_0_ES "Establece cuál de las pantallas de la Wii U se mostrará y de qué forma."
#define CATEGORY_SYSTEM_LABEL_ES "Sistema"
#define CATEGORY_SYSTEM_INFO_0_ES "CPU, idioma y programación de tareas."
#define CATEGORY_ADDONS_LABEL_ES "Complementos"
#define CATEGORY_ADDONS_INFO_0_ES "Portales de Skylanders, Infinity y Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_ES "Cuentas"
#define CATEGORY_ACCOUNTS_INFO_0_ES "Administra las cuentas almacenadas en el directorio de cuentas de Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_ES "Contenido"
#define CATEGORY_INSTALL_INFO_0_ES "Administra los juegos, actualizaciones de títulos y contenidos descargables guardados en saves/Cemu/mlc01, el almacenamiento emulado de la consola."
#define CATEGORY_CONVERT_LABEL_ES "Convertir a WUA"
#define CATEGORY_CONVERT_INFO_0_ES "Guarda el título cargado a un archivo .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_ES "Paquetes de gráficos"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_ES "Selecciona los paquetes de gráficos del juego cargado y sus preajustes. Los cambios se aplicarán la próxima vez que se cargue el juego."
#define CATEGORY_CHEATS_LABEL_ES "Trucos"
#define CATEGORY_CHEATS_INFO_0_ES "Selecciona los paquetes de trucos del juego cargado que se encuentren en la carpeta Cheats de los paquetes de gráficos. Los cambios se aplicarán la próxima vez que se cargue el juego."
#define CATEGORY_LOGGING_LABEL_ES "Registros"
#define CATEGORY_LOGGING_INFO_0_ES "Amplía los registros generados para diagnosticar problemas."
#define CEMU_CPU_MODE_LABEL_ES "Modo de CPU"
#define CEMU_CPU_MODE_INFO_0_ES "Indica la forma de emular los núcleos PowerPC de la Wii U. El valor automático utilizará el recompilador multinúcleo en una CPU que tenga cuatro núcleos físicos o más, y en caso contrario, el mononúcleo con solo uno. Los intérpretes son mucho más lentos y solo están pensados para fines de depuración (es necesario reiniciar)."
#define OPTION_VAL_AUTO_ES "Valor automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_ES "Intérprete mononúcleo"
#define OPTION_VAL_SINGLECORE_RECOMPILER_ES "Recompilador mononúcleo"
#define OPTION_VAL_MULTICORE_RECOMPILER_ES "Recompilador multinúcleo"
#define OPTION_VAL_MULTICORE_INTERPRETER_ES "Intérprete multinúcleo"
#define CEMU_CONSOLE_LANGUAGE_LABEL_ES "Idioma de la consola"
#define OPTION_VAL_ENGLISH_ES "Inglés"
#define OPTION_VAL_JAPANESE_ES "Japonés"
#define OPTION_VAL_FRENCH_ES "Francés"
#define OPTION_VAL_GERMAN_ES "Alemán"
#define OPTION_VAL_ITALIAN_ES "Italiano"
#define OPTION_VAL_SPANISH_ES "Español"
#define OPTION_VAL_CHINESE_ES "Chino"
#define OPTION_VAL_KOREAN_ES "Coreano"
#define OPTION_VAL_DUTCH_ES "Holandés"
#define OPTION_VAL_PORTUGUESE_ES "Portugués"
#define OPTION_VAL_RUSSIAN_ES "Ruso"
#define OPTION_VAL_TAIWANESE_ES "Taiwanés"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_ES "Compilación asincrónica de shaders"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_ES "Sincronización de GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_ES "Shaders precompilados"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_ES "Multiplicación precisa de shaders"
#define CEMU_SHOW_GAME_FPS_LABEL_ES "Mostrar FPS del juego"
#define CEMU_SHOW_GAME_FPS_INFO_0_ES "Muestra la velocidad de fotogramas a la que se renderiza el juego. El contador de FPS de RetroArch cuenta la frecuencia con la que se ejecuta el núcleo y su número se mantiene en 60 cuando el juego falla al renderizar fotogramas, porque cada ejecución incluye el audio de un fotograma."
#define CEMU_UPSCALE_FILTER_LABEL_ES "Filtro de aumento de escala"
#define OPTION_VAL_LINEAR_ES "Lineal"
#define OPTION_VAL_BICUBIC_ES "Bicúbica"
#define OPTION_VAL_BICUBIC_HERMITE_ES "Bicúbico de Hermite"
#define OPTION_VAL_NEAREST_ES "Más cercano"
#define CEMU_DOWNSCALE_FILTER_LABEL_ES "Filtro de reducción de escala"
#define CEMU_INTERNAL_RESOLUTION_LABEL_ES "Resolución interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_ES NULL
#define OPTION_VAL_0_25X_ES NULL
#define OPTION_VAL_0_5X_ES NULL
#define OPTION_VAL_0_75X_ES NULL
#define OPTION_VAL_NATIVE_ES "Nativa"
#define OPTION_VAL_1_5X_ES NULL
#define OPTION_VAL_2X_ES NULL
#define OPTION_VAL_3X_ES NULL
#define CEMU_THREAD_QUANTUM_LABEL_ES "Cuantía de hilos"
#define CEMU_RUMBLE_STRENGTH_LABEL_ES "Intensidad de vibración"
#define CEMU_RUMBLE_STRENGTH_INFO_0_ES "Establece la fuerza con la que vibrará el mando cuando lo ordene el juego: la del motor del GamePad y la del mando de Wii o el mando Pro. Si desactivas esta opción, el front-end no transmitirá ninguna señal de vibración."
#define OPTION_VAL_25_ES "25 %"
#define OPTION_VAL_50_ES "50 %"
#define OPTION_VAL_75_ES "75 %"
#define OPTION_VAL_100_ES "100 %"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ES "Emular Portal de Poder de Skylanders"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_ES "Emular base de Infinity"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ES "Emular Toy Pad de Dimensions"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_ES "N.º de disposiciones de pantalla"
#define CEMU_SCREEN_LAYOUT1_LABEL_ES "Disposición 1"
#define OPTION_VAL_DEFAULT_SCREEN_ES "Pantalla predeterminada"
#define OPTION_VAL_GAMEPAD_SCREEN_ES "Pantalla del GamePad"
#define OPTION_VAL_SIDE_BY_SIDE_ES "Colocación horizontal"
#define OPTION_VAL_TOP_BOTTOM_ES "Colocación vertical"
#define OPTION_VAL_PICTURE_IN_PICTURE_ES "Imágenes sobreimpuestas"
#define CEMU_SCREEN_LAYOUT2_LABEL_ES "Disposición 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_ES "Disposición 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_ES "Disposición 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_ES "Disposición 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_ES "Siguiente disposición de pantalla"
#define OPTION_VAL_L_R_L2_R2_L3_R3_ES NULL
#define OPTION_VAL_SELECT_L3_ES "SELECT + L3"
#define OPTION_VAL_SELECT_R3_ES "SELECT + R3"
#define OPTION_VAL_TAB_ES "Sección"
#define CEMU_DRC_POSITION_LABEL_ES "Posición del GamePad"
#define OPTION_VAL_NORMAL_ES NULL
#define OPTION_VAL_SWAPPED_ES "Intercambiar"
#define CEMU_LOG_TO_FILE_LABEL_ES "Escribir registro de Cemu en log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_ES "Registrar acceso a archivos (depuración)"
#define CEMU_LOG_THREAD_SYNC_LABEL_ES "Registrar sincronización de hilos de CPU (depuración)"
#define CEMU_LOG_SYSTEM_API_LABEL_ES "Registrar llamadas a API del sistema (depuración)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_ES "Registrar memoria de texturas (depuración)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_ES "Informa de la cantidad de memoria de texturas en formato BC que ha tenido que ser descomprimida porque la GPU no puede leer sus muestras."
#define CEMU_LOG_INPUT_API_LABEL_ES "Registrar llamadas a API de mando (depuración)"
#define CEMU_LOG_INPUT_API_INFO_0_ES "Registra todas las llamadas que hace un título a los mandos: qué mandos ha sondeado y qué ha recibido de vuelta. Es muy molesto; se muestra durante varios segundos."
#define CEMU_LOG_AUDIO_LABEL_ES NULL
#define CEMU_LOG_AUDIO_INFO_0_ES NULL
#define CEMU_LOG_THREAD_TIME_LABEL_ES NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_ES NULL
#define CEMU_DUMP_SHADERS_LABEL_ES "Volcar shaders (depuración)"
#define CEMU_DUMP_SHADERS_INFO_0_ES "Escribe el origen de todos los shaders usados por un juego en system/Cemu/dump/shaders, nombrándolos con sus hashes tal y como aparezcan en el archivo log.txt. Utiliza esta opción cuando quieras informar de un shader que falle o que se muestre erróneamente en una GPU concreta. Ralentizará la compilación de shaders y llenará rápidamente la carpeta, así que desactiva esta opción en cuanto hayas acabado."
#define CEMU_BC1_16BIT_LABEL_ES "Reducir memoria de texturas BC1"
#define CEMU_BC1_16BIT_INFO_0_ES "Reduce a la mitad el coste de las texturas BC1 en aquellas GPU que no puedan leer el formato BC a costa de perder un bit de verde. Esta opción no surtirá efecto si el formato BC es compatible."
#define CEMU_GPU_API_LABEL_ES "API de gráficos"
#define CEMU_GPU_API_INFO_0_ES "La API de gráficos que utilizará Cemu para renderizarse (es necesario reiniciar)."
#define OPTION_VAL_OPENGL_ES NULL
#define OPTION_VAL_VULKAN_ES NULL
#define CEMU_ACCOUNT_LABEL_ES "Cuenta activa"
#define CEMU_ACCOUNT_INFO_0_ES "Indica la cuenta de Wii U con la que se ejecutará el juego, con sus datos guardados y Mii correspondientes. Esta lista mostrará todas las cuentas del directorio de cuentas.\n\nLos cambios se aplicarán al cerrar y volver a abrir o al reiniciar un contenido. Hasta entonces, el título que se esté ejecutando seguirá guardando información en la cuenta con la que se haya ejecutado."
#define CEMU_CREATE_ACCOUNT_LABEL_ES "Crear cuenta"
#define CEMU_CREATE_ACCOUNT_INFO_0_ES "Crea una cuenta nueva llamada Jugador 2, Jugador 3, etcétera; y la asigna como cuenta activa. Tras crear dicha cuenta, esta opción volverá a desactivarse. Una consola puede tener hasta 12 cuentas."
#define CEMU_REMOVE_ACCOUNT_LABEL_ES "Eliminar cuenta"
#define CEMU_REMOVE_ACCOUNT_INFO_0_ES "ADVERTENCIA: si eliminas una cuenta, también borrarás sus datos guardados de todos los juegos, y esta acción no se podrá deshacer.\n\nElimina la cuenta seleccionada tal y como se eliminaría a un usuario de la consola: borrando la cuenta del directorio de cuentas y sus datos guardados de todas las carpetas de guardado de todos los títulos. La cuenta se eliminará al salir del menú y la opción volverá a desactivarse.\n\nNo se podrán eliminar ni la cuenta activa ni la cuenta con la que se haya ejecutado un juego hasta cerrar el juego para evitar eliminar la última cuenta de todas."
#define CEMU_INSTALL_GAME_LABEL_ES "Instalar juegos"
#define CEMU_INSTALL_GAME_INFO_0_ES "Instala todos los juegos de system/Cemu/titles en saves/Cemu/mlc01 (subcarpetas incluidas) en el almacenamiento emulado de Wii U (saves/Cemu/mlc01/usr/title/00050000), como haría la consola al instalar un juego desde su disco. Un juego es una imagen de disco (en formato .wud, .wux o .iso) o un archivo .wua, también se instalarán las actualizaciones y contenidos descargables que incluyan los archivos .wua. Si ya existe una versión idéntica o superior, no se hará ningún cambio.\n\nAl activar esta opción la instalación comenzará inmediatamente, su progreso se mostrará en una notificación y la opción se volverá a desactivar en cuanto se hayan instalado todos los juegos. El juego instalado se podrá ejecutar cargando el archivo .rpx de su carpeta code y la imagen de disco ya no será necesaria."
#define CEMU_UNINSTALL_GAME_LABEL_ES "Desinstalar juegos"
#define CEMU_UNINSTALL_GAME_INFO_0_ES "Desinstala el juego que se esté ejecutando del directorio de instalación del juego (saves/Cemu/mlc01/usr/title/00050000) cuando se cierre o reinicie el juego, borrando también sus actualizaciones y contenidos descargables, hasta entonces se mantendrán los datos. No se tocarán sus datos guardados ni la imagen de disco o el archivo .wua que se usaron en su instalación."
#define CEMU_INSTALL_TITLES_LABEL_ES "Instalar contenidos"
#define CEMU_INSTALL_TITLES_INFO_0_ES "Instala todas las actualizaciones y contenidos descargables (DLC) de system/Cemu/titles (subcarpetas incluidas) en el almacenamiento emulado de Wii U (saves/Cemu/mlc01/usr/title). Cada elemento tendrá una carpeta propia en system/Cemu/titles; una descarga en formato NUS (archivos .app) necesitará sus archivos title.tmd, title.tlk y la clave de desencriptado en la misma carpeta. Si ya existe una versión idéntica o superior, no se hará ningún cambio.\n\nAl activar esta opción la instalación comenzará inmediatamente, su progreso se mostrará en una notificación y la opción se volverá a desactivar en cuanto se hayan instalado todos los contenidos, abandones este menú o cambies otra opción. El juego utilizará los contenidos instalados una vez se reinicie.\n\nLos contenidos ubicados en otros sitios pueden instalarse dentro del menú principal de RetroArch > Cargar contenido y luego seleccionando el archivo title.tmd (acompañado de su title.tik)."
#define CEMU_UNINSTALL_TITLES_LABEL_ES "Desinstalar contenidos"
#define CEMU_UNINSTALL_TITLES_INFO_0_ES "Desinstala las actualizaciones y contenidos descargables del juego que se encuentren en el almacenamiento emulado de Wii U (saves/Cemu/mlc01/usr/title) cuando se cierre o reinicie el juego; esta opción se mantendrá activada hasta terminar el proceso. No se tocarán las copias guardadas en system/Cemu/titles."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_ES "Eliminar archivos tras su instalación"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_ES "ADVERTENCIA: esta opción eliminará los archivos de system/Cemu/titles y no se puede deshacer. system/Cemu/titles es una carpeta administrada por el núcleo, si tienes una sola copia de un volcado, guárdala en más sitios.\n\nElimina los datos instalados mediante las opciones Instalar juegos e Instalar contenidos en system/Cemu/titles: una actualización o una carpeta de contenidos descargables cuando se hayan terminado de instalar por un lado, una imagen de disco o un archivo .wua cuando se hayan instalado todos sus contenidos por otro (Instalar contenidos mantendrá un archivo .wua que contiene el juego base). Se eliminarán los archivos que esté utilizando el juego que se esté ejecutando una vez lo cierres o reinicies. Aquellos contenidos cargados con la opción Cargar contenido se dejarán intactos."
#define CEMU_WUA_OUTPUT_DIR_LABEL_ES "Directorio de salida"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_ES "Indica dónde se escribirá el archivo .wua. Es necesario que haya espacio suficiente en memoria."
#define CEMU_CONVERT_TO_WUA_LABEL_ES "Iniciar conversión a WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_ES "Escribe el título en el directorio de salida en formato .wua. El emulador seguirá ejecutándose durante el proceso."

struct retro_core_option_v2_category option_cats_es[] = {
	{ "video", CATEGORY_VIDEO_LABEL_ES, CATEGORY_VIDEO_INFO_0_ES },
	{ "shaders", CATEGORY_SHADERS_LABEL_ES, CATEGORY_SHADERS_INFO_0_ES },
	{ "screen", CATEGORY_SCREEN_LABEL_ES, CATEGORY_SCREEN_INFO_0_ES },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_ES, CATEGORY_SYSTEM_INFO_0_ES },
	{ "addons", CATEGORY_ADDONS_LABEL_ES, CATEGORY_ADDONS_INFO_0_ES },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_ES, CATEGORY_ACCOUNTS_INFO_0_ES },
	{ "install", CATEGORY_INSTALL_LABEL_ES, CATEGORY_INSTALL_INFO_0_ES },
	{ "convert", CATEGORY_CONVERT_LABEL_ES, CATEGORY_CONVERT_INFO_0_ES },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_ES, CATEGORY_GRAPHIC_PACKS_INFO_0_ES },
	{ "cheats", CATEGORY_CHEATS_LABEL_ES, CATEGORY_CHEATS_INFO_0_ES },
	{ "logging", CATEGORY_LOGGING_LABEL_ES, CATEGORY_LOGGING_INFO_0_ES },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_ES,
		NULL,
		CEMU_CPU_MODE_INFO_0_ES,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_ES },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_ES },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_ES },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_ES },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_ES },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_ES },
			{ "Japanese", OPTION_VAL_JAPANESE_ES },
			{ "French", OPTION_VAL_FRENCH_ES },
			{ "German", OPTION_VAL_GERMAN_ES },
			{ "Italian", OPTION_VAL_ITALIAN_ES },
			{ "Spanish", OPTION_VAL_SPANISH_ES },
			{ "Chinese", OPTION_VAL_CHINESE_ES },
			{ "Korean", OPTION_VAL_KOREAN_ES },
			{ "Dutch", OPTION_VAL_DUTCH_ES },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_ES },
			{ "Russian", OPTION_VAL_RUSSIAN_ES },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_ES },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_ES },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_ES,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_ES,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_ES },
			{ "bicubic", OPTION_VAL_BICUBIC_ES },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_ES },
			{ "nearest", OPTION_VAL_NEAREST_ES },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_ES },
			{ "bicubic", OPTION_VAL_BICUBIC_ES },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_ES },
			{ "nearest", OPTION_VAL_NEAREST_ES },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_ES,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_ES,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_ES },
			{ "0.5x", OPTION_VAL_0_5X_ES },
			{ "0.75x", OPTION_VAL_0_75X_ES },
			{ "native", OPTION_VAL_NATIVE_ES },
			{ "1.5x", OPTION_VAL_1_5X_ES },
			{ "2x", OPTION_VAL_2X_ES },
			{ "3x", OPTION_VAL_3X_ES },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_ES,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_ES,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_ES },
			{ "50", OPTION_VAL_50_ES },
			{ "75", OPTION_VAL_75_ES },
			{ "100", OPTION_VAL_100_ES },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ES },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ES },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ES },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ES },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ES },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ES },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ES },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ES },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ES },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ES },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ES },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ES },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ES },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ES },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ES },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ES },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ES },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ES },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ES },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ES },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ES },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ES },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ES },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ES },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ES },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_ES },
			{ "Select + L3", OPTION_VAL_SELECT_L3_ES },
			{ "Select + R3", OPTION_VAL_SELECT_R3_ES },
			{ "Tab", OPTION_VAL_TAB_ES },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_ES },
			{ "swapped", OPTION_VAL_SWAPPED_ES },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_ES,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_ES,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_ES,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_ES,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_ES,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_ES,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_ES,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_ES,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_ES,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_ES,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_ES,
		NULL,
		CEMU_BC1_16BIT_INFO_0_ES,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_ES,
		NULL,
		CEMU_GPU_API_INFO_0_ES,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_ES },
			{ "Vulkan", OPTION_VAL_VULKAN_ES },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_ES,
		NULL,
		CEMU_ACCOUNT_INFO_0_ES,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_ES,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_ES,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_ES,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_ES,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_ES,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_ES,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_ES,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_ES,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_ES,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_ES,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_ES,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_ES,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_ES,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_ES,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_ES,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_ES,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_ES,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_ES,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA "ویدیو"
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_SHADERS_LABEL_FA "سایه‌زن‌ها"
#define CATEGORY_SHADERS_INFO_0_FA NULL
#define CATEGORY_SCREEN_LABEL_FA NULL
#define CATEGORY_SCREEN_INFO_0_FA NULL
#define CATEGORY_SYSTEM_LABEL_FA "سیستم"
#define CATEGORY_SYSTEM_INFO_0_FA NULL
#define CATEGORY_ADDONS_LABEL_FA NULL
#define CATEGORY_ADDONS_INFO_0_FA NULL
#define CATEGORY_ACCOUNTS_LABEL_FA "حساب‌ها"
#define CATEGORY_ACCOUNTS_INFO_0_FA NULL
#define CATEGORY_INSTALL_LABEL_FA NULL
#define CATEGORY_INSTALL_INFO_0_FA NULL
#define CATEGORY_CONVERT_LABEL_FA NULL
#define CATEGORY_CONVERT_INFO_0_FA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_FA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FA NULL
#define CATEGORY_CHEATS_LABEL_FA "تقلب‌ها"
#define CATEGORY_CHEATS_INFO_0_FA NULL
#define CATEGORY_LOGGING_LABEL_FA "ثبت گزارش‌ها"
#define CATEGORY_LOGGING_INFO_0_FA NULL
#define CEMU_CPU_MODE_LABEL_FA NULL
#define CEMU_CPU_MODE_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA "خودکار"
#define OPTION_VAL_SINGLECORE_INTERPRETER_FA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_FA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_FA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_FA NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_FA NULL
#define OPTION_VAL_ENGLISH_FA NULL
#define OPTION_VAL_JAPANESE_FA NULL
#define OPTION_VAL_FRENCH_FA NULL
#define OPTION_VAL_GERMAN_FA NULL
#define OPTION_VAL_ITALIAN_FA NULL
#define OPTION_VAL_SPANISH_FA NULL
#define OPTION_VAL_CHINESE_FA NULL
#define OPTION_VAL_KOREAN_FA NULL
#define OPTION_VAL_DUTCH_FA NULL
#define OPTION_VAL_PORTUGUESE_FA NULL
#define OPTION_VAL_RUSSIAN_FA NULL
#define OPTION_VAL_TAIWANESE_FA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_FA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_FA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_FA NULL
#define CEMU_UPSCALE_FILTER_LABEL_FA NULL
#define OPTION_VAL_LINEAR_FA NULL
#define OPTION_VAL_BICUBIC_FA "دومکعبی"
#define OPTION_VAL_BICUBIC_HERMITE_FA NULL
#define OPTION_VAL_NEAREST_FA NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_FA NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_FA NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FA NULL
#define OPTION_VAL_0_25X_FA NULL
#define OPTION_VAL_0_5X_FA NULL
#define OPTION_VAL_0_75X_FA NULL
#define OPTION_VAL_NATIVE_FA NULL
#define OPTION_VAL_1_5X_FA NULL
#define OPTION_VAL_2X_FA NULL
#define OPTION_VAL_3X_FA NULL
#define CEMU_THREAD_QUANTUM_LABEL_FA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_FA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_FA NULL
#define OPTION_VAL_25_FA NULL
#define OPTION_VAL_50_FA NULL
#define OPTION_VAL_75_FA NULL
#define OPTION_VAL_100_FA NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FA NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FA NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_FA NULL
#define OPTION_VAL_DEFAULT_SCREEN_FA NULL
#define OPTION_VAL_GAMEPAD_SCREEN_FA NULL
#define OPTION_VAL_SIDE_BY_SIDE_FA NULL
#define OPTION_VAL_TOP_BOTTOM_FA NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_FA NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_FA NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_FA NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_FA NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_FA NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FA NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_FA NULL
#define OPTION_VAL_SELECT_L3_FA NULL
#define OPTION_VAL_SELECT_R3_FA NULL
#define OPTION_VAL_TAB_FA NULL
#define CEMU_DRC_POSITION_LABEL_FA NULL
#define OPTION_VAL_NORMAL_FA NULL
#define OPTION_VAL_SWAPPED_FA NULL
#define CEMU_LOG_TO_FILE_LABEL_FA NULL
#define CEMU_LOG_FILESYSTEM_LABEL_FA NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_FA NULL
#define CEMU_LOG_SYSTEM_API_LABEL_FA NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_FA NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_FA NULL
#define CEMU_LOG_INPUT_API_LABEL_FA NULL
#define CEMU_LOG_INPUT_API_INFO_0_FA NULL
#define CEMU_LOG_AUDIO_LABEL_FA NULL
#define CEMU_LOG_AUDIO_INFO_0_FA NULL
#define CEMU_LOG_THREAD_TIME_LABEL_FA NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_FA NULL
#define CEMU_DUMP_SHADERS_LABEL_FA NULL
#define CEMU_DUMP_SHADERS_INFO_0_FA NULL
#define CEMU_BC1_16BIT_LABEL_FA NULL
#define CEMU_BC1_16BIT_INFO_0_FA NULL
#define CEMU_GPU_API_LABEL_FA NULL
#define CEMU_GPU_API_INFO_0_FA NULL
#define OPTION_VAL_OPENGL_FA NULL
#define OPTION_VAL_VULKAN_FA NULL
#define CEMU_ACCOUNT_LABEL_FA NULL
#define CEMU_ACCOUNT_INFO_0_FA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_FA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_FA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_FA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_FA NULL
#define CEMU_INSTALL_GAME_LABEL_FA NULL
#define CEMU_INSTALL_GAME_INFO_0_FA NULL
#define CEMU_UNINSTALL_GAME_LABEL_FA NULL
#define CEMU_UNINSTALL_GAME_INFO_0_FA NULL
#define CEMU_INSTALL_TITLES_LABEL_FA NULL
#define CEMU_INSTALL_TITLES_INFO_0_FA NULL
#define CEMU_UNINSTALL_TITLES_LABEL_FA NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_FA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_FA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FA NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_FA NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_FA NULL
#define CEMU_CONVERT_TO_WUA_LABEL_FA NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
	{ "video", CATEGORY_VIDEO_LABEL_FA, CATEGORY_VIDEO_INFO_0_FA },
	{ "shaders", CATEGORY_SHADERS_LABEL_FA, CATEGORY_SHADERS_INFO_0_FA },
	{ "screen", CATEGORY_SCREEN_LABEL_FA, CATEGORY_SCREEN_INFO_0_FA },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_FA, CATEGORY_SYSTEM_INFO_0_FA },
	{ "addons", CATEGORY_ADDONS_LABEL_FA, CATEGORY_ADDONS_INFO_0_FA },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_FA, CATEGORY_ACCOUNTS_INFO_0_FA },
	{ "install", CATEGORY_INSTALL_LABEL_FA, CATEGORY_INSTALL_INFO_0_FA },
	{ "convert", CATEGORY_CONVERT_LABEL_FA, CATEGORY_CONVERT_INFO_0_FA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FA, CATEGORY_GRAPHIC_PACKS_INFO_0_FA },
	{ "cheats", CATEGORY_CHEATS_LABEL_FA, CATEGORY_CHEATS_INFO_0_FA },
	{ "logging", CATEGORY_LOGGING_LABEL_FA, CATEGORY_LOGGING_INFO_0_FA },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_FA,
		NULL,
		CEMU_CPU_MODE_INFO_0_FA,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_FA },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_FA },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_FA },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_FA },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_FA },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_FA },
			{ "Japanese", OPTION_VAL_JAPANESE_FA },
			{ "French", OPTION_VAL_FRENCH_FA },
			{ "German", OPTION_VAL_GERMAN_FA },
			{ "Italian", OPTION_VAL_ITALIAN_FA },
			{ "Spanish", OPTION_VAL_SPANISH_FA },
			{ "Chinese", OPTION_VAL_CHINESE_FA },
			{ "Korean", OPTION_VAL_KOREAN_FA },
			{ "Dutch", OPTION_VAL_DUTCH_FA },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_FA },
			{ "Russian", OPTION_VAL_RUSSIAN_FA },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_FA },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_FA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FA },
			{ "bicubic", OPTION_VAL_BICUBIC_FA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FA },
			{ "nearest", OPTION_VAL_NEAREST_FA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FA },
			{ "bicubic", OPTION_VAL_BICUBIC_FA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FA },
			{ "nearest", OPTION_VAL_NEAREST_FA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FA,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_FA },
			{ "0.5x", OPTION_VAL_0_5X_FA },
			{ "0.75x", OPTION_VAL_0_75X_FA },
			{ "native", OPTION_VAL_NATIVE_FA },
			{ "1.5x", OPTION_VAL_1_5X_FA },
			{ "2x", OPTION_VAL_2X_FA },
			{ "3x", OPTION_VAL_3X_FA },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FA,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_FA },
			{ "50", OPTION_VAL_50_FA },
			{ "75", OPTION_VAL_75_FA },
			{ "100", OPTION_VAL_100_FA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FA },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FA },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FA },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FA },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FA },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_FA },
			{ "Select + L3", OPTION_VAL_SELECT_L3_FA },
			{ "Select + R3", OPTION_VAL_SELECT_R3_FA },
			{ "Tab", OPTION_VAL_TAB_FA },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_FA },
			{ "swapped", OPTION_VAL_SWAPPED_FA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_FA,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_FA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_FA,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_FA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_FA,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_FA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_FA,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_FA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_FA,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_FA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_FA,
		NULL,
		CEMU_BC1_16BIT_INFO_0_FA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_FA,
		NULL,
		CEMU_GPU_API_INFO_0_FA,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FA },
			{ "Vulkan", OPTION_VAL_VULKAN_FA },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FA,
		NULL,
		CEMU_ACCOUNT_INFO_0_FA,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_FA,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_FA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_FA,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_FA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_FA,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_FA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_FA,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_FA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_FA,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_FA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_FA,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_FA,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_FA,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_FA,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_FA,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_SHADERS_LABEL_FI "Varjostimet"
#define CATEGORY_SHADERS_INFO_0_FI NULL
#define CATEGORY_SCREEN_LABEL_FI NULL
#define CATEGORY_SCREEN_INFO_0_FI NULL
#define CATEGORY_SYSTEM_LABEL_FI "Järjestelmä"
#define CATEGORY_SYSTEM_INFO_0_FI NULL
#define CATEGORY_ADDONS_LABEL_FI NULL
#define CATEGORY_ADDONS_INFO_0_FI NULL
#define CATEGORY_ACCOUNTS_LABEL_FI "Tilit"
#define CATEGORY_ACCOUNTS_INFO_0_FI NULL
#define CATEGORY_INSTALL_LABEL_FI "Sisältö"
#define CATEGORY_INSTALL_INFO_0_FI NULL
#define CATEGORY_CONVERT_LABEL_FI NULL
#define CATEGORY_CONVERT_INFO_0_FI NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_FI NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FI NULL
#define CATEGORY_CHEATS_LABEL_FI "Huijauskoodit"
#define CATEGORY_CHEATS_INFO_0_FI NULL
#define CATEGORY_LOGGING_LABEL_FI "Lokiin kirjaus"
#define CATEGORY_LOGGING_INFO_0_FI NULL
#define CEMU_CPU_MODE_LABEL_FI NULL
#define CEMU_CPU_MODE_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_SINGLECORE_INTERPRETER_FI NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_FI NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_FI NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_FI NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_FI NULL
#define OPTION_VAL_ENGLISH_FI NULL
#define OPTION_VAL_JAPANESE_FI NULL
#define OPTION_VAL_FRENCH_FI NULL
#define OPTION_VAL_GERMAN_FI NULL
#define OPTION_VAL_ITALIAN_FI NULL
#define OPTION_VAL_SPANISH_FI NULL
#define OPTION_VAL_CHINESE_FI NULL
#define OPTION_VAL_KOREAN_FI NULL
#define OPTION_VAL_DUTCH_FI NULL
#define OPTION_VAL_PORTUGUESE_FI NULL
#define OPTION_VAL_RUSSIAN_FI NULL
#define OPTION_VAL_TAIWANESE_FI NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FI NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FI NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_FI NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FI NULL
#define CEMU_SHOW_GAME_FPS_LABEL_FI NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_FI NULL
#define CEMU_UPSCALE_FILTER_LABEL_FI NULL
#define OPTION_VAL_LINEAR_FI "Lineaarinen"
#define OPTION_VAL_BICUBIC_FI NULL
#define OPTION_VAL_BICUBIC_HERMITE_FI NULL
#define OPTION_VAL_NEAREST_FI "Lähin"
#define CEMU_DOWNSCALE_FILTER_LABEL_FI NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_FI "Sisäinen resoluutio"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FI NULL
#define OPTION_VAL_0_25X_FI NULL
#define OPTION_VAL_0_5X_FI NULL
#define OPTION_VAL_0_75X_FI NULL
#define OPTION_VAL_NATIVE_FI "Natiivi"
#define OPTION_VAL_1_5X_FI NULL
#define OPTION_VAL_2X_FI NULL
#define OPTION_VAL_3X_FI NULL
#define CEMU_THREAD_QUANTUM_LABEL_FI NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_FI NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_FI NULL
#define OPTION_VAL_25_FI NULL
#define OPTION_VAL_50_FI "50 %"
#define OPTION_VAL_75_FI "75 %"
#define OPTION_VAL_100_FI "100 %"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FI NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FI NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FI NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FI NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_FI NULL
#define OPTION_VAL_DEFAULT_SCREEN_FI NULL
#define OPTION_VAL_GAMEPAD_SCREEN_FI NULL
#define OPTION_VAL_SIDE_BY_SIDE_FI NULL
#define OPTION_VAL_TOP_BOTTOM_FI NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_FI NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_FI NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_FI NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_FI NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_FI NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FI NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_FI NULL
#define OPTION_VAL_SELECT_L3_FI NULL
#define OPTION_VAL_SELECT_R3_FI NULL
#define OPTION_VAL_TAB_FI NULL
#define CEMU_DRC_POSITION_LABEL_FI NULL
#define OPTION_VAL_NORMAL_FI "Normaali"
#define OPTION_VAL_SWAPPED_FI NULL
#define CEMU_LOG_TO_FILE_LABEL_FI NULL
#define CEMU_LOG_FILESYSTEM_LABEL_FI NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_FI NULL
#define CEMU_LOG_SYSTEM_API_LABEL_FI NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_FI NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_FI NULL
#define CEMU_LOG_INPUT_API_LABEL_FI NULL
#define CEMU_LOG_INPUT_API_INFO_0_FI NULL
#define CEMU_LOG_AUDIO_LABEL_FI NULL
#define CEMU_LOG_AUDIO_INFO_0_FI NULL
#define CEMU_LOG_THREAD_TIME_LABEL_FI NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_FI NULL
#define CEMU_DUMP_SHADERS_LABEL_FI NULL
#define CEMU_DUMP_SHADERS_INFO_0_FI NULL
#define CEMU_BC1_16BIT_LABEL_FI NULL
#define CEMU_BC1_16BIT_INFO_0_FI NULL
#define CEMU_GPU_API_LABEL_FI NULL
#define CEMU_GPU_API_INFO_0_FI NULL
#define OPTION_VAL_OPENGL_FI NULL
#define OPTION_VAL_VULKAN_FI NULL
#define CEMU_ACCOUNT_LABEL_FI NULL
#define CEMU_ACCOUNT_INFO_0_FI NULL
#define CEMU_CREATE_ACCOUNT_LABEL_FI NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_FI NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_FI NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_FI NULL
#define CEMU_INSTALL_GAME_LABEL_FI NULL
#define CEMU_INSTALL_GAME_INFO_0_FI NULL
#define CEMU_UNINSTALL_GAME_LABEL_FI NULL
#define CEMU_UNINSTALL_GAME_INFO_0_FI NULL
#define CEMU_INSTALL_TITLES_LABEL_FI NULL
#define CEMU_INSTALL_TITLES_INFO_0_FI NULL
#define CEMU_UNINSTALL_TITLES_LABEL_FI NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_FI NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_FI NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FI NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_FI NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_FI NULL
#define CEMU_CONVERT_TO_WUA_LABEL_FI NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
	{ "video", CATEGORY_VIDEO_LABEL_FI, CATEGORY_VIDEO_INFO_0_FI },
	{ "shaders", CATEGORY_SHADERS_LABEL_FI, CATEGORY_SHADERS_INFO_0_FI },
	{ "screen", CATEGORY_SCREEN_LABEL_FI, CATEGORY_SCREEN_INFO_0_FI },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_FI, CATEGORY_SYSTEM_INFO_0_FI },
	{ "addons", CATEGORY_ADDONS_LABEL_FI, CATEGORY_ADDONS_INFO_0_FI },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_FI, CATEGORY_ACCOUNTS_INFO_0_FI },
	{ "install", CATEGORY_INSTALL_LABEL_FI, CATEGORY_INSTALL_INFO_0_FI },
	{ "convert", CATEGORY_CONVERT_LABEL_FI, CATEGORY_CONVERT_INFO_0_FI },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FI, CATEGORY_GRAPHIC_PACKS_INFO_0_FI },
	{ "cheats", CATEGORY_CHEATS_LABEL_FI, CATEGORY_CHEATS_INFO_0_FI },
	{ "logging", CATEGORY_LOGGING_LABEL_FI, CATEGORY_LOGGING_INFO_0_FI },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_FI,
		NULL,
		CEMU_CPU_MODE_INFO_0_FI,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_FI },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_FI },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_FI },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_FI },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_FI },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_FI },
			{ "Japanese", OPTION_VAL_JAPANESE_FI },
			{ "French", OPTION_VAL_FRENCH_FI },
			{ "German", OPTION_VAL_GERMAN_FI },
			{ "Italian", OPTION_VAL_ITALIAN_FI },
			{ "Spanish", OPTION_VAL_SPANISH_FI },
			{ "Chinese", OPTION_VAL_CHINESE_FI },
			{ "Korean", OPTION_VAL_KOREAN_FI },
			{ "Dutch", OPTION_VAL_DUTCH_FI },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_FI },
			{ "Russian", OPTION_VAL_RUSSIAN_FI },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_FI },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_FI },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FI,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FI,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FI },
			{ "bicubic", OPTION_VAL_BICUBIC_FI },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FI },
			{ "nearest", OPTION_VAL_NEAREST_FI },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FI },
			{ "bicubic", OPTION_VAL_BICUBIC_FI },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FI },
			{ "nearest", OPTION_VAL_NEAREST_FI },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FI,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FI,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_FI },
			{ "0.5x", OPTION_VAL_0_5X_FI },
			{ "0.75x", OPTION_VAL_0_75X_FI },
			{ "native", OPTION_VAL_NATIVE_FI },
			{ "1.5x", OPTION_VAL_1_5X_FI },
			{ "2x", OPTION_VAL_2X_FI },
			{ "3x", OPTION_VAL_3X_FI },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FI,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FI,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_FI },
			{ "50", OPTION_VAL_50_FI },
			{ "75", OPTION_VAL_75_FI },
			{ "100", OPTION_VAL_100_FI },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FI },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FI },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FI },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FI },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FI },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FI },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FI },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FI },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FI },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FI },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FI },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FI },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FI },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FI },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FI },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FI },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FI },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FI },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FI },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FI },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FI },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FI },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FI },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FI },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FI },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_FI },
			{ "Select + L3", OPTION_VAL_SELECT_L3_FI },
			{ "Select + R3", OPTION_VAL_SELECT_R3_FI },
			{ "Tab", OPTION_VAL_TAB_FI },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_FI },
			{ "swapped", OPTION_VAL_SWAPPED_FI },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_FI,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_FI,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_FI,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_FI,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_FI,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_FI,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_FI,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_FI,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_FI,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_FI,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_FI,
		NULL,
		CEMU_BC1_16BIT_INFO_0_FI,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_FI,
		NULL,
		CEMU_GPU_API_INFO_0_FI,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FI },
			{ "Vulkan", OPTION_VAL_VULKAN_FI },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FI,
		NULL,
		CEMU_ACCOUNT_INFO_0_FI,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_FI,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_FI,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_FI,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_FI,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FI,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FI,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_FI,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_FI,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_FI,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_FI,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_FI,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_FI,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_FI,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FI,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_FI,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_FI,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_FI,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_FI,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR "Vidéo"
#define CATEGORY_VIDEO_INFO_0_FR "Résolution, mise à l'échelle et régularité du rythme des images."
#define CATEGORY_SHADERS_LABEL_FR NULL
#define CATEGORY_SHADERS_INFO_0_FR "Traduction, mise en cache et compilation de shaders."
#define CATEGORY_SCREEN_LABEL_FR "Écran"
#define CATEGORY_SCREEN_INFO_0_FR "Quel écran de la Wii U est affiché, et de quelle manière."
#define CATEGORY_SYSTEM_LABEL_FR "Système"
#define CATEGORY_SYSTEM_INFO_0_FR "Processeur, langage et ordonnancement."
#define CATEGORY_ADDONS_LABEL_FR "Modules complémentaires"
#define CATEGORY_ADDONS_INFO_0_FR "Portails Skylanders, Infinity et Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_FR "Comptes"
#define CATEGORY_ACCOUNTS_INFO_0_FR "Gérer les comptes dans le répertoire des comptes de la Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_FR "Contenu"
#define CATEGORY_INSTALL_INFO_0_FR "Gérez les jeux, les mises à jour de titres et les DLC dans saves/Cemu/mlc01, l'espace de stockage de la console émulée."
#define CATEGORY_CONVERT_LABEL_FR "Convertir en WUA"
#define CATEGORY_CONVERT_INFO_0_FR "Enregistrer le titre chargé sous forme d'archive .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_FR "Packs graphiques"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FR "Les packs graphiques du jeu chargé et leurs préréglages. Les modifications prennent effet au prochain chargement du jeu."
#define CATEGORY_CHEATS_LABEL_FR NULL
#define CATEGORY_CHEATS_INFO_0_FR "Les packs de cheats du jeu chargé, issus du dossier Cheats des packs graphiques. Les modifications prennent effet au prochain chargement du jeu."
#define CATEGORY_LOGGING_LABEL_FR "Journalisation"
#define CATEGORY_LOGGING_INFO_0_FR "Sortie de journal supplémentaire, pour le diagnostic de problèmes."
#define CEMU_CPU_MODE_LABEL_FR "Mode du processeur"
#define CEMU_CPU_MODE_INFO_0_FR "Comment les cœurs PowerPC de la Wii U sont émulés. Auto prend le recompilateur multicœur sur un processeur avec quatre cœurs physiques ou plus et celui monocœur dans le cas contraire. Les interpréteurs sont beaucoup plus lents et sont destinés au débogage. (Redémarrage requis)"
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_FR "Interpréteur monocœur"
#define OPTION_VAL_SINGLECORE_RECOMPILER_FR "Recompilateur monocœur"
#define OPTION_VAL_MULTICORE_RECOMPILER_FR "Recompilateur multicœur"
#define OPTION_VAL_MULTICORE_INTERPRETER_FR "Interpréteur multicœur"
#define CEMU_CONSOLE_LANGUAGE_LABEL_FR "Langue de la console"
#define OPTION_VAL_ENGLISH_FR "Anglais"
#define OPTION_VAL_JAPANESE_FR "Japonais"
#define OPTION_VAL_FRENCH_FR "Français"
#define OPTION_VAL_GERMAN_FR "Allemand"
#define OPTION_VAL_ITALIAN_FR "Italien"
#define OPTION_VAL_SPANISH_FR "Espagnol"
#define OPTION_VAL_CHINESE_FR "Chinois"
#define OPTION_VAL_KOREAN_FR "Coréen"
#define OPTION_VAL_DUTCH_FR "Néerlandais"
#define OPTION_VAL_PORTUGUESE_FR "Portugais"
#define OPTION_VAL_RUSSIAN_FR "Russe"
#define OPTION_VAL_TAIWANESE_FR "Taïwanais"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FR "Compilation asynchrone des shaders"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FR "Synchronisation GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_FR "Shaders précompilés"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FR "Multiplication précise des shaders"
#define CEMU_SHOW_GAME_FPS_LABEL_FR "Afficher les images/s du jeu"
#define CEMU_SHOW_GAME_FPS_INFO_0_FR "Afficher la fréquence d'images à laquelle le jeu est rendu. Le propre compteur d'images/s de RetroArch compte la fréquence à laquelle le cœur s'exécute, et il reste à 60 lorsque le jeu perd des images, car chaque exécution contient l'équivalent d'une image audio."
#define CEMU_UPSCALE_FILTER_LABEL_FR "Filtre de mise à l'échelle"
#define OPTION_VAL_LINEAR_FR "Linéaire"
#define OPTION_VAL_BICUBIC_FR "Bicubique"
#define OPTION_VAL_BICUBIC_HERMITE_FR "Hermite bicubique"
#define OPTION_VAL_NEAREST_FR "Au plus proche"
#define CEMU_DOWNSCALE_FILTER_LABEL_FR "Filtre de réduction d'échelle"
#define CEMU_INTERNAL_RESOLUTION_LABEL_FR "Résolution interne"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FR "Une solution de repli générique pour les jeux ne disposant pas de pack graphique de résolution : elle redimensionne toutes les cibles de rendu qui sont au format de l'écran, ce qui pourrait poser problème pour certains jeux les utilisant à des fins qui ne supportent pas le redimensionnement. Il s'agit d'un multiplicateur basé sur la résolution native du jeu : pour un jeu en 720p, un facteur de x0,5 donne du 640 x 360 (soit un quart des pixels) et un facteur de x2 donne du 2560 x 1440 ; pour un jeu en 1080p, le facteur x0,5 donne du 960 x 540. Lorsqu'un pack de résolution est activé pour le jeu chargé (via les Packs graphiques), c'est ce pack qui définit la résolution et cette option est masquée."
#define OPTION_VAL_0_25X_FR "x0,25 (320 x 180 à 720p)"
#define OPTION_VAL_0_5X_FR "x0,5 (640 x 360 à 720p)"
#define OPTION_VAL_0_75X_FR "x0,75 (960 x 540 à 720p)"
#define OPTION_VAL_NATIVE_FR NULL
#define OPTION_VAL_1_5X_FR "x1,5 (1920 x 1080 à 720p)"
#define OPTION_VAL_2X_FR "x2 (2560 x 1440 à 720p)"
#define OPTION_VAL_3X_FR "x3 (3840 x 2160 à 720p)"
#define CEMU_THREAD_QUANTUM_LABEL_FR "Quantum de fil d'exécution"
#define CEMU_RUMBLE_STRENGTH_LABEL_FR "Force de la vibration"
#define CEMU_RUMBLE_STRENGTH_INFO_0_FR "L'intensité des vibrations de la manette lorsque le jeu les sollicite : qu'il s'agisse du moteur du GamePad, de celui de la télécommande Wii ou de celui de la manette Pro. Désactivée supprime toute vibration au niveau de l'interface."
#define OPTION_VAL_25_FR "25 %"
#define OPTION_VAL_50_FR "50 %"
#define OPTION_VAL_75_FR "75 %"
#define OPTION_VAL_100_FR "100 %"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FR "Émuler le Portail du Pouvoir de Skylanders"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FR "Émuler l'Infinity Base"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FR "Émuler le Toy Pad de Dimensions"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FR "Nombre de dispositions d'écran"
#define CEMU_SCREEN_LAYOUT1_LABEL_FR "Disposition 1"
#define OPTION_VAL_DEFAULT_SCREEN_FR "Écran par défaut"
#define OPTION_VAL_GAMEPAD_SCREEN_FR "Écran du GamePad"
#define OPTION_VAL_SIDE_BY_SIDE_FR "Côte à côte"
#define OPTION_VAL_TOP_BOTTOM_FR "Haut bas"
#define OPTION_VAL_PICTURE_IN_PICTURE_FR "Image dans l'image"
#define CEMU_SCREEN_LAYOUT2_LABEL_FR "Disposition 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_FR "Disposition 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_FR "Disposition 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_FR "Disposition 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FR "Disposition d'écran suivante"
#define OPTION_VAL_L_R_L2_R2_L3_R3_FR NULL
#define OPTION_VAL_SELECT_L3_FR NULL
#define OPTION_VAL_SELECT_R3_FR NULL
#define OPTION_VAL_TAB_FR "Tabulation"
#define CEMU_DRC_POSITION_LABEL_FR "Position du GamePad"
#define OPTION_VAL_NORMAL_FR "Normale"
#define OPTION_VAL_SWAPPED_FR "Échangé"
#define CEMU_LOG_TO_FILE_LABEL_FR "Écrire le journal de Cemu dans log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_FR "Journaliser les accès fichiers (débogage)"
#define CEMU_LOG_THREAD_SYNC_LABEL_FR "Journaliser la synchronisation des fils d'exécution (débogage)"
#define CEMU_LOG_SYSTEM_API_LABEL_FR "Journaliser les appels API système (débogage)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_FR "Journaliser la mémoire de texture (débogage)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_FR "Indique la quantité de mémoire de texture BC qui a dû être décompressée car ce processeur graphique ne peut pas l'échantillonner."
#define CEMU_LOG_INPUT_API_LABEL_FR "Journaliser les appels API de manette (débogage)"
#define CEMU_LOG_INPUT_API_INFO_0_FR "Enregistre tous les appels manette effectués par un titre — les manettes interrogées et les informations reçues. Génère beaucoup de données, mais seulement pendant quelques secondes à la fois."
#define CEMU_LOG_AUDIO_LABEL_FR "Journaliser l'audio et la régularité de l'affichage des images (débogage)"
#define CEMU_LOG_AUDIO_INFO_0_FR "Par seconde, combien d'échantillons l'AX a produits, combien l'anneau a dû en rejeter et combien l'interface graphique en a récupéré, mais aussi combien de fois l'interface graphique a exécuté le cœur, combien d'images le titre a terminées et la répartition du temps (attente du fil d'exécution du processeur graphique, affichage, audio). Ces informations permettent de déterminer si la lenteur d'un jeu est due au processeur émulé, au processeur graphique ou à l'interface graphique."
#define CEMU_LOG_THREAD_TIME_LABEL_FR "Journaliser le temps de processeur du fil d'exécution (débogage)"
#define CEMU_LOG_THREAD_TIME_INFO_0_FR "Une fois par seconde, le niveau d'activité de chaque fil d'exécution du cœur PowerPC émulé, du fil d'exécution du processeur graphique et du fil d'exécution de l'interface graphique est mesuré en proportion d'un cœur hôte. Un fil d'exécution dont l'activité avoisine les 100 % est celui qui ralentit le jeu."
#define CEMU_DUMP_SHADERS_LABEL_FR "Importer les shaders (débogage)"
#define CEMU_DUMP_SHADERS_INFO_0_FR "Écrit le code source de chaque shader utilisé par le jeu dans le dossier system/Cemu/dump/shaders, en utilisant les noms basés sur les hashs tels qu'ils apparaissent dans log.txt. Cette option sert à signaler un shader qui échoue ou s'affiche incorrectement sur un processeur graphique spécifique. Comme elle ralentit la compilation des shaders et sature rapidement le dossier, pensez à la désactiver par la suite."
#define CEMU_BC1_16BIT_LABEL_FR "Réduire la mémoire de texture BC1"
#define CEMU_BC1_16BIT_INFO_0_FR "Réduit de moitié le coût des textures BC1 sur un processeur graphique qui ne peut pas échantillonner BC, au prix d'un peu de vert. Aucun effet là où BC est pris en charge."
#define CEMU_GPU_API_LABEL_FR "API graphique"
#define CEMU_GPU_API_INFO_0_FR "L'API graphique utilisée par Cemu pour le rendu. (Redémarrage requis)"
#define OPTION_VAL_OPENGL_FR NULL
#define OPTION_VAL_VULKAN_FR NULL
#define CEMU_ACCOUNT_LABEL_FR "Compte actif"
#define CEMU_ACCOUNT_INFO_0_FR "Il s'agit du compte Wii U sous lequel le jeu s'exécute, chacun disposant de ses propres données de sauvegarde et de son propre Mii. La liste correspond aux comptes présents dans le dossier des comptes.\n\nLes modifications ne prennent effet qu'une fois le jeu fermé puis relancé, ou réinitialisé. Jusque-là, le jeu en cours d'exécution continue d'enregistrer les données sur le compte utilisé lors de son lancement."
#define CEMU_CREATE_ACCOUNT_LABEL_FR "Créer un compte"
#define CEMU_CREATE_ACCOUNT_INFO_0_FR "Crée un nouveau compte, nommé Player 2, Player 3 , etc., et le définit comme compte actif. L'option repasse ensuite sur Désactivé. La console peut contenir jusqu'à 12 comptes."
#define CEMU_REMOVE_ACCOUNT_LABEL_FR "Supprimer le compte"
#define CEMU_REMOVE_ACCOUNT_INFO_0_FR "ATTENTION : la suppression d'un compte entraîne également la suppression de ses données de sauvegarde pour tous les jeux, cette opération est irréversible.\n\nCette action supprime le compte sélectionné, tout comme le ferait la suppression d'un utilisateur sur la console : le compte est retiré de la liste des comptes et ses données de sauvegarde sont effacées des dossiers de sauvegarde de chaque titre. Le compte est supprimé lorsque vous quittez le menu, et cette option repasse alors sur Désactivé.\n\nIl est impossible de supprimer le compte actif, ni celui ayant servi à lancer le jeu en cours d'exécution tant que ce dernier n'a pas été fermé. Par conséquent, le dernier compte restant ne peut pas être supprimé."
#define CEMU_INSTALL_GAME_LABEL_FR "Installer les jeux"
#define CEMU_INSTALL_GAME_INFO_0_FR "Installe tous les jeux présents dans system/Cemu/titles, sous-dossiers inclus, vers le répertoire des jeux installés de la Wii U émulée (saves/Cemu/mlc01/usr/title/00050000), simulant ainsi l'installation d'un jeu depuis un disque sur la console. Un jeu peut se présenter sous la forme d'une image disque (.wud, .wux, .iso) ou d'un fichier .wua ; les mises à jour et les DLC contenus dans un fichier .wua sont installés en même temps que le jeu. Si un jeu est déjà installé dans une version identique ou plus récente, il n'est pas modifié.\n\nLorsque cette option est activée, l'installation démarre immédiatement et sa progression s'affiche sous forme de notification, l'option se désactive automatiquement une fois tous les jeux installés. Pour lancer un jeu installé, il faut charger le fichier .rpx situé dans le dossier code du dossier des jeux installés ; l'image disque d'origine n'est alors plus nécessaire."
#define CEMU_UNINSTALL_GAME_LABEL_FR "Désinstaller le jeu"
#define CEMU_UNINSTALL_GAME_INFO_0_FR "Désinstalle le jeu en cours d'exécution du répertoire d'installation (saves/Cemu/mlc01/usr/title/00050000) une fois celui-ci fermé ou réinitialisé, ainsi que sa mise à jour et ses DLC installés ; le processus reste actif jusqu'à ce moment-là. Les sauvegardes sont conservées, tout comme l'image disque ou le fichier .wua ayant servi à l'installation."
#define CEMU_INSTALL_TITLES_LABEL_FR "Installer le contenu"
#define CEMU_INSTALL_TITLES_INFO_0_FR "Installe toutes les mises à jour de titre et tous les DLC présents dans system/Cemu/titles, sous-dossiers inclus, vers le stockage de la Wii U émulée (saves/Cemu/mlc01/usr/title). Chaque élément doit se trouver dans son propre dossier au sein de system/Cemu/titles ; un téléchargement NUS (fichiers .app) nécessite la présence des fichiers title.tmd et title.tik, contenant la clé de déchiffrement, à ses côtés. Si une version identique ou plus récente est déjà installée, l'élément est ignoré.\n\nLorsque cette option est activée, l'installation démarre immédiatement et la progression s'affiche sous forme de notification ; l'option se désactive une fois tout le contenu installé, dès que l'on quitte ce menu ou que l'on modifie un autre paramètre. Le jeu utilise le contenu installé une fois redémarré.\n\nIl est possible d'installer du contenu provenant d'autres emplacements via le menu principal de RetroArch > Charger du contenu, en sélectionnant le fichier title.tmd correspondant, à condition que le fichier title.tik soit présent à côté."
#define CEMU_UNINSTALL_TITLES_LABEL_FR "Désinstaller le contenu"
#define CEMU_UNINSTALL_TITLES_INFO_0_FR "Désinstalle la mise à jour et les DLC du jeu en cours d'exécution depuis le stockage de la Wii U émulée (saves/Cemu/mlc01/usr/title) une fois le jeu fermé ou réinitialisé ; l'option reste activée jusqu'à ce moment-là. Les fichiers présents dans system/Cemu/titles ne sont pas modifiés."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_FR "Supprimer les fichiers après l'installation"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FR "ATTENTION : cette opération supprime des fichiers du dossier system/Cemu/titles et est irréversible. Le dossier system/Cemu/titles est géré par le cœur ; conservez toute copie unique d'un dump ailleurs.\n\nSupprime les éléments installés via Installer les jeux et Installer le contenu dans system/Cemu/titles : le dossier d'une mise à jour de titre ou d'un DLC une fois installé, ainsi qu'une image disque ou un fichier .wua une fois que tout son contenu a été installé (la fonction Installer le contenu seule laisse un fichier .wua qui contient également le jeu). Les fichiers utilisés par le jeu en cours d'exécution sont supprimés lorsque celui-ci est fermé ou réinitialisé. Le contenu chargé via Charger du contenu reste à son emplacement d'origine."
#define CEMU_WUA_OUTPUT_DIR_LABEL_FR "Dossier de sortie"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_FR "L'emplacement où le fichier .wua est écrit. Il faut prévoir de l'espace pour celui-ci."
#define CEMU_CONVERT_TO_WUA_LABEL_FR "Lancer la conversion vers WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_FR "Écrit le titre dans le dossier de sortie au format .wua. Il continue de fonctionner pendant que cela se produit."

struct retro_core_option_v2_category option_cats_fr[] = {
	{ "video", CATEGORY_VIDEO_LABEL_FR, CATEGORY_VIDEO_INFO_0_FR },
	{ "shaders", CATEGORY_SHADERS_LABEL_FR, CATEGORY_SHADERS_INFO_0_FR },
	{ "screen", CATEGORY_SCREEN_LABEL_FR, CATEGORY_SCREEN_INFO_0_FR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_FR, CATEGORY_SYSTEM_INFO_0_FR },
	{ "addons", CATEGORY_ADDONS_LABEL_FR, CATEGORY_ADDONS_INFO_0_FR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_FR, CATEGORY_ACCOUNTS_INFO_0_FR },
	{ "install", CATEGORY_INSTALL_LABEL_FR, CATEGORY_INSTALL_INFO_0_FR },
	{ "convert", CATEGORY_CONVERT_LABEL_FR, CATEGORY_CONVERT_INFO_0_FR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FR, CATEGORY_GRAPHIC_PACKS_INFO_0_FR },
	{ "cheats", CATEGORY_CHEATS_LABEL_FR, CATEGORY_CHEATS_INFO_0_FR },
	{ "logging", CATEGORY_LOGGING_LABEL_FR, CATEGORY_LOGGING_INFO_0_FR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_FR,
		NULL,
		CEMU_CPU_MODE_INFO_0_FR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_FR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_FR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_FR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_FR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_FR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_FR },
			{ "Japanese", OPTION_VAL_JAPANESE_FR },
			{ "French", OPTION_VAL_FRENCH_FR },
			{ "German", OPTION_VAL_GERMAN_FR },
			{ "Italian", OPTION_VAL_ITALIAN_FR },
			{ "Spanish", OPTION_VAL_SPANISH_FR },
			{ "Chinese", OPTION_VAL_CHINESE_FR },
			{ "Korean", OPTION_VAL_KOREAN_FR },
			{ "Dutch", OPTION_VAL_DUTCH_FR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_FR },
			{ "Russian", OPTION_VAL_RUSSIAN_FR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_FR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_FR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FR },
			{ "bicubic", OPTION_VAL_BICUBIC_FR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FR },
			{ "nearest", OPTION_VAL_NEAREST_FR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_FR },
			{ "bicubic", OPTION_VAL_BICUBIC_FR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_FR },
			{ "nearest", OPTION_VAL_NEAREST_FR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_FR },
			{ "0.5x", OPTION_VAL_0_5X_FR },
			{ "0.75x", OPTION_VAL_0_75X_FR },
			{ "native", OPTION_VAL_NATIVE_FR },
			{ "1.5x", OPTION_VAL_1_5X_FR },
			{ "2x", OPTION_VAL_2X_FR },
			{ "3x", OPTION_VAL_3X_FR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_FR },
			{ "50", OPTION_VAL_50_FR },
			{ "75", OPTION_VAL_75_FR },
			{ "100", OPTION_VAL_100_FR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_FR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_FR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_FR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_FR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_FR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_FR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_FR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_FR },
			{ "Tab", OPTION_VAL_TAB_FR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_FR },
			{ "swapped", OPTION_VAL_SWAPPED_FR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_FR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_FR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_FR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_FR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_FR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_FR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_FR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_FR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_FR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_FR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_FR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_FR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_FR,
		NULL,
		CEMU_GPU_API_INFO_0_FR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FR },
			{ "Vulkan", OPTION_VAL_VULKAN_FR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FR,
		NULL,
		CEMU_ACCOUNT_INFO_0_FR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_FR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_FR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_FR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_FR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_FR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_FR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_FR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_FR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_FR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_FR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_FR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_FR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_FR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_FR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_FR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GA */

#define CATEGORY_VIDEO_LABEL_GA "Físeán"
#define CATEGORY_VIDEO_INFO_0_GA "Taifeach, scálú agus luas na bhfrámaí."
#define CATEGORY_SHADERS_LABEL_GA "Scáthaitheoirí"
#define CATEGORY_SHADERS_INFO_0_GA "Aistriú, taisceadh agus tiomsú scáthóirí."
#define CATEGORY_SCREEN_LABEL_GA "Scáileán"
#define CATEGORY_SCREEN_INFO_0_GA "Cén scáileán Wii U a thaispeántar, agus conas."
#define CATEGORY_SYSTEM_LABEL_GA "Córas"
#define CATEGORY_SYSTEM_INFO_0_GA "LAP, teanga agus sceidealú."
#define CATEGORY_ADDONS_LABEL_GA "Breiseáin"
#define CATEGORY_ADDONS_INFO_0_GA "Tairseacha Skylanders, Infinity agus Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_GA "Cuntais"
#define CATEGORY_ACCOUNTS_INFO_0_GA "Bainistigh cuntais i bhfillteán na gcuntas ar an Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_GA "Ábhar"
#define CATEGORY_INSTALL_INFO_0_GA NULL
#define CATEGORY_CONVERT_LABEL_GA "Tiontaigh go WUA"
#define CATEGORY_CONVERT_INFO_0_GA "Scríobh an teideal luchtaithe amach mar chartlann .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_GA "Pacáistí Grafaicí"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_GA "Pacáistí grafaicí an chluiche atá luchtaithe agus a gcuid réamhshocruithe. Cuirtear na hathruithe i bhfeidhm an chéad uair eile a luchtófar an cluiche."
#define CATEGORY_CHEATS_LABEL_GA "Aicearraí"
#define CATEGORY_CHEATS_INFO_0_GA "Na pacáistí cleas don chluiche atá á rith, ón bhfillteán 'Cheats' sna pacáistí grafaicí. Cuirtear na hathruithe i bhfeidhm an chéad uair eile a luchtófar an cluiche."
#define CATEGORY_LOGGING_LABEL_GA "Logáil"
#define CATEGORY_LOGGING_INFO_0_GA "Aschur loga breise, chun fadhbanna a dhiagnóisiú."
#define CEMU_CPU_MODE_LABEL_GA "Modh LAP"
#define CEMU_CPU_MODE_INFO_0_GA "An chaoi a ndéantar aithris ar chroíleacáin PowerPC an Wii U. Roghnaíonn an socrú 'Auto' an t-aththiomsaitheoir ilchroíleacán má bhíonn ceithre chroíleacán fisiciúil nó níos mó ag an LAP, agus an leagan aonchroíleacáin murach sin. Bíonn na léirmhínitheoirí i bhfad níos moille agus tá siad ceaptha le haghaidh dífhabhtaithe. (Teastaíonn atosú)"
#define OPTION_VAL_AUTO_GA "Uathoibríoch"
#define OPTION_VAL_SINGLECORE_INTERPRETER_GA "Léirmhínitheoir aonchroíleáin"
#define OPTION_VAL_SINGLECORE_RECOMPILER_GA "Aththiomsaitheoir Aonchroí"
#define OPTION_VAL_MULTICORE_RECOMPILER_GA "Athiompailteoir Ilchroí"
#define OPTION_VAL_MULTICORE_INTERPRETER_GA "Léirmhínitheoir Ilchroí"
#define CEMU_CONSOLE_LANGUAGE_LABEL_GA "Teanga an Chonsóil"
#define OPTION_VAL_ENGLISH_GA "Béarla"
#define OPTION_VAL_JAPANESE_GA "Seapáinis"
#define OPTION_VAL_FRENCH_GA "Fraincis"
#define OPTION_VAL_GERMAN_GA "Gearmáinis"
#define OPTION_VAL_ITALIAN_GA "Iodáilis"
#define OPTION_VAL_SPANISH_GA "Spáinnis"
#define OPTION_VAL_CHINESE_GA "Sínis"
#define OPTION_VAL_KOREAN_GA "Cóiréis"
#define OPTION_VAL_DUTCH_GA "Ollannais"
#define OPTION_VAL_PORTUGUESE_GA "Portaingéilis"
#define OPTION_VAL_RUSSIAN_GA "Rúisis"
#define OPTION_VAL_TAIWANESE_GA "Téavánach"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_GA "Tiomsú Scáthaitheora Asincrónach"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_GA "Sioncrónú GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_GA "Scáthóirí Réamhchomhthiomsaithe"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_GA "Iolrú Cruinn Scáthóra"
#define CEMU_SHOW_GAME_FPS_LABEL_GA "Taispeáin FPS an chluiche"
#define CEMU_SHOW_GAME_FPS_INFO_0_GA "Taispeáin an ráta frámaí a úsáideann an cluiche le linn rindreála. Déanann áireamhán FPS RetroArch féin comhaireamh ar cé chomh minic agus a ritheann an croíleacán, agus fanann an luach sin ag 60 fiú nuair a chailleann an cluiche frámaí, toisc go mbíonn méid fuaime comhionann le fráma amháin ag gabháil le gach rith."
#define CEMU_UPSCALE_FILTER_LABEL_GA "Scagaire Uasghrádaithe"
#define OPTION_VAL_LINEAR_GA "Líneach"
#define OPTION_VAL_BICUBIC_GA "Déchiúbach"
#define OPTION_VAL_BICUBIC_HERMITE_GA "Hermite déchiúbach"
#define OPTION_VAL_NEAREST_GA "Is cóngaraí"
#define CEMU_DOWNSCALE_FILTER_LABEL_GA "Scagaire Laghdaithe Scála"
#define CEMU_INTERNAL_RESOLUTION_LABEL_GA "Rún Inmheánach"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_GA NULL
#define OPTION_VAL_0_25X_GA "0.25x (320x180 ag 720p)"
#define OPTION_VAL_0_5X_GA "0.5x (640x360 ag 720p)"
#define OPTION_VAL_0_75X_GA "0.75x (960x540 ag 720p)"
#define OPTION_VAL_NATIVE_GA "Dúchasach"
#define OPTION_VAL_1_5X_GA "1.5x (1920x1080 ag 720p)"
#define OPTION_VAL_2X_GA "2x (2560x1440 ag 720p)"
#define OPTION_VAL_3X_GA "3x (3840x2160 ag 720p)"
#define CEMU_THREAD_QUANTUM_LABEL_GA "Snáithe Candamach"
#define CEMU_RUMBLE_STRENGTH_LABEL_GA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_GA NULL
#define OPTION_VAL_25_GA NULL
#define OPTION_VAL_50_GA NULL
#define OPTION_VAL_75_GA NULL
#define OPTION_VAL_100_GA NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GA "Aithris a dhéanamh ar Skylanders Portal of Power"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_GA "Aithris a dhéanamh ar Infinity Base"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GA "Aithris a dhéanamh ar Dimensions Toy Pad"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_GA "Líon na Leagan Amach Scáileáin"
#define CEMU_SCREEN_LAYOUT1_LABEL_GA "Leagan Amach 1"
#define OPTION_VAL_DEFAULT_SCREEN_GA "Scáileán Réamhshocraithe"
#define OPTION_VAL_GAMEPAD_SCREEN_GA "Scáileán an Cheap Cluiche"
#define OPTION_VAL_SIDE_BY_SIDE_GA "Taobh le Taobh"
#define OPTION_VAL_TOP_BOTTOM_GA "Barr Bun"
#define OPTION_VAL_PICTURE_IN_PICTURE_GA "Pictiúr i bPictiúr"
#define CEMU_SCREEN_LAYOUT2_LABEL_GA "Leagan amach 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_GA "Leagan amach 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_GA "Leagan amach 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_GA "Leagan amach 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_GA "Leagan Amach an Scáileáin Eile"
#define OPTION_VAL_L_R_L2_R2_L3_R3_GA NULL
#define OPTION_VAL_SELECT_L3_GA "Roghnaigh + L3"
#define OPTION_VAL_SELECT_R3_GA "Roghnaigh + R3"
#define OPTION_VAL_TAB_GA "Táb"
#define CEMU_DRC_POSITION_LABEL_GA "Seasamh an Cheap Cluiche"
#define OPTION_VAL_NORMAL_GA "Gnáth"
#define OPTION_VAL_SWAPPED_GA "Malartaithe"
#define CEMU_LOG_TO_FILE_LABEL_GA "Scríobh loga Cemu chuig log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_GA "Rochtain ar Chomhad Loga (dífhabhtú)"
#define CEMU_LOG_THREAD_SYNC_LABEL_GA "Sioncrónú Snáitheanna Loga (dífhabhtú)"
#define CEMU_LOG_SYSTEM_API_LABEL_GA "Logáil Glaonna API an Chórais (dífhabhtú)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_GA "Logáil Cuimhne Uigeachta (dífhabhtú)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_GA "Tuairiscítear an méid den chuimhne uigeachta atá i bhformáid BC agus a bhí le dídhbhrú toisc nach féidir leis an GPU seo sampláil a dhéanamh air."
#define CEMU_LOG_INPUT_API_LABEL_GA "Logáil Glaonna API (dífhabhtú)"
#define CEMU_LOG_INPUT_API_INFO_0_GA "Déanann sé logáil ar gach glao rialaitheora a dhéanann teideal — na pillíní ar rinne sé fiosrú fúthu agus an freagra a fuair sé. Torannach; ar feadh cúpla soicind gach uair."
#define CEMU_LOG_AUDIO_LABEL_GA "Logáil Fuaime agus Luasluail Frámaí (dífhabhtú)"
#define CEMU_LOG_AUDIO_INFO_0_GA "Gach soicind: cé mhéad sampla a tháirg AX, cé mhéad a bhí ar an bhfáinne a chaitheamh i leataobh, agus cé mhéad a ghlac an comhéadan tosaigh; chomh maith le cé mhéad uair a rith an comhéadan tosaigh an croí, cé mhéad fráma a chríochnaigh an teideal, agus cá háit ar caitheadh ​​an t-am (ag fanacht le snáithe an GPU, ag cur an íomhá ar taispeáint, agus an fhuaim). Úsáidtear é seo chun a fháil amach cé acu an LAP insamhlaithe, an GPU nó an comhéadan tosaigh atá ag cur moille ar chluiche atá ag rith go mall."
#define CEMU_LOG_THREAD_TIME_LABEL_GA "Logáil Am LAP an tSnáithe (dífhabhtú)"
#define CEMU_LOG_THREAD_TIME_INFO_0_GA NULL
#define CEMU_DUMP_SHADERS_LABEL_GA "Dumpáil Scáthóirí (dífhabhtú)"
#define CEMU_DUMP_SHADERS_INFO_0_GA "Scríobhann sé foinse gach *shader* a úsáideann an cluiche chuig `system/Cemu/dump/shaders`, agus ainmnítear iad de réir a gcuid *hash* mar a fheictear iad i `log.txt`. Úsáidtear é seo chun tuairisc a thabhairt ar *shader* a theipeann nó a tharraingítear go mícheart ar GPU áirithe. Moillíonn sé tiomsú na *shader* agus líonann sé an fillteán go tapa, mar sin déan é a mhúchadh arís ina dhiaidh sin."
#define CEMU_BC1_16BIT_LABEL_GA "Laghdaigh Cuimhne Uigeachta BC1"
#define CEMU_BC1_16BIT_INFO_0_GA "Laghdaítear go leith costas uigeachtaí BC1 ar GPU nach bhfuil in ann sampláil a dhéanamh ar BC, ar chostas giotán amháin den dath glas. Níl aon tionchar aige i gcásanna ina dtacaítear le BC."
#define CEMU_GPU_API_LABEL_GA "API Grafaice"
#define CEMU_GPU_API_INFO_0_GA "An API grafaicí a úsáideann Cemu chun rindreáil a dhéanamh. (Teastaíonn atosú)"
#define OPTION_VAL_OPENGL_GA NULL
#define OPTION_VAL_VULKAN_GA NULL
#define CEMU_ACCOUNT_LABEL_GA "Cuntas Gníomhach"
#define CEMU_ACCOUNT_INFO_0_GA "Is é an cuntas Wii U a úsáidtear chun an cluiche a reáchtáil — agus a bhfuil a shonraí sábhála agus a Mii féin ag gach ceann acu — atá i gceist anseo; liosta de na cuntais atá i bhfillteán na gcuntas atá sa liosta seo.\n\nCuirtear athrú i bhfeidhm nuair a dhúntar an cluiche agus nuair a thosaítear arís é, nó nuair a athshocraítear é. Go dtí sin, leanann an cluiche atá ar siúl de bheith ag sábháil sonraí chuig an gcuntas ar cuireadh tús leis ar dtús."
#define CEMU_CREATE_ACCOUNT_LABEL_GA "Cruthaigh Cuntas"
#define CEMU_CREATE_ACCOUNT_INFO_0_GA "Cruthaítear cuntas nua — darb ainm dó Player 2, Player 3, agus mar sin de — agus socraítear é mar an gCuntas Gníomhach. Ina dhiaidh sin, filleann an socrú ar OFF. Is féidir leis an gconsól suas le 12 chuntas a choinneáil."
#define CEMU_REMOVE_ACCOUNT_LABEL_GA "Bain an Cuntas"
#define CEMU_REMOVE_ACCOUNT_INFO_0_GA "RABHADH: Má bhaintear cuntas, scriostar freisin na sonraí sábhála a bhaineann leis i ngach cluiche, agus ní féidir an gníomh seo a chur ar ceal.\n\nBaintear an cuntas roghnaithe, díreach mar a tharlaíonn nuair a scriostar úsáideoir ar an gconsól: baintear an cuntas den liosta cuntas agus baintear na sonraí sábhála a bhaineann leis ó fhillteán sábhála gach cluiche. Baintear an cuntas nuair a fhágann tú an roghchlár, agus filleann an socrú ar 'AS' ina dhiaidh sin.\n\nNí féidir an cuntas gníomhach a bhaint, ná an cuntas a úsáideadh chun an cluiche atá ar siúl a thosú, go dtí go ndúntar an cluiche sin. Dá bhrí sin, ní féidir an cuntas deireanach a bhaint."
#define CEMU_INSTALL_GAME_LABEL_GA "Suiteáil Cluichí"
#define CEMU_INSTALL_GAME_INFO_0_GA NULL
#define CEMU_UNINSTALL_GAME_LABEL_GA "Díshuiteáil an Cluiche"
#define CEMU_UNINSTALL_GAME_INFO_0_GA "Baineann sé an cluiche atá á rith den eolaire ina bhfuil sé suiteáilte (saves/Cemu/mlc01/usr/title/00050000) nuair a dhéantar an cluiche a dhúnadh nó a athshocrú, chomh maith leis an nuashonrú teidil agus an DLC a bhí suiteáilte leis; fanann sé gníomhach go dtí sin. Fágtar na comhaid sábhála slán, chomh maith leis an íomhá diosca nó an comhad .wua ónar suiteáladh é."
#define CEMU_INSTALL_TITLES_LABEL_GA "Suiteáil Ábhar"
#define CEMU_INSTALL_TITLES_INFO_0_GA NULL
#define CEMU_UNINSTALL_TITLES_LABEL_GA "Díshuiteáil Ábhar"
#define CEMU_UNINSTALL_TITLES_INFO_0_GA "Baintear nuashonrú teidil agus DLC an chluiche atá á rith ó stóras an Wii U insamhlaithe (saves/Cemu/mlc01/usr/title) nuair a dhúntar an cluiche nó nuair a athshocraítear é; fanann an ghné seo gníomhach go dtí sin. Ní dhéantar teagmháil leis na cóipeanna atá i system/Cemu/titles."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_GA "Bain comhaid tar éis iad a shuiteáil"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_GA "RABHADH: Scriosann sé seo comhaid ó system/Cemu/titles, agus ní féidir an gníomh sin a chur ar ceal. Is fillteán é system/Cemu/titles atá le bainistiú ag an gcroí-chóras; coinnigh an t-aon chóip amháin de dhumpáil in áit eile.\n\nScriosann sé seo nithe a shuiteáil *Install Games* agus *Install Content* ó system/Cemu/titles: fillteán nuashonraithe teidil nó DLC nuair a bhíonn sé suiteáilte, agus íomhá diosca nó comhad .wua nuair a bhíonn gach rud atá iontu suiteáilte (fágann *Install Content* ina aonar comhad .wua ina bhfuil an cluiche féin chomh maith). Scriostar comhaid atá in úsáid ag an gcluiche atá ar siúl nuair a dhúntar nó nuair a athshocraítear é. Fágtar an t-ábhar a luchtú trí *Load Content* san áit ina bhfuil sé."
#define CEMU_WUA_OUTPUT_DIR_LABEL_GA "Eolaire Aschuir"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_GA "Áit a bhfuil an .wua scríofa. Teastaíonn spás dó."
#define CEMU_CONVERT_TO_WUA_LABEL_GA "Tosaigh an t-aistriú go WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_GA "Scríobhann sé an teideal chuig an eolaire aschuir mar chomhad .wua. Leanann sé air ag rith fad is atá sé seo ar siúl."

struct retro_core_option_v2_category option_cats_ga[] = {
	{ "video", CATEGORY_VIDEO_LABEL_GA, CATEGORY_VIDEO_INFO_0_GA },
	{ "shaders", CATEGORY_SHADERS_LABEL_GA, CATEGORY_SHADERS_INFO_0_GA },
	{ "screen", CATEGORY_SCREEN_LABEL_GA, CATEGORY_SCREEN_INFO_0_GA },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_GA, CATEGORY_SYSTEM_INFO_0_GA },
	{ "addons", CATEGORY_ADDONS_LABEL_GA, CATEGORY_ADDONS_INFO_0_GA },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_GA, CATEGORY_ACCOUNTS_INFO_0_GA },
	{ "install", CATEGORY_INSTALL_LABEL_GA, CATEGORY_INSTALL_INFO_0_GA },
	{ "convert", CATEGORY_CONVERT_LABEL_GA, CATEGORY_CONVERT_INFO_0_GA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_GA, CATEGORY_GRAPHIC_PACKS_INFO_0_GA },
	{ "cheats", CATEGORY_CHEATS_LABEL_GA, CATEGORY_CHEATS_INFO_0_GA },
	{ "logging", CATEGORY_LOGGING_LABEL_GA, CATEGORY_LOGGING_INFO_0_GA },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ga[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_GA,
		NULL,
		CEMU_CPU_MODE_INFO_0_GA,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_GA },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_GA },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_GA },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_GA },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_GA },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_GA },
			{ "Japanese", OPTION_VAL_JAPANESE_GA },
			{ "French", OPTION_VAL_FRENCH_GA },
			{ "German", OPTION_VAL_GERMAN_GA },
			{ "Italian", OPTION_VAL_ITALIAN_GA },
			{ "Spanish", OPTION_VAL_SPANISH_GA },
			{ "Chinese", OPTION_VAL_CHINESE_GA },
			{ "Korean", OPTION_VAL_KOREAN_GA },
			{ "Dutch", OPTION_VAL_DUTCH_GA },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_GA },
			{ "Russian", OPTION_VAL_RUSSIAN_GA },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_GA },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_GA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_GA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_GA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_GA },
			{ "bicubic", OPTION_VAL_BICUBIC_GA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_GA },
			{ "nearest", OPTION_VAL_NEAREST_GA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_GA },
			{ "bicubic", OPTION_VAL_BICUBIC_GA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_GA },
			{ "nearest", OPTION_VAL_NEAREST_GA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_GA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_GA,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_GA },
			{ "0.5x", OPTION_VAL_0_5X_GA },
			{ "0.75x", OPTION_VAL_0_75X_GA },
			{ "native", OPTION_VAL_NATIVE_GA },
			{ "1.5x", OPTION_VAL_1_5X_GA },
			{ "2x", OPTION_VAL_2X_GA },
			{ "3x", OPTION_VAL_3X_GA },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_GA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_GA,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_GA },
			{ "50", OPTION_VAL_50_GA },
			{ "75", OPTION_VAL_75_GA },
			{ "100", OPTION_VAL_100_GA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GA },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GA },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GA },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GA },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GA },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_GA },
			{ "Select + L3", OPTION_VAL_SELECT_L3_GA },
			{ "Select + R3", OPTION_VAL_SELECT_R3_GA },
			{ "Tab", OPTION_VAL_TAB_GA },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_GA },
			{ "swapped", OPTION_VAL_SWAPPED_GA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_GA,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_GA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_GA,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_GA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_GA,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_GA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_GA,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_GA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_GA,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_GA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_GA,
		NULL,
		CEMU_BC1_16BIT_INFO_0_GA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_GA,
		NULL,
		CEMU_GPU_API_INFO_0_GA,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_GA },
			{ "Vulkan", OPTION_VAL_VULKAN_GA },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_GA,
		NULL,
		CEMU_ACCOUNT_INFO_0_GA,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_GA,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_GA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_GA,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_GA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_GA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_GA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_GA,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_GA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_GA,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_GA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_GA,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_GA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_GA,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_GA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_GA,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_GA,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_GA,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_GA,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ga = {
   option_cats_ga,
   option_defs_ga
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_SHADERS_LABEL_GL "Sombreadores"
#define CATEGORY_SHADERS_INFO_0_GL NULL
#define CATEGORY_SCREEN_LABEL_GL NULL
#define CATEGORY_SCREEN_INFO_0_GL NULL
#define CATEGORY_SYSTEM_LABEL_GL "Sistema"
#define CATEGORY_SYSTEM_INFO_0_GL NULL
#define CATEGORY_ADDONS_LABEL_GL NULL
#define CATEGORY_ADDONS_INFO_0_GL NULL
#define CATEGORY_ACCOUNTS_LABEL_GL "Contas"
#define CATEGORY_ACCOUNTS_INFO_0_GL NULL
#define CATEGORY_INSTALL_LABEL_GL "Contido"
#define CATEGORY_INSTALL_INFO_0_GL NULL
#define CATEGORY_CONVERT_LABEL_GL NULL
#define CATEGORY_CONVERT_INFO_0_GL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_GL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_GL NULL
#define CATEGORY_CHEATS_LABEL_GL "Trucos"
#define CATEGORY_CHEATS_INFO_0_GL NULL
#define CATEGORY_LOGGING_LABEL_GL "Rexistro de eventos"
#define CATEGORY_LOGGING_INFO_0_GL NULL
#define CEMU_CPU_MODE_LABEL_GL NULL
#define CEMU_CPU_MODE_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_GL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_GL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_GL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_GL NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_GL NULL
#define OPTION_VAL_ENGLISH_GL "Inglés"
#define OPTION_VAL_JAPANESE_GL "Xaponés"
#define OPTION_VAL_FRENCH_GL "Francés"
#define OPTION_VAL_GERMAN_GL "Alemán"
#define OPTION_VAL_ITALIAN_GL "Italiano"
#define OPTION_VAL_SPANISH_GL "Español"
#define OPTION_VAL_CHINESE_GL NULL
#define OPTION_VAL_KOREAN_GL NULL
#define OPTION_VAL_DUTCH_GL NULL
#define OPTION_VAL_PORTUGUESE_GL NULL
#define OPTION_VAL_RUSSIAN_GL NULL
#define OPTION_VAL_TAIWANESE_GL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_GL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_GL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_GL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_GL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_GL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_GL NULL
#define CEMU_UPSCALE_FILTER_LABEL_GL NULL
#define OPTION_VAL_LINEAR_GL "Lineal"
#define OPTION_VAL_BICUBIC_GL "Bicúbico"
#define OPTION_VAL_BICUBIC_HERMITE_GL NULL
#define OPTION_VAL_NEAREST_GL NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_GL NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_GL "Resolución interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_GL NULL
#define OPTION_VAL_0_25X_GL NULL
#define OPTION_VAL_0_5X_GL NULL
#define OPTION_VAL_0_75X_GL NULL
#define OPTION_VAL_NATIVE_GL "Nativo"
#define OPTION_VAL_1_5X_GL NULL
#define OPTION_VAL_2X_GL NULL
#define OPTION_VAL_3X_GL NULL
#define CEMU_THREAD_QUANTUM_LABEL_GL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_GL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_GL NULL
#define OPTION_VAL_25_GL NULL
#define OPTION_VAL_50_GL NULL
#define OPTION_VAL_75_GL NULL
#define OPTION_VAL_100_GL NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_GL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GL NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_GL NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_GL NULL
#define OPTION_VAL_DEFAULT_SCREEN_GL NULL
#define OPTION_VAL_GAMEPAD_SCREEN_GL NULL
#define OPTION_VAL_SIDE_BY_SIDE_GL NULL
#define OPTION_VAL_TOP_BOTTOM_GL NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_GL NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_GL NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_GL NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_GL NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_GL NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_GL NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_GL NULL
#define OPTION_VAL_SELECT_L3_GL NULL
#define OPTION_VAL_SELECT_R3_GL NULL
#define OPTION_VAL_TAB_GL NULL
#define CEMU_DRC_POSITION_LABEL_GL NULL
#define OPTION_VAL_NORMAL_GL NULL
#define OPTION_VAL_SWAPPED_GL NULL
#define CEMU_LOG_TO_FILE_LABEL_GL NULL
#define CEMU_LOG_FILESYSTEM_LABEL_GL NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_GL NULL
#define CEMU_LOG_SYSTEM_API_LABEL_GL NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_GL NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_GL NULL
#define CEMU_LOG_INPUT_API_LABEL_GL NULL
#define CEMU_LOG_INPUT_API_INFO_0_GL NULL
#define CEMU_LOG_AUDIO_LABEL_GL NULL
#define CEMU_LOG_AUDIO_INFO_0_GL NULL
#define CEMU_LOG_THREAD_TIME_LABEL_GL NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_GL NULL
#define CEMU_DUMP_SHADERS_LABEL_GL NULL
#define CEMU_DUMP_SHADERS_INFO_0_GL NULL
#define CEMU_BC1_16BIT_LABEL_GL NULL
#define CEMU_BC1_16BIT_INFO_0_GL NULL
#define CEMU_GPU_API_LABEL_GL NULL
#define CEMU_GPU_API_INFO_0_GL NULL
#define OPTION_VAL_OPENGL_GL NULL
#define OPTION_VAL_VULKAN_GL NULL
#define CEMU_ACCOUNT_LABEL_GL NULL
#define CEMU_ACCOUNT_INFO_0_GL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_GL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_GL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_GL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_GL NULL
#define CEMU_INSTALL_GAME_LABEL_GL NULL
#define CEMU_INSTALL_GAME_INFO_0_GL NULL
#define CEMU_UNINSTALL_GAME_LABEL_GL NULL
#define CEMU_UNINSTALL_GAME_INFO_0_GL NULL
#define CEMU_INSTALL_TITLES_LABEL_GL NULL
#define CEMU_INSTALL_TITLES_INFO_0_GL NULL
#define CEMU_UNINSTALL_TITLES_LABEL_GL NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_GL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_GL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_GL NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_GL NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_GL NULL
#define CEMU_CONVERT_TO_WUA_LABEL_GL NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
	{ "video", CATEGORY_VIDEO_LABEL_GL, CATEGORY_VIDEO_INFO_0_GL },
	{ "shaders", CATEGORY_SHADERS_LABEL_GL, CATEGORY_SHADERS_INFO_0_GL },
	{ "screen", CATEGORY_SCREEN_LABEL_GL, CATEGORY_SCREEN_INFO_0_GL },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_GL, CATEGORY_SYSTEM_INFO_0_GL },
	{ "addons", CATEGORY_ADDONS_LABEL_GL, CATEGORY_ADDONS_INFO_0_GL },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_GL, CATEGORY_ACCOUNTS_INFO_0_GL },
	{ "install", CATEGORY_INSTALL_LABEL_GL, CATEGORY_INSTALL_INFO_0_GL },
	{ "convert", CATEGORY_CONVERT_LABEL_GL, CATEGORY_CONVERT_INFO_0_GL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_GL, CATEGORY_GRAPHIC_PACKS_INFO_0_GL },
	{ "cheats", CATEGORY_CHEATS_LABEL_GL, CATEGORY_CHEATS_INFO_0_GL },
	{ "logging", CATEGORY_LOGGING_LABEL_GL, CATEGORY_LOGGING_INFO_0_GL },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_GL,
		NULL,
		CEMU_CPU_MODE_INFO_0_GL,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_GL },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_GL },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_GL },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_GL },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_GL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_GL },
			{ "Japanese", OPTION_VAL_JAPANESE_GL },
			{ "French", OPTION_VAL_FRENCH_GL },
			{ "German", OPTION_VAL_GERMAN_GL },
			{ "Italian", OPTION_VAL_ITALIAN_GL },
			{ "Spanish", OPTION_VAL_SPANISH_GL },
			{ "Chinese", OPTION_VAL_CHINESE_GL },
			{ "Korean", OPTION_VAL_KOREAN_GL },
			{ "Dutch", OPTION_VAL_DUTCH_GL },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_GL },
			{ "Russian", OPTION_VAL_RUSSIAN_GL },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_GL },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_GL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_GL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_GL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_GL },
			{ "bicubic", OPTION_VAL_BICUBIC_GL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_GL },
			{ "nearest", OPTION_VAL_NEAREST_GL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_GL },
			{ "bicubic", OPTION_VAL_BICUBIC_GL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_GL },
			{ "nearest", OPTION_VAL_NEAREST_GL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_GL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_GL,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_GL },
			{ "0.5x", OPTION_VAL_0_5X_GL },
			{ "0.75x", OPTION_VAL_0_75X_GL },
			{ "native", OPTION_VAL_NATIVE_GL },
			{ "1.5x", OPTION_VAL_1_5X_GL },
			{ "2x", OPTION_VAL_2X_GL },
			{ "3x", OPTION_VAL_3X_GL },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_GL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_GL,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_GL },
			{ "50", OPTION_VAL_50_GL },
			{ "75", OPTION_VAL_75_GL },
			{ "100", OPTION_VAL_100_GL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_GL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_GL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_GL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_GL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_GL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_GL },
			{ "Select + L3", OPTION_VAL_SELECT_L3_GL },
			{ "Select + R3", OPTION_VAL_SELECT_R3_GL },
			{ "Tab", OPTION_VAL_TAB_GL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_GL },
			{ "swapped", OPTION_VAL_SWAPPED_GL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_GL,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_GL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_GL,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_GL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_GL,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_GL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_GL,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_GL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_GL,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_GL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_GL,
		NULL,
		CEMU_BC1_16BIT_INFO_0_GL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_GL,
		NULL,
		CEMU_GPU_API_INFO_0_GL,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_GL },
			{ "Vulkan", OPTION_VAL_VULKAN_GL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_GL,
		NULL,
		CEMU_ACCOUNT_INFO_0_GL,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_GL,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_GL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_GL,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_GL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_GL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_GL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_GL,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_GL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_GL,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_GL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_GL,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_GL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_GL,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_GL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_GL,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_GL,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_GL,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_GL,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE "וידאו"
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_SHADERS_LABEL_HE NULL
#define CATEGORY_SHADERS_INFO_0_HE NULL
#define CATEGORY_SCREEN_LABEL_HE NULL
#define CATEGORY_SCREEN_INFO_0_HE NULL
#define CATEGORY_SYSTEM_LABEL_HE NULL
#define CATEGORY_SYSTEM_INFO_0_HE NULL
#define CATEGORY_ADDONS_LABEL_HE NULL
#define CATEGORY_ADDONS_INFO_0_HE NULL
#define CATEGORY_ACCOUNTS_LABEL_HE NULL
#define CATEGORY_ACCOUNTS_INFO_0_HE NULL
#define CATEGORY_INSTALL_LABEL_HE NULL
#define CATEGORY_INSTALL_INFO_0_HE NULL
#define CATEGORY_CONVERT_LABEL_HE NULL
#define CATEGORY_CONVERT_INFO_0_HE NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HE NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HE NULL
#define CATEGORY_CHEATS_LABEL_HE NULL
#define CATEGORY_CHEATS_INFO_0_HE NULL
#define CATEGORY_LOGGING_LABEL_HE "רישום"
#define CATEGORY_LOGGING_INFO_0_HE NULL
#define CEMU_CPU_MODE_LABEL_HE NULL
#define CEMU_CPU_MODE_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_HE NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HE NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HE NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HE NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_HE NULL
#define OPTION_VAL_ENGLISH_HE NULL
#define OPTION_VAL_JAPANESE_HE NULL
#define OPTION_VAL_FRENCH_HE NULL
#define OPTION_VAL_GERMAN_HE NULL
#define OPTION_VAL_ITALIAN_HE NULL
#define OPTION_VAL_SPANISH_HE NULL
#define OPTION_VAL_CHINESE_HE NULL
#define OPTION_VAL_KOREAN_HE NULL
#define OPTION_VAL_DUTCH_HE NULL
#define OPTION_VAL_PORTUGUESE_HE NULL
#define OPTION_VAL_RUSSIAN_HE NULL
#define OPTION_VAL_TAIWANESE_HE NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HE NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HE NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HE NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HE NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HE NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HE NULL
#define CEMU_UPSCALE_FILTER_LABEL_HE NULL
#define OPTION_VAL_LINEAR_HE NULL
#define OPTION_VAL_BICUBIC_HE NULL
#define OPTION_VAL_BICUBIC_HERMITE_HE NULL
#define OPTION_VAL_NEAREST_HE NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_HE NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_HE NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HE NULL
#define OPTION_VAL_0_25X_HE NULL
#define OPTION_VAL_0_5X_HE NULL
#define OPTION_VAL_0_75X_HE NULL
#define OPTION_VAL_NATIVE_HE NULL
#define OPTION_VAL_1_5X_HE NULL
#define OPTION_VAL_2X_HE NULL
#define OPTION_VAL_3X_HE NULL
#define CEMU_THREAD_QUANTUM_LABEL_HE NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HE NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HE NULL
#define OPTION_VAL_25_HE NULL
#define OPTION_VAL_50_HE NULL
#define OPTION_VAL_75_HE NULL
#define OPTION_VAL_100_HE NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HE NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HE NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HE NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HE NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_HE NULL
#define OPTION_VAL_DEFAULT_SCREEN_HE NULL
#define OPTION_VAL_GAMEPAD_SCREEN_HE NULL
#define OPTION_VAL_SIDE_BY_SIDE_HE NULL
#define OPTION_VAL_TOP_BOTTOM_HE NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_HE NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_HE NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_HE NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_HE NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_HE NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HE NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_HE NULL
#define OPTION_VAL_SELECT_L3_HE NULL
#define OPTION_VAL_SELECT_R3_HE NULL
#define OPTION_VAL_TAB_HE NULL
#define CEMU_DRC_POSITION_LABEL_HE NULL
#define OPTION_VAL_NORMAL_HE NULL
#define OPTION_VAL_SWAPPED_HE NULL
#define CEMU_LOG_TO_FILE_LABEL_HE NULL
#define CEMU_LOG_FILESYSTEM_LABEL_HE NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_HE NULL
#define CEMU_LOG_SYSTEM_API_LABEL_HE NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_HE NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_HE NULL
#define CEMU_LOG_INPUT_API_LABEL_HE NULL
#define CEMU_LOG_INPUT_API_INFO_0_HE NULL
#define CEMU_LOG_AUDIO_LABEL_HE NULL
#define CEMU_LOG_AUDIO_INFO_0_HE NULL
#define CEMU_LOG_THREAD_TIME_LABEL_HE NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_HE NULL
#define CEMU_DUMP_SHADERS_LABEL_HE NULL
#define CEMU_DUMP_SHADERS_INFO_0_HE NULL
#define CEMU_BC1_16BIT_LABEL_HE NULL
#define CEMU_BC1_16BIT_INFO_0_HE NULL
#define CEMU_GPU_API_LABEL_HE NULL
#define CEMU_GPU_API_INFO_0_HE NULL
#define OPTION_VAL_OPENGL_HE NULL
#define OPTION_VAL_VULKAN_HE NULL
#define CEMU_ACCOUNT_LABEL_HE NULL
#define CEMU_ACCOUNT_INFO_0_HE NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HE NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HE NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HE NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HE NULL
#define CEMU_INSTALL_GAME_LABEL_HE NULL
#define CEMU_INSTALL_GAME_INFO_0_HE NULL
#define CEMU_UNINSTALL_GAME_LABEL_HE NULL
#define CEMU_UNINSTALL_GAME_INFO_0_HE NULL
#define CEMU_INSTALL_TITLES_LABEL_HE NULL
#define CEMU_INSTALL_TITLES_INFO_0_HE NULL
#define CEMU_UNINSTALL_TITLES_LABEL_HE NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_HE NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_HE NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HE NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_HE NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_HE NULL
#define CEMU_CONVERT_TO_WUA_LABEL_HE NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
	{ "video", CATEGORY_VIDEO_LABEL_HE, CATEGORY_VIDEO_INFO_0_HE },
	{ "shaders", CATEGORY_SHADERS_LABEL_HE, CATEGORY_SHADERS_INFO_0_HE },
	{ "screen", CATEGORY_SCREEN_LABEL_HE, CATEGORY_SCREEN_INFO_0_HE },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_HE, CATEGORY_SYSTEM_INFO_0_HE },
	{ "addons", CATEGORY_ADDONS_LABEL_HE, CATEGORY_ADDONS_INFO_0_HE },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_HE, CATEGORY_ACCOUNTS_INFO_0_HE },
	{ "install", CATEGORY_INSTALL_LABEL_HE, CATEGORY_INSTALL_INFO_0_HE },
	{ "convert", CATEGORY_CONVERT_LABEL_HE, CATEGORY_CONVERT_INFO_0_HE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HE, CATEGORY_GRAPHIC_PACKS_INFO_0_HE },
	{ "cheats", CATEGORY_CHEATS_LABEL_HE, CATEGORY_CHEATS_INFO_0_HE },
	{ "logging", CATEGORY_LOGGING_LABEL_HE, CATEGORY_LOGGING_INFO_0_HE },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_HE,
		NULL,
		CEMU_CPU_MODE_INFO_0_HE,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_HE },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_HE },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_HE },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_HE },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_HE },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_HE },
			{ "Japanese", OPTION_VAL_JAPANESE_HE },
			{ "French", OPTION_VAL_FRENCH_HE },
			{ "German", OPTION_VAL_GERMAN_HE },
			{ "Italian", OPTION_VAL_ITALIAN_HE },
			{ "Spanish", OPTION_VAL_SPANISH_HE },
			{ "Chinese", OPTION_VAL_CHINESE_HE },
			{ "Korean", OPTION_VAL_KOREAN_HE },
			{ "Dutch", OPTION_VAL_DUTCH_HE },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_HE },
			{ "Russian", OPTION_VAL_RUSSIAN_HE },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_HE },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_HE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HE },
			{ "bicubic", OPTION_VAL_BICUBIC_HE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HE },
			{ "nearest", OPTION_VAL_NEAREST_HE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HE },
			{ "bicubic", OPTION_VAL_BICUBIC_HE },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HE },
			{ "nearest", OPTION_VAL_NEAREST_HE },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HE,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_HE },
			{ "0.5x", OPTION_VAL_0_5X_HE },
			{ "0.75x", OPTION_VAL_0_75X_HE },
			{ "native", OPTION_VAL_NATIVE_HE },
			{ "1.5x", OPTION_VAL_1_5X_HE },
			{ "2x", OPTION_VAL_2X_HE },
			{ "3x", OPTION_VAL_3X_HE },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HE,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_HE },
			{ "50", OPTION_VAL_50_HE },
			{ "75", OPTION_VAL_75_HE },
			{ "100", OPTION_VAL_100_HE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HE },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HE },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HE },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HE },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HE },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HE },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HE },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HE },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HE },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_HE },
			{ "Select + L3", OPTION_VAL_SELECT_L3_HE },
			{ "Select + R3", OPTION_VAL_SELECT_R3_HE },
			{ "Tab", OPTION_VAL_TAB_HE },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_HE },
			{ "swapped", OPTION_VAL_SWAPPED_HE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_HE,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_HE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_HE,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_HE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_HE,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_HE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_HE,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_HE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_HE,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_HE,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_HE,
		NULL,
		CEMU_BC1_16BIT_INFO_0_HE,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_HE,
		NULL,
		CEMU_GPU_API_INFO_0_HE,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HE },
			{ "Vulkan", OPTION_VAL_VULKAN_HE },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HE,
		NULL,
		CEMU_ACCOUNT_INFO_0_HE,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_HE,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_HE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_HE,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_HE,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_HE,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_HE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_HE,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_HE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_HE,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_HE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_HE,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HE,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_HE,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_HE,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_HE,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_HE,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HR */

#define CATEGORY_VIDEO_LABEL_HR NULL
#define CATEGORY_VIDEO_INFO_0_HR NULL
#define CATEGORY_SHADERS_LABEL_HR NULL
#define CATEGORY_SHADERS_INFO_0_HR NULL
#define CATEGORY_SCREEN_LABEL_HR NULL
#define CATEGORY_SCREEN_INFO_0_HR NULL
#define CATEGORY_SYSTEM_LABEL_HR "Sustav"
#define CATEGORY_SYSTEM_INFO_0_HR NULL
#define CATEGORY_ADDONS_LABEL_HR NULL
#define CATEGORY_ADDONS_INFO_0_HR NULL
#define CATEGORY_ACCOUNTS_LABEL_HR NULL
#define CATEGORY_ACCOUNTS_INFO_0_HR NULL
#define CATEGORY_INSTALL_LABEL_HR "Sadržaj"
#define CATEGORY_INSTALL_INFO_0_HR NULL
#define CATEGORY_CONVERT_LABEL_HR NULL
#define CATEGORY_CONVERT_INFO_0_HR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HR NULL
#define CATEGORY_CHEATS_LABEL_HR NULL
#define CATEGORY_CHEATS_INFO_0_HR NULL
#define CATEGORY_LOGGING_LABEL_HR "Izvještavanje"
#define CATEGORY_LOGGING_INFO_0_HR NULL
#define CEMU_CPU_MODE_LABEL_HR NULL
#define CEMU_CPU_MODE_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_HR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_HR NULL
#define OPTION_VAL_ENGLISH_HR "Engleski"
#define OPTION_VAL_JAPANESE_HR "Japanski"
#define OPTION_VAL_FRENCH_HR "Francuski"
#define OPTION_VAL_GERMAN_HR "Njemački"
#define OPTION_VAL_ITALIAN_HR "Talijanski"
#define OPTION_VAL_SPANISH_HR "Španjolski"
#define OPTION_VAL_CHINESE_HR NULL
#define OPTION_VAL_KOREAN_HR NULL
#define OPTION_VAL_DUTCH_HR NULL
#define OPTION_VAL_PORTUGUESE_HR NULL
#define OPTION_VAL_RUSSIAN_HR NULL
#define OPTION_VAL_TAIWANESE_HR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HR NULL
#define CEMU_UPSCALE_FILTER_LABEL_HR NULL
#define OPTION_VAL_LINEAR_HR NULL
#define OPTION_VAL_BICUBIC_HR "Bikubično"
#define OPTION_VAL_BICUBIC_HERMITE_HR NULL
#define OPTION_VAL_NEAREST_HR NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_HR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_HR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HR NULL
#define OPTION_VAL_0_25X_HR NULL
#define OPTION_VAL_0_5X_HR NULL
#define OPTION_VAL_0_75X_HR NULL
#define OPTION_VAL_NATIVE_HR NULL
#define OPTION_VAL_1_5X_HR NULL
#define OPTION_VAL_2X_HR NULL
#define OPTION_VAL_3X_HR NULL
#define CEMU_THREAD_QUANTUM_LABEL_HR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HR NULL
#define OPTION_VAL_25_HR NULL
#define OPTION_VAL_50_HR NULL
#define OPTION_VAL_75_HR NULL
#define OPTION_VAL_100_HR NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_HR NULL
#define OPTION_VAL_DEFAULT_SCREEN_HR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_HR NULL
#define OPTION_VAL_SIDE_BY_SIDE_HR NULL
#define OPTION_VAL_TOP_BOTTOM_HR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_HR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_HR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_HR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_HR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_HR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_HR NULL
#define OPTION_VAL_SELECT_L3_HR NULL
#define OPTION_VAL_SELECT_R3_HR NULL
#define OPTION_VAL_TAB_HR NULL
#define CEMU_DRC_POSITION_LABEL_HR NULL
#define OPTION_VAL_NORMAL_HR NULL
#define OPTION_VAL_SWAPPED_HR NULL
#define CEMU_LOG_TO_FILE_LABEL_HR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_HR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_HR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_HR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_HR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_HR NULL
#define CEMU_LOG_INPUT_API_LABEL_HR NULL
#define CEMU_LOG_INPUT_API_INFO_0_HR NULL
#define CEMU_LOG_AUDIO_LABEL_HR NULL
#define CEMU_LOG_AUDIO_INFO_0_HR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_HR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_HR NULL
#define CEMU_DUMP_SHADERS_LABEL_HR NULL
#define CEMU_DUMP_SHADERS_INFO_0_HR NULL
#define CEMU_BC1_16BIT_LABEL_HR NULL
#define CEMU_BC1_16BIT_INFO_0_HR NULL
#define CEMU_GPU_API_LABEL_HR NULL
#define CEMU_GPU_API_INFO_0_HR NULL
#define OPTION_VAL_OPENGL_HR NULL
#define OPTION_VAL_VULKAN_HR NULL
#define CEMU_ACCOUNT_LABEL_HR NULL
#define CEMU_ACCOUNT_INFO_0_HR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HR NULL
#define CEMU_INSTALL_GAME_LABEL_HR NULL
#define CEMU_INSTALL_GAME_INFO_0_HR NULL
#define CEMU_UNINSTALL_GAME_LABEL_HR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_HR NULL
#define CEMU_INSTALL_TITLES_LABEL_HR NULL
#define CEMU_INSTALL_TITLES_INFO_0_HR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_HR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_HR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_HR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_HR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_HR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_HR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
	{ "video", CATEGORY_VIDEO_LABEL_HR, CATEGORY_VIDEO_INFO_0_HR },
	{ "shaders", CATEGORY_SHADERS_LABEL_HR, CATEGORY_SHADERS_INFO_0_HR },
	{ "screen", CATEGORY_SCREEN_LABEL_HR, CATEGORY_SCREEN_INFO_0_HR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_HR, CATEGORY_SYSTEM_INFO_0_HR },
	{ "addons", CATEGORY_ADDONS_LABEL_HR, CATEGORY_ADDONS_INFO_0_HR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_HR, CATEGORY_ACCOUNTS_INFO_0_HR },
	{ "install", CATEGORY_INSTALL_LABEL_HR, CATEGORY_INSTALL_INFO_0_HR },
	{ "convert", CATEGORY_CONVERT_LABEL_HR, CATEGORY_CONVERT_INFO_0_HR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HR, CATEGORY_GRAPHIC_PACKS_INFO_0_HR },
	{ "cheats", CATEGORY_CHEATS_LABEL_HR, CATEGORY_CHEATS_INFO_0_HR },
	{ "logging", CATEGORY_LOGGING_LABEL_HR, CATEGORY_LOGGING_INFO_0_HR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hr[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_HR,
		NULL,
		CEMU_CPU_MODE_INFO_0_HR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_HR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_HR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_HR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_HR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_HR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_HR },
			{ "Japanese", OPTION_VAL_JAPANESE_HR },
			{ "French", OPTION_VAL_FRENCH_HR },
			{ "German", OPTION_VAL_GERMAN_HR },
			{ "Italian", OPTION_VAL_ITALIAN_HR },
			{ "Spanish", OPTION_VAL_SPANISH_HR },
			{ "Chinese", OPTION_VAL_CHINESE_HR },
			{ "Korean", OPTION_VAL_KOREAN_HR },
			{ "Dutch", OPTION_VAL_DUTCH_HR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_HR },
			{ "Russian", OPTION_VAL_RUSSIAN_HR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_HR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_HR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HR },
			{ "bicubic", OPTION_VAL_BICUBIC_HR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HR },
			{ "nearest", OPTION_VAL_NEAREST_HR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HR },
			{ "bicubic", OPTION_VAL_BICUBIC_HR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HR },
			{ "nearest", OPTION_VAL_NEAREST_HR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_HR },
			{ "0.5x", OPTION_VAL_0_5X_HR },
			{ "0.75x", OPTION_VAL_0_75X_HR },
			{ "native", OPTION_VAL_NATIVE_HR },
			{ "1.5x", OPTION_VAL_1_5X_HR },
			{ "2x", OPTION_VAL_2X_HR },
			{ "3x", OPTION_VAL_3X_HR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_HR },
			{ "50", OPTION_VAL_50_HR },
			{ "75", OPTION_VAL_75_HR },
			{ "100", OPTION_VAL_100_HR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_HR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_HR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_HR },
			{ "Tab", OPTION_VAL_TAB_HR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_HR },
			{ "swapped", OPTION_VAL_SWAPPED_HR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_HR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_HR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_HR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_HR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_HR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_HR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_HR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_HR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_HR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_HR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_HR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_HR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_HR,
		NULL,
		CEMU_GPU_API_INFO_0_HR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HR },
			{ "Vulkan", OPTION_VAL_VULKAN_HR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HR,
		NULL,
		CEMU_ACCOUNT_INFO_0_HR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_HR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_HR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_HR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_HR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_HR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_HR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_HR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_HR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_HR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_HR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_HR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_HR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_HR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_HR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_HR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hr = {
   option_cats_hr,
   option_defs_hr
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU "Kép"
#define CATEGORY_VIDEO_INFO_0_HU NULL
#define CATEGORY_SHADERS_LABEL_HU "Shaderek"
#define CATEGORY_SHADERS_INFO_0_HU NULL
#define CATEGORY_SCREEN_LABEL_HU NULL
#define CATEGORY_SCREEN_INFO_0_HU NULL
#define CATEGORY_SYSTEM_LABEL_HU "Rendszer"
#define CATEGORY_SYSTEM_INFO_0_HU NULL
#define CATEGORY_ADDONS_LABEL_HU NULL
#define CATEGORY_ADDONS_INFO_0_HU NULL
#define CATEGORY_ACCOUNTS_LABEL_HU "Fiókok"
#define CATEGORY_ACCOUNTS_INFO_0_HU NULL
#define CATEGORY_INSTALL_LABEL_HU "Tartalom"
#define CATEGORY_INSTALL_INFO_0_HU NULL
#define CATEGORY_CONVERT_LABEL_HU NULL
#define CATEGORY_CONVERT_INFO_0_HU NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HU NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HU NULL
#define CATEGORY_CHEATS_LABEL_HU "Csalások"
#define CATEGORY_CHEATS_INFO_0_HU NULL
#define CATEGORY_LOGGING_LABEL_HU "Naplózás"
#define CATEGORY_LOGGING_INFO_0_HU NULL
#define CEMU_CPU_MODE_LABEL_HU NULL
#define CEMU_CPU_MODE_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU "Automatikus"
#define OPTION_VAL_SINGLECORE_INTERPRETER_HU NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HU NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HU NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HU NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_HU NULL
#define OPTION_VAL_ENGLISH_HU "angol"
#define OPTION_VAL_JAPANESE_HU "japán"
#define OPTION_VAL_FRENCH_HU "francia"
#define OPTION_VAL_GERMAN_HU "német"
#define OPTION_VAL_ITALIAN_HU "olasz"
#define OPTION_VAL_SPANISH_HU "spanyol"
#define OPTION_VAL_CHINESE_HU NULL
#define OPTION_VAL_KOREAN_HU NULL
#define OPTION_VAL_DUTCH_HU NULL
#define OPTION_VAL_PORTUGUESE_HU NULL
#define OPTION_VAL_RUSSIAN_HU NULL
#define OPTION_VAL_TAIWANESE_HU NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HU NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HU NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HU NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HU NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HU NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HU NULL
#define CEMU_UPSCALE_FILTER_LABEL_HU NULL
#define OPTION_VAL_LINEAR_HU "Lineáris"
#define OPTION_VAL_BICUBIC_HU "Kettős köbös (Bicubic)"
#define OPTION_VAL_BICUBIC_HERMITE_HU NULL
#define OPTION_VAL_NEAREST_HU "Legközelebbi"
#define CEMU_DOWNSCALE_FILTER_LABEL_HU NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_HU "Belső felbontás"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HU NULL
#define OPTION_VAL_0_25X_HU NULL
#define OPTION_VAL_0_5X_HU NULL
#define OPTION_VAL_0_75X_HU NULL
#define OPTION_VAL_NATIVE_HU "Eredeti"
#define OPTION_VAL_1_5X_HU NULL
#define OPTION_VAL_2X_HU NULL
#define OPTION_VAL_3X_HU NULL
#define CEMU_THREAD_QUANTUM_LABEL_HU NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HU NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HU NULL
#define OPTION_VAL_25_HU NULL
#define OPTION_VAL_50_HU NULL
#define OPTION_VAL_75_HU NULL
#define OPTION_VAL_100_HU NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HU NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HU NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HU NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HU NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_HU NULL
#define OPTION_VAL_DEFAULT_SCREEN_HU NULL
#define OPTION_VAL_GAMEPAD_SCREEN_HU NULL
#define OPTION_VAL_SIDE_BY_SIDE_HU NULL
#define OPTION_VAL_TOP_BOTTOM_HU NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_HU NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_HU NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_HU NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_HU NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_HU NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HU NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_HU NULL
#define OPTION_VAL_SELECT_L3_HU NULL
#define OPTION_VAL_SELECT_R3_HU NULL
#define OPTION_VAL_TAB_HU NULL
#define CEMU_DRC_POSITION_LABEL_HU NULL
#define OPTION_VAL_NORMAL_HU "Normál"
#define OPTION_VAL_SWAPPED_HU NULL
#define CEMU_LOG_TO_FILE_LABEL_HU NULL
#define CEMU_LOG_FILESYSTEM_LABEL_HU NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_HU NULL
#define CEMU_LOG_SYSTEM_API_LABEL_HU NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_HU NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_HU NULL
#define CEMU_LOG_INPUT_API_LABEL_HU NULL
#define CEMU_LOG_INPUT_API_INFO_0_HU NULL
#define CEMU_LOG_AUDIO_LABEL_HU NULL
#define CEMU_LOG_AUDIO_INFO_0_HU NULL
#define CEMU_LOG_THREAD_TIME_LABEL_HU NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_HU NULL
#define CEMU_DUMP_SHADERS_LABEL_HU NULL
#define CEMU_DUMP_SHADERS_INFO_0_HU NULL
#define CEMU_BC1_16BIT_LABEL_HU NULL
#define CEMU_BC1_16BIT_INFO_0_HU NULL
#define CEMU_GPU_API_LABEL_HU NULL
#define CEMU_GPU_API_INFO_0_HU NULL
#define OPTION_VAL_OPENGL_HU NULL
#define OPTION_VAL_VULKAN_HU NULL
#define CEMU_ACCOUNT_LABEL_HU NULL
#define CEMU_ACCOUNT_INFO_0_HU NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HU NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HU NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HU NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HU NULL
#define CEMU_INSTALL_GAME_LABEL_HU NULL
#define CEMU_INSTALL_GAME_INFO_0_HU NULL
#define CEMU_UNINSTALL_GAME_LABEL_HU NULL
#define CEMU_UNINSTALL_GAME_INFO_0_HU NULL
#define CEMU_INSTALL_TITLES_LABEL_HU NULL
#define CEMU_INSTALL_TITLES_INFO_0_HU NULL
#define CEMU_UNINSTALL_TITLES_LABEL_HU NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_HU NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_HU NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HU NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_HU NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_HU NULL
#define CEMU_CONVERT_TO_WUA_LABEL_HU NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
	{ "video", CATEGORY_VIDEO_LABEL_HU, CATEGORY_VIDEO_INFO_0_HU },
	{ "shaders", CATEGORY_SHADERS_LABEL_HU, CATEGORY_SHADERS_INFO_0_HU },
	{ "screen", CATEGORY_SCREEN_LABEL_HU, CATEGORY_SCREEN_INFO_0_HU },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_HU, CATEGORY_SYSTEM_INFO_0_HU },
	{ "addons", CATEGORY_ADDONS_LABEL_HU, CATEGORY_ADDONS_INFO_0_HU },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_HU, CATEGORY_ACCOUNTS_INFO_0_HU },
	{ "install", CATEGORY_INSTALL_LABEL_HU, CATEGORY_INSTALL_INFO_0_HU },
	{ "convert", CATEGORY_CONVERT_LABEL_HU, CATEGORY_CONVERT_INFO_0_HU },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HU, CATEGORY_GRAPHIC_PACKS_INFO_0_HU },
	{ "cheats", CATEGORY_CHEATS_LABEL_HU, CATEGORY_CHEATS_INFO_0_HU },
	{ "logging", CATEGORY_LOGGING_LABEL_HU, CATEGORY_LOGGING_INFO_0_HU },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_HU,
		NULL,
		CEMU_CPU_MODE_INFO_0_HU,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_HU },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_HU },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_HU },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_HU },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_HU },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_HU },
			{ "Japanese", OPTION_VAL_JAPANESE_HU },
			{ "French", OPTION_VAL_FRENCH_HU },
			{ "German", OPTION_VAL_GERMAN_HU },
			{ "Italian", OPTION_VAL_ITALIAN_HU },
			{ "Spanish", OPTION_VAL_SPANISH_HU },
			{ "Chinese", OPTION_VAL_CHINESE_HU },
			{ "Korean", OPTION_VAL_KOREAN_HU },
			{ "Dutch", OPTION_VAL_DUTCH_HU },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_HU },
			{ "Russian", OPTION_VAL_RUSSIAN_HU },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_HU },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_HU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HU,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HU,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HU },
			{ "bicubic", OPTION_VAL_BICUBIC_HU },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HU },
			{ "nearest", OPTION_VAL_NEAREST_HU },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_HU },
			{ "bicubic", OPTION_VAL_BICUBIC_HU },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_HU },
			{ "nearest", OPTION_VAL_NEAREST_HU },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HU,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HU,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_HU },
			{ "0.5x", OPTION_VAL_0_5X_HU },
			{ "0.75x", OPTION_VAL_0_75X_HU },
			{ "native", OPTION_VAL_NATIVE_HU },
			{ "1.5x", OPTION_VAL_1_5X_HU },
			{ "2x", OPTION_VAL_2X_HU },
			{ "3x", OPTION_VAL_3X_HU },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HU,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HU,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_HU },
			{ "50", OPTION_VAL_50_HU },
			{ "75", OPTION_VAL_75_HU },
			{ "100", OPTION_VAL_100_HU },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HU },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HU },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HU },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HU },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_HU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_HU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_HU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_HU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_HU },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_HU },
			{ "Select + L3", OPTION_VAL_SELECT_L3_HU },
			{ "Select + R3", OPTION_VAL_SELECT_R3_HU },
			{ "Tab", OPTION_VAL_TAB_HU },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_HU },
			{ "swapped", OPTION_VAL_SWAPPED_HU },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_HU,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_HU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_HU,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_HU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_HU,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_HU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_HU,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_HU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_HU,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_HU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_HU,
		NULL,
		CEMU_BC1_16BIT_INFO_0_HU,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_HU,
		NULL,
		CEMU_GPU_API_INFO_0_HU,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HU },
			{ "Vulkan", OPTION_VAL_VULKAN_HU },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HU,
		NULL,
		CEMU_ACCOUNT_INFO_0_HU,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_HU,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_HU,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_HU,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_HU,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HU,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_HU,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_HU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_HU,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_HU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_HU,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_HU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_HU,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_HU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_HU,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_HU,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_HU,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_HU,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_SHADERS_LABEL_ID NULL
#define CATEGORY_SHADERS_INFO_0_ID NULL
#define CATEGORY_SCREEN_LABEL_ID NULL
#define CATEGORY_SCREEN_INFO_0_ID NULL
#define CATEGORY_SYSTEM_LABEL_ID "Sistem"
#define CATEGORY_SYSTEM_INFO_0_ID NULL
#define CATEGORY_ADDONS_LABEL_ID NULL
#define CATEGORY_ADDONS_INFO_0_ID NULL
#define CATEGORY_ACCOUNTS_LABEL_ID NULL
#define CATEGORY_ACCOUNTS_INFO_0_ID NULL
#define CATEGORY_INSTALL_LABEL_ID NULL
#define CATEGORY_INSTALL_INFO_0_ID NULL
#define CATEGORY_CONVERT_LABEL_ID NULL
#define CATEGORY_CONVERT_INFO_0_ID NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_ID NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_ID NULL
#define CATEGORY_CHEATS_LABEL_ID NULL
#define CATEGORY_CHEATS_INFO_0_ID NULL
#define CATEGORY_LOGGING_LABEL_ID "Pencatatan Log"
#define CATEGORY_LOGGING_INFO_0_ID NULL
#define CEMU_CPU_MODE_LABEL_ID NULL
#define CEMU_CPU_MODE_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define OPTION_VAL_SINGLECORE_INTERPRETER_ID NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_ID NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_ID NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_ID NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_ID NULL
#define OPTION_VAL_ENGLISH_ID "Bahasa Inggris"
#define OPTION_VAL_JAPANESE_ID "Bahasa Jepang"
#define OPTION_VAL_FRENCH_ID "Bahasa Perancis"
#define OPTION_VAL_GERMAN_ID "Bahasa Jerman"
#define OPTION_VAL_ITALIAN_ID "Bahasa Itali"
#define OPTION_VAL_SPANISH_ID "Bahasa Spanyol"
#define OPTION_VAL_CHINESE_ID NULL
#define OPTION_VAL_KOREAN_ID NULL
#define OPTION_VAL_DUTCH_ID NULL
#define OPTION_VAL_PORTUGUESE_ID NULL
#define OPTION_VAL_RUSSIAN_ID NULL
#define OPTION_VAL_TAIWANESE_ID NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_ID NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_ID NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_ID NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_ID NULL
#define CEMU_SHOW_GAME_FPS_LABEL_ID NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_ID NULL
#define CEMU_UPSCALE_FILTER_LABEL_ID NULL
#define OPTION_VAL_LINEAR_ID NULL
#define OPTION_VAL_BICUBIC_ID NULL
#define OPTION_VAL_BICUBIC_HERMITE_ID NULL
#define OPTION_VAL_NEAREST_ID NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_ID NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_ID "Resolusi Internal"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_ID NULL
#define OPTION_VAL_0_25X_ID NULL
#define OPTION_VAL_0_5X_ID NULL
#define OPTION_VAL_0_75X_ID NULL
#define OPTION_VAL_NATIVE_ID "Lokal"
#define OPTION_VAL_1_5X_ID NULL
#define OPTION_VAL_2X_ID NULL
#define OPTION_VAL_3X_ID NULL
#define CEMU_THREAD_QUANTUM_LABEL_ID NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_ID NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_ID NULL
#define OPTION_VAL_25_ID NULL
#define OPTION_VAL_50_ID NULL
#define OPTION_VAL_75_ID NULL
#define OPTION_VAL_100_ID NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ID NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_ID NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ID NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_ID NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_ID NULL
#define OPTION_VAL_DEFAULT_SCREEN_ID NULL
#define OPTION_VAL_GAMEPAD_SCREEN_ID NULL
#define OPTION_VAL_SIDE_BY_SIDE_ID NULL
#define OPTION_VAL_TOP_BOTTOM_ID NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_ID NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_ID NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_ID NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_ID NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_ID NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_ID NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_ID NULL
#define OPTION_VAL_SELECT_L3_ID NULL
#define OPTION_VAL_SELECT_R3_ID NULL
#define OPTION_VAL_TAB_ID NULL
#define CEMU_DRC_POSITION_LABEL_ID NULL
#define OPTION_VAL_NORMAL_ID NULL
#define OPTION_VAL_SWAPPED_ID NULL
#define CEMU_LOG_TO_FILE_LABEL_ID NULL
#define CEMU_LOG_FILESYSTEM_LABEL_ID NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_ID NULL
#define CEMU_LOG_SYSTEM_API_LABEL_ID NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_ID NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_ID NULL
#define CEMU_LOG_INPUT_API_LABEL_ID NULL
#define CEMU_LOG_INPUT_API_INFO_0_ID NULL
#define CEMU_LOG_AUDIO_LABEL_ID NULL
#define CEMU_LOG_AUDIO_INFO_0_ID NULL
#define CEMU_LOG_THREAD_TIME_LABEL_ID NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_ID NULL
#define CEMU_DUMP_SHADERS_LABEL_ID NULL
#define CEMU_DUMP_SHADERS_INFO_0_ID NULL
#define CEMU_BC1_16BIT_LABEL_ID NULL
#define CEMU_BC1_16BIT_INFO_0_ID NULL
#define CEMU_GPU_API_LABEL_ID NULL
#define CEMU_GPU_API_INFO_0_ID NULL
#define OPTION_VAL_OPENGL_ID NULL
#define OPTION_VAL_VULKAN_ID NULL
#define CEMU_ACCOUNT_LABEL_ID NULL
#define CEMU_ACCOUNT_INFO_0_ID NULL
#define CEMU_CREATE_ACCOUNT_LABEL_ID NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_ID NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_ID NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_ID NULL
#define CEMU_INSTALL_GAME_LABEL_ID NULL
#define CEMU_INSTALL_GAME_INFO_0_ID NULL
#define CEMU_UNINSTALL_GAME_LABEL_ID NULL
#define CEMU_UNINSTALL_GAME_INFO_0_ID NULL
#define CEMU_INSTALL_TITLES_LABEL_ID NULL
#define CEMU_INSTALL_TITLES_INFO_0_ID NULL
#define CEMU_UNINSTALL_TITLES_LABEL_ID NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_ID NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_ID NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_ID NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_ID NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_ID NULL
#define CEMU_CONVERT_TO_WUA_LABEL_ID NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
	{ "video", CATEGORY_VIDEO_LABEL_ID, CATEGORY_VIDEO_INFO_0_ID },
	{ "shaders", CATEGORY_SHADERS_LABEL_ID, CATEGORY_SHADERS_INFO_0_ID },
	{ "screen", CATEGORY_SCREEN_LABEL_ID, CATEGORY_SCREEN_INFO_0_ID },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_ID, CATEGORY_SYSTEM_INFO_0_ID },
	{ "addons", CATEGORY_ADDONS_LABEL_ID, CATEGORY_ADDONS_INFO_0_ID },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_ID, CATEGORY_ACCOUNTS_INFO_0_ID },
	{ "install", CATEGORY_INSTALL_LABEL_ID, CATEGORY_INSTALL_INFO_0_ID },
	{ "convert", CATEGORY_CONVERT_LABEL_ID, CATEGORY_CONVERT_INFO_0_ID },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_ID, CATEGORY_GRAPHIC_PACKS_INFO_0_ID },
	{ "cheats", CATEGORY_CHEATS_LABEL_ID, CATEGORY_CHEATS_INFO_0_ID },
	{ "logging", CATEGORY_LOGGING_LABEL_ID, CATEGORY_LOGGING_INFO_0_ID },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_ID,
		NULL,
		CEMU_CPU_MODE_INFO_0_ID,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_ID },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_ID },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_ID },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_ID },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_ID },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_ID },
			{ "Japanese", OPTION_VAL_JAPANESE_ID },
			{ "French", OPTION_VAL_FRENCH_ID },
			{ "German", OPTION_VAL_GERMAN_ID },
			{ "Italian", OPTION_VAL_ITALIAN_ID },
			{ "Spanish", OPTION_VAL_SPANISH_ID },
			{ "Chinese", OPTION_VAL_CHINESE_ID },
			{ "Korean", OPTION_VAL_KOREAN_ID },
			{ "Dutch", OPTION_VAL_DUTCH_ID },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_ID },
			{ "Russian", OPTION_VAL_RUSSIAN_ID },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_ID },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_ID },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_ID,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_ID,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_ID },
			{ "bicubic", OPTION_VAL_BICUBIC_ID },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_ID },
			{ "nearest", OPTION_VAL_NEAREST_ID },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_ID },
			{ "bicubic", OPTION_VAL_BICUBIC_ID },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_ID },
			{ "nearest", OPTION_VAL_NEAREST_ID },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_ID,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_ID,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_ID },
			{ "0.5x", OPTION_VAL_0_5X_ID },
			{ "0.75x", OPTION_VAL_0_75X_ID },
			{ "native", OPTION_VAL_NATIVE_ID },
			{ "1.5x", OPTION_VAL_1_5X_ID },
			{ "2x", OPTION_VAL_2X_ID },
			{ "3x", OPTION_VAL_3X_ID },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_ID,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_ID,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_ID },
			{ "50", OPTION_VAL_50_ID },
			{ "75", OPTION_VAL_75_ID },
			{ "100", OPTION_VAL_100_ID },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ID },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ID },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ID },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ID },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ID },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ID },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ID },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ID },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ID },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ID },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ID },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ID },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ID },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ID },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ID },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ID },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ID },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ID },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ID },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ID },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_ID },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_ID },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_ID },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_ID },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_ID },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_ID },
			{ "Select + L3", OPTION_VAL_SELECT_L3_ID },
			{ "Select + R3", OPTION_VAL_SELECT_R3_ID },
			{ "Tab", OPTION_VAL_TAB_ID },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_ID },
			{ "swapped", OPTION_VAL_SWAPPED_ID },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_ID,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_ID,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_ID,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_ID,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_ID,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_ID,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_ID,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_ID,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_ID,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_ID,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_ID,
		NULL,
		CEMU_BC1_16BIT_INFO_0_ID,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_ID,
		NULL,
		CEMU_GPU_API_INFO_0_ID,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_ID },
			{ "Vulkan", OPTION_VAL_VULKAN_ID },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_ID,
		NULL,
		CEMU_ACCOUNT_INFO_0_ID,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_ID,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_ID,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_ID,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_ID,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_ID,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_ID,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_ID,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_ID,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_ID,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_ID,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_ID,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_ID,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_ID,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_ID,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_ID,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_ID,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_ID,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_ID,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT NULL
#define CATEGORY_SHADERS_LABEL_IT NULL
#define CATEGORY_SHADERS_INFO_0_IT NULL
#define CATEGORY_SCREEN_LABEL_IT NULL
#define CATEGORY_SCREEN_INFO_0_IT NULL
#define CATEGORY_SYSTEM_LABEL_IT "Sistema"
#define CATEGORY_SYSTEM_INFO_0_IT NULL
#define CATEGORY_ADDONS_LABEL_IT NULL
#define CATEGORY_ADDONS_INFO_0_IT NULL
#define CATEGORY_ACCOUNTS_LABEL_IT "Account"
#define CATEGORY_ACCOUNTS_INFO_0_IT NULL
#define CATEGORY_INSTALL_LABEL_IT "Contenuto"
#define CATEGORY_INSTALL_INFO_0_IT NULL
#define CATEGORY_CONVERT_LABEL_IT NULL
#define CATEGORY_CONVERT_INFO_0_IT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_IT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_IT NULL
#define CATEGORY_CHEATS_LABEL_IT "Trucchi"
#define CATEGORY_CHEATS_INFO_0_IT NULL
#define CATEGORY_LOGGING_LABEL_IT "Registrazione dei log"
#define CATEGORY_LOGGING_INFO_0_IT NULL
#define CEMU_CPU_MODE_LABEL_IT NULL
#define CEMU_CPU_MODE_INFO_0_IT NULL
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_IT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_IT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_IT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_IT NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_IT NULL
#define OPTION_VAL_ENGLISH_IT "Inglese"
#define OPTION_VAL_JAPANESE_IT "Giapponese"
#define OPTION_VAL_FRENCH_IT "Francese"
#define OPTION_VAL_GERMAN_IT "Tedesco"
#define OPTION_VAL_ITALIAN_IT "Italiano"
#define OPTION_VAL_SPANISH_IT "Spagnolo"
#define OPTION_VAL_CHINESE_IT NULL
#define OPTION_VAL_KOREAN_IT NULL
#define OPTION_VAL_DUTCH_IT NULL
#define OPTION_VAL_PORTUGUESE_IT NULL
#define OPTION_VAL_RUSSIAN_IT NULL
#define OPTION_VAL_TAIWANESE_IT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_IT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_IT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_IT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_IT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_IT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_IT NULL
#define CEMU_UPSCALE_FILTER_LABEL_IT NULL
#define OPTION_VAL_LINEAR_IT "Lineare"
#define OPTION_VAL_BICUBIC_IT "Bicubico"
#define OPTION_VAL_BICUBIC_HERMITE_IT NULL
#define OPTION_VAL_NEAREST_IT "Più Vicino"
#define CEMU_DOWNSCALE_FILTER_LABEL_IT NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_IT "Risoluzione Interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_IT NULL
#define OPTION_VAL_0_25X_IT NULL
#define OPTION_VAL_0_5X_IT NULL
#define OPTION_VAL_0_75X_IT NULL
#define OPTION_VAL_NATIVE_IT "Nativo"
#define OPTION_VAL_1_5X_IT NULL
#define OPTION_VAL_2X_IT NULL
#define OPTION_VAL_3X_IT NULL
#define CEMU_THREAD_QUANTUM_LABEL_IT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_IT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_IT NULL
#define OPTION_VAL_25_IT NULL
#define OPTION_VAL_50_IT NULL
#define OPTION_VAL_75_IT NULL
#define OPTION_VAL_100_IT NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_IT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_IT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_IT NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_IT NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_IT NULL
#define OPTION_VAL_DEFAULT_SCREEN_IT NULL
#define OPTION_VAL_GAMEPAD_SCREEN_IT NULL
#define OPTION_VAL_SIDE_BY_SIDE_IT NULL
#define OPTION_VAL_TOP_BOTTOM_IT NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_IT NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_IT NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_IT NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_IT NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_IT NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_IT NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_IT NULL
#define OPTION_VAL_SELECT_L3_IT NULL
#define OPTION_VAL_SELECT_R3_IT NULL
#define OPTION_VAL_TAB_IT NULL
#define CEMU_DRC_POSITION_LABEL_IT NULL
#define OPTION_VAL_NORMAL_IT "Normale"
#define OPTION_VAL_SWAPPED_IT NULL
#define CEMU_LOG_TO_FILE_LABEL_IT NULL
#define CEMU_LOG_FILESYSTEM_LABEL_IT NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_IT NULL
#define CEMU_LOG_SYSTEM_API_LABEL_IT NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_IT NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_IT NULL
#define CEMU_LOG_INPUT_API_LABEL_IT NULL
#define CEMU_LOG_INPUT_API_INFO_0_IT NULL
#define CEMU_LOG_AUDIO_LABEL_IT NULL
#define CEMU_LOG_AUDIO_INFO_0_IT NULL
#define CEMU_LOG_THREAD_TIME_LABEL_IT NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_IT NULL
#define CEMU_DUMP_SHADERS_LABEL_IT NULL
#define CEMU_DUMP_SHADERS_INFO_0_IT NULL
#define CEMU_BC1_16BIT_LABEL_IT NULL
#define CEMU_BC1_16BIT_INFO_0_IT NULL
#define CEMU_GPU_API_LABEL_IT NULL
#define CEMU_GPU_API_INFO_0_IT NULL
#define OPTION_VAL_OPENGL_IT NULL
#define OPTION_VAL_VULKAN_IT NULL
#define CEMU_ACCOUNT_LABEL_IT NULL
#define CEMU_ACCOUNT_INFO_0_IT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_IT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_IT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_IT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_IT NULL
#define CEMU_INSTALL_GAME_LABEL_IT NULL
#define CEMU_INSTALL_GAME_INFO_0_IT NULL
#define CEMU_UNINSTALL_GAME_LABEL_IT NULL
#define CEMU_UNINSTALL_GAME_INFO_0_IT NULL
#define CEMU_INSTALL_TITLES_LABEL_IT NULL
#define CEMU_INSTALL_TITLES_INFO_0_IT NULL
#define CEMU_UNINSTALL_TITLES_LABEL_IT NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_IT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_IT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_IT NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_IT NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_IT NULL
#define CEMU_CONVERT_TO_WUA_LABEL_IT NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
	{ "video", CATEGORY_VIDEO_LABEL_IT, CATEGORY_VIDEO_INFO_0_IT },
	{ "shaders", CATEGORY_SHADERS_LABEL_IT, CATEGORY_SHADERS_INFO_0_IT },
	{ "screen", CATEGORY_SCREEN_LABEL_IT, CATEGORY_SCREEN_INFO_0_IT },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_IT, CATEGORY_SYSTEM_INFO_0_IT },
	{ "addons", CATEGORY_ADDONS_LABEL_IT, CATEGORY_ADDONS_INFO_0_IT },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_IT, CATEGORY_ACCOUNTS_INFO_0_IT },
	{ "install", CATEGORY_INSTALL_LABEL_IT, CATEGORY_INSTALL_INFO_0_IT },
	{ "convert", CATEGORY_CONVERT_LABEL_IT, CATEGORY_CONVERT_INFO_0_IT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_IT, CATEGORY_GRAPHIC_PACKS_INFO_0_IT },
	{ "cheats", CATEGORY_CHEATS_LABEL_IT, CATEGORY_CHEATS_INFO_0_IT },
	{ "logging", CATEGORY_LOGGING_LABEL_IT, CATEGORY_LOGGING_INFO_0_IT },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_IT,
		NULL,
		CEMU_CPU_MODE_INFO_0_IT,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_IT },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_IT },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_IT },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_IT },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_IT },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_IT },
			{ "Japanese", OPTION_VAL_JAPANESE_IT },
			{ "French", OPTION_VAL_FRENCH_IT },
			{ "German", OPTION_VAL_GERMAN_IT },
			{ "Italian", OPTION_VAL_ITALIAN_IT },
			{ "Spanish", OPTION_VAL_SPANISH_IT },
			{ "Chinese", OPTION_VAL_CHINESE_IT },
			{ "Korean", OPTION_VAL_KOREAN_IT },
			{ "Dutch", OPTION_VAL_DUTCH_IT },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_IT },
			{ "Russian", OPTION_VAL_RUSSIAN_IT },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_IT },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_IT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_IT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_IT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_IT },
			{ "bicubic", OPTION_VAL_BICUBIC_IT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_IT },
			{ "nearest", OPTION_VAL_NEAREST_IT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_IT },
			{ "bicubic", OPTION_VAL_BICUBIC_IT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_IT },
			{ "nearest", OPTION_VAL_NEAREST_IT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_IT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_IT,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_IT },
			{ "0.5x", OPTION_VAL_0_5X_IT },
			{ "0.75x", OPTION_VAL_0_75X_IT },
			{ "native", OPTION_VAL_NATIVE_IT },
			{ "1.5x", OPTION_VAL_1_5X_IT },
			{ "2x", OPTION_VAL_2X_IT },
			{ "3x", OPTION_VAL_3X_IT },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_IT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_IT,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_IT },
			{ "50", OPTION_VAL_50_IT },
			{ "75", OPTION_VAL_75_IT },
			{ "100", OPTION_VAL_100_IT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_IT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_IT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_IT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_IT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_IT },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_IT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_IT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_IT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_IT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_IT },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_IT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_IT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_IT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_IT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_IT },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_IT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_IT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_IT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_IT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_IT },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_IT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_IT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_IT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_IT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_IT },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_IT },
			{ "Select + L3", OPTION_VAL_SELECT_L3_IT },
			{ "Select + R3", OPTION_VAL_SELECT_R3_IT },
			{ "Tab", OPTION_VAL_TAB_IT },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_IT },
			{ "swapped", OPTION_VAL_SWAPPED_IT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_IT,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_IT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_IT,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_IT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_IT,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_IT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_IT,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_IT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_IT,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_IT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_IT,
		NULL,
		CEMU_BC1_16BIT_INFO_0_IT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_IT,
		NULL,
		CEMU_GPU_API_INFO_0_IT,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_IT },
			{ "Vulkan", OPTION_VAL_VULKAN_IT },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_IT,
		NULL,
		CEMU_ACCOUNT_INFO_0_IT,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_IT,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_IT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_IT,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_IT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_IT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_IT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_IT,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_IT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_IT,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_IT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_IT,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_IT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_IT,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_IT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_IT,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_IT,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_IT,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_IT,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA "ビデオ"
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_SHADERS_LABEL_JA "シェーダー"
#define CATEGORY_SHADERS_INFO_0_JA NULL
#define CATEGORY_SCREEN_LABEL_JA NULL
#define CATEGORY_SCREEN_INFO_0_JA NULL
#define CATEGORY_SYSTEM_LABEL_JA "システム"
#define CATEGORY_SYSTEM_INFO_0_JA NULL
#define CATEGORY_ADDONS_LABEL_JA NULL
#define CATEGORY_ADDONS_INFO_0_JA NULL
#define CATEGORY_ACCOUNTS_LABEL_JA "アカウント"
#define CATEGORY_ACCOUNTS_INFO_0_JA NULL
#define CATEGORY_INSTALL_LABEL_JA "コンテンツ"
#define CATEGORY_INSTALL_INFO_0_JA NULL
#define CATEGORY_CONVERT_LABEL_JA NULL
#define CATEGORY_CONVERT_INFO_0_JA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_JA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_JA NULL
#define CATEGORY_CHEATS_LABEL_JA "チート"
#define CATEGORY_CHEATS_INFO_0_JA NULL
#define CATEGORY_LOGGING_LABEL_JA "ログ"
#define CATEGORY_LOGGING_INFO_0_JA NULL
#define CEMU_CPU_MODE_LABEL_JA NULL
#define CEMU_CPU_MODE_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_SINGLECORE_INTERPRETER_JA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_JA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_JA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_JA NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_JA NULL
#define OPTION_VAL_ENGLISH_JA "英語"
#define OPTION_VAL_JAPANESE_JA "日本語"
#define OPTION_VAL_FRENCH_JA "フランス語"
#define OPTION_VAL_GERMAN_JA "ドイツ語"
#define OPTION_VAL_ITALIAN_JA "イタリア語"
#define OPTION_VAL_SPANISH_JA "スペイン語"
#define OPTION_VAL_CHINESE_JA NULL
#define OPTION_VAL_KOREAN_JA NULL
#define OPTION_VAL_DUTCH_JA NULL
#define OPTION_VAL_PORTUGUESE_JA NULL
#define OPTION_VAL_RUSSIAN_JA NULL
#define OPTION_VAL_TAIWANESE_JA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_JA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_JA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_JA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_JA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_JA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_JA NULL
#define CEMU_UPSCALE_FILTER_LABEL_JA NULL
#define OPTION_VAL_LINEAR_JA "リニア"
#define OPTION_VAL_BICUBIC_JA "バイキュービック"
#define OPTION_VAL_BICUBIC_HERMITE_JA NULL
#define OPTION_VAL_NEAREST_JA "ニアレスト"
#define CEMU_DOWNSCALE_FILTER_LABEL_JA NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_JA "内部解像度"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_JA NULL
#define OPTION_VAL_0_25X_JA NULL
#define OPTION_VAL_0_5X_JA NULL
#define OPTION_VAL_0_75X_JA NULL
#define OPTION_VAL_NATIVE_JA "ネイティブ"
#define OPTION_VAL_1_5X_JA NULL
#define OPTION_VAL_2X_JA NULL
#define OPTION_VAL_3X_JA NULL
#define CEMU_THREAD_QUANTUM_LABEL_JA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_JA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_JA NULL
#define OPTION_VAL_25_JA NULL
#define OPTION_VAL_50_JA NULL
#define OPTION_VAL_75_JA NULL
#define OPTION_VAL_100_JA NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_JA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_JA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_JA NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_JA NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_JA NULL
#define OPTION_VAL_DEFAULT_SCREEN_JA NULL
#define OPTION_VAL_GAMEPAD_SCREEN_JA NULL
#define OPTION_VAL_SIDE_BY_SIDE_JA NULL
#define OPTION_VAL_TOP_BOTTOM_JA NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_JA NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_JA NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_JA NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_JA NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_JA NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_JA NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_JA NULL
#define OPTION_VAL_SELECT_L3_JA NULL
#define OPTION_VAL_SELECT_R3_JA NULL
#define OPTION_VAL_TAB_JA NULL
#define CEMU_DRC_POSITION_LABEL_JA NULL
#define OPTION_VAL_NORMAL_JA "通常"
#define OPTION_VAL_SWAPPED_JA NULL
#define CEMU_LOG_TO_FILE_LABEL_JA NULL
#define CEMU_LOG_FILESYSTEM_LABEL_JA NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_JA NULL
#define CEMU_LOG_SYSTEM_API_LABEL_JA NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_JA NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_JA NULL
#define CEMU_LOG_INPUT_API_LABEL_JA NULL
#define CEMU_LOG_INPUT_API_INFO_0_JA NULL
#define CEMU_LOG_AUDIO_LABEL_JA NULL
#define CEMU_LOG_AUDIO_INFO_0_JA NULL
#define CEMU_LOG_THREAD_TIME_LABEL_JA NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_JA NULL
#define CEMU_DUMP_SHADERS_LABEL_JA NULL
#define CEMU_DUMP_SHADERS_INFO_0_JA NULL
#define CEMU_BC1_16BIT_LABEL_JA NULL
#define CEMU_BC1_16BIT_INFO_0_JA NULL
#define CEMU_GPU_API_LABEL_JA NULL
#define CEMU_GPU_API_INFO_0_JA NULL
#define OPTION_VAL_OPENGL_JA NULL
#define OPTION_VAL_VULKAN_JA NULL
#define CEMU_ACCOUNT_LABEL_JA NULL
#define CEMU_ACCOUNT_INFO_0_JA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_JA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_JA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_JA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_JA NULL
#define CEMU_INSTALL_GAME_LABEL_JA NULL
#define CEMU_INSTALL_GAME_INFO_0_JA NULL
#define CEMU_UNINSTALL_GAME_LABEL_JA NULL
#define CEMU_UNINSTALL_GAME_INFO_0_JA NULL
#define CEMU_INSTALL_TITLES_LABEL_JA NULL
#define CEMU_INSTALL_TITLES_INFO_0_JA NULL
#define CEMU_UNINSTALL_TITLES_LABEL_JA NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_JA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_JA NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_JA NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_JA NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_JA NULL
#define CEMU_CONVERT_TO_WUA_LABEL_JA NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
	{ "video", CATEGORY_VIDEO_LABEL_JA, CATEGORY_VIDEO_INFO_0_JA },
	{ "shaders", CATEGORY_SHADERS_LABEL_JA, CATEGORY_SHADERS_INFO_0_JA },
	{ "screen", CATEGORY_SCREEN_LABEL_JA, CATEGORY_SCREEN_INFO_0_JA },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_JA, CATEGORY_SYSTEM_INFO_0_JA },
	{ "addons", CATEGORY_ADDONS_LABEL_JA, CATEGORY_ADDONS_INFO_0_JA },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_JA, CATEGORY_ACCOUNTS_INFO_0_JA },
	{ "install", CATEGORY_INSTALL_LABEL_JA, CATEGORY_INSTALL_INFO_0_JA },
	{ "convert", CATEGORY_CONVERT_LABEL_JA, CATEGORY_CONVERT_INFO_0_JA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_JA, CATEGORY_GRAPHIC_PACKS_INFO_0_JA },
	{ "cheats", CATEGORY_CHEATS_LABEL_JA, CATEGORY_CHEATS_INFO_0_JA },
	{ "logging", CATEGORY_LOGGING_LABEL_JA, CATEGORY_LOGGING_INFO_0_JA },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_JA,
		NULL,
		CEMU_CPU_MODE_INFO_0_JA,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_JA },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_JA },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_JA },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_JA },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_JA },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_JA },
			{ "Japanese", OPTION_VAL_JAPANESE_JA },
			{ "French", OPTION_VAL_FRENCH_JA },
			{ "German", OPTION_VAL_GERMAN_JA },
			{ "Italian", OPTION_VAL_ITALIAN_JA },
			{ "Spanish", OPTION_VAL_SPANISH_JA },
			{ "Chinese", OPTION_VAL_CHINESE_JA },
			{ "Korean", OPTION_VAL_KOREAN_JA },
			{ "Dutch", OPTION_VAL_DUTCH_JA },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_JA },
			{ "Russian", OPTION_VAL_RUSSIAN_JA },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_JA },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_JA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_JA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_JA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_JA },
			{ "bicubic", OPTION_VAL_BICUBIC_JA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_JA },
			{ "nearest", OPTION_VAL_NEAREST_JA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_JA },
			{ "bicubic", OPTION_VAL_BICUBIC_JA },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_JA },
			{ "nearest", OPTION_VAL_NEAREST_JA },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_JA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_JA,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_JA },
			{ "0.5x", OPTION_VAL_0_5X_JA },
			{ "0.75x", OPTION_VAL_0_75X_JA },
			{ "native", OPTION_VAL_NATIVE_JA },
			{ "1.5x", OPTION_VAL_1_5X_JA },
			{ "2x", OPTION_VAL_2X_JA },
			{ "3x", OPTION_VAL_3X_JA },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_JA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_JA,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_JA },
			{ "50", OPTION_VAL_50_JA },
			{ "75", OPTION_VAL_75_JA },
			{ "100", OPTION_VAL_100_JA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_JA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_JA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_JA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_JA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_JA },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_JA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_JA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_JA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_JA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_JA },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_JA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_JA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_JA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_JA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_JA },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_JA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_JA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_JA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_JA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_JA },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_JA },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_JA },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_JA },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_JA },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_JA },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_JA },
			{ "Select + L3", OPTION_VAL_SELECT_L3_JA },
			{ "Select + R3", OPTION_VAL_SELECT_R3_JA },
			{ "Tab", OPTION_VAL_TAB_JA },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_JA },
			{ "swapped", OPTION_VAL_SWAPPED_JA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_JA,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_JA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_JA,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_JA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_JA,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_JA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_JA,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_JA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_JA,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_JA,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_JA,
		NULL,
		CEMU_BC1_16BIT_INFO_0_JA,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_JA,
		NULL,
		CEMU_GPU_API_INFO_0_JA,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_JA },
			{ "Vulkan", OPTION_VAL_VULKAN_JA },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_JA,
		NULL,
		CEMU_ACCOUNT_INFO_0_JA,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_JA,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_JA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_JA,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_JA,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_JA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_JA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_JA,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_JA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_JA,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_JA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_JA,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_JA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_JA,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_JA,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_JA,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_JA,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_JA,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_JA,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO "비디오"
#define CATEGORY_VIDEO_INFO_0_KO "해상도, 스케일링, 프레임 페이싱 설정입니다."
#define CATEGORY_SHADERS_LABEL_KO "셰이더"
#define CATEGORY_SHADERS_INFO_0_KO "셰이더 번역, 캐싱, 컴파일 설정입니다."
#define CATEGORY_SCREEN_LABEL_KO "화면"
#define CATEGORY_SCREEN_INFO_0_KO "어떤 Wii U 화면이 어떻게 보일지 설정합니다."
#define CATEGORY_SYSTEM_LABEL_KO "시스템"
#define CATEGORY_SYSTEM_INFO_0_KO "CPU, 언어, 스케쥴링 설정입니다."
#define CATEGORY_ADDONS_LABEL_KO "애드온"
#define CATEGORY_ADDONS_INFO_0_KO "Skylanders, Infinity, Dimensions 포탈 설정입니다."
#define CATEGORY_ACCOUNTS_LABEL_KO "계정"
#define CATEGORY_ACCOUNTS_INFO_0_KO NULL
#define CATEGORY_INSTALL_LABEL_KO "콘텐츠"
#define CATEGORY_INSTALL_INFO_0_KO "에뮬레이트되는 콘솔의 저장소(saves/Cemu/mlc01)에 존재하는 게임, 타이틀 업데이트, DLC를 관리합니다."
#define CATEGORY_CONVERT_LABEL_KO "WUA로 변환"
#define CATEGORY_CONVERT_INFO_0_KO "불러온 타이틀을 .wua 파일로 저장합니다."
#define CATEGORY_GRAPHIC_PACKS_LABEL_KO "그래픽 팩"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_KO "불러온 게임의 그래픽 팩과 프리셋을 설정합니다. 변경 사항은 다음에 게임을 불러올 때 적용됩니다."
#define CATEGORY_CHEATS_LABEL_KO "치트"
#define CATEGORY_CHEATS_INFO_0_KO "불러온 게임의 치트 팩을 설정합니다. 치트 팩은 그래픽 팩의 Cheats 폴더에서 불러와집니다. 변경 사항은 다음에 게임을 불러올 때 적용됩니다."
#define CATEGORY_LOGGING_LABEL_KO "로그"
#define CATEGORY_LOGGING_INFO_0_KO "문제 해결을 위한 추가 로그 출력 설정입니다."
#define CEMU_CPU_MODE_LABEL_KO "CPU 모드"
#define CEMU_CPU_MODE_INFO_0_KO "Wii U의 PowerPC 코어가 어떻게 에뮬레이트될지 설정합니다. 자동은 CPU 물리 코어가 4개 이상일 경우 멀티코어 리컴파일러, 이외에는 싱글코어 리컴파일러를 사용합니다. 인터프리터는 훨씬 느리며 디버깅 용도로 사용됩니다. (재시작 필요)"
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_SINGLECORE_INTERPRETER_KO "싱글코어 인터프리터"
#define OPTION_VAL_SINGLECORE_RECOMPILER_KO "싱글코어 리컴파일러"
#define OPTION_VAL_MULTICORE_RECOMPILER_KO "멀티코어 리컴파일러"
#define OPTION_VAL_MULTICORE_INTERPRETER_KO "멀티코어 인터프리터"
#define CEMU_CONSOLE_LANGUAGE_LABEL_KO "콘솔 언어"
#define OPTION_VAL_ENGLISH_KO "영어"
#define OPTION_VAL_JAPANESE_KO "일본어"
#define OPTION_VAL_FRENCH_KO "프랑스어"
#define OPTION_VAL_GERMAN_KO "독일어"
#define OPTION_VAL_ITALIAN_KO "이탈리아어"
#define OPTION_VAL_SPANISH_KO "스페인어"
#define OPTION_VAL_CHINESE_KO "중국어"
#define OPTION_VAL_KOREAN_KO "한국어"
#define OPTION_VAL_DUTCH_KO "네덜란드어"
#define OPTION_VAL_PORTUGUESE_KO "포르투갈어"
#define OPTION_VAL_RUSSIAN_KO "러시아어"
#define OPTION_VAL_TAIWANESE_KO "중국어 번체"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_KO "비동기 셰이더 컴파일"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_KO "GX2DrawDone 동기화"
#define CEMU_PRECOMPILED_SHADERS_LABEL_KO "셰이더 미리 컴파일"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_KO "정확한 셰이더 곱연산"
#define CEMU_SHOW_GAME_FPS_LABEL_KO "게임 FPS 표시"
#define CEMU_SHOW_GAME_FPS_INFO_0_KO "게임이 렌더되는 프레임 레이트를 표시합니다. RetroArch의 자체 FPS 카운터는 코어가 얼마나 자주 실행되는지를 계산하므로, 게임이 프레임을 드랍하더라도 프레임의 오디오는 처리되기 때문에 계속 60으로 표시됩니다."
#define CEMU_UPSCALE_FILTER_LABEL_KO "업스케일 필터"
#define OPTION_VAL_LINEAR_KO "선형"
#define OPTION_VAL_BICUBIC_KO "쌍입방보간"
#define OPTION_VAL_BICUBIC_HERMITE_KO "쌍입방 Hermite"
#define OPTION_VAL_NEAREST_KO "최근접"
#define CEMU_DOWNSCALE_FILTER_LABEL_KO "다운스케일 필터"
#define CEMU_INTERNAL_RESOLUTION_LABEL_KO "내부 해상도"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_KO NULL
#define OPTION_VAL_0_25X_KO NULL
#define OPTION_VAL_0_5X_KO NULL
#define OPTION_VAL_0_75X_KO NULL
#define OPTION_VAL_NATIVE_KO "기본"
#define OPTION_VAL_1_5X_KO NULL
#define OPTION_VAL_2X_KO NULL
#define OPTION_VAL_3X_KO NULL
#define CEMU_THREAD_QUANTUM_LABEL_KO "스레드 퀀텀"
#define CEMU_RUMBLE_STRENGTH_LABEL_KO "진동 강도"
#define CEMU_RUMBLE_STRENGTH_INFO_0_KO "게임이 GamePad의 모터, Wii 리모컨, Pro 컨트롤러의 진동을 요청할 때 컨트롤러를 얼마나 강하게 진동할 것인지를 설정합니다. 비활성화할 경우 컨트롤러가 진동하지 않습니다."
#define OPTION_VAL_25_KO NULL
#define OPTION_VAL_50_KO NULL
#define OPTION_VAL_75_KO NULL
#define OPTION_VAL_100_KO NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_KO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_KO "Infinity Base 에뮬레이트"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_KO NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_KO "화면 레이아웃 개수"
#define CEMU_SCREEN_LAYOUT1_LABEL_KO "레이아웃 1"
#define OPTION_VAL_DEFAULT_SCREEN_KO "기본 화면"
#define OPTION_VAL_GAMEPAD_SCREEN_KO "GamePad 화면"
#define OPTION_VAL_SIDE_BY_SIDE_KO "나란히"
#define OPTION_VAL_TOP_BOTTOM_KO "위아래로"
#define OPTION_VAL_PICTURE_IN_PICTURE_KO "화면 속 화면"
#define CEMU_SCREEN_LAYOUT2_LABEL_KO "레이아웃 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_KO "레이아웃 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_KO "레이아웃 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_KO "레이아웃 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_KO "다음 화면 레이아웃"
#define OPTION_VAL_L_R_L2_R2_L3_R3_KO NULL
#define OPTION_VAL_SELECT_L3_KO NULL
#define OPTION_VAL_SELECT_R3_KO NULL
#define OPTION_VAL_TAB_KO NULL
#define CEMU_DRC_POSITION_LABEL_KO "GamePad 위치"
#define OPTION_VAL_NORMAL_KO "보통"
#define OPTION_VAL_SWAPPED_KO "바꿈"
#define CEMU_LOG_TO_FILE_LABEL_KO "Cemu 로그를 log.txt에 쓰기"
#define CEMU_LOG_FILESYSTEM_LABEL_KO "파일 접근 로그하기 (디버그용)"
#define CEMU_LOG_THREAD_SYNC_LABEL_KO "스레드 동기화 로그하기 (디버그용)"
#define CEMU_LOG_SYSTEM_API_LABEL_KO "시스템 API 콜 로그하기 (디버그용)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_KO "텍스쳐 메모리 로그하기 (디버그용)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_KO "텍스쳐 메모리의 얼마만큼이 GPU가 샘플링할 수 없어 압축이 해제된 BC인지 보고합니다."
#define CEMU_LOG_INPUT_API_LABEL_KO "컨트롤러 API 콜 로그하기 (디버그용)"
#define CEMU_LOG_INPUT_API_INFO_0_KO "타이틀이 호출하는 컨트롤러 기능(어떤 패드를 요청했고 어떤 값을 읽었는지)을 모두 로그합니다. 로그가 난잡해지므로 몇 초씩만 활성화하십시오."
#define CEMU_LOG_AUDIO_LABEL_KO NULL
#define CEMU_LOG_AUDIO_INFO_0_KO NULL
#define CEMU_LOG_THREAD_TIME_LABEL_KO NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_KO NULL
#define CEMU_DUMP_SHADERS_LABEL_KO "셰이더 덤프 (디버그용)"
#define CEMU_DUMP_SHADERS_INFO_0_KO "게임이 사용하는 모든 셰이더를 log.txt에 기록된 해시를 파일명으로 하여 system/Cemu/dump/shaders에 덤프합니다. 특정 GPU에서 잘못된 방식으로 렌더되거나 작동하지 않는 셰이더를 제보하기 위한 용도입니다. 셰이더 컴파일이 느려지고 폴더가 순식간에 차오르므로, 필요한 셰이더를 얻고 나면 즉시 비활성화하십시오."
#define CEMU_BC1_16BIT_LABEL_KO "BC1 텍스쳐 메모리 줄이기"
#define CEMU_BC1_16BIT_INFO_0_KO "BC를 샘플링할 수 없는 GPU에서 초록색 1비트를 희생하여 BC1 텍스쳐의 처리속도를 2배로 늘립니다. BC가 지원되는 GPU에서는 영향이 없습니다."
#define CEMU_GPU_API_LABEL_KO "그래픽스 API"
#define CEMU_GPU_API_INFO_0_KO "Cemu가 렌더하는 데 사용할 그래픽스 API입니다. (재시작 필요)"
#define OPTION_VAL_OPENGL_KO NULL
#define OPTION_VAL_VULKAN_KO NULL
#define CEMU_ACCOUNT_LABEL_KO NULL
#define CEMU_ACCOUNT_INFO_0_KO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_KO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_KO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_KO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_KO NULL
#define CEMU_INSTALL_GAME_LABEL_KO NULL
#define CEMU_INSTALL_GAME_INFO_0_KO NULL
#define CEMU_UNINSTALL_GAME_LABEL_KO "게임 제거"
#define CEMU_UNINSTALL_GAME_INFO_0_KO NULL
#define CEMU_INSTALL_TITLES_LABEL_KO "콘텐츠 설치"
#define CEMU_INSTALL_TITLES_INFO_0_KO NULL
#define CEMU_UNINSTALL_TITLES_LABEL_KO "콘텐츠 제거"
#define CEMU_UNINSTALL_TITLES_INFO_0_KO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_KO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_KO NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_KO "출력 디렉토리"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_KO ".wua 파일이 저장될 장소입니다. 많은 여유 공간이 필요합니다."
#define CEMU_CONVERT_TO_WUA_LABEL_KO "WUA 변환 시작"
#define CEMU_CONVERT_TO_WUA_INFO_0_KO "출력 디렉토리에 .wua 파일 작성을 시작합니다. 변환이 진행되는 동안에도 게임은 계속 실행됩니다."

struct retro_core_option_v2_category option_cats_ko[] = {
	{ "video", CATEGORY_VIDEO_LABEL_KO, CATEGORY_VIDEO_INFO_0_KO },
	{ "shaders", CATEGORY_SHADERS_LABEL_KO, CATEGORY_SHADERS_INFO_0_KO },
	{ "screen", CATEGORY_SCREEN_LABEL_KO, CATEGORY_SCREEN_INFO_0_KO },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_KO, CATEGORY_SYSTEM_INFO_0_KO },
	{ "addons", CATEGORY_ADDONS_LABEL_KO, CATEGORY_ADDONS_INFO_0_KO },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_KO, CATEGORY_ACCOUNTS_INFO_0_KO },
	{ "install", CATEGORY_INSTALL_LABEL_KO, CATEGORY_INSTALL_INFO_0_KO },
	{ "convert", CATEGORY_CONVERT_LABEL_KO, CATEGORY_CONVERT_INFO_0_KO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_KO, CATEGORY_GRAPHIC_PACKS_INFO_0_KO },
	{ "cheats", CATEGORY_CHEATS_LABEL_KO, CATEGORY_CHEATS_INFO_0_KO },
	{ "logging", CATEGORY_LOGGING_LABEL_KO, CATEGORY_LOGGING_INFO_0_KO },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_KO,
		NULL,
		CEMU_CPU_MODE_INFO_0_KO,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_KO },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_KO },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_KO },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_KO },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_KO },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_KO },
			{ "Japanese", OPTION_VAL_JAPANESE_KO },
			{ "French", OPTION_VAL_FRENCH_KO },
			{ "German", OPTION_VAL_GERMAN_KO },
			{ "Italian", OPTION_VAL_ITALIAN_KO },
			{ "Spanish", OPTION_VAL_SPANISH_KO },
			{ "Chinese", OPTION_VAL_CHINESE_KO },
			{ "Korean", OPTION_VAL_KOREAN_KO },
			{ "Dutch", OPTION_VAL_DUTCH_KO },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_KO },
			{ "Russian", OPTION_VAL_RUSSIAN_KO },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_KO },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_KO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_KO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_KO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_KO },
			{ "bicubic", OPTION_VAL_BICUBIC_KO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_KO },
			{ "nearest", OPTION_VAL_NEAREST_KO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_KO },
			{ "bicubic", OPTION_VAL_BICUBIC_KO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_KO },
			{ "nearest", OPTION_VAL_NEAREST_KO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_KO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_KO,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_KO },
			{ "0.5x", OPTION_VAL_0_5X_KO },
			{ "0.75x", OPTION_VAL_0_75X_KO },
			{ "native", OPTION_VAL_NATIVE_KO },
			{ "1.5x", OPTION_VAL_1_5X_KO },
			{ "2x", OPTION_VAL_2X_KO },
			{ "3x", OPTION_VAL_3X_KO },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_KO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_KO,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_KO },
			{ "50", OPTION_VAL_50_KO },
			{ "75", OPTION_VAL_75_KO },
			{ "100", OPTION_VAL_100_KO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_KO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_KO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_KO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_KO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_KO },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_KO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_KO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_KO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_KO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_KO },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_KO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_KO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_KO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_KO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_KO },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_KO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_KO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_KO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_KO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_KO },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_KO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_KO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_KO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_KO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_KO },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_KO },
			{ "Select + L3", OPTION_VAL_SELECT_L3_KO },
			{ "Select + R3", OPTION_VAL_SELECT_R3_KO },
			{ "Tab", OPTION_VAL_TAB_KO },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_KO },
			{ "swapped", OPTION_VAL_SWAPPED_KO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_KO,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_KO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_KO,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_KO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_KO,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_KO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_KO,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_KO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_KO,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_KO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_KO,
		NULL,
		CEMU_BC1_16BIT_INFO_0_KO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_KO,
		NULL,
		CEMU_GPU_API_INFO_0_KO,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_KO },
			{ "Vulkan", OPTION_VAL_VULKAN_KO },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_KO,
		NULL,
		CEMU_ACCOUNT_INFO_0_KO,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_KO,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_KO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_KO,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_KO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_KO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_KO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_KO,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_KO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_KO,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_KO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_KO,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_KO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_KO,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_KO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_KO,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_KO,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_KO,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_KO,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_SHADERS_LABEL_NL NULL
#define CATEGORY_SHADERS_INFO_0_NL NULL
#define CATEGORY_SCREEN_LABEL_NL NULL
#define CATEGORY_SCREEN_INFO_0_NL NULL
#define CATEGORY_SYSTEM_LABEL_NL "Systeem"
#define CATEGORY_SYSTEM_INFO_0_NL NULL
#define CATEGORY_ADDONS_LABEL_NL NULL
#define CATEGORY_ADDONS_INFO_0_NL NULL
#define CATEGORY_ACCOUNTS_LABEL_NL NULL
#define CATEGORY_ACCOUNTS_INFO_0_NL NULL
#define CATEGORY_INSTALL_LABEL_NL "Inhoud"
#define CATEGORY_INSTALL_INFO_0_NL NULL
#define CATEGORY_CONVERT_LABEL_NL NULL
#define CATEGORY_CONVERT_INFO_0_NL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_NL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_NL NULL
#define CATEGORY_CHEATS_LABEL_NL NULL
#define CATEGORY_CHEATS_INFO_0_NL NULL
#define CATEGORY_LOGGING_LABEL_NL "Loggen"
#define CATEGORY_LOGGING_INFO_0_NL NULL
#define CEMU_CPU_MODE_LABEL_NL NULL
#define CEMU_CPU_MODE_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_SINGLECORE_INTERPRETER_NL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_NL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_NL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_NL NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_NL NULL
#define OPTION_VAL_ENGLISH_NL "Engels"
#define OPTION_VAL_JAPANESE_NL "Japans"
#define OPTION_VAL_FRENCH_NL "Frans"
#define OPTION_VAL_GERMAN_NL "Duits"
#define OPTION_VAL_ITALIAN_NL "Italiaans"
#define OPTION_VAL_SPANISH_NL "Spaans"
#define OPTION_VAL_CHINESE_NL NULL
#define OPTION_VAL_KOREAN_NL NULL
#define OPTION_VAL_DUTCH_NL NULL
#define OPTION_VAL_PORTUGUESE_NL NULL
#define OPTION_VAL_RUSSIAN_NL NULL
#define OPTION_VAL_TAIWANESE_NL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_NL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_NL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_NL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_NL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_NL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_NL NULL
#define CEMU_UPSCALE_FILTER_LABEL_NL NULL
#define OPTION_VAL_LINEAR_NL "Lineair"
#define OPTION_VAL_BICUBIC_NL "Bicubisch"
#define OPTION_VAL_BICUBIC_HERMITE_NL NULL
#define OPTION_VAL_NEAREST_NL "Naaste"
#define CEMU_DOWNSCALE_FILTER_LABEL_NL NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_NL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_NL NULL
#define OPTION_VAL_0_25X_NL NULL
#define OPTION_VAL_0_5X_NL NULL
#define OPTION_VAL_0_75X_NL NULL
#define OPTION_VAL_NATIVE_NL "Standaard"
#define OPTION_VAL_1_5X_NL NULL
#define OPTION_VAL_2X_NL NULL
#define OPTION_VAL_3X_NL NULL
#define CEMU_THREAD_QUANTUM_LABEL_NL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_NL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_NL NULL
#define OPTION_VAL_25_NL NULL
#define OPTION_VAL_50_NL NULL
#define OPTION_VAL_75_NL NULL
#define OPTION_VAL_100_NL NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_NL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NL NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_NL NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_NL NULL
#define OPTION_VAL_DEFAULT_SCREEN_NL NULL
#define OPTION_VAL_GAMEPAD_SCREEN_NL NULL
#define OPTION_VAL_SIDE_BY_SIDE_NL NULL
#define OPTION_VAL_TOP_BOTTOM_NL NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_NL NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_NL NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_NL NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_NL NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_NL NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_NL NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_NL NULL
#define OPTION_VAL_SELECT_L3_NL NULL
#define OPTION_VAL_SELECT_R3_NL NULL
#define OPTION_VAL_TAB_NL NULL
#define CEMU_DRC_POSITION_LABEL_NL NULL
#define OPTION_VAL_NORMAL_NL "Normaal"
#define OPTION_VAL_SWAPPED_NL NULL
#define CEMU_LOG_TO_FILE_LABEL_NL NULL
#define CEMU_LOG_FILESYSTEM_LABEL_NL NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_NL NULL
#define CEMU_LOG_SYSTEM_API_LABEL_NL NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_NL NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_NL NULL
#define CEMU_LOG_INPUT_API_LABEL_NL NULL
#define CEMU_LOG_INPUT_API_INFO_0_NL NULL
#define CEMU_LOG_AUDIO_LABEL_NL NULL
#define CEMU_LOG_AUDIO_INFO_0_NL NULL
#define CEMU_LOG_THREAD_TIME_LABEL_NL NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_NL NULL
#define CEMU_DUMP_SHADERS_LABEL_NL NULL
#define CEMU_DUMP_SHADERS_INFO_0_NL NULL
#define CEMU_BC1_16BIT_LABEL_NL NULL
#define CEMU_BC1_16BIT_INFO_0_NL NULL
#define CEMU_GPU_API_LABEL_NL NULL
#define CEMU_GPU_API_INFO_0_NL NULL
#define OPTION_VAL_OPENGL_NL NULL
#define OPTION_VAL_VULKAN_NL NULL
#define CEMU_ACCOUNT_LABEL_NL NULL
#define CEMU_ACCOUNT_INFO_0_NL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_NL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_NL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_NL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_NL NULL
#define CEMU_INSTALL_GAME_LABEL_NL NULL
#define CEMU_INSTALL_GAME_INFO_0_NL NULL
#define CEMU_UNINSTALL_GAME_LABEL_NL NULL
#define CEMU_UNINSTALL_GAME_INFO_0_NL NULL
#define CEMU_INSTALL_TITLES_LABEL_NL NULL
#define CEMU_INSTALL_TITLES_INFO_0_NL NULL
#define CEMU_UNINSTALL_TITLES_LABEL_NL NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_NL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_NL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_NL NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_NL NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_NL NULL
#define CEMU_CONVERT_TO_WUA_LABEL_NL NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
	{ "video", CATEGORY_VIDEO_LABEL_NL, CATEGORY_VIDEO_INFO_0_NL },
	{ "shaders", CATEGORY_SHADERS_LABEL_NL, CATEGORY_SHADERS_INFO_0_NL },
	{ "screen", CATEGORY_SCREEN_LABEL_NL, CATEGORY_SCREEN_INFO_0_NL },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_NL, CATEGORY_SYSTEM_INFO_0_NL },
	{ "addons", CATEGORY_ADDONS_LABEL_NL, CATEGORY_ADDONS_INFO_0_NL },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_NL, CATEGORY_ACCOUNTS_INFO_0_NL },
	{ "install", CATEGORY_INSTALL_LABEL_NL, CATEGORY_INSTALL_INFO_0_NL },
	{ "convert", CATEGORY_CONVERT_LABEL_NL, CATEGORY_CONVERT_INFO_0_NL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_NL, CATEGORY_GRAPHIC_PACKS_INFO_0_NL },
	{ "cheats", CATEGORY_CHEATS_LABEL_NL, CATEGORY_CHEATS_INFO_0_NL },
	{ "logging", CATEGORY_LOGGING_LABEL_NL, CATEGORY_LOGGING_INFO_0_NL },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_NL,
		NULL,
		CEMU_CPU_MODE_INFO_0_NL,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_NL },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_NL },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_NL },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_NL },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_NL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_NL },
			{ "Japanese", OPTION_VAL_JAPANESE_NL },
			{ "French", OPTION_VAL_FRENCH_NL },
			{ "German", OPTION_VAL_GERMAN_NL },
			{ "Italian", OPTION_VAL_ITALIAN_NL },
			{ "Spanish", OPTION_VAL_SPANISH_NL },
			{ "Chinese", OPTION_VAL_CHINESE_NL },
			{ "Korean", OPTION_VAL_KOREAN_NL },
			{ "Dutch", OPTION_VAL_DUTCH_NL },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_NL },
			{ "Russian", OPTION_VAL_RUSSIAN_NL },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_NL },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_NL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_NL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_NL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_NL },
			{ "bicubic", OPTION_VAL_BICUBIC_NL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_NL },
			{ "nearest", OPTION_VAL_NEAREST_NL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_NL },
			{ "bicubic", OPTION_VAL_BICUBIC_NL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_NL },
			{ "nearest", OPTION_VAL_NEAREST_NL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_NL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_NL,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_NL },
			{ "0.5x", OPTION_VAL_0_5X_NL },
			{ "0.75x", OPTION_VAL_0_75X_NL },
			{ "native", OPTION_VAL_NATIVE_NL },
			{ "1.5x", OPTION_VAL_1_5X_NL },
			{ "2x", OPTION_VAL_2X_NL },
			{ "3x", OPTION_VAL_3X_NL },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_NL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_NL,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_NL },
			{ "50", OPTION_VAL_50_NL },
			{ "75", OPTION_VAL_75_NL },
			{ "100", OPTION_VAL_100_NL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_NL },
			{ "Select + L3", OPTION_VAL_SELECT_L3_NL },
			{ "Select + R3", OPTION_VAL_SELECT_R3_NL },
			{ "Tab", OPTION_VAL_TAB_NL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_NL },
			{ "swapped", OPTION_VAL_SWAPPED_NL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_NL,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_NL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_NL,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_NL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_NL,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_NL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_NL,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_NL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_NL,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_NL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_NL,
		NULL,
		CEMU_BC1_16BIT_INFO_0_NL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_NL,
		NULL,
		CEMU_GPU_API_INFO_0_NL,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_NL },
			{ "Vulkan", OPTION_VAL_VULKAN_NL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_NL,
		NULL,
		CEMU_ACCOUNT_INFO_0_NL,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_NL,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_NL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_NL,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_NL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_NL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_NL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_NL,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_NL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_NL,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_NL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_NL,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_NL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_NL,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_NL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_NL,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_NL,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_NL,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_NL,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_NO */

#define CATEGORY_VIDEO_LABEL_NO NULL
#define CATEGORY_VIDEO_INFO_0_NO NULL
#define CATEGORY_SHADERS_LABEL_NO NULL
#define CATEGORY_SHADERS_INFO_0_NO NULL
#define CATEGORY_SCREEN_LABEL_NO NULL
#define CATEGORY_SCREEN_INFO_0_NO NULL
#define CATEGORY_SYSTEM_LABEL_NO NULL
#define CATEGORY_SYSTEM_INFO_0_NO NULL
#define CATEGORY_ADDONS_LABEL_NO NULL
#define CATEGORY_ADDONS_INFO_0_NO NULL
#define CATEGORY_ACCOUNTS_LABEL_NO "Kontoer"
#define CATEGORY_ACCOUNTS_INFO_0_NO NULL
#define CATEGORY_INSTALL_LABEL_NO "Innhold"
#define CATEGORY_INSTALL_INFO_0_NO NULL
#define CATEGORY_CONVERT_LABEL_NO NULL
#define CATEGORY_CONVERT_INFO_0_NO NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_NO NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_NO NULL
#define CATEGORY_CHEATS_LABEL_NO "Juksekoder"
#define CATEGORY_CHEATS_INFO_0_NO NULL
#define CATEGORY_LOGGING_LABEL_NO NULL
#define CATEGORY_LOGGING_INFO_0_NO NULL
#define CEMU_CPU_MODE_LABEL_NO NULL
#define CEMU_CPU_MODE_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_NO NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_NO NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_NO NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_NO NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_NO NULL
#define OPTION_VAL_ENGLISH_NO NULL
#define OPTION_VAL_JAPANESE_NO NULL
#define OPTION_VAL_FRENCH_NO NULL
#define OPTION_VAL_GERMAN_NO NULL
#define OPTION_VAL_ITALIAN_NO NULL
#define OPTION_VAL_SPANISH_NO NULL
#define OPTION_VAL_CHINESE_NO NULL
#define OPTION_VAL_KOREAN_NO NULL
#define OPTION_VAL_DUTCH_NO NULL
#define OPTION_VAL_PORTUGUESE_NO NULL
#define OPTION_VAL_RUSSIAN_NO NULL
#define OPTION_VAL_TAIWANESE_NO NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_NO NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_NO NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_NO NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_NO NULL
#define CEMU_SHOW_GAME_FPS_LABEL_NO NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_NO NULL
#define CEMU_UPSCALE_FILTER_LABEL_NO NULL
#define OPTION_VAL_LINEAR_NO NULL
#define OPTION_VAL_BICUBIC_NO "Bikubisk"
#define OPTION_VAL_BICUBIC_HERMITE_NO NULL
#define OPTION_VAL_NEAREST_NO NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_NO NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_NO "Intern oppløsning"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_NO NULL
#define OPTION_VAL_0_25X_NO NULL
#define OPTION_VAL_0_5X_NO NULL
#define OPTION_VAL_0_75X_NO NULL
#define OPTION_VAL_NATIVE_NO NULL
#define OPTION_VAL_1_5X_NO NULL
#define OPTION_VAL_2X_NO NULL
#define OPTION_VAL_3X_NO NULL
#define CEMU_THREAD_QUANTUM_LABEL_NO NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_NO NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_NO NULL
#define OPTION_VAL_25_NO NULL
#define OPTION_VAL_50_NO NULL
#define OPTION_VAL_75_NO NULL
#define OPTION_VAL_100_NO NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_NO NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NO NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_NO NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_NO NULL
#define OPTION_VAL_DEFAULT_SCREEN_NO NULL
#define OPTION_VAL_GAMEPAD_SCREEN_NO NULL
#define OPTION_VAL_SIDE_BY_SIDE_NO NULL
#define OPTION_VAL_TOP_BOTTOM_NO NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_NO NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_NO NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_NO NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_NO NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_NO NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_NO NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_NO NULL
#define OPTION_VAL_SELECT_L3_NO NULL
#define OPTION_VAL_SELECT_R3_NO NULL
#define OPTION_VAL_TAB_NO NULL
#define CEMU_DRC_POSITION_LABEL_NO NULL
#define OPTION_VAL_NORMAL_NO NULL
#define OPTION_VAL_SWAPPED_NO NULL
#define CEMU_LOG_TO_FILE_LABEL_NO NULL
#define CEMU_LOG_FILESYSTEM_LABEL_NO NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_NO NULL
#define CEMU_LOG_SYSTEM_API_LABEL_NO NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_NO NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_NO NULL
#define CEMU_LOG_INPUT_API_LABEL_NO NULL
#define CEMU_LOG_INPUT_API_INFO_0_NO NULL
#define CEMU_LOG_AUDIO_LABEL_NO NULL
#define CEMU_LOG_AUDIO_INFO_0_NO NULL
#define CEMU_LOG_THREAD_TIME_LABEL_NO NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_NO NULL
#define CEMU_DUMP_SHADERS_LABEL_NO NULL
#define CEMU_DUMP_SHADERS_INFO_0_NO NULL
#define CEMU_BC1_16BIT_LABEL_NO NULL
#define CEMU_BC1_16BIT_INFO_0_NO NULL
#define CEMU_GPU_API_LABEL_NO NULL
#define CEMU_GPU_API_INFO_0_NO NULL
#define OPTION_VAL_OPENGL_NO NULL
#define OPTION_VAL_VULKAN_NO NULL
#define CEMU_ACCOUNT_LABEL_NO NULL
#define CEMU_ACCOUNT_INFO_0_NO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_NO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_NO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_NO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_NO NULL
#define CEMU_INSTALL_GAME_LABEL_NO NULL
#define CEMU_INSTALL_GAME_INFO_0_NO NULL
#define CEMU_UNINSTALL_GAME_LABEL_NO NULL
#define CEMU_UNINSTALL_GAME_INFO_0_NO NULL
#define CEMU_INSTALL_TITLES_LABEL_NO NULL
#define CEMU_INSTALL_TITLES_INFO_0_NO NULL
#define CEMU_UNINSTALL_TITLES_LABEL_NO NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_NO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_NO NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_NO NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_NO NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_NO NULL
#define CEMU_CONVERT_TO_WUA_LABEL_NO NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
	{ "video", CATEGORY_VIDEO_LABEL_NO, CATEGORY_VIDEO_INFO_0_NO },
	{ "shaders", CATEGORY_SHADERS_LABEL_NO, CATEGORY_SHADERS_INFO_0_NO },
	{ "screen", CATEGORY_SCREEN_LABEL_NO, CATEGORY_SCREEN_INFO_0_NO },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_NO, CATEGORY_SYSTEM_INFO_0_NO },
	{ "addons", CATEGORY_ADDONS_LABEL_NO, CATEGORY_ADDONS_INFO_0_NO },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_NO, CATEGORY_ACCOUNTS_INFO_0_NO },
	{ "install", CATEGORY_INSTALL_LABEL_NO, CATEGORY_INSTALL_INFO_0_NO },
	{ "convert", CATEGORY_CONVERT_LABEL_NO, CATEGORY_CONVERT_INFO_0_NO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_NO, CATEGORY_GRAPHIC_PACKS_INFO_0_NO },
	{ "cheats", CATEGORY_CHEATS_LABEL_NO, CATEGORY_CHEATS_INFO_0_NO },
	{ "logging", CATEGORY_LOGGING_LABEL_NO, CATEGORY_LOGGING_INFO_0_NO },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_no[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_NO,
		NULL,
		CEMU_CPU_MODE_INFO_0_NO,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_NO },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_NO },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_NO },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_NO },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_NO },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_NO },
			{ "Japanese", OPTION_VAL_JAPANESE_NO },
			{ "French", OPTION_VAL_FRENCH_NO },
			{ "German", OPTION_VAL_GERMAN_NO },
			{ "Italian", OPTION_VAL_ITALIAN_NO },
			{ "Spanish", OPTION_VAL_SPANISH_NO },
			{ "Chinese", OPTION_VAL_CHINESE_NO },
			{ "Korean", OPTION_VAL_KOREAN_NO },
			{ "Dutch", OPTION_VAL_DUTCH_NO },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_NO },
			{ "Russian", OPTION_VAL_RUSSIAN_NO },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_NO },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_NO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_NO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_NO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_NO },
			{ "bicubic", OPTION_VAL_BICUBIC_NO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_NO },
			{ "nearest", OPTION_VAL_NEAREST_NO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_NO },
			{ "bicubic", OPTION_VAL_BICUBIC_NO },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_NO },
			{ "nearest", OPTION_VAL_NEAREST_NO },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_NO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_NO,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_NO },
			{ "0.5x", OPTION_VAL_0_5X_NO },
			{ "0.75x", OPTION_VAL_0_75X_NO },
			{ "native", OPTION_VAL_NATIVE_NO },
			{ "1.5x", OPTION_VAL_1_5X_NO },
			{ "2x", OPTION_VAL_2X_NO },
			{ "3x", OPTION_VAL_3X_NO },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_NO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_NO,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_NO },
			{ "50", OPTION_VAL_50_NO },
			{ "75", OPTION_VAL_75_NO },
			{ "100", OPTION_VAL_100_NO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NO },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NO },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NO },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NO },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_NO },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_NO },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_NO },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_NO },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_NO },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_NO },
			{ "Select + L3", OPTION_VAL_SELECT_L3_NO },
			{ "Select + R3", OPTION_VAL_SELECT_R3_NO },
			{ "Tab", OPTION_VAL_TAB_NO },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_NO },
			{ "swapped", OPTION_VAL_SWAPPED_NO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_NO,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_NO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_NO,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_NO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_NO,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_NO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_NO,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_NO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_NO,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_NO,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_NO,
		NULL,
		CEMU_BC1_16BIT_INFO_0_NO,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_NO,
		NULL,
		CEMU_GPU_API_INFO_0_NO,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_NO },
			{ "Vulkan", OPTION_VAL_VULKAN_NO },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_NO,
		NULL,
		CEMU_ACCOUNT_INFO_0_NO,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_NO,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_NO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_NO,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_NO,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_NO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_NO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_NO,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_NO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_NO,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_NO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_NO,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_NO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_NO,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_NO,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_NO,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_NO,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_NO,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_NO,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_no = {
   option_cats_no,
   option_defs_no
};

/* RETRO_LANGUAGE_OR */

#define CATEGORY_VIDEO_LABEL_OR "ଵିଡ଼ିଓ"
#define CATEGORY_VIDEO_INFO_0_OR NULL
#define CATEGORY_SHADERS_LABEL_OR NULL
#define CATEGORY_SHADERS_INFO_0_OR NULL
#define CATEGORY_SCREEN_LABEL_OR NULL
#define CATEGORY_SCREEN_INFO_0_OR NULL
#define CATEGORY_SYSTEM_LABEL_OR NULL
#define CATEGORY_SYSTEM_INFO_0_OR NULL
#define CATEGORY_ADDONS_LABEL_OR NULL
#define CATEGORY_ADDONS_INFO_0_OR NULL
#define CATEGORY_ACCOUNTS_LABEL_OR NULL
#define CATEGORY_ACCOUNTS_INFO_0_OR NULL
#define CATEGORY_INSTALL_LABEL_OR NULL
#define CATEGORY_INSTALL_INFO_0_OR NULL
#define CATEGORY_CONVERT_LABEL_OR NULL
#define CATEGORY_CONVERT_INFO_0_OR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_OR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_OR NULL
#define CATEGORY_CHEATS_LABEL_OR NULL
#define CATEGORY_CHEATS_INFO_0_OR NULL
#define CATEGORY_LOGGING_LABEL_OR NULL
#define CATEGORY_LOGGING_INFO_0_OR NULL
#define CEMU_CPU_MODE_LABEL_OR NULL
#define CEMU_CPU_MODE_INFO_0_OR NULL
#define OPTION_VAL_AUTO_OR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_OR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_OR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_OR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_OR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_OR NULL
#define OPTION_VAL_ENGLISH_OR NULL
#define OPTION_VAL_JAPANESE_OR NULL
#define OPTION_VAL_FRENCH_OR NULL
#define OPTION_VAL_GERMAN_OR NULL
#define OPTION_VAL_ITALIAN_OR NULL
#define OPTION_VAL_SPANISH_OR NULL
#define OPTION_VAL_CHINESE_OR NULL
#define OPTION_VAL_KOREAN_OR NULL
#define OPTION_VAL_DUTCH_OR NULL
#define OPTION_VAL_PORTUGUESE_OR NULL
#define OPTION_VAL_RUSSIAN_OR NULL
#define OPTION_VAL_TAIWANESE_OR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_OR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_OR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_OR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_OR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_OR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_OR NULL
#define CEMU_UPSCALE_FILTER_LABEL_OR NULL
#define OPTION_VAL_LINEAR_OR NULL
#define OPTION_VAL_BICUBIC_OR NULL
#define OPTION_VAL_BICUBIC_HERMITE_OR NULL
#define OPTION_VAL_NEAREST_OR NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_OR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_OR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_OR NULL
#define OPTION_VAL_0_25X_OR NULL
#define OPTION_VAL_0_5X_OR NULL
#define OPTION_VAL_0_75X_OR NULL
#define OPTION_VAL_NATIVE_OR NULL
#define OPTION_VAL_1_5X_OR NULL
#define OPTION_VAL_2X_OR NULL
#define OPTION_VAL_3X_OR NULL
#define CEMU_THREAD_QUANTUM_LABEL_OR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_OR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_OR NULL
#define OPTION_VAL_25_OR NULL
#define OPTION_VAL_50_OR NULL
#define OPTION_VAL_75_OR NULL
#define OPTION_VAL_100_OR NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_OR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_OR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_OR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_OR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_OR NULL
#define OPTION_VAL_DEFAULT_SCREEN_OR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_OR NULL
#define OPTION_VAL_SIDE_BY_SIDE_OR NULL
#define OPTION_VAL_TOP_BOTTOM_OR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_OR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_OR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_OR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_OR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_OR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_OR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_OR NULL
#define OPTION_VAL_SELECT_L3_OR NULL
#define OPTION_VAL_SELECT_R3_OR NULL
#define OPTION_VAL_TAB_OR NULL
#define CEMU_DRC_POSITION_LABEL_OR NULL
#define OPTION_VAL_NORMAL_OR NULL
#define OPTION_VAL_SWAPPED_OR NULL
#define CEMU_LOG_TO_FILE_LABEL_OR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_OR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_OR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_OR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_OR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_OR NULL
#define CEMU_LOG_INPUT_API_LABEL_OR NULL
#define CEMU_LOG_INPUT_API_INFO_0_OR NULL
#define CEMU_LOG_AUDIO_LABEL_OR NULL
#define CEMU_LOG_AUDIO_INFO_0_OR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_OR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_OR NULL
#define CEMU_DUMP_SHADERS_LABEL_OR NULL
#define CEMU_DUMP_SHADERS_INFO_0_OR NULL
#define CEMU_BC1_16BIT_LABEL_OR NULL
#define CEMU_BC1_16BIT_INFO_0_OR NULL
#define CEMU_GPU_API_LABEL_OR NULL
#define CEMU_GPU_API_INFO_0_OR NULL
#define OPTION_VAL_OPENGL_OR NULL
#define OPTION_VAL_VULKAN_OR NULL
#define CEMU_ACCOUNT_LABEL_OR NULL
#define CEMU_ACCOUNT_INFO_0_OR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_OR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_OR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_OR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_OR NULL
#define CEMU_INSTALL_GAME_LABEL_OR NULL
#define CEMU_INSTALL_GAME_INFO_0_OR NULL
#define CEMU_UNINSTALL_GAME_LABEL_OR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_OR NULL
#define CEMU_INSTALL_TITLES_LABEL_OR NULL
#define CEMU_INSTALL_TITLES_INFO_0_OR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_OR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_OR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_OR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_OR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_OR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_OR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_OR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
	{ "video", CATEGORY_VIDEO_LABEL_OR, CATEGORY_VIDEO_INFO_0_OR },
	{ "shaders", CATEGORY_SHADERS_LABEL_OR, CATEGORY_SHADERS_INFO_0_OR },
	{ "screen", CATEGORY_SCREEN_LABEL_OR, CATEGORY_SCREEN_INFO_0_OR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_OR, CATEGORY_SYSTEM_INFO_0_OR },
	{ "addons", CATEGORY_ADDONS_LABEL_OR, CATEGORY_ADDONS_INFO_0_OR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_OR, CATEGORY_ACCOUNTS_INFO_0_OR },
	{ "install", CATEGORY_INSTALL_LABEL_OR, CATEGORY_INSTALL_INFO_0_OR },
	{ "convert", CATEGORY_CONVERT_LABEL_OR, CATEGORY_CONVERT_INFO_0_OR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_OR, CATEGORY_GRAPHIC_PACKS_INFO_0_OR },
	{ "cheats", CATEGORY_CHEATS_LABEL_OR, CATEGORY_CHEATS_INFO_0_OR },
	{ "logging", CATEGORY_LOGGING_LABEL_OR, CATEGORY_LOGGING_INFO_0_OR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_or[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_OR,
		NULL,
		CEMU_CPU_MODE_INFO_0_OR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_OR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_OR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_OR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_OR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_OR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_OR },
			{ "Japanese", OPTION_VAL_JAPANESE_OR },
			{ "French", OPTION_VAL_FRENCH_OR },
			{ "German", OPTION_VAL_GERMAN_OR },
			{ "Italian", OPTION_VAL_ITALIAN_OR },
			{ "Spanish", OPTION_VAL_SPANISH_OR },
			{ "Chinese", OPTION_VAL_CHINESE_OR },
			{ "Korean", OPTION_VAL_KOREAN_OR },
			{ "Dutch", OPTION_VAL_DUTCH_OR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_OR },
			{ "Russian", OPTION_VAL_RUSSIAN_OR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_OR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_OR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_OR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_OR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_OR },
			{ "bicubic", OPTION_VAL_BICUBIC_OR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_OR },
			{ "nearest", OPTION_VAL_NEAREST_OR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_OR },
			{ "bicubic", OPTION_VAL_BICUBIC_OR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_OR },
			{ "nearest", OPTION_VAL_NEAREST_OR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_OR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_OR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_OR },
			{ "0.5x", OPTION_VAL_0_5X_OR },
			{ "0.75x", OPTION_VAL_0_75X_OR },
			{ "native", OPTION_VAL_NATIVE_OR },
			{ "1.5x", OPTION_VAL_1_5X_OR },
			{ "2x", OPTION_VAL_2X_OR },
			{ "3x", OPTION_VAL_3X_OR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_OR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_OR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_OR },
			{ "50", OPTION_VAL_50_OR },
			{ "75", OPTION_VAL_75_OR },
			{ "100", OPTION_VAL_100_OR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_OR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_OR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_OR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_OR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_OR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_OR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_OR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_OR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_OR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_OR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_OR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_OR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_OR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_OR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_OR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_OR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_OR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_OR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_OR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_OR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_OR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_OR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_OR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_OR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_OR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_OR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_OR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_OR },
			{ "Tab", OPTION_VAL_TAB_OR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_OR },
			{ "swapped", OPTION_VAL_SWAPPED_OR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_OR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_OR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_OR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_OR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_OR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_OR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_OR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_OR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_OR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_OR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_OR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_OR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_OR,
		NULL,
		CEMU_GPU_API_INFO_0_OR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_OR },
			{ "Vulkan", OPTION_VAL_VULKAN_OR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_OR,
		NULL,
		CEMU_ACCOUNT_INFO_0_OR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_OR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_OR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_OR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_OR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_OR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_OR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_OR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_OR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_OR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_OR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_OR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_OR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_OR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_OR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_OR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_OR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_OR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_OR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_or = {
   option_cats_or,
   option_defs_or
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL "Wideo"
#define CATEGORY_VIDEO_INFO_0_PL NULL
#define CATEGORY_SHADERS_LABEL_PL "Shadery"
#define CATEGORY_SHADERS_INFO_0_PL NULL
#define CATEGORY_SCREEN_LABEL_PL NULL
#define CATEGORY_SCREEN_INFO_0_PL NULL
#define CATEGORY_SYSTEM_LABEL_PL NULL
#define CATEGORY_SYSTEM_INFO_0_PL NULL
#define CATEGORY_ADDONS_LABEL_PL NULL
#define CATEGORY_ADDONS_INFO_0_PL NULL
#define CATEGORY_ACCOUNTS_LABEL_PL "Konta"
#define CATEGORY_ACCOUNTS_INFO_0_PL NULL
#define CATEGORY_INSTALL_LABEL_PL "Treść"
#define CATEGORY_INSTALL_INFO_0_PL NULL
#define CATEGORY_CONVERT_LABEL_PL NULL
#define CATEGORY_CONVERT_INFO_0_PL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PL NULL
#define CATEGORY_CHEATS_LABEL_PL "Kody"
#define CATEGORY_CHEATS_INFO_0_PL NULL
#define CATEGORY_LOGGING_LABEL_PL "Logowanie"
#define CATEGORY_LOGGING_INFO_0_PL NULL
#define CEMU_CPU_MODE_LABEL_PL NULL
#define CEMU_CPU_MODE_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL "Automatyczny"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PL NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_PL NULL
#define OPTION_VAL_ENGLISH_PL "angielski"
#define OPTION_VAL_JAPANESE_PL "japoński"
#define OPTION_VAL_FRENCH_PL "francuski"
#define OPTION_VAL_GERMAN_PL "niemiecki"
#define OPTION_VAL_ITALIAN_PL "włoski"
#define OPTION_VAL_SPANISH_PL "hiszpański"
#define OPTION_VAL_CHINESE_PL NULL
#define OPTION_VAL_KOREAN_PL NULL
#define OPTION_VAL_DUTCH_PL NULL
#define OPTION_VAL_PORTUGUESE_PL NULL
#define OPTION_VAL_RUSSIAN_PL NULL
#define OPTION_VAL_TAIWANESE_PL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PL NULL
#define CEMU_UPSCALE_FILTER_LABEL_PL NULL
#define OPTION_VAL_LINEAR_PL "Liniowy"
#define OPTION_VAL_BICUBIC_PL "Dwusześcienny"
#define OPTION_VAL_BICUBIC_HERMITE_PL NULL
#define OPTION_VAL_NEAREST_PL "Najbliższy"
#define CEMU_DOWNSCALE_FILTER_LABEL_PL NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_PL "Wewnętrzna rozdzielczość"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PL NULL
#define OPTION_VAL_0_25X_PL NULL
#define OPTION_VAL_0_5X_PL NULL
#define OPTION_VAL_0_75X_PL NULL
#define OPTION_VAL_NATIVE_PL "Natywny"
#define OPTION_VAL_1_5X_PL NULL
#define OPTION_VAL_2X_PL NULL
#define OPTION_VAL_3X_PL NULL
#define CEMU_THREAD_QUANTUM_LABEL_PL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PL NULL
#define OPTION_VAL_25_PL NULL
#define OPTION_VAL_50_PL "50 %"
#define OPTION_VAL_75_PL NULL
#define OPTION_VAL_100_PL NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PL NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PL NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_PL NULL
#define OPTION_VAL_DEFAULT_SCREEN_PL NULL
#define OPTION_VAL_GAMEPAD_SCREEN_PL NULL
#define OPTION_VAL_SIDE_BY_SIDE_PL NULL
#define OPTION_VAL_TOP_BOTTOM_PL NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_PL NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_PL NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_PL NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_PL NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_PL NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PL NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_PL NULL
#define OPTION_VAL_SELECT_L3_PL NULL
#define OPTION_VAL_SELECT_R3_PL NULL
#define OPTION_VAL_TAB_PL NULL
#define CEMU_DRC_POSITION_LABEL_PL NULL
#define OPTION_VAL_NORMAL_PL "Normalnie"
#define OPTION_VAL_SWAPPED_PL NULL
#define CEMU_LOG_TO_FILE_LABEL_PL NULL
#define CEMU_LOG_FILESYSTEM_LABEL_PL NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_PL NULL
#define CEMU_LOG_SYSTEM_API_LABEL_PL NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_PL NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_PL NULL
#define CEMU_LOG_INPUT_API_LABEL_PL NULL
#define CEMU_LOG_INPUT_API_INFO_0_PL NULL
#define CEMU_LOG_AUDIO_LABEL_PL NULL
#define CEMU_LOG_AUDIO_INFO_0_PL NULL
#define CEMU_LOG_THREAD_TIME_LABEL_PL NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_PL NULL
#define CEMU_DUMP_SHADERS_LABEL_PL NULL
#define CEMU_DUMP_SHADERS_INFO_0_PL NULL
#define CEMU_BC1_16BIT_LABEL_PL NULL
#define CEMU_BC1_16BIT_INFO_0_PL NULL
#define CEMU_GPU_API_LABEL_PL NULL
#define CEMU_GPU_API_INFO_0_PL NULL
#define OPTION_VAL_OPENGL_PL NULL
#define OPTION_VAL_VULKAN_PL NULL
#define CEMU_ACCOUNT_LABEL_PL NULL
#define CEMU_ACCOUNT_INFO_0_PL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PL NULL
#define CEMU_INSTALL_GAME_LABEL_PL NULL
#define CEMU_INSTALL_GAME_INFO_0_PL NULL
#define CEMU_UNINSTALL_GAME_LABEL_PL NULL
#define CEMU_UNINSTALL_GAME_INFO_0_PL NULL
#define CEMU_INSTALL_TITLES_LABEL_PL NULL
#define CEMU_INSTALL_TITLES_INFO_0_PL NULL
#define CEMU_UNINSTALL_TITLES_LABEL_PL NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_PL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_PL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PL NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_PL NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_PL NULL
#define CEMU_CONVERT_TO_WUA_LABEL_PL NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
	{ "video", CATEGORY_VIDEO_LABEL_PL, CATEGORY_VIDEO_INFO_0_PL },
	{ "shaders", CATEGORY_SHADERS_LABEL_PL, CATEGORY_SHADERS_INFO_0_PL },
	{ "screen", CATEGORY_SCREEN_LABEL_PL, CATEGORY_SCREEN_INFO_0_PL },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_PL, CATEGORY_SYSTEM_INFO_0_PL },
	{ "addons", CATEGORY_ADDONS_LABEL_PL, CATEGORY_ADDONS_INFO_0_PL },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_PL, CATEGORY_ACCOUNTS_INFO_0_PL },
	{ "install", CATEGORY_INSTALL_LABEL_PL, CATEGORY_INSTALL_INFO_0_PL },
	{ "convert", CATEGORY_CONVERT_LABEL_PL, CATEGORY_CONVERT_INFO_0_PL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PL, CATEGORY_GRAPHIC_PACKS_INFO_0_PL },
	{ "cheats", CATEGORY_CHEATS_LABEL_PL, CATEGORY_CHEATS_INFO_0_PL },
	{ "logging", CATEGORY_LOGGING_LABEL_PL, CATEGORY_LOGGING_INFO_0_PL },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_PL,
		NULL,
		CEMU_CPU_MODE_INFO_0_PL,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_PL },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_PL },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_PL },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_PL },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_PL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_PL },
			{ "Japanese", OPTION_VAL_JAPANESE_PL },
			{ "French", OPTION_VAL_FRENCH_PL },
			{ "German", OPTION_VAL_GERMAN_PL },
			{ "Italian", OPTION_VAL_ITALIAN_PL },
			{ "Spanish", OPTION_VAL_SPANISH_PL },
			{ "Chinese", OPTION_VAL_CHINESE_PL },
			{ "Korean", OPTION_VAL_KOREAN_PL },
			{ "Dutch", OPTION_VAL_DUTCH_PL },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_PL },
			{ "Russian", OPTION_VAL_RUSSIAN_PL },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_PL },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_PL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PL },
			{ "bicubic", OPTION_VAL_BICUBIC_PL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PL },
			{ "nearest", OPTION_VAL_NEAREST_PL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PL },
			{ "bicubic", OPTION_VAL_BICUBIC_PL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PL },
			{ "nearest", OPTION_VAL_NEAREST_PL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PL,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_PL },
			{ "0.5x", OPTION_VAL_0_5X_PL },
			{ "0.75x", OPTION_VAL_0_75X_PL },
			{ "native", OPTION_VAL_NATIVE_PL },
			{ "1.5x", OPTION_VAL_1_5X_PL },
			{ "2x", OPTION_VAL_2X_PL },
			{ "3x", OPTION_VAL_3X_PL },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PL,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_PL },
			{ "50", OPTION_VAL_50_PL },
			{ "75", OPTION_VAL_75_PL },
			{ "100", OPTION_VAL_100_PL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_PL },
			{ "Select + L3", OPTION_VAL_SELECT_L3_PL },
			{ "Select + R3", OPTION_VAL_SELECT_R3_PL },
			{ "Tab", OPTION_VAL_TAB_PL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_PL },
			{ "swapped", OPTION_VAL_SWAPPED_PL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_PL,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_PL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_PL,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_PL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_PL,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_PL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_PL,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_PL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_PL,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_PL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_PL,
		NULL,
		CEMU_BC1_16BIT_INFO_0_PL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_PL,
		NULL,
		CEMU_GPU_API_INFO_0_PL,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PL },
			{ "Vulkan", OPTION_VAL_VULKAN_PL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PL,
		NULL,
		CEMU_ACCOUNT_INFO_0_PL,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_PL,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_PL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_PL,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_PL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_PL,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_PL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_PL,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_PL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_PL,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_PL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_PL,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_PL,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_PL,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_PL,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_PL,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_BR NULL
#define CATEGORY_SHADERS_LABEL_PT_BR "Sombreadores"
#define CATEGORY_SHADERS_INFO_0_PT_BR NULL
#define CATEGORY_SCREEN_LABEL_PT_BR NULL
#define CATEGORY_SCREEN_INFO_0_PT_BR NULL
#define CATEGORY_SYSTEM_LABEL_PT_BR "Sistema"
#define CATEGORY_SYSTEM_INFO_0_PT_BR NULL
#define CATEGORY_ADDONS_LABEL_PT_BR NULL
#define CATEGORY_ADDONS_INFO_0_PT_BR NULL
#define CATEGORY_ACCOUNTS_LABEL_PT_BR "Contas"
#define CATEGORY_ACCOUNTS_INFO_0_PT_BR NULL
#define CATEGORY_INSTALL_LABEL_PT_BR "Conteúdo"
#define CATEGORY_INSTALL_INFO_0_PT_BR NULL
#define CATEGORY_CONVERT_LABEL_PT_BR NULL
#define CATEGORY_CONVERT_INFO_0_PT_BR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PT_BR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PT_BR NULL
#define CATEGORY_CHEATS_LABEL_PT_BR "Trapaças"
#define CATEGORY_CHEATS_INFO_0_PT_BR NULL
#define CATEGORY_LOGGING_LABEL_PT_BR "Registro de eventos"
#define CATEGORY_LOGGING_INFO_0_PT_BR NULL
#define CEMU_CPU_MODE_LABEL_PT_BR NULL
#define CEMU_CPU_MODE_INFO_0_PT_BR NULL
#define OPTION_VAL_AUTO_PT_BR "Automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PT_BR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PT_BR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PT_BR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PT_BR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_PT_BR NULL
#define OPTION_VAL_ENGLISH_PT_BR "Inglês"
#define OPTION_VAL_JAPANESE_PT_BR "Japonês"
#define OPTION_VAL_FRENCH_PT_BR "Francês"
#define OPTION_VAL_GERMAN_PT_BR "Alemão"
#define OPTION_VAL_ITALIAN_PT_BR "Italiano"
#define OPTION_VAL_SPANISH_PT_BR "Espanhol"
#define OPTION_VAL_CHINESE_PT_BR NULL
#define OPTION_VAL_KOREAN_PT_BR NULL
#define OPTION_VAL_DUTCH_PT_BR NULL
#define OPTION_VAL_PORTUGUESE_PT_BR NULL
#define OPTION_VAL_RUSSIAN_PT_BR NULL
#define OPTION_VAL_TAIWANESE_PT_BR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_BR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PT_BR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PT_BR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PT_BR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PT_BR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PT_BR NULL
#define CEMU_UPSCALE_FILTER_LABEL_PT_BR NULL
#define OPTION_VAL_LINEAR_PT_BR NULL
#define OPTION_VAL_BICUBIC_PT_BR "Bicúbico"
#define OPTION_VAL_BICUBIC_HERMITE_PT_BR NULL
#define OPTION_VAL_NEAREST_PT_BR NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_PT_BR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_PT_BR "Resolução interna"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PT_BR NULL
#define OPTION_VAL_0_25X_PT_BR NULL
#define OPTION_VAL_0_5X_PT_BR NULL
#define OPTION_VAL_0_75X_PT_BR NULL
#define OPTION_VAL_NATIVE_PT_BR "Nativo"
#define OPTION_VAL_1_5X_PT_BR NULL
#define OPTION_VAL_2X_PT_BR NULL
#define OPTION_VAL_3X_PT_BR NULL
#define CEMU_THREAD_QUANTUM_LABEL_PT_BR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PT_BR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PT_BR NULL
#define OPTION_VAL_25_PT_BR NULL
#define OPTION_VAL_50_PT_BR NULL
#define OPTION_VAL_75_PT_BR NULL
#define OPTION_VAL_100_PT_BR NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_BR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PT_BR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_BR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PT_BR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_PT_BR NULL
#define OPTION_VAL_DEFAULT_SCREEN_PT_BR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_PT_BR NULL
#define OPTION_VAL_SIDE_BY_SIDE_PT_BR NULL
#define OPTION_VAL_TOP_BOTTOM_PT_BR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_PT_BR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_PT_BR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_PT_BR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_PT_BR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_PT_BR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PT_BR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_PT_BR NULL
#define OPTION_VAL_SELECT_L3_PT_BR NULL
#define OPTION_VAL_SELECT_R3_PT_BR NULL
#define OPTION_VAL_TAB_PT_BR NULL
#define CEMU_DRC_POSITION_LABEL_PT_BR NULL
#define OPTION_VAL_NORMAL_PT_BR NULL
#define OPTION_VAL_SWAPPED_PT_BR NULL
#define CEMU_LOG_TO_FILE_LABEL_PT_BR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_PT_BR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_PT_BR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_PT_BR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_PT_BR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_PT_BR NULL
#define CEMU_LOG_INPUT_API_LABEL_PT_BR NULL
#define CEMU_LOG_INPUT_API_INFO_0_PT_BR NULL
#define CEMU_LOG_AUDIO_LABEL_PT_BR NULL
#define CEMU_LOG_AUDIO_INFO_0_PT_BR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_PT_BR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_PT_BR NULL
#define CEMU_DUMP_SHADERS_LABEL_PT_BR NULL
#define CEMU_DUMP_SHADERS_INFO_0_PT_BR NULL
#define CEMU_BC1_16BIT_LABEL_PT_BR NULL
#define CEMU_BC1_16BIT_INFO_0_PT_BR NULL
#define CEMU_GPU_API_LABEL_PT_BR NULL
#define CEMU_GPU_API_INFO_0_PT_BR NULL
#define OPTION_VAL_OPENGL_PT_BR NULL
#define OPTION_VAL_VULKAN_PT_BR NULL
#define CEMU_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_INSTALL_GAME_LABEL_PT_BR NULL
#define CEMU_INSTALL_GAME_INFO_0_PT_BR NULL
#define CEMU_UNINSTALL_GAME_LABEL_PT_BR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_PT_BR NULL
#define CEMU_INSTALL_TITLES_LABEL_PT_BR NULL
#define CEMU_INSTALL_TITLES_INFO_0_PT_BR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_PT_BR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_PT_BR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_PT_BR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PT_BR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_PT_BR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_PT_BR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_PT_BR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
	{ "video", CATEGORY_VIDEO_LABEL_PT_BR, CATEGORY_VIDEO_INFO_0_PT_BR },
	{ "shaders", CATEGORY_SHADERS_LABEL_PT_BR, CATEGORY_SHADERS_INFO_0_PT_BR },
	{ "screen", CATEGORY_SCREEN_LABEL_PT_BR, CATEGORY_SCREEN_INFO_0_PT_BR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_PT_BR, CATEGORY_SYSTEM_INFO_0_PT_BR },
	{ "addons", CATEGORY_ADDONS_LABEL_PT_BR, CATEGORY_ADDONS_INFO_0_PT_BR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_PT_BR, CATEGORY_ACCOUNTS_INFO_0_PT_BR },
	{ "install", CATEGORY_INSTALL_LABEL_PT_BR, CATEGORY_INSTALL_INFO_0_PT_BR },
	{ "convert", CATEGORY_CONVERT_LABEL_PT_BR, CATEGORY_CONVERT_INFO_0_PT_BR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PT_BR, CATEGORY_GRAPHIC_PACKS_INFO_0_PT_BR },
	{ "cheats", CATEGORY_CHEATS_LABEL_PT_BR, CATEGORY_CHEATS_INFO_0_PT_BR },
	{ "logging", CATEGORY_LOGGING_LABEL_PT_BR, CATEGORY_LOGGING_INFO_0_PT_BR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_PT_BR,
		NULL,
		CEMU_CPU_MODE_INFO_0_PT_BR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_PT_BR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_PT_BR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_PT_BR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_PT_BR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_PT_BR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_PT_BR },
			{ "Japanese", OPTION_VAL_JAPANESE_PT_BR },
			{ "French", OPTION_VAL_FRENCH_PT_BR },
			{ "German", OPTION_VAL_GERMAN_PT_BR },
			{ "Italian", OPTION_VAL_ITALIAN_PT_BR },
			{ "Spanish", OPTION_VAL_SPANISH_PT_BR },
			{ "Chinese", OPTION_VAL_CHINESE_PT_BR },
			{ "Korean", OPTION_VAL_KOREAN_PT_BR },
			{ "Dutch", OPTION_VAL_DUTCH_PT_BR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_PT_BR },
			{ "Russian", OPTION_VAL_RUSSIAN_PT_BR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_PT_BR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_PT_BR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PT_BR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PT_BR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PT_BR },
			{ "bicubic", OPTION_VAL_BICUBIC_PT_BR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PT_BR },
			{ "nearest", OPTION_VAL_NEAREST_PT_BR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PT_BR },
			{ "bicubic", OPTION_VAL_BICUBIC_PT_BR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PT_BR },
			{ "nearest", OPTION_VAL_NEAREST_PT_BR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PT_BR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PT_BR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_PT_BR },
			{ "0.5x", OPTION_VAL_0_5X_PT_BR },
			{ "0.75x", OPTION_VAL_0_75X_PT_BR },
			{ "native", OPTION_VAL_NATIVE_PT_BR },
			{ "1.5x", OPTION_VAL_1_5X_PT_BR },
			{ "2x", OPTION_VAL_2X_PT_BR },
			{ "3x", OPTION_VAL_3X_PT_BR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PT_BR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PT_BR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_PT_BR },
			{ "50", OPTION_VAL_50_PT_BR },
			{ "75", OPTION_VAL_75_PT_BR },
			{ "100", OPTION_VAL_100_PT_BR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_BR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_BR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_BR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_BR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_BR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_BR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_BR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_BR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_BR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_BR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_BR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_BR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_BR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_BR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_BR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_BR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_BR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_BR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_BR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_BR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_BR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_BR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_BR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_BR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_BR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_PT_BR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_PT_BR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_PT_BR },
			{ "Tab", OPTION_VAL_TAB_PT_BR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_PT_BR },
			{ "swapped", OPTION_VAL_SWAPPED_PT_BR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_PT_BR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_PT_BR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_PT_BR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_PT_BR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_PT_BR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_PT_BR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_PT_BR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_PT_BR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_PT_BR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_PT_BR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_PT_BR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_PT_BR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_PT_BR,
		NULL,
		CEMU_GPU_API_INFO_0_PT_BR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PT_BR },
			{ "Vulkan", OPTION_VAL_VULKAN_PT_BR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PT_BR,
		NULL,
		CEMU_ACCOUNT_INFO_0_PT_BR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_PT_BR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_PT_BR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_PT_BR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_PT_BR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PT_BR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PT_BR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_PT_BR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_PT_BR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_PT_BR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_PT_BR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_PT_BR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_PT_BR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_PT_BR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PT_BR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_PT_BR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_PT_BR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_PT_BR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_PT_BR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT "Vídeo"
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_SHADERS_LABEL_PT_PT "Shader"
#define CATEGORY_SHADERS_INFO_0_PT_PT NULL
#define CATEGORY_SCREEN_LABEL_PT_PT NULL
#define CATEGORY_SCREEN_INFO_0_PT_PT NULL
#define CATEGORY_SYSTEM_LABEL_PT_PT NULL
#define CATEGORY_SYSTEM_INFO_0_PT_PT NULL
#define CATEGORY_ADDONS_LABEL_PT_PT NULL
#define CATEGORY_ADDONS_INFO_0_PT_PT NULL
#define CATEGORY_ACCOUNTS_LABEL_PT_PT "Conta"
#define CATEGORY_ACCOUNTS_INFO_0_PT_PT NULL
#define CATEGORY_INSTALL_LABEL_PT_PT "Conteúdo"
#define CATEGORY_INSTALL_INFO_0_PT_PT NULL
#define CATEGORY_CONVERT_LABEL_PT_PT NULL
#define CATEGORY_CONVERT_INFO_0_PT_PT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PT_PT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PT_PT NULL
#define CATEGORY_CHEATS_LABEL_PT_PT "Batota"
#define CATEGORY_CHEATS_INFO_0_PT_PT NULL
#define CATEGORY_LOGGING_LABEL_PT_PT "Registo"
#define CATEGORY_LOGGING_INFO_0_PT_PT NULL
#define CEMU_CPU_MODE_LABEL_PT_PT NULL
#define CEMU_CPU_MODE_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PT_PT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PT_PT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PT_PT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PT_PT NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_PT_PT NULL
#define OPTION_VAL_ENGLISH_PT_PT "Inglês"
#define OPTION_VAL_JAPANESE_PT_PT "Japonês"
#define OPTION_VAL_FRENCH_PT_PT "Francês"
#define OPTION_VAL_GERMAN_PT_PT "Alemão"
#define OPTION_VAL_ITALIAN_PT_PT "Italiano"
#define OPTION_VAL_SPANISH_PT_PT "Espanhol"
#define OPTION_VAL_CHINESE_PT_PT NULL
#define OPTION_VAL_KOREAN_PT_PT NULL
#define OPTION_VAL_DUTCH_PT_PT NULL
#define OPTION_VAL_PORTUGUESE_PT_PT NULL
#define OPTION_VAL_RUSSIAN_PT_PT NULL
#define OPTION_VAL_TAIWANESE_PT_PT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_PT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PT_PT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PT_PT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PT_PT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PT_PT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PT_PT NULL
#define CEMU_UPSCALE_FILTER_LABEL_PT_PT NULL
#define OPTION_VAL_LINEAR_PT_PT NULL
#define OPTION_VAL_BICUBIC_PT_PT "Bicúbico"
#define OPTION_VAL_BICUBIC_HERMITE_PT_PT NULL
#define OPTION_VAL_NEAREST_PT_PT "O mais próximo"
#define CEMU_DOWNSCALE_FILTER_LABEL_PT_PT NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_PT_PT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PT_PT NULL
#define OPTION_VAL_0_25X_PT_PT NULL
#define OPTION_VAL_0_5X_PT_PT NULL
#define OPTION_VAL_0_75X_PT_PT NULL
#define OPTION_VAL_NATIVE_PT_PT NULL
#define OPTION_VAL_1_5X_PT_PT NULL
#define OPTION_VAL_2X_PT_PT NULL
#define OPTION_VAL_3X_PT_PT NULL
#define CEMU_THREAD_QUANTUM_LABEL_PT_PT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PT_PT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PT_PT NULL
#define OPTION_VAL_25_PT_PT NULL
#define OPTION_VAL_50_PT_PT NULL
#define OPTION_VAL_75_PT_PT NULL
#define OPTION_VAL_100_PT_PT NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_PT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PT_PT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_PT NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PT_PT NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_PT_PT NULL
#define OPTION_VAL_DEFAULT_SCREEN_PT_PT NULL
#define OPTION_VAL_GAMEPAD_SCREEN_PT_PT NULL
#define OPTION_VAL_SIDE_BY_SIDE_PT_PT NULL
#define OPTION_VAL_TOP_BOTTOM_PT_PT NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_PT_PT NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_PT_PT NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_PT_PT NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_PT_PT NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_PT_PT NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PT_PT NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_PT_PT NULL
#define OPTION_VAL_SELECT_L3_PT_PT NULL
#define OPTION_VAL_SELECT_R3_PT_PT NULL
#define OPTION_VAL_TAB_PT_PT NULL
#define CEMU_DRC_POSITION_LABEL_PT_PT NULL
#define OPTION_VAL_NORMAL_PT_PT NULL
#define OPTION_VAL_SWAPPED_PT_PT NULL
#define CEMU_LOG_TO_FILE_LABEL_PT_PT NULL
#define CEMU_LOG_FILESYSTEM_LABEL_PT_PT NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_PT_PT NULL
#define CEMU_LOG_SYSTEM_API_LABEL_PT_PT NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_PT_PT NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_PT_PT NULL
#define CEMU_LOG_INPUT_API_LABEL_PT_PT NULL
#define CEMU_LOG_INPUT_API_INFO_0_PT_PT NULL
#define CEMU_LOG_AUDIO_LABEL_PT_PT NULL
#define CEMU_LOG_AUDIO_INFO_0_PT_PT NULL
#define CEMU_LOG_THREAD_TIME_LABEL_PT_PT NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_PT_PT NULL
#define CEMU_DUMP_SHADERS_LABEL_PT_PT NULL
#define CEMU_DUMP_SHADERS_INFO_0_PT_PT NULL
#define CEMU_BC1_16BIT_LABEL_PT_PT NULL
#define CEMU_BC1_16BIT_INFO_0_PT_PT NULL
#define CEMU_GPU_API_LABEL_PT_PT NULL
#define CEMU_GPU_API_INFO_0_PT_PT NULL
#define OPTION_VAL_OPENGL_PT_PT NULL
#define OPTION_VAL_VULKAN_PT_PT NULL
#define CEMU_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_INSTALL_GAME_LABEL_PT_PT NULL
#define CEMU_INSTALL_GAME_INFO_0_PT_PT NULL
#define CEMU_UNINSTALL_GAME_LABEL_PT_PT NULL
#define CEMU_UNINSTALL_GAME_INFO_0_PT_PT NULL
#define CEMU_INSTALL_TITLES_LABEL_PT_PT NULL
#define CEMU_INSTALL_TITLES_INFO_0_PT_PT NULL
#define CEMU_UNINSTALL_TITLES_LABEL_PT_PT NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_PT_PT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_PT_PT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PT_PT NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_PT_PT NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_PT_PT NULL
#define CEMU_CONVERT_TO_WUA_LABEL_PT_PT NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
	{ "video", CATEGORY_VIDEO_LABEL_PT_PT, CATEGORY_VIDEO_INFO_0_PT_PT },
	{ "shaders", CATEGORY_SHADERS_LABEL_PT_PT, CATEGORY_SHADERS_INFO_0_PT_PT },
	{ "screen", CATEGORY_SCREEN_LABEL_PT_PT, CATEGORY_SCREEN_INFO_0_PT_PT },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_PT_PT, CATEGORY_SYSTEM_INFO_0_PT_PT },
	{ "addons", CATEGORY_ADDONS_LABEL_PT_PT, CATEGORY_ADDONS_INFO_0_PT_PT },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_PT_PT, CATEGORY_ACCOUNTS_INFO_0_PT_PT },
	{ "install", CATEGORY_INSTALL_LABEL_PT_PT, CATEGORY_INSTALL_INFO_0_PT_PT },
	{ "convert", CATEGORY_CONVERT_LABEL_PT_PT, CATEGORY_CONVERT_INFO_0_PT_PT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PT_PT, CATEGORY_GRAPHIC_PACKS_INFO_0_PT_PT },
	{ "cheats", CATEGORY_CHEATS_LABEL_PT_PT, CATEGORY_CHEATS_INFO_0_PT_PT },
	{ "logging", CATEGORY_LOGGING_LABEL_PT_PT, CATEGORY_LOGGING_INFO_0_PT_PT },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_PT_PT,
		NULL,
		CEMU_CPU_MODE_INFO_0_PT_PT,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_PT_PT },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_PT_PT },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_PT_PT },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_PT_PT },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_PT_PT },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_PT_PT },
			{ "Japanese", OPTION_VAL_JAPANESE_PT_PT },
			{ "French", OPTION_VAL_FRENCH_PT_PT },
			{ "German", OPTION_VAL_GERMAN_PT_PT },
			{ "Italian", OPTION_VAL_ITALIAN_PT_PT },
			{ "Spanish", OPTION_VAL_SPANISH_PT_PT },
			{ "Chinese", OPTION_VAL_CHINESE_PT_PT },
			{ "Korean", OPTION_VAL_KOREAN_PT_PT },
			{ "Dutch", OPTION_VAL_DUTCH_PT_PT },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_PT_PT },
			{ "Russian", OPTION_VAL_RUSSIAN_PT_PT },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_PT_PT },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_PT_PT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PT_PT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PT_PT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PT_PT },
			{ "bicubic", OPTION_VAL_BICUBIC_PT_PT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PT_PT },
			{ "nearest", OPTION_VAL_NEAREST_PT_PT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_PT_PT },
			{ "bicubic", OPTION_VAL_BICUBIC_PT_PT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_PT_PT },
			{ "nearest", OPTION_VAL_NEAREST_PT_PT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PT_PT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PT_PT,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_PT_PT },
			{ "0.5x", OPTION_VAL_0_5X_PT_PT },
			{ "0.75x", OPTION_VAL_0_75X_PT_PT },
			{ "native", OPTION_VAL_NATIVE_PT_PT },
			{ "1.5x", OPTION_VAL_1_5X_PT_PT },
			{ "2x", OPTION_VAL_2X_PT_PT },
			{ "3x", OPTION_VAL_3X_PT_PT },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PT_PT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PT_PT,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_PT_PT },
			{ "50", OPTION_VAL_50_PT_PT },
			{ "75", OPTION_VAL_75_PT_PT },
			{ "100", OPTION_VAL_100_PT_PT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_PT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_PT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_PT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_PT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_PT },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_PT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_PT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_PT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_PT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_PT },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_PT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_PT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_PT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_PT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_PT },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_PT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_PT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_PT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_PT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_PT },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_PT_PT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_PT_PT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_PT_PT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_PT_PT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_PT_PT },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_PT_PT },
			{ "Select + L3", OPTION_VAL_SELECT_L3_PT_PT },
			{ "Select + R3", OPTION_VAL_SELECT_R3_PT_PT },
			{ "Tab", OPTION_VAL_TAB_PT_PT },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_PT_PT },
			{ "swapped", OPTION_VAL_SWAPPED_PT_PT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_PT_PT,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_PT_PT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_PT_PT,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_PT_PT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_PT_PT,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_PT_PT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_PT_PT,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_PT_PT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_PT_PT,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_PT_PT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_PT_PT,
		NULL,
		CEMU_BC1_16BIT_INFO_0_PT_PT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_PT_PT,
		NULL,
		CEMU_GPU_API_INFO_0_PT_PT,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PT_PT },
			{ "Vulkan", OPTION_VAL_VULKAN_PT_PT },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PT_PT,
		NULL,
		CEMU_ACCOUNT_INFO_0_PT_PT,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_PT_PT,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_PT_PT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_PT_PT,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_PT_PT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PT_PT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PT_PT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_PT_PT,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_PT_PT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_PT_PT,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_PT_PT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_PT_PT,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_PT_PT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_PT_PT,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_PT_PT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_PT_PT,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_PT_PT,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_PT_PT,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_PT_PT,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU "Видео"
#define CATEGORY_VIDEO_INFO_0_RU NULL
#define CATEGORY_SHADERS_LABEL_RU "Шейдеры"
#define CATEGORY_SHADERS_INFO_0_RU NULL
#define CATEGORY_SCREEN_LABEL_RU NULL
#define CATEGORY_SCREEN_INFO_0_RU NULL
#define CATEGORY_SYSTEM_LABEL_RU "Система"
#define CATEGORY_SYSTEM_INFO_0_RU NULL
#define CATEGORY_ADDONS_LABEL_RU NULL
#define CATEGORY_ADDONS_INFO_0_RU NULL
#define CATEGORY_ACCOUNTS_LABEL_RU "Аккаунты"
#define CATEGORY_ACCOUNTS_INFO_0_RU NULL
#define CATEGORY_INSTALL_LABEL_RU "Контент"
#define CATEGORY_INSTALL_INFO_0_RU NULL
#define CATEGORY_CONVERT_LABEL_RU NULL
#define CATEGORY_CONVERT_INFO_0_RU NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_RU NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_RU NULL
#define CATEGORY_CHEATS_LABEL_RU "Чит-коды"
#define CATEGORY_CHEATS_INFO_0_RU NULL
#define CATEGORY_LOGGING_LABEL_RU "Логирование"
#define CATEGORY_LOGGING_INFO_0_RU NULL
#define CEMU_CPU_MODE_LABEL_RU NULL
#define CEMU_CPU_MODE_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU "Автоматически"
#define OPTION_VAL_SINGLECORE_INTERPRETER_RU NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_RU NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_RU NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_RU NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_RU NULL
#define OPTION_VAL_ENGLISH_RU "Английский"
#define OPTION_VAL_JAPANESE_RU "Японский"
#define OPTION_VAL_FRENCH_RU "Французский"
#define OPTION_VAL_GERMAN_RU "Немецкий"
#define OPTION_VAL_ITALIAN_RU "Итальянский"
#define OPTION_VAL_SPANISH_RU "Испанский"
#define OPTION_VAL_CHINESE_RU NULL
#define OPTION_VAL_KOREAN_RU NULL
#define OPTION_VAL_DUTCH_RU NULL
#define OPTION_VAL_PORTUGUESE_RU NULL
#define OPTION_VAL_RUSSIAN_RU NULL
#define OPTION_VAL_TAIWANESE_RU NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_RU NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_RU NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_RU NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_RU NULL
#define CEMU_SHOW_GAME_FPS_LABEL_RU NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_RU NULL
#define CEMU_UPSCALE_FILTER_LABEL_RU NULL
#define OPTION_VAL_LINEAR_RU "Линейный"
#define OPTION_VAL_BICUBIC_RU "Бикубическая"
#define OPTION_VAL_BICUBIC_HERMITE_RU NULL
#define OPTION_VAL_NEAREST_RU "Ближайший"
#define CEMU_DOWNSCALE_FILTER_LABEL_RU NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_RU "Внутреннее разрешение"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_RU NULL
#define OPTION_VAL_0_25X_RU NULL
#define OPTION_VAL_0_5X_RU NULL
#define OPTION_VAL_0_75X_RU NULL
#define OPTION_VAL_NATIVE_RU "Исходное"
#define OPTION_VAL_1_5X_RU NULL
#define OPTION_VAL_2X_RU NULL
#define OPTION_VAL_3X_RU NULL
#define CEMU_THREAD_QUANTUM_LABEL_RU NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_RU NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_RU NULL
#define OPTION_VAL_25_RU NULL
#define OPTION_VAL_50_RU NULL
#define OPTION_VAL_75_RU NULL
#define OPTION_VAL_100_RU NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_RU NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_RU NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_RU NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_RU NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_RU NULL
#define OPTION_VAL_DEFAULT_SCREEN_RU NULL
#define OPTION_VAL_GAMEPAD_SCREEN_RU NULL
#define OPTION_VAL_SIDE_BY_SIDE_RU NULL
#define OPTION_VAL_TOP_BOTTOM_RU NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_RU NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_RU NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_RU NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_RU NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_RU NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_RU NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_RU NULL
#define OPTION_VAL_SELECT_L3_RU NULL
#define OPTION_VAL_SELECT_R3_RU NULL
#define OPTION_VAL_TAB_RU NULL
#define CEMU_DRC_POSITION_LABEL_RU NULL
#define OPTION_VAL_NORMAL_RU "Нормально"
#define OPTION_VAL_SWAPPED_RU NULL
#define CEMU_LOG_TO_FILE_LABEL_RU NULL
#define CEMU_LOG_FILESYSTEM_LABEL_RU NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_RU NULL
#define CEMU_LOG_SYSTEM_API_LABEL_RU NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_RU NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_RU NULL
#define CEMU_LOG_INPUT_API_LABEL_RU NULL
#define CEMU_LOG_INPUT_API_INFO_0_RU NULL
#define CEMU_LOG_AUDIO_LABEL_RU NULL
#define CEMU_LOG_AUDIO_INFO_0_RU NULL
#define CEMU_LOG_THREAD_TIME_LABEL_RU NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_RU NULL
#define CEMU_DUMP_SHADERS_LABEL_RU NULL
#define CEMU_DUMP_SHADERS_INFO_0_RU NULL
#define CEMU_BC1_16BIT_LABEL_RU NULL
#define CEMU_BC1_16BIT_INFO_0_RU NULL
#define CEMU_GPU_API_LABEL_RU NULL
#define CEMU_GPU_API_INFO_0_RU NULL
#define OPTION_VAL_OPENGL_RU NULL
#define OPTION_VAL_VULKAN_RU NULL
#define CEMU_ACCOUNT_LABEL_RU NULL
#define CEMU_ACCOUNT_INFO_0_RU NULL
#define CEMU_CREATE_ACCOUNT_LABEL_RU NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_RU NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_RU NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_RU NULL
#define CEMU_INSTALL_GAME_LABEL_RU NULL
#define CEMU_INSTALL_GAME_INFO_0_RU NULL
#define CEMU_UNINSTALL_GAME_LABEL_RU NULL
#define CEMU_UNINSTALL_GAME_INFO_0_RU NULL
#define CEMU_INSTALL_TITLES_LABEL_RU NULL
#define CEMU_INSTALL_TITLES_INFO_0_RU NULL
#define CEMU_UNINSTALL_TITLES_LABEL_RU NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_RU NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_RU NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_RU NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_RU NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_RU NULL
#define CEMU_CONVERT_TO_WUA_LABEL_RU NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
	{ "video", CATEGORY_VIDEO_LABEL_RU, CATEGORY_VIDEO_INFO_0_RU },
	{ "shaders", CATEGORY_SHADERS_LABEL_RU, CATEGORY_SHADERS_INFO_0_RU },
	{ "screen", CATEGORY_SCREEN_LABEL_RU, CATEGORY_SCREEN_INFO_0_RU },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_RU, CATEGORY_SYSTEM_INFO_0_RU },
	{ "addons", CATEGORY_ADDONS_LABEL_RU, CATEGORY_ADDONS_INFO_0_RU },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_RU, CATEGORY_ACCOUNTS_INFO_0_RU },
	{ "install", CATEGORY_INSTALL_LABEL_RU, CATEGORY_INSTALL_INFO_0_RU },
	{ "convert", CATEGORY_CONVERT_LABEL_RU, CATEGORY_CONVERT_INFO_0_RU },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_RU, CATEGORY_GRAPHIC_PACKS_INFO_0_RU },
	{ "cheats", CATEGORY_CHEATS_LABEL_RU, CATEGORY_CHEATS_INFO_0_RU },
	{ "logging", CATEGORY_LOGGING_LABEL_RU, CATEGORY_LOGGING_INFO_0_RU },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_RU,
		NULL,
		CEMU_CPU_MODE_INFO_0_RU,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_RU },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_RU },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_RU },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_RU },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_RU },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_RU },
			{ "Japanese", OPTION_VAL_JAPANESE_RU },
			{ "French", OPTION_VAL_FRENCH_RU },
			{ "German", OPTION_VAL_GERMAN_RU },
			{ "Italian", OPTION_VAL_ITALIAN_RU },
			{ "Spanish", OPTION_VAL_SPANISH_RU },
			{ "Chinese", OPTION_VAL_CHINESE_RU },
			{ "Korean", OPTION_VAL_KOREAN_RU },
			{ "Dutch", OPTION_VAL_DUTCH_RU },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_RU },
			{ "Russian", OPTION_VAL_RUSSIAN_RU },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_RU },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_RU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_RU,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_RU,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_RU },
			{ "bicubic", OPTION_VAL_BICUBIC_RU },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_RU },
			{ "nearest", OPTION_VAL_NEAREST_RU },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_RU },
			{ "bicubic", OPTION_VAL_BICUBIC_RU },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_RU },
			{ "nearest", OPTION_VAL_NEAREST_RU },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_RU,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_RU,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_RU },
			{ "0.5x", OPTION_VAL_0_5X_RU },
			{ "0.75x", OPTION_VAL_0_75X_RU },
			{ "native", OPTION_VAL_NATIVE_RU },
			{ "1.5x", OPTION_VAL_1_5X_RU },
			{ "2x", OPTION_VAL_2X_RU },
			{ "3x", OPTION_VAL_3X_RU },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_RU,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_RU,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_RU },
			{ "50", OPTION_VAL_50_RU },
			{ "75", OPTION_VAL_75_RU },
			{ "100", OPTION_VAL_100_RU },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_RU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_RU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_RU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_RU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_RU },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_RU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_RU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_RU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_RU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_RU },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_RU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_RU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_RU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_RU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_RU },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_RU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_RU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_RU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_RU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_RU },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_RU },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_RU },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_RU },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_RU },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_RU },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_RU },
			{ "Select + L3", OPTION_VAL_SELECT_L3_RU },
			{ "Select + R3", OPTION_VAL_SELECT_R3_RU },
			{ "Tab", OPTION_VAL_TAB_RU },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_RU },
			{ "swapped", OPTION_VAL_SWAPPED_RU },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_RU,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_RU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_RU,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_RU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_RU,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_RU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_RU,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_RU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_RU,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_RU,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_RU,
		NULL,
		CEMU_BC1_16BIT_INFO_0_RU,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_RU,
		NULL,
		CEMU_GPU_API_INFO_0_RU,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_RU },
			{ "Vulkan", OPTION_VAL_VULKAN_RU },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_RU,
		NULL,
		CEMU_ACCOUNT_INFO_0_RU,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_RU,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_RU,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_RU,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_RU,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_RU,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_RU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_RU,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_RU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_RU,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_RU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_RU,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_RU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_RU,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_RU,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_RU,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_RU,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_RU,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_RU,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK "Rozlíšenie, škálovanie a časovanie snímok."
#define CATEGORY_SHADERS_LABEL_SK "Shadery"
#define CATEGORY_SHADERS_INFO_0_SK "Preklad, ukladanie do vyrovnávacej pamäte a kompilácia shaderov."
#define CATEGORY_SCREEN_LABEL_SK "Obrazovka"
#define CATEGORY_SCREEN_INFO_0_SK "Ktorá obrazovka Wii U sa zobrazí a ako."
#define CATEGORY_SYSTEM_LABEL_SK "Systém"
#define CATEGORY_SYSTEM_INFO_0_SK "CPU, jazyk a plánovanie."
#define CATEGORY_ADDONS_LABEL_SK "Doplnky"
#define CATEGORY_ADDONS_INFO_0_SK "Portály Skylanders, Infinity a Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_SK "Účty"
#define CATEGORY_ACCOUNTS_INFO_0_SK "Správa účtov v adresári účtov Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_SK "Obsah"
#define CATEGORY_INSTALL_INFO_0_SK "Správa hier, aktualizácií titulov a DLC v saves/Cemu/mlc01, úložisku emulovanej konzoly."
#define CATEGORY_CONVERT_LABEL_SK "Konverzia do WUA"
#define CATEGORY_CONVERT_INFO_0_SK "Zapíše načítaný titul ako archív .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_SK "Grafické balíky"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SK "Grafické balíky načítanej hry a ich predvoľby. Zmeny sa prejavia pri ďalšom načítaní hry."
#define CATEGORY_CHEATS_LABEL_SK "Cheaty"
#define CATEGORY_CHEATS_INFO_0_SK "Cheat balíky načítanej hry z priečinka Cheats grafických balíkov. Zmeny sa prejavia pri ďalšom načítaní hry."
#define CATEGORY_LOGGING_LABEL_SK "Záznam"
#define CATEGORY_LOGGING_INFO_0_SK "Dodatočný výstup do záznamu na diagnostiku problémov."
#define CEMU_CPU_MODE_LABEL_SK "Režim CPU"
#define CEMU_CPU_MODE_INFO_0_SK "Ako sa emulujú jadrá PowerPC konzoly Wii U. Auto zvolí viacjadrový rekompilátor na CPU so štyrmi alebo viac fyzickými jadrami, inak jednojadrový. Interpretery sú oveľa pomalšie a sú určené na ladenie. (Vyžaduje reštart)"
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SK "Jednojadrový interpreter"
#define OPTION_VAL_SINGLECORE_RECOMPILER_SK "Jednojadrový rekompilátor"
#define OPTION_VAL_MULTICORE_RECOMPILER_SK "Viacjadrový rekompilátor"
#define OPTION_VAL_MULTICORE_INTERPRETER_SK "Viacjadrový interpreter"
#define CEMU_CONSOLE_LANGUAGE_LABEL_SK "Jazyk konzoly"
#define OPTION_VAL_ENGLISH_SK "Angličtina"
#define OPTION_VAL_JAPANESE_SK "Japončina"
#define OPTION_VAL_FRENCH_SK "Francúzština"
#define OPTION_VAL_GERMAN_SK "Nemčina"
#define OPTION_VAL_ITALIAN_SK "Taliančina"
#define OPTION_VAL_SPANISH_SK "Španielčina"
#define OPTION_VAL_CHINESE_SK "Čínština"
#define OPTION_VAL_KOREAN_SK "Kórejčina"
#define OPTION_VAL_DUTCH_SK "Holandčina"
#define OPTION_VAL_PORTUGUESE_SK "Portugalčina"
#define OPTION_VAL_RUSSIAN_SK "Ruština"
#define OPTION_VAL_TAIWANESE_SK "Taiwančina"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SK "Asynchrónna kompilácia shaderov"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SK "Synchronizácia GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_SK "Predkompilované shadery"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SK "Presné násobenie v shaderoch"
#define CEMU_SHOW_GAME_FPS_LABEL_SK "Zobraziť FPS hry"
#define CEMU_SHOW_GAME_FPS_INFO_0_SK "Zobrazí snímkovú frekvenciu, v ktorej hra vykresľuje. Vlastné počítadlo FPS v RetroArchu počíta, ako často beží jadro, a to ostáva na 60 aj vtedy, keď hra stráca snímky, pretože každý beh nesie zvuk za jednu snímku."
#define CEMU_UPSCALE_FILTER_LABEL_SK "Filter zväčšenia"
#define OPTION_VAL_LINEAR_SK "Lineárny"
#define OPTION_VAL_BICUBIC_SK "Bikubická"
#define OPTION_VAL_BICUBIC_HERMITE_SK "Bikubický Hermite"
#define OPTION_VAL_NEAREST_SK "Najbližšie"
#define CEMU_DOWNSCALE_FILTER_LABEL_SK "Filter zmenšenia"
#define CEMU_INTERNAL_RESOLUTION_LABEL_SK "Vnútorné rozlíšenie"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SK NULL
#define OPTION_VAL_0_25X_SK NULL
#define OPTION_VAL_0_5X_SK NULL
#define OPTION_VAL_0_75X_SK NULL
#define OPTION_VAL_NATIVE_SK "Natívne"
#define OPTION_VAL_1_5X_SK NULL
#define OPTION_VAL_2X_SK NULL
#define OPTION_VAL_3X_SK NULL
#define CEMU_THREAD_QUANTUM_LABEL_SK "Kvantum vlákien"
#define CEMU_RUMBLE_STRENGTH_LABEL_SK "Sila vibrácií"
#define CEMU_RUMBLE_STRENGTH_INFO_0_SK "Ako silno ovládač vibruje, keď o to hra požiada: motor GamePadu a Wii Remote alebo Pro Controllera. Pri vypnutí sa frontendu neposielajú žiadne vibrácie."
#define OPTION_VAL_25_SK NULL
#define OPTION_VAL_50_SK NULL
#define OPTION_VAL_75_SK NULL
#define OPTION_VAL_100_SK NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SK "Emulovať Skylanders Portal of Power"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SK "Emulovať Infinity Base"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SK "Emulovať Dimensions Toy Pad"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SK "Počet rozložení obrazovky"
#define CEMU_SCREEN_LAYOUT1_LABEL_SK "Rozloženie 1"
#define OPTION_VAL_DEFAULT_SCREEN_SK "Predvolená obrazovka"
#define OPTION_VAL_GAMEPAD_SCREEN_SK "Obrazovka GamePadu"
#define OPTION_VAL_SIDE_BY_SIDE_SK "Vedľa seba"
#define OPTION_VAL_TOP_BOTTOM_SK "Nad sebou"
#define OPTION_VAL_PICTURE_IN_PICTURE_SK "Obraz v obraze"
#define CEMU_SCREEN_LAYOUT2_LABEL_SK "Rozloženie 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_SK "Rozloženie 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_SK "Rozloženie 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_SK "Rozloženie 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SK "Ďalšie rozloženie obrazovky"
#define OPTION_VAL_L_R_L2_R2_L3_R3_SK NULL
#define OPTION_VAL_SELECT_L3_SK NULL
#define OPTION_VAL_SELECT_R3_SK NULL
#define OPTION_VAL_TAB_SK NULL
#define CEMU_DRC_POSITION_LABEL_SK "Poloha GamePadu"
#define OPTION_VAL_NORMAL_SK "Normálne"
#define OPTION_VAL_SWAPPED_SK "Prehodené"
#define CEMU_LOG_TO_FILE_LABEL_SK "Zapisovať záznam Cemu do log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_SK "Zaznamenávať prístup k súborom (ladenie)"
#define CEMU_LOG_THREAD_SYNC_LABEL_SK "Zaznamenávať synchronizáciu vlákien (ladenie)"
#define CEMU_LOG_SYSTEM_API_LABEL_SK "Zaznamenávať volania systémového API (ladenie)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_SK "Zaznamenávať pamäť textúr (ladenie)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_SK "Hlási, koľko pamäte textúr tvoria textúry BC, ktoré bolo treba dekomprimovať, lebo ich táto GPU nevie vzorkovať."
#define CEMU_LOG_INPUT_API_LABEL_SK "Zaznamenávať volania API ovládačov (ladenie)"
#define CEMU_LOG_INPUT_API_INFO_0_SK "Zaznamená každé volanie ovládača, ktoré titul urobí – ktoré gamepady hľadal a čo sa dozvedel. Veľa záznamov; zapínajte na pár sekúnd."
#define CEMU_LOG_AUDIO_LABEL_SK NULL
#define CEMU_LOG_AUDIO_INFO_0_SK NULL
#define CEMU_LOG_THREAD_TIME_LABEL_SK NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_SK NULL
#define CEMU_DUMP_SHADERS_LABEL_SK "Ukladať shadery (ladenie)"
#define CEMU_DUMP_SHADERS_INFO_0_SK "Zapíše zdrojový kód každého shadera, ktorý hra používa, do system/Cemu/dump/shaders, pomenovaný podľa jeho hashov tak, ako sa objavujú v log.txt. Na nahlásenie shadera, ktorý na konkrétnom GPU zlyhá alebo kreslí nesprávne. Spomaľuje kompiláciu shaderov a priečinok rýchlo zapĺňa, preto ho potom znova vypnite."
#define CEMU_BC1_16BIT_LABEL_SK "Znížiť pamäť textúr BC1"
#define CEMU_BC1_16BIT_INFO_0_SK "Zníži na polovicu pamäť, ktorú zaberajú textúry BC1 na GPU, ktorá nevie vzorkovať BC, za cenu jedného bitu zelenej. Kde je BC podporované, nemá žiadny účinok."
#define CEMU_GPU_API_LABEL_SK "Grafické API"
#define CEMU_GPU_API_INFO_0_SK "Grafické API, cez ktoré Cemu vykresľuje. (Vyžaduje reštart)"
#define OPTION_VAL_OPENGL_SK NULL
#define OPTION_VAL_VULKAN_SK NULL
#define CEMU_ACCOUNT_LABEL_SK "Aktívny účet"
#define CEMU_ACCOUNT_INFO_0_SK "Účet Wii U, pod ktorým hra beží, každý s vlastnými uloženými pozíciami a Mii. Zoznam obsahuje účty v adresári účtov.Zmena sa prejaví, keď sa titul zavrie a znova spustí alebo resetuje. Dovtedy bežiaci titul ukladá do účtu, s ktorým bol spustený."
#define CEMU_CREATE_ACCOUNT_LABEL_SK "Vytvoriť účet"
#define CEMU_CREATE_ACCOUNT_INFO_0_SK "Vytvorí nový účet s menom Player 2, Player 3 atď. a nastaví ho ako Aktívny účet. Potom sa táto voľba vráti na VYP. Konzola pojme najviac 12 účtov."
#define CEMU_REMOVE_ACCOUNT_LABEL_SK "Odstrániť účet"
#define CEMU_REMOVE_ACCOUNT_INFO_0_SK "UPOZORNENIE: odstránením účtu sa zmažú aj jeho uložené pozície vo všetkých hrách a nedá sa to vrátiť späť.Odstráni vybraný účet tak, ako to robí zmazanie používateľa na konzole: účet zmizne z adresára účtov a jeho uložené pozície z priečinka uložených pozícií každého titulu. Účet sa odstráni, keď opustíte menu, a táto voľba sa potom vráti na VYP.Aktívny účet sa nedá odstrániť, a ani účet, s ktorým bola spustená bežiaca hra, kým sa táto hra nezavrie. Posledný účet sa preto odstrániť nedá."
#define CEMU_INSTALL_GAME_LABEL_SK "Inštalovať hry"
#define CEMU_INSTALL_GAME_INFO_0_SK "Nainštaluje každú hru v system/Cemu/titles, vrátane podpriečinkov, do adresára nainštalovaných hier emulovaného Wii U (saves/Cemu/mlc01/usr/title/00050000), tak ako konzola inštaluje hru zo svojho disku. Hra je obraz disku (.wud, .wux, .iso) alebo .wua; aktualizácia titulu a DLC, ktoré .wua obsahuje, sa nainštalujú s ňou. Hra už nainštalovaná v rovnakej alebo novšej verzii sa nechá tak.Keď je táto voľba ZAP, inštalácia začne okamžite, jej priebeh sa zobrazuje ako upozornenie, a keď sú všetky hry nainštalované, prepne sa späť na VYP. Nainštalovaná hra sa spúšťa načítaním súboru .rpx v jej priečinku code v adresári nainštalovaných hier; jej obraz disku už nie je potrebný."
#define CEMU_UNINSTALL_GAME_LABEL_SK "Odinštalovať hru"
#define CEMU_UNINSTALL_GAME_INFO_0_SK "Odinštaluje bežiacu hru z adresára nainštalovaných hier (saves/Cemu/mlc01/usr/title/00050000), keď sa hra zavrie alebo resetuje, spolu s jej nainštalovanou aktualizáciou titulu a DLC; dovtedy ostáva na ZAP. Jej uložené pozície ostanú nedotknuté, rovnako ako obraz disku alebo .wua, z ktorého bola nainštalovaná."
#define CEMU_INSTALL_TITLES_LABEL_SK "Inštalovať obsah"
#define CEMU_INSTALL_TITLES_INFO_0_SK "Nainštaluje každú aktualizáciu titulu a DLC v system/Cemu/titles, vrátane podpriečinkov, do úložiska emulovaného Wii U (saves/Cemu/mlc01/usr/title). Každá patrí do vlastného priečinka v system/Cemu/titles; stiahnutie z NUS (súbory .app) potrebuje vedľa seba svoj title.tmd a svoj title.tik, dešifrovací kľúč. Už nainštalovaná rovnaká alebo novšia verzia sa nechá tak.Keď je táto voľba ZAP, inštalácia začne okamžite, jej priebeh sa zobrazuje ako upozornenie, a prepne sa späť na VYP, keď je všetok obsah nainštalovaný a toto menu sa opustí alebo sa zmení iná voľba. Hra použije nainštalovaný obsah po reštarte.Obsah z iných umiestnení sa dá nainštalovať cez Hlavné menu > Načítať obsah v RetroArchu výberom príslušného title.tmd, s jeho title.tik vedľa neho."
#define CEMU_UNINSTALL_TITLES_LABEL_SK "Odinštalovať obsah"
#define CEMU_UNINSTALL_TITLES_INFO_0_SK "Odinštaluje aktualizáciu titulu a DLC bežiacej hry z úložiska emulovaného Wii U (saves/Cemu/mlc01/usr/title), keď sa hra zavrie alebo resetuje; dovtedy ostáva na ZAP. Kópie v system/Cemu/titles ostanú nedotknuté."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_SK "Odstrániť súbory po inštalácii"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SK "UPOZORNENIE: zmaže súbory zo system/Cemu/titles a nedá sa to vrátiť späť. system/Cemu/titles je priečinok, ktorý spravuje jadro; jedinú kópiu dumpu majte inde.Zmaže zo system/Cemu/titles to, čo nainštalovali Inštalovať hry a Inštalovať obsah: priečinok aktualizácie titulu alebo DLC po jeho nainštalovaní a obraz disku alebo .wua, keď je nainštalované všetko, čo obsahuje (samotné Inštalovať obsah ponechá .wua, ktoré obsahuje aj hru). Súbory, ktoré používa bežiaca hra, sa zmažú, keď sa zavrie alebo resetuje. Obsah načítaný cez Načítať obsah ostane tam, kde je."
#define CEMU_WUA_OUTPUT_DIR_LABEL_SK "Výstupný priečinok"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_SK "Kam sa zapíše súbor .wua. Musí mať preň dosť miesta."
#define CEMU_CONVERT_TO_WUA_LABEL_SK "Spustiť konverziu do WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_SK "Zapíše titul do výstupného priečinka ako .wua. Počas toho beží ďalej."

struct retro_core_option_v2_category option_cats_sk[] = {
	{ "video", CATEGORY_VIDEO_LABEL_SK, CATEGORY_VIDEO_INFO_0_SK },
	{ "shaders", CATEGORY_SHADERS_LABEL_SK, CATEGORY_SHADERS_INFO_0_SK },
	{ "screen", CATEGORY_SCREEN_LABEL_SK, CATEGORY_SCREEN_INFO_0_SK },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_SK, CATEGORY_SYSTEM_INFO_0_SK },
	{ "addons", CATEGORY_ADDONS_LABEL_SK, CATEGORY_ADDONS_INFO_0_SK },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_SK, CATEGORY_ACCOUNTS_INFO_0_SK },
	{ "install", CATEGORY_INSTALL_LABEL_SK, CATEGORY_INSTALL_INFO_0_SK },
	{ "convert", CATEGORY_CONVERT_LABEL_SK, CATEGORY_CONVERT_INFO_0_SK },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SK, CATEGORY_GRAPHIC_PACKS_INFO_0_SK },
	{ "cheats", CATEGORY_CHEATS_LABEL_SK, CATEGORY_CHEATS_INFO_0_SK },
	{ "logging", CATEGORY_LOGGING_LABEL_SK, CATEGORY_LOGGING_INFO_0_SK },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_SK,
		NULL,
		CEMU_CPU_MODE_INFO_0_SK,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_SK },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_SK },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_SK },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_SK },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_SK },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_SK },
			{ "Japanese", OPTION_VAL_JAPANESE_SK },
			{ "French", OPTION_VAL_FRENCH_SK },
			{ "German", OPTION_VAL_GERMAN_SK },
			{ "Italian", OPTION_VAL_ITALIAN_SK },
			{ "Spanish", OPTION_VAL_SPANISH_SK },
			{ "Chinese", OPTION_VAL_CHINESE_SK },
			{ "Korean", OPTION_VAL_KOREAN_SK },
			{ "Dutch", OPTION_VAL_DUTCH_SK },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_SK },
			{ "Russian", OPTION_VAL_RUSSIAN_SK },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_SK },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_SK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SK,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SK,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SK },
			{ "bicubic", OPTION_VAL_BICUBIC_SK },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SK },
			{ "nearest", OPTION_VAL_NEAREST_SK },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SK },
			{ "bicubic", OPTION_VAL_BICUBIC_SK },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SK },
			{ "nearest", OPTION_VAL_NEAREST_SK },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SK,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SK,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_SK },
			{ "0.5x", OPTION_VAL_0_5X_SK },
			{ "0.75x", OPTION_VAL_0_75X_SK },
			{ "native", OPTION_VAL_NATIVE_SK },
			{ "1.5x", OPTION_VAL_1_5X_SK },
			{ "2x", OPTION_VAL_2X_SK },
			{ "3x", OPTION_VAL_3X_SK },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SK,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SK,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_SK },
			{ "50", OPTION_VAL_50_SK },
			{ "75", OPTION_VAL_75_SK },
			{ "100", OPTION_VAL_100_SK },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SK },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SK },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SK },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SK },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SK },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_SK },
			{ "Select + L3", OPTION_VAL_SELECT_L3_SK },
			{ "Select + R3", OPTION_VAL_SELECT_R3_SK },
			{ "Tab", OPTION_VAL_TAB_SK },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_SK },
			{ "swapped", OPTION_VAL_SWAPPED_SK },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_SK,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_SK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_SK,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_SK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_SK,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_SK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_SK,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_SK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_SK,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_SK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_SK,
		NULL,
		CEMU_BC1_16BIT_INFO_0_SK,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_SK,
		NULL,
		CEMU_GPU_API_INFO_0_SK,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SK },
			{ "Vulkan", OPTION_VAL_VULKAN_SK },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SK,
		NULL,
		CEMU_ACCOUNT_INFO_0_SK,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_SK,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_SK,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_SK,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_SK,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SK,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_SK,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_SK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_SK,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_SK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_SK,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_SK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_SK,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_SK,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_SK,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_SK,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_SK,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_SHADERS_LABEL_SR NULL
#define CATEGORY_SHADERS_INFO_0_SR NULL
#define CATEGORY_SCREEN_LABEL_SR NULL
#define CATEGORY_SCREEN_INFO_0_SR NULL
#define CATEGORY_SYSTEM_LABEL_SR NULL
#define CATEGORY_SYSTEM_INFO_0_SR NULL
#define CATEGORY_ADDONS_LABEL_SR NULL
#define CATEGORY_ADDONS_INFO_0_SR NULL
#define CATEGORY_ACCOUNTS_LABEL_SR NULL
#define CATEGORY_ACCOUNTS_INFO_0_SR NULL
#define CATEGORY_INSTALL_LABEL_SR NULL
#define CATEGORY_INSTALL_INFO_0_SR NULL
#define CATEGORY_CONVERT_LABEL_SR NULL
#define CATEGORY_CONVERT_INFO_0_SR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_SR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SR NULL
#define CATEGORY_CHEATS_LABEL_SR NULL
#define CATEGORY_CHEATS_INFO_0_SR NULL
#define CATEGORY_LOGGING_LABEL_SR "Beleženje"
#define CATEGORY_LOGGING_INFO_0_SR NULL
#define CEMU_CPU_MODE_LABEL_SR NULL
#define CEMU_CPU_MODE_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_SR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_SR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_SR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_SR NULL
#define OPTION_VAL_ENGLISH_SR NULL
#define OPTION_VAL_JAPANESE_SR NULL
#define OPTION_VAL_FRENCH_SR NULL
#define OPTION_VAL_GERMAN_SR NULL
#define OPTION_VAL_ITALIAN_SR NULL
#define OPTION_VAL_SPANISH_SR NULL
#define OPTION_VAL_CHINESE_SR NULL
#define OPTION_VAL_KOREAN_SR NULL
#define OPTION_VAL_DUTCH_SR NULL
#define OPTION_VAL_PORTUGUESE_SR NULL
#define OPTION_VAL_RUSSIAN_SR NULL
#define OPTION_VAL_TAIWANESE_SR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_SR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_SR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_SR NULL
#define CEMU_UPSCALE_FILTER_LABEL_SR NULL
#define OPTION_VAL_LINEAR_SR NULL
#define OPTION_VAL_BICUBIC_SR "Bikubno"
#define OPTION_VAL_BICUBIC_HERMITE_SR NULL
#define OPTION_VAL_NEAREST_SR NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_SR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_SR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SR NULL
#define OPTION_VAL_0_25X_SR NULL
#define OPTION_VAL_0_5X_SR NULL
#define OPTION_VAL_0_75X_SR NULL
#define OPTION_VAL_NATIVE_SR NULL
#define OPTION_VAL_1_5X_SR NULL
#define OPTION_VAL_2X_SR NULL
#define OPTION_VAL_3X_SR NULL
#define CEMU_THREAD_QUANTUM_LABEL_SR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_SR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_SR NULL
#define OPTION_VAL_25_SR NULL
#define OPTION_VAL_50_SR NULL
#define OPTION_VAL_75_SR NULL
#define OPTION_VAL_100_SR NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_SR NULL
#define OPTION_VAL_DEFAULT_SCREEN_SR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_SR NULL
#define OPTION_VAL_SIDE_BY_SIDE_SR NULL
#define OPTION_VAL_TOP_BOTTOM_SR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_SR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_SR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_SR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_SR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_SR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_SR NULL
#define OPTION_VAL_SELECT_L3_SR NULL
#define OPTION_VAL_SELECT_R3_SR NULL
#define OPTION_VAL_TAB_SR NULL
#define CEMU_DRC_POSITION_LABEL_SR NULL
#define OPTION_VAL_NORMAL_SR NULL
#define OPTION_VAL_SWAPPED_SR NULL
#define CEMU_LOG_TO_FILE_LABEL_SR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_SR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_SR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_SR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_SR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_SR NULL
#define CEMU_LOG_INPUT_API_LABEL_SR NULL
#define CEMU_LOG_INPUT_API_INFO_0_SR NULL
#define CEMU_LOG_AUDIO_LABEL_SR NULL
#define CEMU_LOG_AUDIO_INFO_0_SR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_SR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_SR NULL
#define CEMU_DUMP_SHADERS_LABEL_SR NULL
#define CEMU_DUMP_SHADERS_INFO_0_SR NULL
#define CEMU_BC1_16BIT_LABEL_SR NULL
#define CEMU_BC1_16BIT_INFO_0_SR NULL
#define CEMU_GPU_API_LABEL_SR NULL
#define CEMU_GPU_API_INFO_0_SR NULL
#define OPTION_VAL_OPENGL_SR NULL
#define OPTION_VAL_VULKAN_SR NULL
#define CEMU_ACCOUNT_LABEL_SR NULL
#define CEMU_ACCOUNT_INFO_0_SR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_SR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_SR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_SR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_SR NULL
#define CEMU_INSTALL_GAME_LABEL_SR NULL
#define CEMU_INSTALL_GAME_INFO_0_SR NULL
#define CEMU_UNINSTALL_GAME_LABEL_SR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_SR NULL
#define CEMU_INSTALL_TITLES_LABEL_SR NULL
#define CEMU_INSTALL_TITLES_INFO_0_SR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_SR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_SR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_SR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_SR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_SR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_SR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
	{ "video", CATEGORY_VIDEO_LABEL_SR, CATEGORY_VIDEO_INFO_0_SR },
	{ "shaders", CATEGORY_SHADERS_LABEL_SR, CATEGORY_SHADERS_INFO_0_SR },
	{ "screen", CATEGORY_SCREEN_LABEL_SR, CATEGORY_SCREEN_INFO_0_SR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_SR, CATEGORY_SYSTEM_INFO_0_SR },
	{ "addons", CATEGORY_ADDONS_LABEL_SR, CATEGORY_ADDONS_INFO_0_SR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_SR, CATEGORY_ACCOUNTS_INFO_0_SR },
	{ "install", CATEGORY_INSTALL_LABEL_SR, CATEGORY_INSTALL_INFO_0_SR },
	{ "convert", CATEGORY_CONVERT_LABEL_SR, CATEGORY_CONVERT_INFO_0_SR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SR, CATEGORY_GRAPHIC_PACKS_INFO_0_SR },
	{ "cheats", CATEGORY_CHEATS_LABEL_SR, CATEGORY_CHEATS_INFO_0_SR },
	{ "logging", CATEGORY_LOGGING_LABEL_SR, CATEGORY_LOGGING_INFO_0_SR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_SR,
		NULL,
		CEMU_CPU_MODE_INFO_0_SR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_SR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_SR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_SR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_SR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_SR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_SR },
			{ "Japanese", OPTION_VAL_JAPANESE_SR },
			{ "French", OPTION_VAL_FRENCH_SR },
			{ "German", OPTION_VAL_GERMAN_SR },
			{ "Italian", OPTION_VAL_ITALIAN_SR },
			{ "Spanish", OPTION_VAL_SPANISH_SR },
			{ "Chinese", OPTION_VAL_CHINESE_SR },
			{ "Korean", OPTION_VAL_KOREAN_SR },
			{ "Dutch", OPTION_VAL_DUTCH_SR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_SR },
			{ "Russian", OPTION_VAL_RUSSIAN_SR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_SR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_SR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SR },
			{ "bicubic", OPTION_VAL_BICUBIC_SR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SR },
			{ "nearest", OPTION_VAL_NEAREST_SR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SR },
			{ "bicubic", OPTION_VAL_BICUBIC_SR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SR },
			{ "nearest", OPTION_VAL_NEAREST_SR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_SR },
			{ "0.5x", OPTION_VAL_0_5X_SR },
			{ "0.75x", OPTION_VAL_0_75X_SR },
			{ "native", OPTION_VAL_NATIVE_SR },
			{ "1.5x", OPTION_VAL_1_5X_SR },
			{ "2x", OPTION_VAL_2X_SR },
			{ "3x", OPTION_VAL_3X_SR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_SR },
			{ "50", OPTION_VAL_50_SR },
			{ "75", OPTION_VAL_75_SR },
			{ "100", OPTION_VAL_100_SR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_SR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_SR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_SR },
			{ "Tab", OPTION_VAL_TAB_SR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_SR },
			{ "swapped", OPTION_VAL_SWAPPED_SR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_SR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_SR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_SR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_SR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_SR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_SR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_SR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_SR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_SR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_SR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_SR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_SR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_SR,
		NULL,
		CEMU_GPU_API_INFO_0_SR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SR },
			{ "Vulkan", OPTION_VAL_VULKAN_SR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SR,
		NULL,
		CEMU_ACCOUNT_INFO_0_SR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_SR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_SR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_SR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_SR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_SR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_SR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_SR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_SR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_SR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_SR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_SR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_SR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_SR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_SR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_SR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV "Upplösning, skalning och bildrutetakt."
#define CATEGORY_SHADERS_LABEL_SV NULL
#define CATEGORY_SHADERS_INFO_0_SV "Översättning, cachelagring och kompilering av shader."
#define CATEGORY_SCREEN_LABEL_SV "Skärm"
#define CATEGORY_SCREEN_INFO_0_SV "Vilken Wii U-skärm som visas och hur."
#define CATEGORY_SYSTEM_LABEL_SV NULL
#define CATEGORY_SYSTEM_INFO_0_SV "Processor, språk och schemaläggning."
#define CATEGORY_ADDONS_LABEL_SV "Tillägg"
#define CATEGORY_ADDONS_INFO_0_SV "Portaler för Skylanders, Infinity och Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_SV "Konton"
#define CATEGORY_ACCOUNTS_INFO_0_SV NULL
#define CATEGORY_INSTALL_LABEL_SV "Innehåll"
#define CATEGORY_INSTALL_INFO_0_SV "Hantera spel, titeluppdateringar och DLC i saves/Cemu/mlc01, den emulerade konsolens lagringsutrymme."
#define CATEGORY_CONVERT_LABEL_SV "Konvertera till WUA"
#define CATEGORY_CONVERT_INFO_0_SV "Skriv den inlästa titeln som ett .wua-arkiv."
#define CATEGORY_GRAPHIC_PACKS_LABEL_SV "Grafikpaket"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SV "Det inlästa spelets grafikpaket och deras förinställningar. Ändringar tillämpas nästa gång spelet läses in."
#define CATEGORY_CHEATS_LABEL_SV "Fusk"
#define CATEGORY_CHEATS_INFO_0_SV "De inlästa spelets fusksamlingar från mappen Cheats i grafikpaketen. Ändringarna tillämpas nästa gång spelet läses in."
#define CATEGORY_LOGGING_LABEL_SV "Loggning"
#define CATEGORY_LOGGING_INFO_0_SV "Extra loggutdata för att felsöka problem."
#define CEMU_CPU_MODE_LABEL_SV "CPU-läge"
#define CEMU_CPU_MODE_INFO_0_SV "Hur Wii U:ns PowerPC-kärnor emuleras. Auto använder rekompilatorn för flera kärnor på en CPU med fyra eller fler fysiska kärnor och den för en kärna annars. Tolkarna är mycket långsammare och är avsedda för felsökning. (Omstart krävs)"
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SV "Enkelkärnig tolk"
#define OPTION_VAL_SINGLECORE_RECOMPILER_SV "Enkelkärnig omkompilerare"
#define OPTION_VAL_MULTICORE_RECOMPILER_SV "Flerkärnig omkompilerare"
#define OPTION_VAL_MULTICORE_INTERPRETER_SV "Flerkärnig tolk"
#define CEMU_CONSOLE_LANGUAGE_LABEL_SV "Konsolspråk"
#define OPTION_VAL_ENGLISH_SV "Engelska"
#define OPTION_VAL_JAPANESE_SV "Japanska"
#define OPTION_VAL_FRENCH_SV "Franska"
#define OPTION_VAL_GERMAN_SV "Tyska"
#define OPTION_VAL_ITALIAN_SV "Italienska"
#define OPTION_VAL_SPANISH_SV "Spanska"
#define OPTION_VAL_CHINESE_SV "Kinesiska"
#define OPTION_VAL_KOREAN_SV "Koreanska"
#define OPTION_VAL_DUTCH_SV "Nederländska"
#define OPTION_VAL_PORTUGUESE_SV "Portugisiska"
#define OPTION_VAL_RUSSIAN_SV "Ryska"
#define OPTION_VAL_TAIWANESE_SV "Taiwanesiska"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SV "Asynkron shaderkompilering"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SV "GX2DrawDone-synkronisering"
#define CEMU_PRECOMPILED_SHADERS_LABEL_SV "Förkompilerade shaders"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SV "Noggrann shadermultiplikation"
#define CEMU_SHOW_GAME_FPS_LABEL_SV "Visa spelets bildfrekvens"
#define CEMU_SHOW_GAME_FPS_INFO_0_SV "Visa den bildfrekvens som spelet renderar med. RetroArchs egen FPS-räknare räknar hur ofta kärnan körs och ligger kvar på 60 när spelet tappar bildrutor, eftersom varje körning innehåller ljud för en bildruta."
#define CEMU_UPSCALE_FILTER_LABEL_SV "Uppskalningsfilter"
#define OPTION_VAL_LINEAR_SV "Linjär"
#define OPTION_VAL_BICUBIC_SV "Bikubisk"
#define OPTION_VAL_BICUBIC_HERMITE_SV "Bikubisk Hermite"
#define OPTION_VAL_NEAREST_SV "Närmsta"
#define CEMU_DOWNSCALE_FILTER_LABEL_SV "Nedskalningsfilter"
#define CEMU_INTERNAL_RESOLUTION_LABEL_SV "Intern upplösning"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SV NULL
#define OPTION_VAL_0_25X_SV NULL
#define OPTION_VAL_0_5X_SV NULL
#define OPTION_VAL_0_75X_SV NULL
#define OPTION_VAL_NATIVE_SV "Inbyggd"
#define OPTION_VAL_1_5X_SV NULL
#define OPTION_VAL_2X_SV NULL
#define OPTION_VAL_3X_SV NULL
#define CEMU_THREAD_QUANTUM_LABEL_SV "Trådkvantum"
#define CEMU_RUMBLE_STRENGTH_LABEL_SV "Vibrationsstyrka"
#define CEMU_RUMBLE_STRENGTH_INFO_0_SV "Hur kraftigt handkontrollen vibrerar när spelet begär det: GamePadens motor och Wii-fjärrkontrollens eller Pro Controller-handkontrollens motor. Av skickar ingen vibration alls till front-endet."
#define OPTION_VAL_25_SV NULL
#define OPTION_VAL_50_SV NULL
#define OPTION_VAL_75_SV NULL
#define OPTION_VAL_100_SV NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SV NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SV "Emulera Infinity-basen"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SV NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SV "Antal skärmlayouter"
#define CEMU_SCREEN_LAYOUT1_LABEL_SV NULL
#define OPTION_VAL_DEFAULT_SCREEN_SV "Standardskärm"
#define OPTION_VAL_GAMEPAD_SCREEN_SV "GamePad-skärm"
#define OPTION_VAL_SIDE_BY_SIDE_SV "Sida vid sida"
#define OPTION_VAL_TOP_BOTTOM_SV "Överst och nederst"
#define OPTION_VAL_PICTURE_IN_PICTURE_SV "Bild i bild"
#define CEMU_SCREEN_LAYOUT2_LABEL_SV NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_SV NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_SV NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_SV NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SV "Nästa skärmlayout"
#define OPTION_VAL_L_R_L2_R2_L3_R3_SV NULL
#define OPTION_VAL_SELECT_L3_SV NULL
#define OPTION_VAL_SELECT_R3_SV NULL
#define OPTION_VAL_TAB_SV "Tabb"
#define CEMU_DRC_POSITION_LABEL_SV "GamePad-position"
#define OPTION_VAL_NORMAL_SV NULL
#define OPTION_VAL_SWAPPED_SV "Växlade"
#define CEMU_LOG_TO_FILE_LABEL_SV "Skriv Cemu-loggen till log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_SV "Logga filåtkomst (felsökning)"
#define CEMU_LOG_THREAD_SYNC_LABEL_SV "Logga trådsynkronisering (felsökning)"
#define CEMU_LOG_SYSTEM_API_LABEL_SV "Logga systemets API-anrop (felsökning)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_SV "Logga texturminne (felsökning)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_SV "Rapporterar hur mycket av texturminnet som är BC och som måste dekomprimeras eftersom denna GPU inte kan sampla det."
#define CEMU_LOG_INPUT_API_LABEL_SV "Logga handkontrollens API-anrop (felsökning)"
#define CEMU_LOG_INPUT_API_INFO_0_SV "Loggar varje handkontrollsanrop som ett spel gör – vilka handkontroller det undersökte och vad det fick veta. Ordrikt; använd i några sekunder åt gången."
#define CEMU_LOG_AUDIO_LABEL_SV NULL
#define CEMU_LOG_AUDIO_INFO_0_SV NULL
#define CEMU_LOG_THREAD_TIME_LABEL_SV NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_SV NULL
#define CEMU_DUMP_SHADERS_LABEL_SV NULL
#define CEMU_DUMP_SHADERS_INFO_0_SV NULL
#define CEMU_BC1_16BIT_LABEL_SV "Minska BC1-texturminnet"
#define CEMU_BC1_16BIT_INFO_0_SV "Halverar vad BC1-texturer kostar på en GPU som inte kan sampla BC, på bekostnad av en bit grönt. Ingen effekt där BC stöds."
#define CEMU_GPU_API_LABEL_SV "Grafik-API"
#define CEMU_GPU_API_INFO_0_SV "Det grafik-API som Cemu renderar med. (Omstart krävs)"
#define OPTION_VAL_OPENGL_SV NULL
#define OPTION_VAL_VULKAN_SV NULL
#define CEMU_ACCOUNT_LABEL_SV NULL
#define CEMU_ACCOUNT_INFO_0_SV NULL
#define CEMU_CREATE_ACCOUNT_LABEL_SV NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_SV NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_SV NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_SV NULL
#define CEMU_INSTALL_GAME_LABEL_SV NULL
#define CEMU_INSTALL_GAME_INFO_0_SV NULL
#define CEMU_UNINSTALL_GAME_LABEL_SV "Avinstallera spel"
#define CEMU_UNINSTALL_GAME_INFO_0_SV NULL
#define CEMU_INSTALL_TITLES_LABEL_SV "Installera innehåll"
#define CEMU_INSTALL_TITLES_INFO_0_SV NULL
#define CEMU_UNINSTALL_TITLES_LABEL_SV "Avinstallera innehåll"
#define CEMU_UNINSTALL_TITLES_INFO_0_SV NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_SV NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SV NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_SV "Utdatakatalog"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_SV "Där .wua-filen skrivs. Kräver utrymme för den."
#define CEMU_CONVERT_TO_WUA_LABEL_SV "Starta konvertering till WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_SV "Skriver titeln till utdatakatalogen som en .wua-fil. Den fortsätter att köras medan detta sker."

struct retro_core_option_v2_category option_cats_sv[] = {
	{ "video", CATEGORY_VIDEO_LABEL_SV, CATEGORY_VIDEO_INFO_0_SV },
	{ "shaders", CATEGORY_SHADERS_LABEL_SV, CATEGORY_SHADERS_INFO_0_SV },
	{ "screen", CATEGORY_SCREEN_LABEL_SV, CATEGORY_SCREEN_INFO_0_SV },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_SV, CATEGORY_SYSTEM_INFO_0_SV },
	{ "addons", CATEGORY_ADDONS_LABEL_SV, CATEGORY_ADDONS_INFO_0_SV },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_SV, CATEGORY_ACCOUNTS_INFO_0_SV },
	{ "install", CATEGORY_INSTALL_LABEL_SV, CATEGORY_INSTALL_INFO_0_SV },
	{ "convert", CATEGORY_CONVERT_LABEL_SV, CATEGORY_CONVERT_INFO_0_SV },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SV, CATEGORY_GRAPHIC_PACKS_INFO_0_SV },
	{ "cheats", CATEGORY_CHEATS_LABEL_SV, CATEGORY_CHEATS_INFO_0_SV },
	{ "logging", CATEGORY_LOGGING_LABEL_SV, CATEGORY_LOGGING_INFO_0_SV },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_SV,
		NULL,
		CEMU_CPU_MODE_INFO_0_SV,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_SV },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_SV },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_SV },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_SV },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_SV },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_SV },
			{ "Japanese", OPTION_VAL_JAPANESE_SV },
			{ "French", OPTION_VAL_FRENCH_SV },
			{ "German", OPTION_VAL_GERMAN_SV },
			{ "Italian", OPTION_VAL_ITALIAN_SV },
			{ "Spanish", OPTION_VAL_SPANISH_SV },
			{ "Chinese", OPTION_VAL_CHINESE_SV },
			{ "Korean", OPTION_VAL_KOREAN_SV },
			{ "Dutch", OPTION_VAL_DUTCH_SV },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_SV },
			{ "Russian", OPTION_VAL_RUSSIAN_SV },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_SV },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_SV },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SV,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SV,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SV },
			{ "bicubic", OPTION_VAL_BICUBIC_SV },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SV },
			{ "nearest", OPTION_VAL_NEAREST_SV },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_SV },
			{ "bicubic", OPTION_VAL_BICUBIC_SV },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_SV },
			{ "nearest", OPTION_VAL_NEAREST_SV },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SV,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SV,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_SV },
			{ "0.5x", OPTION_VAL_0_5X_SV },
			{ "0.75x", OPTION_VAL_0_75X_SV },
			{ "native", OPTION_VAL_NATIVE_SV },
			{ "1.5x", OPTION_VAL_1_5X_SV },
			{ "2x", OPTION_VAL_2X_SV },
			{ "3x", OPTION_VAL_3X_SV },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SV,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SV,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_SV },
			{ "50", OPTION_VAL_50_SV },
			{ "75", OPTION_VAL_75_SV },
			{ "100", OPTION_VAL_100_SV },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SV },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SV },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SV },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SV },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SV },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SV },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SV },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SV },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SV },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SV },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SV },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SV },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SV },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SV },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SV },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SV },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SV },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SV },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SV },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SV },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_SV },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_SV },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_SV },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_SV },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_SV },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_SV },
			{ "Select + L3", OPTION_VAL_SELECT_L3_SV },
			{ "Select + R3", OPTION_VAL_SELECT_R3_SV },
			{ "Tab", OPTION_VAL_TAB_SV },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_SV },
			{ "swapped", OPTION_VAL_SWAPPED_SV },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_SV,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_SV,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_SV,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_SV,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_SV,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_SV,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_SV,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_SV,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_SV,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_SV,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_SV,
		NULL,
		CEMU_BC1_16BIT_INFO_0_SV,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_SV,
		NULL,
		CEMU_GPU_API_INFO_0_SV,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SV },
			{ "Vulkan", OPTION_VAL_VULKAN_SV },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SV,
		NULL,
		CEMU_ACCOUNT_INFO_0_SV,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_SV,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_SV,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_SV,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_SV,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SV,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SV,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_SV,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_SV,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_SV,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_SV,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_SV,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_SV,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_SV,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SV,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_SV,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_SV,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_SV,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_SV,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TH */

#define CATEGORY_VIDEO_LABEL_TH "วิดีโอ"
#define CATEGORY_VIDEO_INFO_0_TH NULL
#define CATEGORY_SHADERS_LABEL_TH NULL
#define CATEGORY_SHADERS_INFO_0_TH NULL
#define CATEGORY_SCREEN_LABEL_TH NULL
#define CATEGORY_SCREEN_INFO_0_TH NULL
#define CATEGORY_SYSTEM_LABEL_TH "ระบบ"
#define CATEGORY_SYSTEM_INFO_0_TH NULL
#define CATEGORY_ADDONS_LABEL_TH NULL
#define CATEGORY_ADDONS_INFO_0_TH NULL
#define CATEGORY_ACCOUNTS_LABEL_TH "บัญชีผู้ใช้"
#define CATEGORY_ACCOUNTS_INFO_0_TH NULL
#define CATEGORY_INSTALL_LABEL_TH "เนื้อหา"
#define CATEGORY_INSTALL_INFO_0_TH NULL
#define CATEGORY_CONVERT_LABEL_TH NULL
#define CATEGORY_CONVERT_INFO_0_TH NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TH NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TH NULL
#define CATEGORY_CHEATS_LABEL_TH "สูตรโกง"
#define CATEGORY_CHEATS_INFO_0_TH NULL
#define CATEGORY_LOGGING_LABEL_TH "การบันทึกข้อมูล"
#define CATEGORY_LOGGING_INFO_0_TH NULL
#define CEMU_CPU_MODE_LABEL_TH NULL
#define CEMU_CPU_MODE_INFO_0_TH NULL
#define OPTION_VAL_AUTO_TH "อัตโนมัติ"
#define OPTION_VAL_SINGLECORE_INTERPRETER_TH NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TH NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TH NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TH NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_TH NULL
#define OPTION_VAL_ENGLISH_TH "อังกฤษ"
#define OPTION_VAL_JAPANESE_TH "ญี่ปุ่น"
#define OPTION_VAL_FRENCH_TH "ฝรั่งเศส"
#define OPTION_VAL_GERMAN_TH "เยอรมัน"
#define OPTION_VAL_ITALIAN_TH "อิตาลี"
#define OPTION_VAL_SPANISH_TH "สเปน"
#define OPTION_VAL_CHINESE_TH NULL
#define OPTION_VAL_KOREAN_TH NULL
#define OPTION_VAL_DUTCH_TH NULL
#define OPTION_VAL_PORTUGUESE_TH NULL
#define OPTION_VAL_RUSSIAN_TH NULL
#define OPTION_VAL_TAIWANESE_TH NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TH NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TH NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TH NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TH NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TH NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TH NULL
#define CEMU_UPSCALE_FILTER_LABEL_TH NULL
#define OPTION_VAL_LINEAR_TH "เส้นตรง"
#define OPTION_VAL_BICUBIC_TH "ไบคิวบิก"
#define OPTION_VAL_BICUBIC_HERMITE_TH NULL
#define OPTION_VAL_NEAREST_TH "ใกล้ที่สุด"
#define CEMU_DOWNSCALE_FILTER_LABEL_TH NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_TH "ความละเอียดภายใน"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TH NULL
#define OPTION_VAL_0_25X_TH NULL
#define OPTION_VAL_0_5X_TH NULL
#define OPTION_VAL_0_75X_TH NULL
#define OPTION_VAL_NATIVE_TH "ดั้งเดิม"
#define OPTION_VAL_1_5X_TH NULL
#define OPTION_VAL_2X_TH NULL
#define OPTION_VAL_3X_TH NULL
#define CEMU_THREAD_QUANTUM_LABEL_TH NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TH NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TH NULL
#define OPTION_VAL_25_TH NULL
#define OPTION_VAL_50_TH NULL
#define OPTION_VAL_75_TH NULL
#define OPTION_VAL_100_TH NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TH NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TH NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TH NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TH NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_TH NULL
#define OPTION_VAL_DEFAULT_SCREEN_TH NULL
#define OPTION_VAL_GAMEPAD_SCREEN_TH NULL
#define OPTION_VAL_SIDE_BY_SIDE_TH NULL
#define OPTION_VAL_TOP_BOTTOM_TH NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_TH NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_TH NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_TH NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_TH NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_TH NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TH NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_TH NULL
#define OPTION_VAL_SELECT_L3_TH NULL
#define OPTION_VAL_SELECT_R3_TH NULL
#define OPTION_VAL_TAB_TH NULL
#define CEMU_DRC_POSITION_LABEL_TH NULL
#define OPTION_VAL_NORMAL_TH "ปกติ"
#define OPTION_VAL_SWAPPED_TH NULL
#define CEMU_LOG_TO_FILE_LABEL_TH NULL
#define CEMU_LOG_FILESYSTEM_LABEL_TH NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_TH NULL
#define CEMU_LOG_SYSTEM_API_LABEL_TH NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_TH NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_TH NULL
#define CEMU_LOG_INPUT_API_LABEL_TH NULL
#define CEMU_LOG_INPUT_API_INFO_0_TH NULL
#define CEMU_LOG_AUDIO_LABEL_TH NULL
#define CEMU_LOG_AUDIO_INFO_0_TH NULL
#define CEMU_LOG_THREAD_TIME_LABEL_TH NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_TH NULL
#define CEMU_DUMP_SHADERS_LABEL_TH NULL
#define CEMU_DUMP_SHADERS_INFO_0_TH NULL
#define CEMU_BC1_16BIT_LABEL_TH NULL
#define CEMU_BC1_16BIT_INFO_0_TH NULL
#define CEMU_GPU_API_LABEL_TH NULL
#define CEMU_GPU_API_INFO_0_TH NULL
#define OPTION_VAL_OPENGL_TH NULL
#define OPTION_VAL_VULKAN_TH NULL
#define CEMU_ACCOUNT_LABEL_TH NULL
#define CEMU_ACCOUNT_INFO_0_TH NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TH NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TH NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TH NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TH NULL
#define CEMU_INSTALL_GAME_LABEL_TH NULL
#define CEMU_INSTALL_GAME_INFO_0_TH NULL
#define CEMU_UNINSTALL_GAME_LABEL_TH NULL
#define CEMU_UNINSTALL_GAME_INFO_0_TH NULL
#define CEMU_INSTALL_TITLES_LABEL_TH NULL
#define CEMU_INSTALL_TITLES_INFO_0_TH NULL
#define CEMU_UNINSTALL_TITLES_LABEL_TH NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_TH NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_TH NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TH NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_TH NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_TH NULL
#define CEMU_CONVERT_TO_WUA_LABEL_TH NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_TH NULL

struct retro_core_option_v2_category option_cats_th[] = {
	{ "video", CATEGORY_VIDEO_LABEL_TH, CATEGORY_VIDEO_INFO_0_TH },
	{ "shaders", CATEGORY_SHADERS_LABEL_TH, CATEGORY_SHADERS_INFO_0_TH },
	{ "screen", CATEGORY_SCREEN_LABEL_TH, CATEGORY_SCREEN_INFO_0_TH },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_TH, CATEGORY_SYSTEM_INFO_0_TH },
	{ "addons", CATEGORY_ADDONS_LABEL_TH, CATEGORY_ADDONS_INFO_0_TH },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_TH, CATEGORY_ACCOUNTS_INFO_0_TH },
	{ "install", CATEGORY_INSTALL_LABEL_TH, CATEGORY_INSTALL_INFO_0_TH },
	{ "convert", CATEGORY_CONVERT_LABEL_TH, CATEGORY_CONVERT_INFO_0_TH },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TH, CATEGORY_GRAPHIC_PACKS_INFO_0_TH },
	{ "cheats", CATEGORY_CHEATS_LABEL_TH, CATEGORY_CHEATS_INFO_0_TH },
	{ "logging", CATEGORY_LOGGING_LABEL_TH, CATEGORY_LOGGING_INFO_0_TH },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_th[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_TH,
		NULL,
		CEMU_CPU_MODE_INFO_0_TH,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_TH },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_TH },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_TH },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_TH },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_TH },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_TH },
			{ "Japanese", OPTION_VAL_JAPANESE_TH },
			{ "French", OPTION_VAL_FRENCH_TH },
			{ "German", OPTION_VAL_GERMAN_TH },
			{ "Italian", OPTION_VAL_ITALIAN_TH },
			{ "Spanish", OPTION_VAL_SPANISH_TH },
			{ "Chinese", OPTION_VAL_CHINESE_TH },
			{ "Korean", OPTION_VAL_KOREAN_TH },
			{ "Dutch", OPTION_VAL_DUTCH_TH },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_TH },
			{ "Russian", OPTION_VAL_RUSSIAN_TH },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_TH },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_TH },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TH,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TH,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TH },
			{ "bicubic", OPTION_VAL_BICUBIC_TH },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TH },
			{ "nearest", OPTION_VAL_NEAREST_TH },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TH },
			{ "bicubic", OPTION_VAL_BICUBIC_TH },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TH },
			{ "nearest", OPTION_VAL_NEAREST_TH },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TH,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TH,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_TH },
			{ "0.5x", OPTION_VAL_0_5X_TH },
			{ "0.75x", OPTION_VAL_0_75X_TH },
			{ "native", OPTION_VAL_NATIVE_TH },
			{ "1.5x", OPTION_VAL_1_5X_TH },
			{ "2x", OPTION_VAL_2X_TH },
			{ "3x", OPTION_VAL_3X_TH },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TH,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TH,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_TH },
			{ "50", OPTION_VAL_50_TH },
			{ "75", OPTION_VAL_75_TH },
			{ "100", OPTION_VAL_100_TH },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TH },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TH },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TH },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TH },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TH },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TH },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TH },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TH },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TH },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TH },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TH },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TH },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TH },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TH },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TH },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TH },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TH },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TH },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TH },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TH },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TH },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TH },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TH },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TH },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TH },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_TH },
			{ "Select + L3", OPTION_VAL_SELECT_L3_TH },
			{ "Select + R3", OPTION_VAL_SELECT_R3_TH },
			{ "Tab", OPTION_VAL_TAB_TH },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_TH },
			{ "swapped", OPTION_VAL_SWAPPED_TH },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_TH,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_TH,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_TH,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_TH,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_TH,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_TH,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_TH,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_TH,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_TH,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_TH,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_TH,
		NULL,
		CEMU_BC1_16BIT_INFO_0_TH,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_TH,
		NULL,
		CEMU_GPU_API_INFO_0_TH,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TH },
			{ "Vulkan", OPTION_VAL_VULKAN_TH },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TH,
		NULL,
		CEMU_ACCOUNT_INFO_0_TH,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_TH,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_TH,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_TH,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_TH,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TH,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TH,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_TH,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_TH,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_TH,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_TH,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_TH,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_TH,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_TH,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TH,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_TH,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_TH,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_TH,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_TH,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_th = {
   option_cats_th,
   option_defs_th
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR NULL
#define CATEGORY_SHADERS_LABEL_TR "Gölgelendirici"
#define CATEGORY_SHADERS_INFO_0_TR NULL
#define CATEGORY_SCREEN_LABEL_TR NULL
#define CATEGORY_SCREEN_INFO_0_TR NULL
#define CATEGORY_SYSTEM_LABEL_TR "Sistem"
#define CATEGORY_SYSTEM_INFO_0_TR NULL
#define CATEGORY_ADDONS_LABEL_TR NULL
#define CATEGORY_ADDONS_INFO_0_TR NULL
#define CATEGORY_ACCOUNTS_LABEL_TR "Hesaplar"
#define CATEGORY_ACCOUNTS_INFO_0_TR NULL
#define CATEGORY_INSTALL_LABEL_TR "İçerik"
#define CATEGORY_INSTALL_INFO_0_TR NULL
#define CATEGORY_CONVERT_LABEL_TR NULL
#define CATEGORY_CONVERT_INFO_0_TR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TR NULL
#define CATEGORY_CHEATS_LABEL_TR "Hileler"
#define CATEGORY_CHEATS_INFO_0_TR NULL
#define CATEGORY_LOGGING_LABEL_TR "Günlükler"
#define CATEGORY_LOGGING_INFO_0_TR NULL
#define CEMU_CPU_MODE_LABEL_TR NULL
#define CEMU_CPU_MODE_INFO_0_TR NULL
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_SINGLECORE_INTERPRETER_TR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TR NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_TR NULL
#define OPTION_VAL_ENGLISH_TR "İngilizce"
#define OPTION_VAL_JAPANESE_TR "Japonca"
#define OPTION_VAL_FRENCH_TR "Fransızca"
#define OPTION_VAL_GERMAN_TR "Almanca"
#define OPTION_VAL_ITALIAN_TR "İtalyanca"
#define OPTION_VAL_SPANISH_TR "İspanyolca"
#define OPTION_VAL_CHINESE_TR NULL
#define OPTION_VAL_KOREAN_TR NULL
#define OPTION_VAL_DUTCH_TR NULL
#define OPTION_VAL_PORTUGUESE_TR NULL
#define OPTION_VAL_RUSSIAN_TR NULL
#define OPTION_VAL_TAIWANESE_TR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TR NULL
#define CEMU_UPSCALE_FILTER_LABEL_TR NULL
#define OPTION_VAL_LINEAR_TR "Doğrusal"
#define OPTION_VAL_BICUBIC_TR "Bikübik"
#define OPTION_VAL_BICUBIC_HERMITE_TR NULL
#define OPTION_VAL_NEAREST_TR "En yakın"
#define CEMU_DOWNSCALE_FILTER_LABEL_TR NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_TR "Dahili Çözünürlük"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TR NULL
#define OPTION_VAL_0_25X_TR NULL
#define OPTION_VAL_0_5X_TR NULL
#define OPTION_VAL_0_75X_TR NULL
#define OPTION_VAL_NATIVE_TR "Özgün"
#define OPTION_VAL_1_5X_TR NULL
#define OPTION_VAL_2X_TR NULL
#define OPTION_VAL_3X_TR NULL
#define CEMU_THREAD_QUANTUM_LABEL_TR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TR NULL
#define OPTION_VAL_25_TR NULL
#define OPTION_VAL_50_TR "%50"
#define OPTION_VAL_75_TR "%75"
#define OPTION_VAL_100_TR "%100"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TR NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TR NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_TR NULL
#define OPTION_VAL_DEFAULT_SCREEN_TR NULL
#define OPTION_VAL_GAMEPAD_SCREEN_TR NULL
#define OPTION_VAL_SIDE_BY_SIDE_TR NULL
#define OPTION_VAL_TOP_BOTTOM_TR NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_TR NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_TR NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_TR NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_TR NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_TR NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TR NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_TR NULL
#define OPTION_VAL_SELECT_L3_TR NULL
#define OPTION_VAL_SELECT_R3_TR NULL
#define OPTION_VAL_TAB_TR NULL
#define CEMU_DRC_POSITION_LABEL_TR NULL
#define OPTION_VAL_NORMAL_TR NULL
#define OPTION_VAL_SWAPPED_TR NULL
#define CEMU_LOG_TO_FILE_LABEL_TR NULL
#define CEMU_LOG_FILESYSTEM_LABEL_TR NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_TR NULL
#define CEMU_LOG_SYSTEM_API_LABEL_TR NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_TR NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_TR NULL
#define CEMU_LOG_INPUT_API_LABEL_TR NULL
#define CEMU_LOG_INPUT_API_INFO_0_TR NULL
#define CEMU_LOG_AUDIO_LABEL_TR NULL
#define CEMU_LOG_AUDIO_INFO_0_TR NULL
#define CEMU_LOG_THREAD_TIME_LABEL_TR NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_TR NULL
#define CEMU_DUMP_SHADERS_LABEL_TR NULL
#define CEMU_DUMP_SHADERS_INFO_0_TR NULL
#define CEMU_BC1_16BIT_LABEL_TR NULL
#define CEMU_BC1_16BIT_INFO_0_TR NULL
#define CEMU_GPU_API_LABEL_TR NULL
#define CEMU_GPU_API_INFO_0_TR NULL
#define OPTION_VAL_OPENGL_TR NULL
#define OPTION_VAL_VULKAN_TR NULL
#define CEMU_ACCOUNT_LABEL_TR NULL
#define CEMU_ACCOUNT_INFO_0_TR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TR NULL
#define CEMU_INSTALL_GAME_LABEL_TR NULL
#define CEMU_INSTALL_GAME_INFO_0_TR NULL
#define CEMU_UNINSTALL_GAME_LABEL_TR NULL
#define CEMU_UNINSTALL_GAME_INFO_0_TR NULL
#define CEMU_INSTALL_TITLES_LABEL_TR NULL
#define CEMU_INSTALL_TITLES_INFO_0_TR NULL
#define CEMU_UNINSTALL_TITLES_LABEL_TR NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_TR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_TR NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TR NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_TR NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_TR NULL
#define CEMU_CONVERT_TO_WUA_LABEL_TR NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
	{ "video", CATEGORY_VIDEO_LABEL_TR, CATEGORY_VIDEO_INFO_0_TR },
	{ "shaders", CATEGORY_SHADERS_LABEL_TR, CATEGORY_SHADERS_INFO_0_TR },
	{ "screen", CATEGORY_SCREEN_LABEL_TR, CATEGORY_SCREEN_INFO_0_TR },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_TR, CATEGORY_SYSTEM_INFO_0_TR },
	{ "addons", CATEGORY_ADDONS_LABEL_TR, CATEGORY_ADDONS_INFO_0_TR },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_TR, CATEGORY_ACCOUNTS_INFO_0_TR },
	{ "install", CATEGORY_INSTALL_LABEL_TR, CATEGORY_INSTALL_INFO_0_TR },
	{ "convert", CATEGORY_CONVERT_LABEL_TR, CATEGORY_CONVERT_INFO_0_TR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TR, CATEGORY_GRAPHIC_PACKS_INFO_0_TR },
	{ "cheats", CATEGORY_CHEATS_LABEL_TR, CATEGORY_CHEATS_INFO_0_TR },
	{ "logging", CATEGORY_LOGGING_LABEL_TR, CATEGORY_LOGGING_INFO_0_TR },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_TR,
		NULL,
		CEMU_CPU_MODE_INFO_0_TR,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_TR },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_TR },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_TR },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_TR },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_TR },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_TR },
			{ "Japanese", OPTION_VAL_JAPANESE_TR },
			{ "French", OPTION_VAL_FRENCH_TR },
			{ "German", OPTION_VAL_GERMAN_TR },
			{ "Italian", OPTION_VAL_ITALIAN_TR },
			{ "Spanish", OPTION_VAL_SPANISH_TR },
			{ "Chinese", OPTION_VAL_CHINESE_TR },
			{ "Korean", OPTION_VAL_KOREAN_TR },
			{ "Dutch", OPTION_VAL_DUTCH_TR },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_TR },
			{ "Russian", OPTION_VAL_RUSSIAN_TR },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_TR },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_TR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TR },
			{ "bicubic", OPTION_VAL_BICUBIC_TR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TR },
			{ "nearest", OPTION_VAL_NEAREST_TR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TR },
			{ "bicubic", OPTION_VAL_BICUBIC_TR },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TR },
			{ "nearest", OPTION_VAL_NEAREST_TR },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TR,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_TR },
			{ "0.5x", OPTION_VAL_0_5X_TR },
			{ "0.75x", OPTION_VAL_0_75X_TR },
			{ "native", OPTION_VAL_NATIVE_TR },
			{ "1.5x", OPTION_VAL_1_5X_TR },
			{ "2x", OPTION_VAL_2X_TR },
			{ "3x", OPTION_VAL_3X_TR },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TR,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_TR },
			{ "50", OPTION_VAL_50_TR },
			{ "75", OPTION_VAL_75_TR },
			{ "100", OPTION_VAL_100_TR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TR },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TR },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TR },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TR },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TR },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TR },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TR },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TR },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TR },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_TR },
			{ "Select + L3", OPTION_VAL_SELECT_L3_TR },
			{ "Select + R3", OPTION_VAL_SELECT_R3_TR },
			{ "Tab", OPTION_VAL_TAB_TR },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_TR },
			{ "swapped", OPTION_VAL_SWAPPED_TR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_TR,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_TR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_TR,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_TR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_TR,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_TR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_TR,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_TR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_TR,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_TR,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_TR,
		NULL,
		CEMU_BC1_16BIT_INFO_0_TR,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_TR,
		NULL,
		CEMU_GPU_API_INFO_0_TR,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TR },
			{ "Vulkan", OPTION_VAL_VULKAN_TR },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TR,
		NULL,
		CEMU_ACCOUNT_INFO_0_TR,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_TR,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_TR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_TR,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_TR,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_TR,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_TR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_TR,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_TR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_TR,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_TR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_TR,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TR,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_TR,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_TR,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_TR,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_TR,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_TT */

#define CATEGORY_VIDEO_LABEL_TT "Видео"
#define CATEGORY_VIDEO_INFO_0_TT NULL
#define CATEGORY_SHADERS_LABEL_TT NULL
#define CATEGORY_SHADERS_INFO_0_TT NULL
#define CATEGORY_SCREEN_LABEL_TT NULL
#define CATEGORY_SCREEN_INFO_0_TT NULL
#define CATEGORY_SYSTEM_LABEL_TT NULL
#define CATEGORY_SYSTEM_INFO_0_TT NULL
#define CATEGORY_ADDONS_LABEL_TT NULL
#define CATEGORY_ADDONS_INFO_0_TT NULL
#define CATEGORY_ACCOUNTS_LABEL_TT NULL
#define CATEGORY_ACCOUNTS_INFO_0_TT NULL
#define CATEGORY_INSTALL_LABEL_TT NULL
#define CATEGORY_INSTALL_INFO_0_TT NULL
#define CATEGORY_CONVERT_LABEL_TT NULL
#define CATEGORY_CONVERT_INFO_0_TT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TT NULL
#define CATEGORY_CHEATS_LABEL_TT NULL
#define CATEGORY_CHEATS_INFO_0_TT NULL
#define CATEGORY_LOGGING_LABEL_TT NULL
#define CATEGORY_LOGGING_INFO_0_TT NULL
#define CEMU_CPU_MODE_LABEL_TT NULL
#define CEMU_CPU_MODE_INFO_0_TT NULL
#define OPTION_VAL_AUTO_TT NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_TT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TT NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_TT NULL
#define OPTION_VAL_ENGLISH_TT "Инглизчә"
#define OPTION_VAL_JAPANESE_TT "Япоча"
#define OPTION_VAL_FRENCH_TT "Французча"
#define OPTION_VAL_GERMAN_TT "Алманча"
#define OPTION_VAL_ITALIAN_TT "Итальянча"
#define OPTION_VAL_SPANISH_TT "Испанча"
#define OPTION_VAL_CHINESE_TT NULL
#define OPTION_VAL_KOREAN_TT NULL
#define OPTION_VAL_DUTCH_TT NULL
#define OPTION_VAL_PORTUGUESE_TT NULL
#define OPTION_VAL_RUSSIAN_TT NULL
#define OPTION_VAL_TAIWANESE_TT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TT NULL
#define CEMU_UPSCALE_FILTER_LABEL_TT NULL
#define OPTION_VAL_LINEAR_TT NULL
#define OPTION_VAL_BICUBIC_TT NULL
#define OPTION_VAL_BICUBIC_HERMITE_TT NULL
#define OPTION_VAL_NEAREST_TT NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_TT NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_TT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TT NULL
#define OPTION_VAL_0_25X_TT NULL
#define OPTION_VAL_0_5X_TT NULL
#define OPTION_VAL_0_75X_TT NULL
#define OPTION_VAL_NATIVE_TT NULL
#define OPTION_VAL_1_5X_TT NULL
#define OPTION_VAL_2X_TT NULL
#define OPTION_VAL_3X_TT NULL
#define CEMU_THREAD_QUANTUM_LABEL_TT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TT NULL
#define OPTION_VAL_25_TT NULL
#define OPTION_VAL_50_TT NULL
#define OPTION_VAL_75_TT NULL
#define OPTION_VAL_100_TT NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TT NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TT NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_TT NULL
#define OPTION_VAL_DEFAULT_SCREEN_TT NULL
#define OPTION_VAL_GAMEPAD_SCREEN_TT NULL
#define OPTION_VAL_SIDE_BY_SIDE_TT NULL
#define OPTION_VAL_TOP_BOTTOM_TT NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_TT NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_TT NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_TT NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_TT NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_TT NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TT NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_TT NULL
#define OPTION_VAL_SELECT_L3_TT NULL
#define OPTION_VAL_SELECT_R3_TT NULL
#define OPTION_VAL_TAB_TT NULL
#define CEMU_DRC_POSITION_LABEL_TT NULL
#define OPTION_VAL_NORMAL_TT NULL
#define OPTION_VAL_SWAPPED_TT NULL
#define CEMU_LOG_TO_FILE_LABEL_TT NULL
#define CEMU_LOG_FILESYSTEM_LABEL_TT NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_TT NULL
#define CEMU_LOG_SYSTEM_API_LABEL_TT NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_TT NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_TT NULL
#define CEMU_LOG_INPUT_API_LABEL_TT NULL
#define CEMU_LOG_INPUT_API_INFO_0_TT NULL
#define CEMU_LOG_AUDIO_LABEL_TT NULL
#define CEMU_LOG_AUDIO_INFO_0_TT NULL
#define CEMU_LOG_THREAD_TIME_LABEL_TT NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_TT NULL
#define CEMU_DUMP_SHADERS_LABEL_TT NULL
#define CEMU_DUMP_SHADERS_INFO_0_TT NULL
#define CEMU_BC1_16BIT_LABEL_TT NULL
#define CEMU_BC1_16BIT_INFO_0_TT NULL
#define CEMU_GPU_API_LABEL_TT NULL
#define CEMU_GPU_API_INFO_0_TT NULL
#define OPTION_VAL_OPENGL_TT NULL
#define OPTION_VAL_VULKAN_TT NULL
#define CEMU_ACCOUNT_LABEL_TT NULL
#define CEMU_ACCOUNT_INFO_0_TT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TT NULL
#define CEMU_INSTALL_GAME_LABEL_TT NULL
#define CEMU_INSTALL_GAME_INFO_0_TT NULL
#define CEMU_UNINSTALL_GAME_LABEL_TT NULL
#define CEMU_UNINSTALL_GAME_INFO_0_TT NULL
#define CEMU_INSTALL_TITLES_LABEL_TT NULL
#define CEMU_INSTALL_TITLES_INFO_0_TT NULL
#define CEMU_UNINSTALL_TITLES_LABEL_TT NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_TT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_TT NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TT NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_TT NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_TT NULL
#define CEMU_CONVERT_TO_WUA_LABEL_TT NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_TT NULL

struct retro_core_option_v2_category option_cats_tt[] = {
	{ "video", CATEGORY_VIDEO_LABEL_TT, CATEGORY_VIDEO_INFO_0_TT },
	{ "shaders", CATEGORY_SHADERS_LABEL_TT, CATEGORY_SHADERS_INFO_0_TT },
	{ "screen", CATEGORY_SCREEN_LABEL_TT, CATEGORY_SCREEN_INFO_0_TT },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_TT, CATEGORY_SYSTEM_INFO_0_TT },
	{ "addons", CATEGORY_ADDONS_LABEL_TT, CATEGORY_ADDONS_INFO_0_TT },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_TT, CATEGORY_ACCOUNTS_INFO_0_TT },
	{ "install", CATEGORY_INSTALL_LABEL_TT, CATEGORY_INSTALL_INFO_0_TT },
	{ "convert", CATEGORY_CONVERT_LABEL_TT, CATEGORY_CONVERT_INFO_0_TT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TT, CATEGORY_GRAPHIC_PACKS_INFO_0_TT },
	{ "cheats", CATEGORY_CHEATS_LABEL_TT, CATEGORY_CHEATS_INFO_0_TT },
	{ "logging", CATEGORY_LOGGING_LABEL_TT, CATEGORY_LOGGING_INFO_0_TT },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tt[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_TT,
		NULL,
		CEMU_CPU_MODE_INFO_0_TT,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_TT },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_TT },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_TT },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_TT },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_TT },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_TT },
			{ "Japanese", OPTION_VAL_JAPANESE_TT },
			{ "French", OPTION_VAL_FRENCH_TT },
			{ "German", OPTION_VAL_GERMAN_TT },
			{ "Italian", OPTION_VAL_ITALIAN_TT },
			{ "Spanish", OPTION_VAL_SPANISH_TT },
			{ "Chinese", OPTION_VAL_CHINESE_TT },
			{ "Korean", OPTION_VAL_KOREAN_TT },
			{ "Dutch", OPTION_VAL_DUTCH_TT },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_TT },
			{ "Russian", OPTION_VAL_RUSSIAN_TT },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_TT },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_TT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TT },
			{ "bicubic", OPTION_VAL_BICUBIC_TT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TT },
			{ "nearest", OPTION_VAL_NEAREST_TT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_TT },
			{ "bicubic", OPTION_VAL_BICUBIC_TT },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_TT },
			{ "nearest", OPTION_VAL_NEAREST_TT },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TT,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_TT },
			{ "0.5x", OPTION_VAL_0_5X_TT },
			{ "0.75x", OPTION_VAL_0_75X_TT },
			{ "native", OPTION_VAL_NATIVE_TT },
			{ "1.5x", OPTION_VAL_1_5X_TT },
			{ "2x", OPTION_VAL_2X_TT },
			{ "3x", OPTION_VAL_3X_TT },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TT,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_TT },
			{ "50", OPTION_VAL_50_TT },
			{ "75", OPTION_VAL_75_TT },
			{ "100", OPTION_VAL_100_TT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TT },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TT },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TT },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TT },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_TT },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_TT },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_TT },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_TT },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_TT },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_TT },
			{ "Select + L3", OPTION_VAL_SELECT_L3_TT },
			{ "Select + R3", OPTION_VAL_SELECT_R3_TT },
			{ "Tab", OPTION_VAL_TAB_TT },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_TT },
			{ "swapped", OPTION_VAL_SWAPPED_TT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_TT,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_TT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_TT,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_TT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_TT,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_TT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_TT,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_TT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_TT,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_TT,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_TT,
		NULL,
		CEMU_BC1_16BIT_INFO_0_TT,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_TT,
		NULL,
		CEMU_GPU_API_INFO_0_TT,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TT },
			{ "Vulkan", OPTION_VAL_VULKAN_TT },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TT,
		NULL,
		CEMU_ACCOUNT_INFO_0_TT,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_TT,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_TT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_TT,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_TT,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_TT,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_TT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_TT,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_TT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_TT,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_TT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_TT,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_TT,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_TT,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_TT,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_TT,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_TT,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tt = {
   option_cats_tt,
   option_defs_tt
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK "Відео"
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_SHADERS_LABEL_UK "Шейдери"
#define CATEGORY_SHADERS_INFO_0_UK NULL
#define CATEGORY_SCREEN_LABEL_UK NULL
#define CATEGORY_SCREEN_INFO_0_UK NULL
#define CATEGORY_SYSTEM_LABEL_UK "Система"
#define CATEGORY_SYSTEM_INFO_0_UK NULL
#define CATEGORY_ADDONS_LABEL_UK NULL
#define CATEGORY_ADDONS_INFO_0_UK NULL
#define CATEGORY_ACCOUNTS_LABEL_UK "Облікові записи"
#define CATEGORY_ACCOUNTS_INFO_0_UK NULL
#define CATEGORY_INSTALL_LABEL_UK "Вміст"
#define CATEGORY_INSTALL_INFO_0_UK NULL
#define CATEGORY_CONVERT_LABEL_UK NULL
#define CATEGORY_CONVERT_INFO_0_UK NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_UK NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_UK NULL
#define CATEGORY_CHEATS_LABEL_UK "Чіти"
#define CATEGORY_CHEATS_INFO_0_UK NULL
#define CATEGORY_LOGGING_LABEL_UK "Журналювання"
#define CATEGORY_LOGGING_INFO_0_UK NULL
#define CEMU_CPU_MODE_LABEL_UK NULL
#define CEMU_CPU_MODE_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Автоматично"
#define OPTION_VAL_SINGLECORE_INTERPRETER_UK NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_UK NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_UK NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_UK NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_UK NULL
#define OPTION_VAL_ENGLISH_UK "Англійська"
#define OPTION_VAL_JAPANESE_UK "Японська"
#define OPTION_VAL_FRENCH_UK "Французька"
#define OPTION_VAL_GERMAN_UK "Німецька"
#define OPTION_VAL_ITALIAN_UK "Італійська"
#define OPTION_VAL_SPANISH_UK "Іспанська"
#define OPTION_VAL_CHINESE_UK NULL
#define OPTION_VAL_KOREAN_UK NULL
#define OPTION_VAL_DUTCH_UK NULL
#define OPTION_VAL_PORTUGUESE_UK NULL
#define OPTION_VAL_RUSSIAN_UK NULL
#define OPTION_VAL_TAIWANESE_UK NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_UK NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_UK NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_UK NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_UK NULL
#define CEMU_SHOW_GAME_FPS_LABEL_UK NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_UK NULL
#define CEMU_UPSCALE_FILTER_LABEL_UK NULL
#define OPTION_VAL_LINEAR_UK "Лінійна"
#define OPTION_VAL_BICUBIC_UK "Бікубічна"
#define OPTION_VAL_BICUBIC_HERMITE_UK NULL
#define OPTION_VAL_NEAREST_UK "Найближчі"
#define CEMU_DOWNSCALE_FILTER_LABEL_UK NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_UK "Роздільна здатність"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_UK NULL
#define OPTION_VAL_0_25X_UK NULL
#define OPTION_VAL_0_5X_UK NULL
#define OPTION_VAL_0_75X_UK NULL
#define OPTION_VAL_NATIVE_UK "Рідний"
#define OPTION_VAL_1_5X_UK NULL
#define OPTION_VAL_2X_UK NULL
#define OPTION_VAL_3X_UK NULL
#define CEMU_THREAD_QUANTUM_LABEL_UK NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_UK NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_UK NULL
#define OPTION_VAL_25_UK NULL
#define OPTION_VAL_50_UK NULL
#define OPTION_VAL_75_UK NULL
#define OPTION_VAL_100_UK NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_UK NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_UK NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_UK NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_UK NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_UK NULL
#define OPTION_VAL_DEFAULT_SCREEN_UK NULL
#define OPTION_VAL_GAMEPAD_SCREEN_UK NULL
#define OPTION_VAL_SIDE_BY_SIDE_UK NULL
#define OPTION_VAL_TOP_BOTTOM_UK NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_UK NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_UK NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_UK NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_UK NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_UK NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_UK NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_UK NULL
#define OPTION_VAL_SELECT_L3_UK NULL
#define OPTION_VAL_SELECT_R3_UK NULL
#define OPTION_VAL_TAB_UK NULL
#define CEMU_DRC_POSITION_LABEL_UK NULL
#define OPTION_VAL_NORMAL_UK "Нормально"
#define OPTION_VAL_SWAPPED_UK NULL
#define CEMU_LOG_TO_FILE_LABEL_UK NULL
#define CEMU_LOG_FILESYSTEM_LABEL_UK NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_UK NULL
#define CEMU_LOG_SYSTEM_API_LABEL_UK NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_UK NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_UK NULL
#define CEMU_LOG_INPUT_API_LABEL_UK NULL
#define CEMU_LOG_INPUT_API_INFO_0_UK NULL
#define CEMU_LOG_AUDIO_LABEL_UK NULL
#define CEMU_LOG_AUDIO_INFO_0_UK NULL
#define CEMU_LOG_THREAD_TIME_LABEL_UK NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_UK NULL
#define CEMU_DUMP_SHADERS_LABEL_UK NULL
#define CEMU_DUMP_SHADERS_INFO_0_UK NULL
#define CEMU_BC1_16BIT_LABEL_UK NULL
#define CEMU_BC1_16BIT_INFO_0_UK NULL
#define CEMU_GPU_API_LABEL_UK NULL
#define CEMU_GPU_API_INFO_0_UK NULL
#define OPTION_VAL_OPENGL_UK NULL
#define OPTION_VAL_VULKAN_UK NULL
#define CEMU_ACCOUNT_LABEL_UK NULL
#define CEMU_ACCOUNT_INFO_0_UK NULL
#define CEMU_CREATE_ACCOUNT_LABEL_UK NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_UK NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_UK NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_UK NULL
#define CEMU_INSTALL_GAME_LABEL_UK NULL
#define CEMU_INSTALL_GAME_INFO_0_UK NULL
#define CEMU_UNINSTALL_GAME_LABEL_UK NULL
#define CEMU_UNINSTALL_GAME_INFO_0_UK NULL
#define CEMU_INSTALL_TITLES_LABEL_UK NULL
#define CEMU_INSTALL_TITLES_INFO_0_UK NULL
#define CEMU_UNINSTALL_TITLES_LABEL_UK NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_UK NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_UK NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_UK NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_UK NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_UK NULL
#define CEMU_CONVERT_TO_WUA_LABEL_UK NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
	{ "video", CATEGORY_VIDEO_LABEL_UK, CATEGORY_VIDEO_INFO_0_UK },
	{ "shaders", CATEGORY_SHADERS_LABEL_UK, CATEGORY_SHADERS_INFO_0_UK },
	{ "screen", CATEGORY_SCREEN_LABEL_UK, CATEGORY_SCREEN_INFO_0_UK },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_UK, CATEGORY_SYSTEM_INFO_0_UK },
	{ "addons", CATEGORY_ADDONS_LABEL_UK, CATEGORY_ADDONS_INFO_0_UK },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_UK, CATEGORY_ACCOUNTS_INFO_0_UK },
	{ "install", CATEGORY_INSTALL_LABEL_UK, CATEGORY_INSTALL_INFO_0_UK },
	{ "convert", CATEGORY_CONVERT_LABEL_UK, CATEGORY_CONVERT_INFO_0_UK },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_UK, CATEGORY_GRAPHIC_PACKS_INFO_0_UK },
	{ "cheats", CATEGORY_CHEATS_LABEL_UK, CATEGORY_CHEATS_INFO_0_UK },
	{ "logging", CATEGORY_LOGGING_LABEL_UK, CATEGORY_LOGGING_INFO_0_UK },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_UK,
		NULL,
		CEMU_CPU_MODE_INFO_0_UK,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_UK },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_UK },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_UK },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_UK },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_UK },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_UK },
			{ "Japanese", OPTION_VAL_JAPANESE_UK },
			{ "French", OPTION_VAL_FRENCH_UK },
			{ "German", OPTION_VAL_GERMAN_UK },
			{ "Italian", OPTION_VAL_ITALIAN_UK },
			{ "Spanish", OPTION_VAL_SPANISH_UK },
			{ "Chinese", OPTION_VAL_CHINESE_UK },
			{ "Korean", OPTION_VAL_KOREAN_UK },
			{ "Dutch", OPTION_VAL_DUTCH_UK },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_UK },
			{ "Russian", OPTION_VAL_RUSSIAN_UK },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_UK },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_UK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_UK,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_UK,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_UK },
			{ "bicubic", OPTION_VAL_BICUBIC_UK },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_UK },
			{ "nearest", OPTION_VAL_NEAREST_UK },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_UK },
			{ "bicubic", OPTION_VAL_BICUBIC_UK },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_UK },
			{ "nearest", OPTION_VAL_NEAREST_UK },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_UK,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_UK,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_UK },
			{ "0.5x", OPTION_VAL_0_5X_UK },
			{ "0.75x", OPTION_VAL_0_75X_UK },
			{ "native", OPTION_VAL_NATIVE_UK },
			{ "1.5x", OPTION_VAL_1_5X_UK },
			{ "2x", OPTION_VAL_2X_UK },
			{ "3x", OPTION_VAL_3X_UK },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_UK,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_UK,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_UK },
			{ "50", OPTION_VAL_50_UK },
			{ "75", OPTION_VAL_75_UK },
			{ "100", OPTION_VAL_100_UK },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_UK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_UK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_UK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_UK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_UK },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_UK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_UK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_UK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_UK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_UK },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_UK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_UK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_UK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_UK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_UK },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_UK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_UK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_UK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_UK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_UK },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_UK },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_UK },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_UK },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_UK },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_UK },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_UK },
			{ "Select + L3", OPTION_VAL_SELECT_L3_UK },
			{ "Select + R3", OPTION_VAL_SELECT_R3_UK },
			{ "Tab", OPTION_VAL_TAB_UK },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_UK },
			{ "swapped", OPTION_VAL_SWAPPED_UK },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_UK,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_UK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_UK,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_UK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_UK,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_UK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_UK,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_UK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_UK,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_UK,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_UK,
		NULL,
		CEMU_BC1_16BIT_INFO_0_UK,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_UK,
		NULL,
		CEMU_GPU_API_INFO_0_UK,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_UK },
			{ "Vulkan", OPTION_VAL_VULKAN_UK },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_UK,
		NULL,
		CEMU_ACCOUNT_INFO_0_UK,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_UK,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_UK,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_UK,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_UK,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_UK,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_UK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_UK,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_UK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_UK,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_UK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_UK,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_UK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_UK,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_UK,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_UK,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_UK,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_UK,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_UK,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VAL */

#define CATEGORY_VIDEO_LABEL_VAL "Vídeo"
#define CATEGORY_VIDEO_INFO_0_VAL NULL
#define CATEGORY_SHADERS_LABEL_VAL NULL
#define CATEGORY_SHADERS_INFO_0_VAL NULL
#define CATEGORY_SCREEN_LABEL_VAL NULL
#define CATEGORY_SCREEN_INFO_0_VAL NULL
#define CATEGORY_SYSTEM_LABEL_VAL "Sistema"
#define CATEGORY_SYSTEM_INFO_0_VAL NULL
#define CATEGORY_ADDONS_LABEL_VAL NULL
#define CATEGORY_ADDONS_INFO_0_VAL NULL
#define CATEGORY_ACCOUNTS_LABEL_VAL NULL
#define CATEGORY_ACCOUNTS_INFO_0_VAL NULL
#define CATEGORY_INSTALL_LABEL_VAL NULL
#define CATEGORY_INSTALL_INFO_0_VAL NULL
#define CATEGORY_CONVERT_LABEL_VAL NULL
#define CATEGORY_CONVERT_INFO_0_VAL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_VAL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_VAL NULL
#define CATEGORY_CHEATS_LABEL_VAL NULL
#define CATEGORY_CHEATS_INFO_0_VAL NULL
#define CATEGORY_LOGGING_LABEL_VAL "Registres"
#define CATEGORY_LOGGING_INFO_0_VAL NULL
#define CEMU_CPU_MODE_LABEL_VAL NULL
#define CEMU_CPU_MODE_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define OPTION_VAL_SINGLECORE_INTERPRETER_VAL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_VAL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_VAL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_VAL NULL
#define CEMU_CONSOLE_LANGUAGE_LABEL_VAL NULL
#define OPTION_VAL_ENGLISH_VAL NULL
#define OPTION_VAL_JAPANESE_VAL NULL
#define OPTION_VAL_FRENCH_VAL NULL
#define OPTION_VAL_GERMAN_VAL NULL
#define OPTION_VAL_ITALIAN_VAL NULL
#define OPTION_VAL_SPANISH_VAL NULL
#define OPTION_VAL_CHINESE_VAL NULL
#define OPTION_VAL_KOREAN_VAL NULL
#define OPTION_VAL_DUTCH_VAL NULL
#define OPTION_VAL_PORTUGUESE_VAL NULL
#define OPTION_VAL_RUSSIAN_VAL NULL
#define OPTION_VAL_TAIWANESE_VAL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_VAL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_VAL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_VAL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_VAL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_VAL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_VAL NULL
#define CEMU_UPSCALE_FILTER_LABEL_VAL NULL
#define OPTION_VAL_LINEAR_VAL NULL
#define OPTION_VAL_BICUBIC_VAL "Bicúbica"
#define OPTION_VAL_BICUBIC_HERMITE_VAL NULL
#define OPTION_VAL_NEAREST_VAL NULL
#define CEMU_DOWNSCALE_FILTER_LABEL_VAL NULL
#define CEMU_INTERNAL_RESOLUTION_LABEL_VAL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_VAL NULL
#define OPTION_VAL_0_25X_VAL NULL
#define OPTION_VAL_0_5X_VAL NULL
#define OPTION_VAL_0_75X_VAL NULL
#define OPTION_VAL_NATIVE_VAL NULL
#define OPTION_VAL_1_5X_VAL NULL
#define OPTION_VAL_2X_VAL NULL
#define OPTION_VAL_3X_VAL NULL
#define CEMU_THREAD_QUANTUM_LABEL_VAL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_VAL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_VAL NULL
#define OPTION_VAL_25_VAL NULL
#define OPTION_VAL_50_VAL NULL
#define OPTION_VAL_75_VAL NULL
#define OPTION_VAL_100_VAL NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VAL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_VAL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VAL NULL
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_VAL NULL
#define CEMU_SCREEN_LAYOUT1_LABEL_VAL NULL
#define OPTION_VAL_DEFAULT_SCREEN_VAL NULL
#define OPTION_VAL_GAMEPAD_SCREEN_VAL NULL
#define OPTION_VAL_SIDE_BY_SIDE_VAL NULL
#define OPTION_VAL_TOP_BOTTOM_VAL NULL
#define OPTION_VAL_PICTURE_IN_PICTURE_VAL NULL
#define CEMU_SCREEN_LAYOUT2_LABEL_VAL NULL
#define CEMU_SCREEN_LAYOUT3_LABEL_VAL NULL
#define CEMU_SCREEN_LAYOUT4_LABEL_VAL NULL
#define CEMU_SCREEN_LAYOUT5_LABEL_VAL NULL
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_VAL NULL
#define OPTION_VAL_L_R_L2_R2_L3_R3_VAL NULL
#define OPTION_VAL_SELECT_L3_VAL NULL
#define OPTION_VAL_SELECT_R3_VAL NULL
#define OPTION_VAL_TAB_VAL NULL
#define CEMU_DRC_POSITION_LABEL_VAL NULL
#define OPTION_VAL_NORMAL_VAL NULL
#define OPTION_VAL_SWAPPED_VAL NULL
#define CEMU_LOG_TO_FILE_LABEL_VAL NULL
#define CEMU_LOG_FILESYSTEM_LABEL_VAL NULL
#define CEMU_LOG_THREAD_SYNC_LABEL_VAL NULL
#define CEMU_LOG_SYSTEM_API_LABEL_VAL NULL
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_VAL NULL
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_VAL NULL
#define CEMU_LOG_INPUT_API_LABEL_VAL NULL
#define CEMU_LOG_INPUT_API_INFO_0_VAL NULL
#define CEMU_LOG_AUDIO_LABEL_VAL NULL
#define CEMU_LOG_AUDIO_INFO_0_VAL NULL
#define CEMU_LOG_THREAD_TIME_LABEL_VAL NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_VAL NULL
#define CEMU_DUMP_SHADERS_LABEL_VAL NULL
#define CEMU_DUMP_SHADERS_INFO_0_VAL NULL
#define CEMU_BC1_16BIT_LABEL_VAL NULL
#define CEMU_BC1_16BIT_INFO_0_VAL NULL
#define CEMU_GPU_API_LABEL_VAL NULL
#define CEMU_GPU_API_INFO_0_VAL NULL
#define OPTION_VAL_OPENGL_VAL NULL
#define OPTION_VAL_VULKAN_VAL NULL
#define CEMU_ACCOUNT_LABEL_VAL NULL
#define CEMU_ACCOUNT_INFO_0_VAL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_VAL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_VAL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_VAL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_VAL NULL
#define CEMU_INSTALL_GAME_LABEL_VAL NULL
#define CEMU_INSTALL_GAME_INFO_0_VAL NULL
#define CEMU_UNINSTALL_GAME_LABEL_VAL NULL
#define CEMU_UNINSTALL_GAME_INFO_0_VAL NULL
#define CEMU_INSTALL_TITLES_LABEL_VAL NULL
#define CEMU_INSTALL_TITLES_INFO_0_VAL NULL
#define CEMU_UNINSTALL_TITLES_LABEL_VAL NULL
#define CEMU_UNINSTALL_TITLES_INFO_0_VAL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_VAL NULL
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_VAL NULL
#define CEMU_WUA_OUTPUT_DIR_LABEL_VAL NULL
#define CEMU_WUA_OUTPUT_DIR_INFO_0_VAL NULL
#define CEMU_CONVERT_TO_WUA_LABEL_VAL NULL
#define CEMU_CONVERT_TO_WUA_INFO_0_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
	{ "video", CATEGORY_VIDEO_LABEL_VAL, CATEGORY_VIDEO_INFO_0_VAL },
	{ "shaders", CATEGORY_SHADERS_LABEL_VAL, CATEGORY_SHADERS_INFO_0_VAL },
	{ "screen", CATEGORY_SCREEN_LABEL_VAL, CATEGORY_SCREEN_INFO_0_VAL },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_VAL, CATEGORY_SYSTEM_INFO_0_VAL },
	{ "addons", CATEGORY_ADDONS_LABEL_VAL, CATEGORY_ADDONS_INFO_0_VAL },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_VAL, CATEGORY_ACCOUNTS_INFO_0_VAL },
	{ "install", CATEGORY_INSTALL_LABEL_VAL, CATEGORY_INSTALL_INFO_0_VAL },
	{ "convert", CATEGORY_CONVERT_LABEL_VAL, CATEGORY_CONVERT_INFO_0_VAL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_VAL, CATEGORY_GRAPHIC_PACKS_INFO_0_VAL },
	{ "cheats", CATEGORY_CHEATS_LABEL_VAL, CATEGORY_CHEATS_INFO_0_VAL },
	{ "logging", CATEGORY_LOGGING_LABEL_VAL, CATEGORY_LOGGING_INFO_0_VAL },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_val[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_VAL,
		NULL,
		CEMU_CPU_MODE_INFO_0_VAL,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_VAL },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_VAL },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_VAL },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_VAL },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_VAL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_VAL },
			{ "Japanese", OPTION_VAL_JAPANESE_VAL },
			{ "French", OPTION_VAL_FRENCH_VAL },
			{ "German", OPTION_VAL_GERMAN_VAL },
			{ "Italian", OPTION_VAL_ITALIAN_VAL },
			{ "Spanish", OPTION_VAL_SPANISH_VAL },
			{ "Chinese", OPTION_VAL_CHINESE_VAL },
			{ "Korean", OPTION_VAL_KOREAN_VAL },
			{ "Dutch", OPTION_VAL_DUTCH_VAL },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_VAL },
			{ "Russian", OPTION_VAL_RUSSIAN_VAL },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_VAL },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_VAL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_VAL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_VAL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_VAL },
			{ "bicubic", OPTION_VAL_BICUBIC_VAL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_VAL },
			{ "nearest", OPTION_VAL_NEAREST_VAL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_VAL },
			{ "bicubic", OPTION_VAL_BICUBIC_VAL },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_VAL },
			{ "nearest", OPTION_VAL_NEAREST_VAL },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_VAL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_VAL,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_VAL },
			{ "0.5x", OPTION_VAL_0_5X_VAL },
			{ "0.75x", OPTION_VAL_0_75X_VAL },
			{ "native", OPTION_VAL_NATIVE_VAL },
			{ "1.5x", OPTION_VAL_1_5X_VAL },
			{ "2x", OPTION_VAL_2X_VAL },
			{ "3x", OPTION_VAL_3X_VAL },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_VAL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_VAL,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_VAL },
			{ "50", OPTION_VAL_50_VAL },
			{ "75", OPTION_VAL_75_VAL },
			{ "100", OPTION_VAL_100_VAL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VAL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VAL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VAL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VAL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VAL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VAL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VAL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VAL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VAL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VAL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VAL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VAL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VAL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VAL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VAL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VAL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VAL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VAL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VAL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VAL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VAL },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VAL },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VAL },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VAL },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VAL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_VAL },
			{ "Select + L3", OPTION_VAL_SELECT_L3_VAL },
			{ "Select + R3", OPTION_VAL_SELECT_R3_VAL },
			{ "Tab", OPTION_VAL_TAB_VAL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_VAL },
			{ "swapped", OPTION_VAL_SWAPPED_VAL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_VAL,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_VAL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_VAL,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_VAL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_VAL,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_VAL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_VAL,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_VAL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_VAL,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_VAL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_VAL,
		NULL,
		CEMU_BC1_16BIT_INFO_0_VAL,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_VAL,
		NULL,
		CEMU_GPU_API_INFO_0_VAL,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_VAL },
			{ "Vulkan", OPTION_VAL_VULKAN_VAL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_VAL,
		NULL,
		CEMU_ACCOUNT_INFO_0_VAL,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_VAL,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_VAL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_VAL,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_VAL,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_VAL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_VAL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_VAL,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_VAL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_VAL,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_VAL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_VAL,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_VAL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_VAL,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_VAL,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_VAL,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_VAL,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_VAL,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_VAL,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_val = {
   option_cats_val,
   option_defs_val
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN NULL
#define CATEGORY_VIDEO_INFO_0_VN "Độ phân giải, tỷ lệ phóng và điều chỉnh nhịp khung hình."
#define CATEGORY_SHADERS_LABEL_VN "Bộ đổ bóng"
#define CATEGORY_SHADERS_INFO_0_VN "Chuyển đổi, lưu bộ nhớ đệm và biên dịch bộ đổ bóng."
#define CATEGORY_SCREEN_LABEL_VN "Màn hình"
#define CATEGORY_SCREEN_INFO_0_VN "Chọn màn hình Wii U nào được hiển thị và cách hiển thị."
#define CATEGORY_SYSTEM_LABEL_VN "Hệ thống"
#define CATEGORY_SYSTEM_INFO_0_VN "CPU, ngôn ngữ và cách phân bổ thời gian xử lý."
#define CATEGORY_ADDONS_LABEL_VN "Tiện Ích bổ sung"
#define CATEGORY_ADDONS_INFO_0_VN "Cổng Skylanders, Infinity và Dimensions."
#define CATEGORY_ACCOUNTS_LABEL_VN "Tài khoản"
#define CATEGORY_ACCOUNTS_INFO_0_VN "Quản lý tài khoản trong thư mục tài khoản của Wii U (saves/Cemu/mlc01/usr/save/system/act)."
#define CATEGORY_INSTALL_LABEL_VN "Nội dung"
#define CATEGORY_INSTALL_INFO_0_VN "Quản lý trò chơi, bản cập nhật trò chơi và nội dung tải xuống trong saves/Cemu/mlc01, bộ nhớ lưu trữ của máy chơi game được giả lập."
#define CATEGORY_CONVERT_LABEL_VN "Chuyển Sang WUA"
#define CATEGORY_CONVERT_INFO_0_VN "Ghi tựa game đang được tải thành tệp lưu trữ .wua."
#define CATEGORY_GRAPHIC_PACKS_LABEL_VN "Gói đồ họa"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_VN "Các gói đồ họa và thiết lập có sẵn của trò chơi đang được tải. Thay đổi sẽ có hiệu lực vào lần tiếp theo trò chơi được tải."
#define CATEGORY_CHEATS_LABEL_VN "Mã gian lận"
#define CATEGORY_CHEATS_INFO_0_VN "Các gói mã gian lận của trò chơi đang được tải, lấy từ thư mục Cheats của các gói đồ họa. Các thay đổi sẽ có hiệu lực vào lần tiếp theo trò chơi được tải."
#define CATEGORY_LOGGING_LABEL_VN "Ghi nhật ký"
#define CATEGORY_LOGGING_INFO_0_VN "Thông tin nhật ký bổ sung để chẩn đoán sự cố."
#define CEMU_CPU_MODE_LABEL_VN "Chế độ CPU"
#define CEMU_CPU_MODE_INFO_0_VN "Cách mô phỏng các lõi PowerPC của Wii U. Tự động sử dụng trình biên dịch lại đa lõi trên CPU có từ bốn lõi vật lý trở lên và sử dụng trình biên dịch lại đơn lõi trong các trường hợp còn lại. Các trình thông dịch chậm hơn rất nhiều và chủ yếu dùng để gỡ lỗi. (Yêu cầu khởi động lại)"
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_SINGLECORE_INTERPRETER_VN "Trình thông dịch đơn luồng"
#define OPTION_VAL_SINGLECORE_RECOMPILER_VN "Trình biên dịch lại đơn luồng"
#define OPTION_VAL_MULTICORE_RECOMPILER_VN "Trình biên dịch lại đa luồng"
#define OPTION_VAL_MULTICORE_INTERPRETER_VN "Trình thông dịch đa luồng"
#define CEMU_CONSOLE_LANGUAGE_LABEL_VN "Ngôn ngữ máy chơi"
#define OPTION_VAL_ENGLISH_VN "Tiếng Anh"
#define OPTION_VAL_JAPANESE_VN "Tiếng Nhật"
#define OPTION_VAL_FRENCH_VN "Tiếng Pháp"
#define OPTION_VAL_GERMAN_VN "Tiếng Đức"
#define OPTION_VAL_ITALIAN_VN "Tiếng Ý"
#define OPTION_VAL_SPANISH_VN "Tiếng Tây Ban Nha"
#define OPTION_VAL_CHINESE_VN "Tiếng Trung"
#define OPTION_VAL_KOREAN_VN "Tiếng Hàn"
#define OPTION_VAL_DUTCH_VN "Tiếng Hà Lan"
#define OPTION_VAL_PORTUGUESE_VN "Tiếng Bồ Đào Nha"
#define OPTION_VAL_RUSSIAN_VN "Tiếng Nga"
#define OPTION_VAL_TAIWANESE_VN "Tiếng Đài Loan"
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_VN "Biên dịch bộ đổ bóng không đồng bộ"
#define CEMU_GX2DRAWDONE_SYNC_LABEL_VN "Đồng bộ GX2DrawDone"
#define CEMU_PRECOMPILED_SHADERS_LABEL_VN "Bộ đổ bóng đã biên dịch sẵn"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_VN "Tính toán nhân bộ đổ bóng chính xác"
#define CEMU_SHOW_GAME_FPS_LABEL_VN "Hiển thị FPS của trò chơi"
#define CEMU_SHOW_GAME_FPS_INFO_0_VN "Hiển thị tốc độ khung hình mà trò chơi đang kết xuất. Bộ đếm FPS của RetroArch tính số lần lõi được chạy, và con số này vẫn ở mức 60 khi trò chơi bị giảm khung hình, vì mỗi lần chạy đều xử lý lượng âm thanh tương ứng với một khung hình."
#define CEMU_UPSCALE_FILTER_LABEL_VN "Bộ lọc phóng to"
#define OPTION_VAL_LINEAR_VN "Tuyến tính"
#define OPTION_VAL_BICUBIC_VN "Bo tròn cạnh"
#define OPTION_VAL_BICUBIC_HERMITE_VN NULL
#define OPTION_VAL_NEAREST_VN "Gần nhất"
#define CEMU_DOWNSCALE_FILTER_LABEL_VN "Bộ lọc giảm độ phân giải"
#define CEMU_INTERNAL_RESOLUTION_LABEL_VN "Độ phân giải nội bộ"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_VN NULL
#define OPTION_VAL_0_25X_VN NULL
#define OPTION_VAL_0_5X_VN NULL
#define OPTION_VAL_0_75X_VN NULL
#define OPTION_VAL_NATIVE_VN "Nguyên bản"
#define OPTION_VAL_1_5X_VN NULL
#define OPTION_VAL_2X_VN NULL
#define OPTION_VAL_3X_VN NULL
#define CEMU_THREAD_QUANTUM_LABEL_VN "Lượng xử lý mỗi luồng"
#define CEMU_RUMBLE_STRENGTH_LABEL_VN "Cường độ rung"
#define CEMU_RUMBLE_STRENGTH_INFO_0_VN "Mức rung của tay cầm khi trò chơi yêu cầu: động cơ của Tay cầm chơi game và của Điều khiển Wii hoặc Tay cầm Pro. Tắt sẽ không gửi bất kỳ lệnh rung nào đến giao diện chính."
#define OPTION_VAL_25_VN NULL
#define OPTION_VAL_50_VN NULL
#define OPTION_VAL_75_VN NULL
#define OPTION_VAL_100_VN NULL
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VN "Mô phỏng cổng triệu hồi Skylanders"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_VN "Mô phỏng đế Infinity"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VN "Mô phỏng bệ đồ chơi Dimensions"
#define CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_VN "# Số bố cục màn hình"
#define CEMU_SCREEN_LAYOUT1_LABEL_VN "Bố cục 1"
#define OPTION_VAL_DEFAULT_SCREEN_VN "Màn hình mặc định"
#define OPTION_VAL_GAMEPAD_SCREEN_VN "Màn hình GamePad"
#define OPTION_VAL_SIDE_BY_SIDE_VN "Đặt cạnh nhau"
#define OPTION_VAL_TOP_BOTTOM_VN "Trên dưới"
#define OPTION_VAL_PICTURE_IN_PICTURE_VN "Hình trong hình"
#define CEMU_SCREEN_LAYOUT2_LABEL_VN "Bố cục 2"
#define CEMU_SCREEN_LAYOUT3_LABEL_VN "Bố cục 3"
#define CEMU_SCREEN_LAYOUT4_LABEL_VN "Bố cục 4"
#define CEMU_SCREEN_LAYOUT5_LABEL_VN "Bố cục 5"
#define CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_VN "Bố cục màn hình tiếp theo"
#define OPTION_VAL_L_R_L2_R2_L3_R3_VN NULL
#define OPTION_VAL_SELECT_L3_VN NULL
#define OPTION_VAL_SELECT_R3_VN NULL
#define OPTION_VAL_TAB_VN NULL
#define CEMU_DRC_POSITION_LABEL_VN "Vị trí GamePad"
#define OPTION_VAL_NORMAL_VN "Bình thường"
#define OPTION_VAL_SWAPPED_VN "Hoán đổi"
#define CEMU_LOG_TO_FILE_LABEL_VN "Ghi nhật ký Cemu vào log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_VN "Ghi quyền truy cập tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_THREAD_SYNC_LABEL_VN "Ghi đồng bộ hóa luồng vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_SYSTEM_API_LABEL_VN "Ghi các lệnh gọi API hệ thống vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_VN "Ghi bộ nhớ kết cấu vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_VN "Báo cáo lượng bộ nhớ kết cấu thuộc loại BC đã phải giải nén vì GPU này không thể lấy mẫu loại dữ liệu đó."
#define CEMU_LOG_INPUT_API_LABEL_VN "Ghi các lệnh gọi API tay cầm vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_INPUT_API_INFO_0_VN "Ghi lại mọi lệnh gọi tay cầm mà trò chơi thực hiện - trò chơi kiểm tra những tay cầm nào và hệ thống đã phản hồi như thế nào. Tạo rất nhiều dữ liệu; chỉ nên bật trong vài giây mỗi lần."
#define CEMU_LOG_AUDIO_LABEL_VN NULL
#define CEMU_LOG_AUDIO_INFO_0_VN NULL
#define CEMU_LOG_THREAD_TIME_LABEL_VN NULL
#define CEMU_LOG_THREAD_TIME_INFO_0_VN NULL
#define CEMU_DUMP_SHADERS_LABEL_VN "Xuất bộ tạo bóng (gỡ lỗi)"
#define CEMU_DUMP_SHADERS_INFO_0_VN "Ghi mã nguồn của mọi bộ tạo bóng mà game sử dụng vào system/Cemu/dump/shaders, đặt tên theo mã băm của chúng như được hiển thị trong log.txt. Dùng để báo cáo bộ tạo bóng bị lỗi hoặc hiển thị sai trên một GPU cụ thể. Làm chậm quá trình biên dịch bộ tạo bóng và nhanh chóng làm đầy thư mục, vì vậy hãy tắt lại sau khi sử dụng."
#define CEMU_BC1_16BIT_LABEL_VN "Giảm bộ nhớ kết cấu BC1"
#define CEMU_BC1_16BIT_INFO_0_VN "Giảm một nửa dung lượng mà kết cấu BC1 chiếm dụng trên GPU không thể lấy mẫu BC, đổi lại mất một bit màu xanh lá. Không có tác dụng trên GPU hỗ trợ BC."
#define CEMU_GPU_API_LABEL_VN "Giao diện đồ họa"
#define CEMU_GPU_API_INFO_0_VN "Giao diện đồ họa mà Cemu sử dụng để kết xuất. (Yêu cầu khởi động lại)"
#define OPTION_VAL_OPENGL_VN NULL
#define OPTION_VAL_VULKAN_VN NULL
#define CEMU_ACCOUNT_LABEL_VN "Tài khoản đang hoạt động"
#define CEMU_ACCOUNT_INFO_0_VN "Tài khoản Wii U mà game chạy bằng tài khoản đó, mỗi tài khoản có dữ liệu lưu và Mii riêng. Danh sách gồm các tài khoản trong thư mục tài khoản.\n\nThay đổi sẽ có hiệu lực khi game được đóng và khởi động lại, hoặc khởi động lại game. Cho đến lúc đó, game đang chạy vẫn tiếp tục lưu dữ liệu vào tài khoản mà game được khởi chạy bằng tài khoản đó."
#define CEMU_CREATE_ACCOUNT_LABEL_VN "Tạo tài khoản"
#define CEMU_CREATE_ACCOUNT_INFO_0_VN "Tạo một tài khoản mới, có tên Người chơi 2, Người chơi 3 và tiếp tục như vậy, đồng thời đặt tài khoản đó làm Tài khoản đang hoạt động. Sau đó tùy chọn này tự chuyển về TẮT. Máy có thể chứa tối đa 12 tài khoản."
#define CEMU_REMOVE_ACCOUNT_LABEL_VN "Xóa tài khoản"
#define CEMU_REMOVE_ACCOUNT_INFO_0_VN "CẢNH BÁO: xóa một tài khoản cũng sẽ xóa dữ liệu lưu của tài khoản đó trong mọi trò chơi và không thể hoàn tác.\n\nXóa tài khoản đã chọn, giống như xóa người dùng trên máy chơi game: tài khoản bị xóa khỏi thư mục tài khoản và dữ liệu lưu của tài khoản bị xóa khỏi thư mục lưu của mọi trò chơi. Tài khoản sẽ được xóa khi bạn rời khỏi trình đơn, sau đó thiết lập này sẽ trở về TẮT.\n\nKhông thể xóa tài khoản đang hoạt động, cũng không thể xóa tài khoản đã dùng để khởi chạy trò chơi đang chạy cho đến khi trò chơi đó được đóng. Vì vậy, không thể xóa tài khoản cuối cùng."
#define CEMU_INSTALL_GAME_LABEL_VN "Cài đặt trò chơi"
#define CEMU_INSTALL_GAME_INFO_0_VN "Cài đặt mọi trò chơi trong system/Cemu/titles, bao gồm cả các thư mục con, vào thư mục trò chơi đã cài đặt của Wii U được mô phỏng (saves/Cemu/mlc01/usr/title/00050000), giống như máy chơi game cài trò chơi từ đĩa. Một trò chơi là ảnh đĩa (.wud, .wux, .iso) hoặc tệp .wua; bản cập nhật trò chơi và nội dung tải thêm chứa trong tệp .wua sẽ được cài đặt cùng. Trò chơi đã được cài đặt ở cùng phiên bản hoặc phiên bản mới hơn sẽ được giữ nguyên.\n\nKhi BẬT, quá trình cài đặt bắt đầu ngay lập tức, tiến trình được hiển thị dưới dạng thông báo, và thiết lập này sẽ tự TẮT khi tất cả trò chơi đã được cài đặt. Trò chơi đã cài đặt được khởi chạy bằng cách nạp tệp .rpx trong thư mục mã của trò chơi thuộc thư mục trò chơi đã cài đặt; không cần đến ảnh đĩa của trò chơi nữa."
#define CEMU_UNINSTALL_GAME_LABEL_VN "Gỡ cài đặt trò chơi"
#define CEMU_UNINSTALL_GAME_INFO_0_VN "Gỡ cài đặt trò chơi đang chạy khỏi thư mục trò chơi đã cài đặt (saves/Cemu/mlc01/usr/title/00050000) sau khi trò chơi được đóng hoặc khởi động lại, đồng thời gỡ bản cập nhật trò chơi và nội dung tải thêm đã cài đặt; thiết lập này vẫn BẬT cho đến lúc đó. Dữ liệu lưu của trò chơi vẫn được giữ nguyên, cũng như ảnh đĩa hoặc tệp .wua mà trò chơi được cài đặt từ đó."
#define CEMU_INSTALL_TITLES_LABEL_VN "Cài đặt nội dung"
#define CEMU_INSTALL_TITLES_INFO_0_VN "Cài đặt mọi bản cập nhật trò chơi và nội dung tải thêm trong system/Cemu/titles, bao gồm cả các thư mục con, vào bộ nhớ lưu trữ của Wii U được mô phỏng (saves/Cemu/mlc01/usr/title)., mỗi nội dung nằm trong một thư mục riêng trong system/Cemu/titles; bản tải xuống NUS (các tệp.app) cần có title.tmd và title.tik, là khóa giải mã, nằm cùng thư mục. Phiên bản đã cài đặt có cùng phiên bản hoặc mới hơn sẽ được giữ nguyên.\n\nKhi BẬT, quá trình cài đặt bắt đầu ngay lập tức, tiến trình được hiển thị dưới dạng thông báo, và thiết lập này sẽ tự TẮT khi tất cả nội dung đã được cài đặt và bạn rời khỏi trình đơn này hoặc thay đổi một tùy chọn khác. Trò chơi sẽ sử dụng nội dung đã cài đặt sau khi được khởi động lại.\n\nCó thể cài đặt nội dung từ các vị trí khác bằng Trình đơn chính > Nạp nội dung của RetroArch, bằng cách chọn tệp title.tmd tương ứng, với tệp title.tik nằm bên cạnh."
#define CEMU_UNINSTALL_TITLES_LABEL_VN "Gỡ cài đặt nội dung"
#define CEMU_UNINSTALL_TITLES_INFO_0_VN "Gỡ bản cập nhật trò chơi và nội dung tải thêm của trò chơi đang chạy khỏi bộ nhớ lưu trữ của Wii U được mô phỏng (saves/Cemu/mlc01/usr/title) sau khi trò chơi được đóng hoặc khởi động lại; thiết lập này vẫn BẬT cho đến lúc đó. Các bản sao trong system/Cemu/titles vẫn được giữ nguyên."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_VN "Xóa tệp sau khi cài đặt"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_VN "CẢNH BÁO: thao tác này sẽ xóa các tệp khỏi system/Cemu/titles và không thể hoàn tác. system/Cemu/titles là thư mục để lõi quản lý; hãy giữ bản sao duy nhất của bản trích xuất ở nơi khác.\n\nXóa những gì Cài đặt trò chơi và Cài đặt nội dung đã cài đặt từ system/Cemu/titles: thư mục bản cập nhật trò chơi hoặc nội dung tải thêm sau khi được cài đặt, và ảnh đĩa hoặc tệp .wua sau khi mọi nội dung chứa trong đó đã được cài đặt (chỉ Cài đặt nội dung sẽ giữ lại tệp .wua nếu tệp đó cũng chứa trò chơi). Các tệp đang được trò chơi đang chạy sử dụng sẽ được xóa khi trò chơi được đóng hoặc khởi động lại. Nội dung được nạp thông qua Nạp nội dung vẫn được giữ nguyên tại vị trí hiện tại."
#define CEMU_WUA_OUTPUT_DIR_LABEL_VN "Thư mục đầu ra"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_VN "Nơi tệp .wua được ghi. Cần đủ dung lượng để chứa tệp này."
#define CEMU_CONVERT_TO_WUA_LABEL_VN "Bắt đầu chuyển đổi sang WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_VN "Ghi trò chơi vào thư mục đầu ra dưới dạng tệp .wua. Quá trình này vẫn tiếp tục chạy trong khi thực hiện."

struct retro_core_option_v2_category option_cats_vn[] = {
	{ "video", CATEGORY_VIDEO_LABEL_VN, CATEGORY_VIDEO_INFO_0_VN },
	{ "shaders", CATEGORY_SHADERS_LABEL_VN, CATEGORY_SHADERS_INFO_0_VN },
	{ "screen", CATEGORY_SCREEN_LABEL_VN, CATEGORY_SCREEN_INFO_0_VN },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", CATEGORY_SYSTEM_LABEL_VN, CATEGORY_SYSTEM_INFO_0_VN },
	{ "addons", CATEGORY_ADDONS_LABEL_VN, CATEGORY_ADDONS_INFO_0_VN },
	{ "accounts", CATEGORY_ACCOUNTS_LABEL_VN, CATEGORY_ACCOUNTS_INFO_0_VN },
	{ "install", CATEGORY_INSTALL_LABEL_VN, CATEGORY_INSTALL_INFO_0_VN },
	{ "convert", CATEGORY_CONVERT_LABEL_VN, CATEGORY_CONVERT_INFO_0_VN },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_VN, CATEGORY_GRAPHIC_PACKS_INFO_0_VN },
	{ "cheats", CATEGORY_CHEATS_LABEL_VN, CATEGORY_CHEATS_INFO_0_VN },
	{ "logging", CATEGORY_LOGGING_LABEL_VN, CATEGORY_LOGGING_INFO_0_VN },
	{ NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
	{
		"cemu_cpu_mode",
		CEMU_CPU_MODE_LABEL_VN,
		NULL,
		CEMU_CPU_MODE_INFO_0_VN,
		NULL,
		"system",
		{
			{ "auto", OPTION_VAL_AUTO_VN },
			{ "singlecore_interpreter", OPTION_VAL_SINGLECORE_INTERPRETER_VN },
			{ "singlecore_recompiler", OPTION_VAL_SINGLECORE_RECOMPILER_VN },
			{ "multicore_recompiler", OPTION_VAL_MULTICORE_RECOMPILER_VN },
			{ "multicore_interpreter", OPTION_VAL_MULTICORE_INTERPRETER_VN },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		CEMU_CONSOLE_LANGUAGE_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "English", OPTION_VAL_ENGLISH_VN },
			{ "Japanese", OPTION_VAL_JAPANESE_VN },
			{ "French", OPTION_VAL_FRENCH_VN },
			{ "German", OPTION_VAL_GERMAN_VN },
			{ "Italian", OPTION_VAL_ITALIAN_VN },
			{ "Spanish", OPTION_VAL_SPANISH_VN },
			{ "Chinese", OPTION_VAL_CHINESE_VN },
			{ "Korean", OPTION_VAL_KOREAN_VN },
			{ "Dutch", OPTION_VAL_DUTCH_VN },
			{ "Portuguese", OPTION_VAL_PORTUGUESE_VN },
			{ "Russian", OPTION_VAL_RUSSIAN_VN },
			{ "Taiwanese", OPTION_VAL_TAIWANESE_VN },
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", OPTION_VAL_AUTO_VN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_VN,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_VN,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_upscale_filter",
		CEMU_UPSCALE_FILTER_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_VN },
			{ "bicubic", OPTION_VAL_BICUBIC_VN },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_VN },
			{ "nearest", OPTION_VAL_NEAREST_VN },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_downscale_filter",
		CEMU_DOWNSCALE_FILTER_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", OPTION_VAL_LINEAR_VN },
			{ "bicubic", OPTION_VAL_BICUBIC_VN },
			{ "bicubic_hermite", OPTION_VAL_BICUBIC_HERMITE_VN },
			{ "nearest", OPTION_VAL_NEAREST_VN },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_VN,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_VN,
		NULL,
		"video",
		{
			{ "0.25x", OPTION_VAL_0_25X_VN },
			{ "0.5x", OPTION_VAL_0_5X_VN },
			{ "0.75x", OPTION_VAL_0_75X_VN },
			{ "native", OPTION_VAL_NATIVE_VN },
			{ "1.5x", OPTION_VAL_1_5X_VN },
			{ "2x", OPTION_VAL_2X_VN },
			{ "3x", OPTION_VAL_3X_VN },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		CEMU_THREAD_QUANTUM_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"system",
		{
			{ "20000", NULL },
			{ "45000", NULL },
			{ "60000", NULL },
			{ "80000", NULL },
			{ "100000", NULL },
			{ NULL, NULL },
		},
		"45000"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_VN,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_VN,
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", OPTION_VAL_25_VN },
			{ "50", OPTION_VAL_50_VN },
			{ "75", OPTION_VAL_75_VN },
			{ "100", OPTION_VAL_100_VN },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_infinity_base",
		CEMU_EMULATE_INFINITY_BASE_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_emulate_dimensions_toypad",
		CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"addons",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_number_of_screen_layouts",
		CEMU_NUMBER_OF_SCREEN_LAYOUTS_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "1", NULL },
			{ "2", NULL },
			{ "3", NULL },
			{ "4", NULL },
			{ "5", NULL },
			{ NULL, NULL },
		},
		"2"
	},
	{
		"cemu_screen_layout1",
		CEMU_SCREEN_LAYOUT1_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VN },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		CEMU_SCREEN_LAYOUT2_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VN },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		CEMU_SCREEN_LAYOUT3_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VN },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		CEMU_SCREEN_LAYOUT4_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VN },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		CEMU_SCREEN_LAYOUT5_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", OPTION_VAL_DEFAULT_SCREEN_VN },
			{ "GamePad Screen", OPTION_VAL_GAMEPAD_SCREEN_VN },
			{ "Side by Side", OPTION_VAL_SIDE_BY_SIDE_VN },
			{ "Top Bottom", OPTION_VAL_TOP_BOTTOM_VN },
			{ "Picture in Picture", OPTION_VAL_PICTURE_IN_PICTURE_VN },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		CEMU_NEXT_SCREEN_LAYOUT_BUTTON_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", OPTION_VAL_L_R_L2_R2_L3_R3_VN },
			{ "Select + L3", OPTION_VAL_SELECT_L3_VN },
			{ "Select + R3", OPTION_VAL_SELECT_R3_VN },
			{ "Tab", OPTION_VAL_TAB_VN },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		CEMU_DRC_POSITION_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", OPTION_VAL_NORMAL_VN },
			{ "swapped", OPTION_VAL_SWAPPED_VN },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		CEMU_LOG_TO_FILE_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_log_filesystem",
		CEMU_LOG_FILESYSTEM_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_sync",
		CEMU_LOG_THREAD_SYNC_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_system_api",
		CEMU_LOG_SYSTEM_API_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_texture_memory",
		CEMU_LOG_TEXTURE_MEMORY_LABEL_VN,
		NULL,
		CEMU_LOG_TEXTURE_MEMORY_INFO_0_VN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_input_api",
		CEMU_LOG_INPUT_API_LABEL_VN,
		NULL,
		CEMU_LOG_INPUT_API_INFO_0_VN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_audio",
		CEMU_LOG_AUDIO_LABEL_VN,
		NULL,
		CEMU_LOG_AUDIO_INFO_0_VN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_log_thread_time",
		CEMU_LOG_THREAD_TIME_LABEL_VN,
		NULL,
		CEMU_LOG_THREAD_TIME_INFO_0_VN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_dump_shaders",
		CEMU_DUMP_SHADERS_LABEL_VN,
		NULL,
		CEMU_DUMP_SHADERS_INFO_0_VN,
		NULL,
		"logging",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_bc1_16bit",
		CEMU_BC1_16BIT_LABEL_VN,
		NULL,
		CEMU_BC1_16BIT_INFO_0_VN,
		NULL,
		"video",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
#if defined(ENABLE_VULKAN) && defined(ENABLE_OPENGL)
	{
		"cemu_gpu_api",
		CEMU_GPU_API_LABEL_VN,
		NULL,
		CEMU_GPU_API_INFO_0_VN,
		NULL,
		"video",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_VN },
			{ "Vulkan", OPTION_VAL_VULKAN_VN },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_VN,
		NULL,
		CEMU_ACCOUNT_INFO_0_VN,
		NULL,
		"accounts",
		{
			{ "80000001", NULL },
			{ NULL, NULL },
		},
		"80000001"
	},
	{
		"cemu_create_account",
		CEMU_CREATE_ACCOUNT_LABEL_VN,
		NULL,
		CEMU_CREATE_ACCOUNT_INFO_0_VN,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_remove_account",
		CEMU_REMOVE_ACCOUNT_LABEL_VN,
		NULL,
		CEMU_REMOVE_ACCOUNT_INFO_0_VN,
		NULL,
		"accounts",
		{
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_VN,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_VN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_game",
		CEMU_UNINSTALL_GAME_LABEL_VN,
		NULL,
		CEMU_UNINSTALL_GAME_INFO_0_VN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_titles",
		CEMU_INSTALL_TITLES_LABEL_VN,
		NULL,
		CEMU_INSTALL_TITLES_INFO_0_VN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_uninstall_titles",
		CEMU_UNINSTALL_TITLES_LABEL_VN,
		NULL,
		CEMU_UNINSTALL_TITLES_INFO_0_VN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_install_remove_source",
		CEMU_INSTALL_REMOVE_SOURCE_LABEL_VN,
		NULL,
		CEMU_INSTALL_REMOVE_SOURCE_INFO_0_VN,
		NULL,
		"install",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_wua_output_dir",
		CEMU_WUA_OUTPUT_DIR_LABEL_VN,
		NULL,
		CEMU_WUA_OUTPUT_DIR_INFO_0_VN,
		NULL,
		"convert",
		{
			// Filled in at run time with wherever the frontend lets the core write.
			{ NULL, NULL },
		},
		NULL
	},
	{
		"cemu_convert_to_wua",
		CEMU_CONVERT_TO_WUA_LABEL_VN,
		NULL,
		CEMU_CONVERT_TO_WUA_INFO_0_VN,
		NULL,
		"convert",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{ NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif