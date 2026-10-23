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

#define CATEGORY_SYSTEM_LABEL_AR "نظام"
#define CATEGORY_SYSTEM_INFO_0_AR NULL
#define CATEGORY_GRAPHICS_LABEL_AR NULL
#define CATEGORY_GRAPHICS_INFO_0_AR NULL
#define CATEGORY_CONTROLLER_LABEL_AR "نظام تشغيل الجوي باد"
#define CATEGORY_CONTROLLER_INFO_0_AR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_AR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_AR NULL
#define CATEGORY_CORE_LABEL_AR "النواة"
#define CATEGORY_CORE_INFO_0_AR NULL
#define CATEGORY_LOGGING_LABEL_AR "تسجيل الدخول"
#define CATEGORY_LOGGING_INFO_0_AR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_AR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_AR NULL
#define CATEGORY_CHEATS_LABEL_AR NULL
#define CATEGORY_CHEATS_INFO_0_AR NULL
#define CEMU_CPU_MODE_LABEL_AR NULL
#define CEMU_CPU_MODE_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_SINGLECORE_INTERPRETER_AR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_AR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_AR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_AR NULL
#define CEMU_THREAD_QUANTUM_LABEL_AR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_AR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_AR NULL
#define OPTION_VAL_MONO_AR NULL
#define OPTION_VAL_STEREO_AR NULL
#define OPTION_VAL_SURROUND_AR NULL
#define CEMU_ACCOUNT_LABEL_AR NULL
#define CEMU_ACCOUNT_INFO_0_AR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_AR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_AR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_AR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_AR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_AR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_AR NULL
#define CEMU_GPU_API_LABEL_AR NULL
#define CEMU_GPU_API_INFO_0_AR NULL
#define OPTION_VAL_OPENGL_AR NULL
#define OPTION_VAL_VULKAN_AR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_AR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_AR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_AR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_AR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_AR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_AR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_AR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_AR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_AR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_AR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_AR NULL
#define OPTION_VAL_10_AR NULL
#define OPTION_VAL_20_AR NULL
#define OPTION_VAL_30_AR NULL
#define OPTION_VAL_40_AR NULL
#define OPTION_VAL_50_AR NULL
#define OPTION_VAL_60_AR NULL
#define OPTION_VAL_70_AR NULL
#define OPTION_VAL_80_AR NULL
#define OPTION_VAL_90_AR NULL
#define OPTION_VAL_100_AR NULL
#define CEMU_GAMEPAD_MOTION_LABEL_AR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_AR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_AR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_AR NULL
#define OPTION_VAL_0_25X_AR NULL
#define OPTION_VAL_0_5X_AR NULL
#define OPTION_VAL_0_75X_AR NULL
#define OPTION_VAL_NATIVE_AR "الأصل"
#define OPTION_VAL_1_5X_AR NULL
#define OPTION_VAL_2X_AR NULL
#define OPTION_VAL_3X_AR NULL
#define CEMU_RENDER_AHEAD_LABEL_AR NULL
#define CEMU_RENDER_AHEAD_INFO_0_AR NULL
#define CEMU_AUDIO_THREAD_LABEL_AR NULL
#define CEMU_AUDIO_THREAD_INFO_0_AR NULL
#define CEMU_BC1_16BIT_LABEL_AR NULL
#define CEMU_BC1_16BIT_INFO_0_AR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_AR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_AR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_AR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_AR, CATEGORY_SYSTEM_INFO_0_AR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_AR, CATEGORY_GRAPHICS_INFO_0_AR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_AR, CATEGORY_CONTROLLER_INFO_0_AR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_AR, CATEGORY_TITLE_MANAGER_INFO_0_AR },
	{ "core", CATEGORY_CORE_LABEL_AR, CATEGORY_CORE_INFO_0_AR },
	{ "logging", CATEGORY_LOGGING_LABEL_AR, CATEGORY_LOGGING_INFO_0_AR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_AR, CATEGORY_GRAPHIC_PACKS_INFO_0_AR },
	{ "cheats", CATEGORY_CHEATS_LABEL_AR, CATEGORY_CHEATS_INFO_0_AR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_AR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_AR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_AR },
			{ "stereo", OPTION_VAL_STEREO_AR },
			{ "surround", OPTION_VAL_SURROUND_AR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_AR,
		NULL,
		CEMU_ACCOUNT_INFO_0_AR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_AR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_AR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_AR },
			{ "Vulkan", OPTION_VAL_VULKAN_AR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_AR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_AR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_AR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_AR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_AR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_AR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_AR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_AR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_AR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_AR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_AR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_AR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_AR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_AR },
			{ "20", OPTION_VAL_20_AR },
			{ "30", OPTION_VAL_30_AR },
			{ "40", OPTION_VAL_40_AR },
			{ "50", OPTION_VAL_50_AR },
			{ "60", OPTION_VAL_60_AR },
			{ "70", OPTION_VAL_70_AR },
			{ "80", OPTION_VAL_80_AR },
			{ "90", OPTION_VAL_90_AR },
			{ "100", OPTION_VAL_100_AR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_AR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_AR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_AR },
			{ "swapped", OPTION_VAL_SWAPPED_AR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_AR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_AR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_AR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_AR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_AR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_AR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_AR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_AR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_AR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_AR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_AST "Sistema"
#define CATEGORY_SYSTEM_INFO_0_AST NULL
#define CATEGORY_GRAPHICS_LABEL_AST NULL
#define CATEGORY_GRAPHICS_INFO_0_AST NULL
#define CATEGORY_CONTROLLER_LABEL_AST "Controlador"
#define CATEGORY_CONTROLLER_INFO_0_AST NULL
#define CATEGORY_TITLE_MANAGER_LABEL_AST NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_AST NULL
#define CATEGORY_CORE_LABEL_AST "Nucleu"
#define CATEGORY_CORE_INFO_0_AST NULL
#define CATEGORY_LOGGING_LABEL_AST "Rexistru"
#define CATEGORY_LOGGING_INFO_0_AST NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_AST NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_AST NULL
#define CATEGORY_CHEATS_LABEL_AST NULL
#define CATEGORY_CHEATS_INFO_0_AST NULL
#define CEMU_CPU_MODE_LABEL_AST NULL
#define CEMU_CPU_MODE_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_AST NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_AST NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_AST NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_AST NULL
#define CEMU_THREAD_QUANTUM_LABEL_AST NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_AST NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_AST NULL
#define OPTION_VAL_MONO_AST "Monu"
#define OPTION_VAL_STEREO_AST "Estéreu"
#define OPTION_VAL_SURROUND_AST NULL
#define CEMU_ACCOUNT_LABEL_AST NULL
#define CEMU_ACCOUNT_INFO_0_AST NULL
#define CEMU_CREATE_ACCOUNT_LABEL_AST NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_AST NULL
#define CEMU_RENAME_ACCOUNT_LABEL_AST NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_AST NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_AST NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_AST NULL
#define CEMU_GPU_API_LABEL_AST NULL
#define CEMU_GPU_API_INFO_0_AST NULL
#define OPTION_VAL_OPENGL_AST NULL
#define OPTION_VAL_VULKAN_AST NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_AST NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_AST NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_AST NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_AST NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_AST NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_AST NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_AST NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_AST NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_AST NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_AST NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_AST NULL
#define OPTION_VAL_10_AST NULL
#define OPTION_VAL_20_AST NULL
#define OPTION_VAL_30_AST NULL
#define OPTION_VAL_40_AST NULL
#define OPTION_VAL_50_AST NULL
#define OPTION_VAL_60_AST NULL
#define OPTION_VAL_70_AST NULL
#define OPTION_VAL_80_AST NULL
#define OPTION_VAL_90_AST NULL
#define OPTION_VAL_100_AST NULL
#define CEMU_GAMEPAD_MOTION_LABEL_AST NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_AST NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_AST NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_AST NULL
#define OPTION_VAL_0_25X_AST NULL
#define OPTION_VAL_0_5X_AST NULL
#define OPTION_VAL_0_75X_AST NULL
#define OPTION_VAL_NATIVE_AST NULL
#define OPTION_VAL_1_5X_AST NULL
#define OPTION_VAL_2X_AST NULL
#define OPTION_VAL_3X_AST NULL
#define CEMU_RENDER_AHEAD_LABEL_AST NULL
#define CEMU_RENDER_AHEAD_INFO_0_AST NULL
#define CEMU_AUDIO_THREAD_LABEL_AST NULL
#define CEMU_AUDIO_THREAD_INFO_0_AST NULL
#define CEMU_BC1_16BIT_LABEL_AST NULL
#define CEMU_BC1_16BIT_INFO_0_AST NULL
#define CEMU_SHOW_GAME_FPS_LABEL_AST NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_AST NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AST NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_AST NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_AST, CATEGORY_SYSTEM_INFO_0_AST },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_AST, CATEGORY_GRAPHICS_INFO_0_AST },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_AST, CATEGORY_CONTROLLER_INFO_0_AST },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_AST, CATEGORY_TITLE_MANAGER_INFO_0_AST },
	{ "core", CATEGORY_CORE_LABEL_AST, CATEGORY_CORE_INFO_0_AST },
	{ "logging", CATEGORY_LOGGING_LABEL_AST, CATEGORY_LOGGING_INFO_0_AST },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_AST, CATEGORY_GRAPHIC_PACKS_INFO_0_AST },
	{ "cheats", CATEGORY_CHEATS_LABEL_AST, CATEGORY_CHEATS_INFO_0_AST },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_AST,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_AST,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_AST },
			{ "stereo", OPTION_VAL_STEREO_AST },
			{ "surround", OPTION_VAL_SURROUND_AST },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_AST,
		NULL,
		CEMU_ACCOUNT_INFO_0_AST,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_AST,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_AST,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_AST },
			{ "Vulkan", OPTION_VAL_VULKAN_AST },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_AST,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_AST,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_AST },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_AST,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_AST,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_AST,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_AST },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_AST,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_AST,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_AST,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_AST,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_AST,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_AST,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_AST },
			{ "20", OPTION_VAL_20_AST },
			{ "30", OPTION_VAL_30_AST },
			{ "40", OPTION_VAL_40_AST },
			{ "50", OPTION_VAL_50_AST },
			{ "60", OPTION_VAL_60_AST },
			{ "70", OPTION_VAL_70_AST },
			{ "80", OPTION_VAL_80_AST },
			{ "90", OPTION_VAL_90_AST },
			{ "100", OPTION_VAL_100_AST },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_AST,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_AST,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_AST },
			{ "swapped", OPTION_VAL_SWAPPED_AST },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_AST,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_AST,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_AST,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_AST,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_AST,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_AST,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_AST,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_AST,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_AST,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_AST,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_AST,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_BE "Сістэма"
#define CATEGORY_SYSTEM_INFO_0_BE NULL
#define CATEGORY_GRAPHICS_LABEL_BE NULL
#define CATEGORY_GRAPHICS_INFO_0_BE NULL
#define CATEGORY_CONTROLLER_LABEL_BE "Кантролер"
#define CATEGORY_CONTROLLER_INFO_0_BE NULL
#define CATEGORY_TITLE_MANAGER_LABEL_BE NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_BE NULL
#define CATEGORY_CORE_LABEL_BE "Ядро"
#define CATEGORY_CORE_INFO_0_BE NULL
#define CATEGORY_LOGGING_LABEL_BE "Вядзенне журнала"
#define CATEGORY_LOGGING_INFO_0_BE NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_BE NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_BE NULL
#define CATEGORY_CHEATS_LABEL_BE NULL
#define CATEGORY_CHEATS_INFO_0_BE NULL
#define CEMU_CPU_MODE_LABEL_BE NULL
#define CEMU_CPU_MODE_INFO_0_BE NULL
#define OPTION_VAL_AUTO_BE "Аўта"
#define OPTION_VAL_SINGLECORE_INTERPRETER_BE NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_BE NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_BE NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_BE NULL
#define CEMU_THREAD_QUANTUM_LABEL_BE NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_BE NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_BE NULL
#define OPTION_VAL_MONO_BE "Мона"
#define OPTION_VAL_STEREO_BE "Стэрэа"
#define OPTION_VAL_SURROUND_BE NULL
#define CEMU_ACCOUNT_LABEL_BE NULL
#define CEMU_ACCOUNT_INFO_0_BE NULL
#define CEMU_CREATE_ACCOUNT_LABEL_BE NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_BE NULL
#define CEMU_RENAME_ACCOUNT_LABEL_BE NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_BE NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_BE NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_BE NULL
#define CEMU_GPU_API_LABEL_BE NULL
#define CEMU_GPU_API_INFO_0_BE NULL
#define OPTION_VAL_OPENGL_BE NULL
#define OPTION_VAL_VULKAN_BE NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_BE NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_BE NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_BE NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_BE NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_BE NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_BE NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_BE NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_BE NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_BE NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_BE NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_BE NULL
#define OPTION_VAL_10_BE NULL
#define OPTION_VAL_20_BE "20 %"
#define OPTION_VAL_30_BE "30 %"
#define OPTION_VAL_40_BE "40 %"
#define OPTION_VAL_50_BE "50 %"
#define OPTION_VAL_60_BE "60 %"
#define OPTION_VAL_70_BE "70 %"
#define OPTION_VAL_80_BE "80 %"
#define OPTION_VAL_90_BE "90 %"
#define OPTION_VAL_100_BE "100 %"
#define CEMU_GAMEPAD_MOTION_LABEL_BE NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_BE NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_BE NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_BE NULL
#define OPTION_VAL_0_25X_BE NULL
#define OPTION_VAL_0_5X_BE NULL
#define OPTION_VAL_0_75X_BE NULL
#define OPTION_VAL_NATIVE_BE "Родная"
#define OPTION_VAL_1_5X_BE NULL
#define OPTION_VAL_2X_BE NULL
#define OPTION_VAL_3X_BE NULL
#define CEMU_RENDER_AHEAD_LABEL_BE NULL
#define CEMU_RENDER_AHEAD_INFO_0_BE NULL
#define CEMU_AUDIO_THREAD_LABEL_BE NULL
#define CEMU_AUDIO_THREAD_INFO_0_BE NULL
#define CEMU_BC1_16BIT_LABEL_BE NULL
#define CEMU_BC1_16BIT_INFO_0_BE NULL
#define CEMU_SHOW_GAME_FPS_LABEL_BE NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_BE NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BE NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_BE NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BE NULL

struct retro_core_option_v2_category option_cats_be[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_BE, CATEGORY_SYSTEM_INFO_0_BE },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_BE, CATEGORY_GRAPHICS_INFO_0_BE },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_BE, CATEGORY_CONTROLLER_INFO_0_BE },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_BE, CATEGORY_TITLE_MANAGER_INFO_0_BE },
	{ "core", CATEGORY_CORE_LABEL_BE, CATEGORY_CORE_INFO_0_BE },
	{ "logging", CATEGORY_LOGGING_LABEL_BE, CATEGORY_LOGGING_INFO_0_BE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_BE, CATEGORY_GRAPHIC_PACKS_INFO_0_BE },
	{ "cheats", CATEGORY_CHEATS_LABEL_BE, CATEGORY_CHEATS_INFO_0_BE },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_BE,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_BE,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_BE },
			{ "stereo", OPTION_VAL_STEREO_BE },
			{ "surround", OPTION_VAL_SURROUND_BE },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_BE,
		NULL,
		CEMU_ACCOUNT_INFO_0_BE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_BE,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_BE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_BE },
			{ "Vulkan", OPTION_VAL_VULKAN_BE },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_BE,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_BE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_BE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_BE,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_BE,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_BE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_BE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_BE,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_BE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_BE,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_BE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_BE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_BE,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_BE },
			{ "20", OPTION_VAL_20_BE },
			{ "30", OPTION_VAL_30_BE },
			{ "40", OPTION_VAL_40_BE },
			{ "50", OPTION_VAL_50_BE },
			{ "60", OPTION_VAL_60_BE },
			{ "70", OPTION_VAL_70_BE },
			{ "80", OPTION_VAL_80_BE },
			{ "90", OPTION_VAL_90_BE },
			{ "100", OPTION_VAL_100_BE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_BE,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_BE,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_BE },
			{ "swapped", OPTION_VAL_SWAPPED_BE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_BE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_BE,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_BE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_BE,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_BE,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_BE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_BE,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_BE,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_BE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_BE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BE,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_BG NULL
#define CATEGORY_SYSTEM_INFO_0_BG NULL
#define CATEGORY_GRAPHICS_LABEL_BG NULL
#define CATEGORY_GRAPHICS_INFO_0_BG NULL
#define CATEGORY_CONTROLLER_LABEL_BG NULL
#define CATEGORY_CONTROLLER_INFO_0_BG NULL
#define CATEGORY_TITLE_MANAGER_LABEL_BG NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_BG NULL
#define CATEGORY_CORE_LABEL_BG "Ядро"
#define CATEGORY_CORE_INFO_0_BG NULL
#define CATEGORY_LOGGING_LABEL_BG NULL
#define CATEGORY_LOGGING_INFO_0_BG NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_BG NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_BG NULL
#define CATEGORY_CHEATS_LABEL_BG NULL
#define CATEGORY_CHEATS_INFO_0_BG NULL
#define CEMU_CPU_MODE_LABEL_BG NULL
#define CEMU_CPU_MODE_INFO_0_BG NULL
#define OPTION_VAL_AUTO_BG NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_BG NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_BG NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_BG NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_BG NULL
#define CEMU_THREAD_QUANTUM_LABEL_BG NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_BG NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_BG NULL
#define OPTION_VAL_MONO_BG NULL
#define OPTION_VAL_STEREO_BG NULL
#define OPTION_VAL_SURROUND_BG NULL
#define CEMU_ACCOUNT_LABEL_BG NULL
#define CEMU_ACCOUNT_INFO_0_BG NULL
#define CEMU_CREATE_ACCOUNT_LABEL_BG NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_BG NULL
#define CEMU_RENAME_ACCOUNT_LABEL_BG NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_BG NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_BG NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_BG NULL
#define CEMU_GPU_API_LABEL_BG NULL
#define CEMU_GPU_API_INFO_0_BG NULL
#define OPTION_VAL_OPENGL_BG NULL
#define OPTION_VAL_VULKAN_BG NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_BG NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_BG NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_BG NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_BG NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_BG NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_BG NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_BG NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_BG NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_BG NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_BG NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_BG NULL
#define OPTION_VAL_10_BG NULL
#define OPTION_VAL_20_BG NULL
#define OPTION_VAL_30_BG NULL
#define OPTION_VAL_40_BG NULL
#define OPTION_VAL_50_BG NULL
#define OPTION_VAL_60_BG NULL
#define OPTION_VAL_70_BG NULL
#define OPTION_VAL_80_BG NULL
#define OPTION_VAL_90_BG NULL
#define OPTION_VAL_100_BG NULL
#define CEMU_GAMEPAD_MOTION_LABEL_BG NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_BG NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_BG NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_BG NULL
#define OPTION_VAL_0_25X_BG NULL
#define OPTION_VAL_0_5X_BG NULL
#define OPTION_VAL_0_75X_BG NULL
#define OPTION_VAL_NATIVE_BG NULL
#define OPTION_VAL_1_5X_BG NULL
#define OPTION_VAL_2X_BG NULL
#define OPTION_VAL_3X_BG NULL
#define CEMU_RENDER_AHEAD_LABEL_BG NULL
#define CEMU_RENDER_AHEAD_INFO_0_BG NULL
#define CEMU_AUDIO_THREAD_LABEL_BG NULL
#define CEMU_AUDIO_THREAD_INFO_0_BG NULL
#define CEMU_BC1_16BIT_LABEL_BG NULL
#define CEMU_BC1_16BIT_INFO_0_BG NULL
#define CEMU_SHOW_GAME_FPS_LABEL_BG NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_BG NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BG NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_BG NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_BG NULL

struct retro_core_option_v2_category option_cats_bg[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_BG, CATEGORY_SYSTEM_INFO_0_BG },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_BG, CATEGORY_GRAPHICS_INFO_0_BG },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_BG, CATEGORY_CONTROLLER_INFO_0_BG },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_BG, CATEGORY_TITLE_MANAGER_INFO_0_BG },
	{ "core", CATEGORY_CORE_LABEL_BG, CATEGORY_CORE_INFO_0_BG },
	{ "logging", CATEGORY_LOGGING_LABEL_BG, CATEGORY_LOGGING_INFO_0_BG },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_BG, CATEGORY_GRAPHIC_PACKS_INFO_0_BG },
	{ "cheats", CATEGORY_CHEATS_LABEL_BG, CATEGORY_CHEATS_INFO_0_BG },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_BG,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_BG,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_BG },
			{ "stereo", OPTION_VAL_STEREO_BG },
			{ "surround", OPTION_VAL_SURROUND_BG },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_BG,
		NULL,
		CEMU_ACCOUNT_INFO_0_BG,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_BG,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_BG,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_BG },
			{ "Vulkan", OPTION_VAL_VULKAN_BG },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_BG,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_BG,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_BG },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_BG,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_BG,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_BG,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_BG },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_BG,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_BG,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_BG,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_BG,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_BG,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_BG,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_BG },
			{ "20", OPTION_VAL_20_BG },
			{ "30", OPTION_VAL_30_BG },
			{ "40", OPTION_VAL_40_BG },
			{ "50", OPTION_VAL_50_BG },
			{ "60", OPTION_VAL_60_BG },
			{ "70", OPTION_VAL_70_BG },
			{ "80", OPTION_VAL_80_BG },
			{ "90", OPTION_VAL_90_BG },
			{ "100", OPTION_VAL_100_BG },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_BG,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_BG,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_BG },
			{ "swapped", OPTION_VAL_SWAPPED_BG },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_BG,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_BG,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_BG,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_BG,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_BG,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_BG,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_BG,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_BG,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_BG,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_BG,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_BG,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_CA "Sistema"
#define CATEGORY_SYSTEM_INFO_0_CA "Procesador, idioma, canals d'àudio i comptes."
#define CATEGORY_GRAPHICS_LABEL_CA "Gràfica (Cal reiniciar)"
#define CATEGORY_GRAPHICS_INFO_0_CA "API gràfica i shaders. S'apliquen un cop es torna a iniciar el joc, llevat que l'opció indiqui el contrari."
#define CATEGORY_CONTROLLER_LABEL_CA "Comandament"
#define CATEGORY_CONTROLLER_INFO_0_CA "Vibració, moviment i quina pantalla de Wii U es mostra i com."
#define CATEGORY_TITLE_MANAGER_LABEL_CA "Administrador de Títols"
#define CATEGORY_TITLE_MANAGER_INFO_0_CA "Instal·la i desinstal·la jocs, actualitzacions de títols i contingut descarregable (DLC) a `saves/Cemu/mlc01` —l'emmagatzematge de la consola emulada— i converteix el títol carregat en un fitxer `.wua`."
#define CATEGORY_CORE_LABEL_CA "Nucli"
#define CATEGORY_CORE_INFO_0_CA "Opcions d'aquest nucli que Cemu no té."
#define CATEGORY_LOGGING_LABEL_CA "Registres"
#define CATEGORY_LOGGING_INFO_0_CA "Sortida extra de registre, per problemes de diagnosi."
#define CATEGORY_GRAPHIC_PACKS_LABEL_CA "Paquets de gràfics (Cal reiniciar)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CA "Els paquets gràfics del joc carregat i els seus preajustos. Els teus propis paquets, o còpies modificades dels que venen integrats, es desen a system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_CA "Trucs (Cal reiniciar)"
#define CATEGORY_CHEATS_INFO_0_CA "Els paquets de trucs del joc carregat, provinents de la carpeta «Cheats» dels paquets gràfics."
#define CEMU_CPU_MODE_LABEL_CA "Mode de procesador (Cal reiniciar)"
#define CEMU_CPU_MODE_INFO_0_CA "Com s'emulen els nuclis PowerPC de la Wii U. «Auto»: el mode definit al perfil del joc (si en té un); en cas contrari, s'utilitza el recompilador multinúcli si la CPU té quatre o més nuclis físics, o bé el recompilador d'un sol nucli si no és així. Els intèrprets són molt més lents i estan pensats per a la depuració."
#define OPTION_VAL_AUTO_CA "Automàtic"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CA "Intèrpret mononucli"
#define OPTION_VAL_SINGLECORE_RECOMPILER_CA "Recompilador mononucli"
#define OPTION_VAL_MULTICORE_RECOMPILER_CA "Recompilador multinucli"
#define OPTION_VAL_MULTICORE_INTERPRETER_CA "Intèrpret multinucli"
#define CEMU_THREAD_QUANTUM_LABEL_CA "Fil quàntic"
#define CEMU_CONSOLE_LANGUAGE_LABEL_CA "Idioma de la consola (Cal reiniciar)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_CA "Canals d'àudio (Reiniciar)"
#define CEMU_AUDIO_CHANNELS_INFO_0_CA "La consola comunica al joc les característiques del televisor (tal com estigui configurat aquest): els jocs compatibles fan la mescla per al nombre d'altaveus corresponent. El so envoltant 5.1 arriba a RetroArch com a sis canals quan la sortida d'àudio és multicanal; en cas contrari, es mescla en estèreo."
#define OPTION_VAL_MONO_CA NULL
#define OPTION_VAL_STEREO_CA "Estèreo"
#define OPTION_VAL_SURROUND_CA NULL
#define CEMU_ACCOUNT_LABEL_CA "Compte actiu (Cal reiniciar)"
#define CEMU_ACCOUNT_INFO_0_CA "El compte de Wii U amb què s'executa el joc; cadascun té les seves pròpies partides desades i el seu propi Mii. La llista correspon als comptes que figuren al directori de comptes.\n\nFins que no es torni a iniciar el joc, aquest continuarà desant les dades al compte amb què es va obrir."
#define CEMU_CREATE_ACCOUNT_LABEL_CA "Crea un compte"
#define CEMU_CREATE_ACCOUNT_INFO_0_CA "Crea un nou compte, anomenat Jugador 2, Jugador 3 i així successivament, i activa els comptes. Llavors això torna a desactivat. El nou compte apareix a la llista de comptes si surts del menú i tornes a entrar una altra vegada. La consola pot suportar fins a 12 comptes."
#define CEMU_RENAME_ACCOUNT_LABEL_CA "Canvia el nom del compte actiu"
#define CEMU_RENAME_ACCOUNT_INFO_0_CA "Obre l'opció d'introduir el nom del compte actiu en sortir d'aquest menú i torna a l'estat \"OFF\". El nom que s'està escrivint es mostra com una notificació sobre el joc; per tant, cal que les notificacions en pantalla de la interfície estiguin activades.\n\nAmb un comandament: amunt i avall canvien l'últim caràcter, dreta n'afegeix un, esquerra n'elimina un, Start accepta i Select cancel·la.\n\nAmb un teclat: escriu; la tecla de retrocés (Backspace) elimina caràcters, Enter accepta i Escape cancel·la (és possible que calgui activar el \"Game Focus\" a la interfície perquè les tecles arribin al nucli).\n\nEl nom pot tenir fins a 10 caràcters. El joc no rep cap entrada fins que es tanca l'opció d'introducció del nom, i, si el joc està en marxa, mostrarà el nou nom un cop es reiniciï."
#define CEMU_REMOVE_ACCOUNT_LABEL_CA "Elimina el compte"
#define CEMU_REMOVE_ACCOUNT_INFO_0_CA "Elimina el compte seleccionat del directori de comptes (saves/Cemu/mlc01/usr/save/system/act) —tal com ho faria l'eliminació d'un usuari a la consola— en sortir d'aquest menú. En tornar al menú, l'opció torna a indicar «OFF».\n\nNo es pot eliminar el compte actiu ni tampoc el compte amb què s'ha iniciat el joc que s'està executant actualment, fins que no es tanqui aquest joc.\n\nAVÍS: eliminar un compte també suprimeix de manera permanent les partides desades associades a aquest compte en tots els jocs. Feu una còpia de seguretat de les partides que vulgueu conservar abans d'eliminar-lo."
#define CEMU_GPU_API_LABEL_CA "API de gràfics"
#define CEMU_GPU_API_INFO_0_CA "La API de gràfics amb la qual Cemu renderitza."
#define OPTION_VAL_OPENGL_CA NULL
#define OPTION_VAL_VULKAN_CA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CA "Shaders precompilats (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_CA "Un magatzem de programes de shader compilats. «Auto»: la configuració del perfil del joc (si en té un) com a element independent; en cas contrari, desactivat en el cas de Nvidia —el controlador de la qual manté el seu propi magatzem— i en la resta de casos."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CA "Compilació asíncrona de shaders (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CA "Multiplicació precisa de shaders"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_CA "Emula exactament la multiplicació de la GPU, tal com requereixen la majoria de jocs. «Auto»: utilitza la configuració definida al perfil del joc (si en té un); en cas contrari, l'opció està activada. (Per exemple, a *Super Mario 3D World*, *Captain Toad* i *Xenoblade Chronicles X* aquesta opció està desactivada)."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CA "Sincronització de GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_CA "Fa que el joc esperi fins que la GPU hagi acabat tota la feina cada vegada que es crida `GX2DrawDone` (equivalent a la «sincronització completa a `GX2DrawDone`» de la versió autònoma). Alguns jocs ho necessiten per visualitzar-se correctament; desactivar-ho pot augmentar la velocitat. Es pot activar o desactivar durant la partida."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_CA "Barreres precises (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_CA "Manté la sincronització entre les operacions de dibuix que alguns jocs necessiten per renderitzar-se correctament; és equivalent a l'opció amb el mateix nom a la versió autònoma (*standalone*). Desactivar-ho pot augmentar la velocitat, però pot provocar errors visuals en aquests jocs. Es pot activar o desactivar durant la partida."
#define CEMU_RUMBLE_STRENGTH_LABEL_CA "Intensitat de la vibració"
#define CEMU_RUMBLE_STRENGTH_INFO_0_CA "La intensitat de la vibració del comandament quan el joc la requereix: la del motor del GamePad i la del Wii Remote o el Pro Controller. L'opció «Desactivat» fa que no s'enviï cap vibració a la interfície."
#define OPTION_VAL_10_CA NULL
#define OPTION_VAL_20_CA NULL
#define OPTION_VAL_30_CA NULL
#define OPTION_VAL_40_CA NULL
#define OPTION_VAL_50_CA NULL
#define OPTION_VAL_60_CA NULL
#define OPTION_VAL_70_CA NULL
#define OPTION_VAL_80_CA NULL
#define OPTION_VAL_90_CA NULL
#define OPTION_VAL_100_CA NULL
#define CEMU_GAMEPAD_MOTION_LABEL_CA "Moviment del GamePad"
#define CEMU_GAMEPAD_MOTION_INFO_0_CA "Es tracta del giroscopi i l'acceleròmetre del comandament que RetroArch llegeix al port 1: ja siguin els del propi telèfon o tauleta, o els d'un comandament que els proporcioni a través del controlador d'entrada de RetroArch (com ara el DualShock 4, el DualSense i d'altres). Aquesta funció és necessària per als jocs que permeten apuntar o dirigir el moviment inclinant el comandament. Desactivat: el comandament roman immòbil, tal com passa quan es desactiva el control per moviment a l'aplicació autònoma."
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
#define CEMU_INSTALL_GAME_LABEL_CA "Instal·la els jocs"
#define CEMU_INSTALL_GAME_INFO_0_CA "Instal·la tots els jocs des del directori d'origen (system/Cemu/titles), incloent-hi les subcarpetes, al directori de jocs instal·lats de la Wii U emulada (saves/Cemu/mlc01/usr/title/00050000), tal com ho faria la consola en instal·lar un joc des del disc. Un joc pot ser una imatge de disc (.wud, .wux, .iso) o un fitxer .wua; les actualitzacions del títol i els continguts descarregables (DLC) que contingui el fitxer .wua s'instal·len conjuntament amb el joc. Les imatges de disc xifrades (.wud, .wux) requereixen la seva clau de disc: bé en un fitxer adjacent amb el mateix nom i l'extensió .key (p. ex., game.wux i game.key), o bé a system/Cemu/keys.txt. Si un joc ja està instal·lat amb la mateixa versió o una de més recent, no es modifica.\n\nQuan aquesta opció està activada, la instal·lació comença immediatament i el progrés es mostra mitjançant una notificació; l'opció es desactiva automàticament un cop instal·lats tots els jocs i en sortir del menú o canviar d'opció. Per iniciar un joc instal·lat, cal carregar el fitxer .rpx situat a la carpeta de codi dins del directori de jocs instal·lats; la imatge de disc original ja no és necessària."
#define CEMU_UNINSTALL_GAME_LABEL_CA "Desinstal·la el joc"
#define CEMU_UNINSTALL_GAME_INFO_0_CA "Desinstal·la el joc en execució i totes les actualitzacions de títol i contingut descarregable (DLC) associats del directori d'instal·lació (saves/Cemu/mlc01/usr/title) un cop es tanca o es reinicia el joc; l'opció roman activada fins aleshores. Les partides desades corresponents a l'ID del títol (saves/Cemu/mlc01/usr/save/<title id>) no s'eliminen."
#define CEMU_INSTALL_TITLES_LABEL_CA "Instal·la el contingut"
#define CEMU_INSTALL_TITLES_INFO_0_CA "Instal·la totes les actualitzacions de títol i els DLC des del directori d'origen (system/Cemu/titles) —incloses les subcarpetes— al directori d'instal·lació (saves/Cemu/mlc01/usr/title). Cada element es troba en la seva pròpia carpeta dins del directori d'origen; una descàrrega NUS (fitxers .app) requereix que els fitxers title.tmd i title.tik —així com la clau de desxifratge— estiguin situats al costat. Si ja hi ha una versió instal·lada igual o més recent, no es modifica.\n\nQuan aquesta opció està activada, la instal·lació comença immediatament i el progrés es mostra mitjançant una notificació; l'opció es desactiva automàticament un cop s'ha instal·lat tot el contingut i se surt del menú o es canvia d'opció. El joc utilitza el contingut instal·lat un cop es reinicia.\n\nEs pot instal·lar contingut des d'altres ubicacions mitjançant el menú principal de RetroArch (Main Menu > Load Content), seleccionant el fitxer title.tmd corresponent i assegurant-se que el fitxer title.tik es trobi al costat."
#define CEMU_UNINSTALL_TITLES_LABEL_CA "Desinstal·la el contingut"
#define CEMU_UNINSTALL_TITLES_INFO_0_CA "Desinstal·la l'actualització del títol i el contingut descarregable (DLC) del joc en execució des del directori d'instal·lació (saves/Cemu/mlc01/usr/title) un cop es tanca o es reinicia el joc; l'opció roman activada fins aleshores. Les còpies del directori d'origen (system/Cemu/titles) no es modifiquen."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CA "Elimina els fitxers després de la instal·lació"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CA "Elimina el que Install Games i Install Content han instal·lat del directori d'origen (system/Cemu/titles): una carpeta d'actualització de títol o DLC un cop instal·lat, i una imatge de disc (amb el seu fitxer .key) o .wua un cop instal·lat tot el que conté. Els fitxers que utilitza el joc en execució s'eliminen quan es tanca o es reinicia.\n\nAVÍS: això elimina permanentment els fitxers del directori d'origen. Aquest directori és perquè el nucli el gestioni; guarda les dades del joc que vols arxivar en un altre lloc."
#define CEMU_WUA_OUTPUT_DIR_LABEL_CA "Carpeta de sortida"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CA "Indica on es desa el fitxer .wua. Cal que hi hagi espai suficient."
#define CEMU_CONVERT_TO_WUA_LABEL_CA "Inicia la conversió a WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_CA "Desa el joc actual a la carpeta de sortida com a fitxer .wua. Manté el joc en funcionament mentre es desa."
#define CEMU_INTERNAL_RESOLUTION_LABEL_CA "Resolució interna (Cal reiniciar)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CA "Una opció genèrica per als jocs que no disposen d'un paquet gràfic de resolució: redimensiona tots els objectius de renderització amb format de pantalla; alguns jocs els utilitzen per a elements que deixen de funcionar correctament en canviar-ne la mida. Un múltiple de la resolució nativa del joc: per a un joc a 720p, 0,5x equival a 640x360 (una quarta part dels píxels) i 2x equival a 2560x1440; per a un joc a 1080p, 0,5x equival a 960x540. Quan s'activa un paquet de resolució per al joc carregat (dins de «Paquets gràfics»), és aquest paquet el que determina la resolució."
#define OPTION_VAL_0_25X_CA "0.25x (320x180 a 720p)"
#define OPTION_VAL_0_5X_CA "0.5x (640x360 a 720p)"
#define OPTION_VAL_0_75X_CA "0.75x (960x540 a 720p)"
#define OPTION_VAL_NATIVE_CA "Nativa"
#define OPTION_VAL_1_5X_CA "1.5x (1920x1080 a 720p)"
#define OPTION_VAL_2X_CA "2x (2560x1440 a 720p)"
#define OPTION_VAL_3X_CA "3x (3840x2160 a 720p)"
#define CEMU_RENDER_AHEAD_LABEL_CA "Renderitza un fotograma per avançat"
#define CEMU_RENDER_AHEAD_INFO_0_CA "Permet que Cemu comenci a dibuixar el fotograma següent mentre RetroArch mostra l'anterior, tal com fa el Cemu independent. El resultat és més fluid en els casos en què el dibuix d'un fotograma ocupa la major part del temps disponible, tot i que comporta un fotograma addicional de latència d'entrada."
#define CEMU_AUDIO_THREAD_LABEL_CA "Fil d'àudio (Cal reiniciar)"
#define CEMU_AUDIO_THREAD_INFO_0_CA "Activat: RetroArch pren l'àudio pel seu propi fil, i l'àudio de la Wii U s'executa segons el rellotge com a Cemu autònom, de manera que no es trenca quan un fotograma és tard (càrrega, compilació d'ombres). La sincronització d'àudio de RetroArch ja no avança els fotogrames; La sincronització vertical ho fa i les estadístiques d'àudio de RetroArch es mantenen buides. Off: l'àudio es lliura amb cada fotograma."
#define CEMU_BC1_16BIT_LABEL_CA "Redueix la memòria de textures BC1 (Cal reiniciar)"
#define CEMU_BC1_16BIT_INFO_0_CA "Redueix a la meitat el cost de les textures BC1 que la targeta gràfica no pot mostrar, a costa de mostrar una mica de verd. No afecta si la targeta gràfica suporta el format BC."
#define CEMU_SHOW_GAME_FPS_LABEL_CA "Mostra els fotogrames per segon del joc"
#define CEMU_SHOW_GAME_FPS_INFO_0_CA "Mostra la taxa de fotogrames a la qual es renderitza el joc a la visualització en pantalla de RetroArch, un cop per segon."
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CA "Emulació del portal de poder Skylanders (Cal reiniciar)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CA "Emulació d'Infinity Base (Cal reiniciar)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CA "Emulació de el toypad Dimensiona (Cal reiniciar)"

struct retro_core_option_v2_category option_cats_ca[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_CA, CATEGORY_SYSTEM_INFO_0_CA },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_CA, CATEGORY_GRAPHICS_INFO_0_CA },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_CA, CATEGORY_CONTROLLER_INFO_0_CA },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_CA, CATEGORY_TITLE_MANAGER_INFO_0_CA },
	{ "core", CATEGORY_CORE_LABEL_CA, CATEGORY_CORE_INFO_0_CA },
	{ "logging", CATEGORY_LOGGING_LABEL_CA, CATEGORY_LOGGING_INFO_0_CA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CA, CATEGORY_GRAPHIC_PACKS_INFO_0_CA },
	{ "cheats", CATEGORY_CHEATS_LABEL_CA, CATEGORY_CHEATS_INFO_0_CA },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_CA,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_CA,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_CA },
			{ "stereo", OPTION_VAL_STEREO_CA },
			{ "surround", OPTION_VAL_SURROUND_CA },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CA,
		NULL,
		CEMU_ACCOUNT_INFO_0_CA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_CA,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_CA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CA },
			{ "Vulkan", OPTION_VAL_VULKAN_CA },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CA,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_CA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CA,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CA,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_CA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CA,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_CA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_CA,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_CA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CA,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_CA },
			{ "20", OPTION_VAL_20_CA },
			{ "30", OPTION_VAL_30_CA },
			{ "40", OPTION_VAL_40_CA },
			{ "50", OPTION_VAL_50_CA },
			{ "60", OPTION_VAL_60_CA },
			{ "70", OPTION_VAL_70_CA },
			{ "80", OPTION_VAL_80_CA },
			{ "90", OPTION_VAL_90_CA },
			{ "100", OPTION_VAL_100_CA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_CA,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_CA,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_CA },
			{ "swapped", OPTION_VAL_SWAPPED_CA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CA,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CA,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_CA,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_CA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_CA,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_CA,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CA,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_CHS "系统"
#define CATEGORY_SYSTEM_INFO_0_CHS NULL
#define CATEGORY_GRAPHICS_LABEL_CHS NULL
#define CATEGORY_GRAPHICS_INFO_0_CHS NULL
#define CATEGORY_CONTROLLER_LABEL_CHS "手柄"
#define CATEGORY_CONTROLLER_INFO_0_CHS NULL
#define CATEGORY_TITLE_MANAGER_LABEL_CHS NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_CHS NULL
#define CATEGORY_CORE_LABEL_CHS "核心"
#define CATEGORY_CORE_INFO_0_CHS NULL
#define CATEGORY_LOGGING_LABEL_CHS "日志"
#define CATEGORY_LOGGING_INFO_0_CHS "额外日志输出，用于诊断问题。"
#define CATEGORY_GRAPHIC_PACKS_LABEL_CHS NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CHS NULL
#define CATEGORY_CHEATS_LABEL_CHS NULL
#define CATEGORY_CHEATS_INFO_0_CHS NULL
#define CEMU_CPU_MODE_LABEL_CHS NULL
#define CEMU_CPU_MODE_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CHS "单核解释器"
#define OPTION_VAL_SINGLECORE_RECOMPILER_CHS "单核重编译器"
#define OPTION_VAL_MULTICORE_RECOMPILER_CHS "多核重编译器"
#define OPTION_VAL_MULTICORE_INTERPRETER_CHS "多核解释器"
#define CEMU_THREAD_QUANTUM_LABEL_CHS "线程时间片 (Thread Quantum)   "
#define CEMU_CONSOLE_LANGUAGE_LABEL_CHS NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_CHS "音频声道数 (需重启)   "
#define CEMU_AUDIO_CHANNELS_INFO_0_CHS "主机向游戏上报的电视声道配置，效果对应独立版的 TV 声道设置：支持该特性的游戏将针对相应数量的扬声器进行混音。在支持多声道输出时，环绕声 5.1 将以六声道形式输出给 RetroArch，否则将向下混音为立体声。"
#define OPTION_VAL_MONO_CHS "单声道"
#define OPTION_VAL_STEREO_CHS "立体声"
#define OPTION_VAL_SURROUND_CHS "环绕声5.1"
#define CEMU_ACCOUNT_LABEL_CHS NULL
#define CEMU_ACCOUNT_INFO_0_CHS NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CHS "创建账户"
#define CEMU_CREATE_ACCOUNT_INFO_0_CHS "创建一个名为 Player 2、Player 3 等的新账户，并将其设为当前激活账户。随后此选项会自动切回“关闭”状态。退出并重新进入此菜单后，新账户将显示在账户列表中。主机最多可容纳 12 个账户。"
#define CEMU_RENAME_ACCOUNT_LABEL_CHS "重命名活动账户"
#define CEMU_RENAME_ACCOUNT_INFO_0_CHS "退出此菜单时打开当前激活账户的名称输入界面，随后此选项自动切回“关闭”状态。修改过程中的名称会以游戏叠加通知的形式显示，因此需开启前端的屏幕通知功能。\n\n使用手柄操作：上/下方向键修改最后一个字符，右方向键添加字符，左方向键删除字符，Start 键确认，Select 键取消。\n\n使用键盘操作：直接打字，Backspace 键删除，Enter 键确认，Escape 键取消（前端可能需要开启“游戏焦点”以将按键传递给核心）。\n\n名称最多包含 10 个字符。在关闭输入界面前游戏不会接收任何输入，运行中的游戏将在重新启动后显示新名称。"
#define CEMU_REMOVE_ACCOUNT_LABEL_CHS "删除账户"
#define CEMU_REMOVE_ACCOUNT_INFO_0_CHS "退出此菜单时，从账户目录（saves/Cemu/mlc01/usr/save/system/act）中删除选定的账户，效果等同于在主机上删除用户。返回菜单时该选项会重新显示为“关闭”状态。\n\n当前激活的账户无法被删除，运行中游戏所使用的账户在游戏关闭前也无法被删除。\n\n警告：删除账户将永久删除该账户在所有游戏中的存档数据。删除前请务必备份所有需要保留的存档。"
#define CEMU_GPU_API_LABEL_CHS "图形 API"
#define CEMU_GPU_API_INFO_0_CHS NULL
#define OPTION_VAL_OPENGL_CHS NULL
#define OPTION_VAL_VULKAN_CHS NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CHS NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_CHS NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CHS NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CHS "精确着色器乘法计算"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_CHS NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CHS "GX2DrawDone 画面同步"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_CHS NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_CHS NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_CHS NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CHS "震动强度"
#define CEMU_RUMBLE_STRENGTH_INFO_0_CHS "当游戏请求震动时手柄的振动强度：包括 GamePad 马达、Wii 双节棍手柄或 Pro 手柄。关闭时将完全不向前端发送震动信号。"
#define OPTION_VAL_10_CHS NULL
#define OPTION_VAL_20_CHS NULL
#define OPTION_VAL_30_CHS NULL
#define OPTION_VAL_40_CHS NULL
#define OPTION_VAL_50_CHS NULL
#define OPTION_VAL_60_CHS NULL
#define OPTION_VAL_70_CHS NULL
#define OPTION_VAL_80_CHS NULL
#define OPTION_VAL_90_CHS NULL
#define OPTION_VAL_100_CHS NULL
#define CEMU_GAMEPAD_MOTION_LABEL_CHS "GamePad 动作感应/体感"
#define CEMU_GAMEPAD_MOTION_INFO_0_CHS "从 RetroArch 在端口 1 读取的传感器中获取 GamePad 的陀螺仪和加速度计数据：可以是手机/平板自带的传感器，或输入驱动支持的手柄（如 DualShock 4、DualSense 等）。通过倾斜 GamePad 来瞄准或转向的游戏需要开启此选项。关闭：GamePad 保持静止，效果等同于独立版中关闭体感。"
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
#define CEMU_INSTALL_GAME_LABEL_CHS "安装游戏"
#define CEMU_INSTALL_GAME_INFO_0_CHS "将源目录（system/Cemu/titles，包含子文件夹）中的所有游戏安装至模拟 Wii U 的已安装游戏目录（saves/Cemu/mlc01/usr/title/00050000），如同实体主机从光盘安装游戏一般。游戏支持光盘镜像（.wud、.wux、.iso）或 .wua 格式；.wua 所包含的更新补丁与 DLC 会一并安装。加密的光盘镜像（.wud、.wux）需要对应的密钥文件：可存放于同级目录下同名且后缀为 .key 的文件中（如 game.wux 与 game.key），或记录在 system/Cemu/keys.txt 中。已安装相同或更新版本的游戏将被忽略。\n\n开启此选项后将立即开始安装，进度以通知形式显示，当所有游戏安装完毕且退出此菜单或更改其他选项时，该选项会自动关闭。安装后的游戏可通过加载已安装游戏目录中代码文件夹内的 .rpx 文件启动，不再需要原光盘镜像。"
#define CEMU_UNINSTALL_GAME_LABEL_CHS "卸载游戏"
#define CEMU_UNINSTALL_GAME_INFO_0_CHS "在游戏关闭或重置时，从已安装目录（saves/Cemu/mlc01/usr/title）中卸载当前运行的游戏及其所有关联的更新补丁与 DLC；在此之前该选项保持开启。对应游戏 Title ID 的存档数据（saves/Cemu/mlc01/usr/save/<title id>）不会被删除。"
#define CEMU_INSTALL_TITLES_LABEL_CHS "安装内容"
#define CEMU_INSTALL_TITLES_INFO_0_CHS "将源目录（system/Cemu/titles，包含子文件夹）中的所有更新补丁与 DLC 安装至已安装目录（saves/Cemu/mlc01/usr/title）中。每个内容在源目录中应存放在各自的文件夹内；NUS 下载内容（.app 文件）需要在同级目录下包含对应的 title.tmd 与解密密钥文件 title.tik。已安装相同或更新版本的内容将被忽略。\n\n开启此选项后将立即开始安装，进度以通知形式显示，当所有内容安装完毕且退出此菜单或更改其他选项时，该选项会自动关闭。重启后游戏将使用已安装的内容。\n\n其他路径的内容可通过 RetroArch 的“主菜单 > 加载内容”来安装：选中对应的 title.tmd 文件（需保证同级目录下存在 title.tik）即可。"
#define CEMU_UNINSTALL_TITLES_LABEL_CHS "卸载内容"
#define CEMU_UNINSTALL_TITLES_INFO_0_CHS "在游戏关闭或重置时，从已安装目录（saves/Cemu/mlc01/usr/title）中卸载当前运行游戏的更新补丁与 DLC；在此之前该选项保持开启。源目录（system/Cemu/titles）中的副本不会受影响。"
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_CHS "安装后删除源文件"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_CHS "通过“安装游戏”和“安装内容”成功安装后，自动清除源目录（system/Cemu/titles）中的对应文件：已安装的更新补丁或 DLC 文件夹；以及当内部所有内容安装完毕后的光盘镜像（及其对应的 .key 文件）或 .wua 文件。正在运行的游戏所使用的文件将在游戏关闭或重置时被删除。\n\n警告：此选项会永久删除源目录中的文件。该目录仅供核心管理使用；如需归档保存游戏数据，请务必备份在其他路径。"
#define CEMU_WUA_OUTPUT_DIR_LABEL_CHS "导出输出目录"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_CHS "导出生成的 .wua 文件的保存位置。需要保证有足够的存储空间。"
#define CEMU_CONVERT_TO_WUA_LABEL_CHS "开始转换为 WUA 格式"
#define CEMU_CONVERT_TO_WUA_INFO_0_CHS "将当前游戏打包写入指定输出目录为 .wua 归档文件。转换过程中游戏仍会正常维持运行。"
#define CEMU_INTERNAL_RESOLUTION_LABEL_CHS NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CHS NULL
#define OPTION_VAL_0_25X_CHS NULL
#define OPTION_VAL_0_5X_CHS NULL
#define OPTION_VAL_0_75X_CHS NULL
#define OPTION_VAL_NATIVE_CHS "原生"
#define OPTION_VAL_1_5X_CHS NULL
#define OPTION_VAL_2X_CHS NULL
#define OPTION_VAL_3X_CHS "3x (3840x2160, at 720p)"
#define CEMU_RENDER_AHEAD_LABEL_CHS NULL
#define CEMU_RENDER_AHEAD_INFO_0_CHS NULL
#define CEMU_AUDIO_THREAD_LABEL_CHS NULL
#define CEMU_AUDIO_THREAD_INFO_0_CHS NULL
#define CEMU_BC1_16BIT_LABEL_CHS NULL
#define CEMU_BC1_16BIT_INFO_0_CHS "在不支持直接采样 BC 格式的 GPU 上将 BC1 纹理的内存开销减半，代价是损失 1 位的绿色色彩精度。在支持 BC 采样的设备上无效果。"
#define CEMU_SHOW_GAME_FPS_LABEL_CHS "显示游戏帧率 (FPS)"
#define CEMU_SHOW_GAME_FPS_INFO_0_CHS NULL
#define CEMU_LOG_TO_FILE_LABEL_CHS "写入 Cemu 日志至 log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_CHS "记录文件系统访问（调试用）"
#define CEMU_LOG_THREAD_SYNC_LABEL_CHS "记录线程同步（调试用）"
#define CEMU_LOG_SYSTEM_API_LABEL_CHS "记录系统 API 调用（调试用）"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_CHS "记录纹理内存（调试用）"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_CHS "报告纹理内存中有多少因当前 GPU 无法采样而必须解压缩的 BC 格式纹理。"
#define CEMU_LOG_INPUT_API_LABEL_CHS "记录控制器 API 调用（调试用）"
#define CEMU_LOG_INPUT_API_INFO_0_CHS "记录游戏发起的每一次手柄调用——包括探测了哪些手柄及返回的具体指令。日志量极大，建议仅单次开启数秒。"
#define CEMU_LOG_AUDIO_LABEL_CHS "日志记录音频与帧节奏（调试用）"
#define CEMU_LOG_AUDIO_INFO_0_CHS "每秒记录一次 AX 生成的采样数、环形缓冲区丢弃的采样数、前端读取的采样数；以及前端运行核心的次数、游戏完成渲染的帧数以及时间开销分布（等待 GPU 线程、显示呈现、音频处理等）。用于排查游戏运行缓慢是由模拟 CPU、GPU 还是前端瓶颈导致的。"
#define CEMU_LOG_THREAD_TIME_LABEL_CHS "记录线程CPU时间(调试)"
#define CEMU_LOG_THREAD_TIME_INFO_0_CHS "每秒记录一次各模拟 PowerPC 核心线程、GPU 线程及前端线程的占用率（以占用单个宿主核心的百分比表示）。占用率接近 100% 的线程即为导致游戏变慢的瓶颈所在。"
#define CEMU_DUMP_SHADERS_LABEL_CHS "转储着色器（调试用）"
#define CEMU_DUMP_SHADERS_INFO_0_CHS "将游戏使用的每个着色器源码写入 system/Cemu/dump/shaders 目录，文件名取自 log.txt 中显示的哈希值。用于提交或报告在特定 GPU 上编译失败或渲染错误的着色器。这会拖慢着色器编译速度并迅速填满文件夹，因此使用完毕后请及时关闭。"
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHS NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CHS NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_CHS, CATEGORY_SYSTEM_INFO_0_CHS },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_CHS, CATEGORY_GRAPHICS_INFO_0_CHS },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_CHS, CATEGORY_CONTROLLER_INFO_0_CHS },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_CHS, CATEGORY_TITLE_MANAGER_INFO_0_CHS },
	{ "core", CATEGORY_CORE_LABEL_CHS, CATEGORY_CORE_INFO_0_CHS },
	{ "logging", CATEGORY_LOGGING_LABEL_CHS, CATEGORY_LOGGING_INFO_0_CHS },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CHS, CATEGORY_GRAPHIC_PACKS_INFO_0_CHS },
	{ "cheats", CATEGORY_CHEATS_LABEL_CHS, CATEGORY_CHEATS_INFO_0_CHS },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_CHS,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_CHS,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_CHS },
			{ "stereo", OPTION_VAL_STEREO_CHS },
			{ "surround", OPTION_VAL_SURROUND_CHS },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CHS,
		NULL,
		CEMU_ACCOUNT_INFO_0_CHS,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_CHS,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_CHS,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CHS },
			{ "Vulkan", OPTION_VAL_VULKAN_CHS },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CHS,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_CHS,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CHS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CHS,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_CHS,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CHS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CHS,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_CHS,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_CHS,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_CHS,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CHS,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CHS,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_CHS },
			{ "20", OPTION_VAL_20_CHS },
			{ "30", OPTION_VAL_30_CHS },
			{ "40", OPTION_VAL_40_CHS },
			{ "50", OPTION_VAL_50_CHS },
			{ "60", OPTION_VAL_60_CHS },
			{ "70", OPTION_VAL_70_CHS },
			{ "80", OPTION_VAL_80_CHS },
			{ "90", OPTION_VAL_90_CHS },
			{ "100", OPTION_VAL_100_CHS },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_CHS,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_CHS,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_CHS },
			{ "swapped", OPTION_VAL_SWAPPED_CHS },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CHS,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CHS,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CHS,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CHS,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_CHS,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_CHS,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_CHS,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_CHS,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CHS,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CHS,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHS,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_CHT "系統"
#define CATEGORY_SYSTEM_INFO_0_CHT NULL
#define CATEGORY_GRAPHICS_LABEL_CHT NULL
#define CATEGORY_GRAPHICS_INFO_0_CHT NULL
#define CATEGORY_CONTROLLER_LABEL_CHT "控制器"
#define CATEGORY_CONTROLLER_INFO_0_CHT NULL
#define CATEGORY_TITLE_MANAGER_LABEL_CHT NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_CHT NULL
#define CATEGORY_CORE_LABEL_CHT "核心"
#define CATEGORY_CORE_INFO_0_CHT NULL
#define CATEGORY_LOGGING_LABEL_CHT "系統日誌"
#define CATEGORY_LOGGING_INFO_0_CHT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CHT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CHT NULL
#define CATEGORY_CHEATS_LABEL_CHT NULL
#define CATEGORY_CHEATS_INFO_0_CHT NULL
#define CEMU_CPU_MODE_LABEL_CHT NULL
#define CEMU_CPU_MODE_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_SINGLECORE_INTERPRETER_CHT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CHT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CHT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CHT NULL
#define CEMU_THREAD_QUANTUM_LABEL_CHT NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_CHT NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_CHT NULL
#define OPTION_VAL_MONO_CHT "單聲道"
#define OPTION_VAL_STEREO_CHT "立體聲"
#define OPTION_VAL_SURROUND_CHT NULL
#define CEMU_ACCOUNT_LABEL_CHT NULL
#define CEMU_ACCOUNT_INFO_0_CHT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CHT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CHT NULL
#define CEMU_RENAME_ACCOUNT_LABEL_CHT NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_CHT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CHT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CHT NULL
#define CEMU_GPU_API_LABEL_CHT NULL
#define CEMU_GPU_API_INFO_0_CHT NULL
#define OPTION_VAL_OPENGL_CHT NULL
#define OPTION_VAL_VULKAN_CHT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CHT NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_CHT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CHT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CHT NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_CHT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CHT NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_CHT NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_CHT NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_CHT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CHT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CHT NULL
#define OPTION_VAL_10_CHT NULL
#define OPTION_VAL_20_CHT NULL
#define OPTION_VAL_30_CHT NULL
#define OPTION_VAL_40_CHT NULL
#define OPTION_VAL_50_CHT NULL
#define OPTION_VAL_60_CHT NULL
#define OPTION_VAL_70_CHT NULL
#define OPTION_VAL_80_CHT NULL
#define OPTION_VAL_90_CHT NULL
#define OPTION_VAL_100_CHT NULL
#define CEMU_GAMEPAD_MOTION_LABEL_CHT NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_CHT NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_CHT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CHT NULL
#define OPTION_VAL_0_25X_CHT NULL
#define OPTION_VAL_0_5X_CHT NULL
#define OPTION_VAL_0_75X_CHT NULL
#define OPTION_VAL_NATIVE_CHT "原始"
#define OPTION_VAL_1_5X_CHT NULL
#define OPTION_VAL_2X_CHT NULL
#define OPTION_VAL_3X_CHT NULL
#define CEMU_RENDER_AHEAD_LABEL_CHT NULL
#define CEMU_RENDER_AHEAD_INFO_0_CHT NULL
#define CEMU_AUDIO_THREAD_LABEL_CHT NULL
#define CEMU_AUDIO_THREAD_INFO_0_CHT NULL
#define CEMU_BC1_16BIT_LABEL_CHT NULL
#define CEMU_BC1_16BIT_INFO_0_CHT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CHT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CHT NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CHT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_CHT, CATEGORY_SYSTEM_INFO_0_CHT },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_CHT, CATEGORY_GRAPHICS_INFO_0_CHT },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_CHT, CATEGORY_CONTROLLER_INFO_0_CHT },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_CHT, CATEGORY_TITLE_MANAGER_INFO_0_CHT },
	{ "core", CATEGORY_CORE_LABEL_CHT, CATEGORY_CORE_INFO_0_CHT },
	{ "logging", CATEGORY_LOGGING_LABEL_CHT, CATEGORY_LOGGING_INFO_0_CHT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CHT, CATEGORY_GRAPHIC_PACKS_INFO_0_CHT },
	{ "cheats", CATEGORY_CHEATS_LABEL_CHT, CATEGORY_CHEATS_INFO_0_CHT },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_CHT,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_CHT,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_CHT },
			{ "stereo", OPTION_VAL_STEREO_CHT },
			{ "surround", OPTION_VAL_SURROUND_CHT },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CHT,
		NULL,
		CEMU_ACCOUNT_INFO_0_CHT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_CHT,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_CHT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CHT },
			{ "Vulkan", OPTION_VAL_VULKAN_CHT },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CHT,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_CHT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CHT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CHT,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_CHT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CHT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CHT,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_CHT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_CHT,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_CHT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CHT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CHT,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_CHT },
			{ "20", OPTION_VAL_20_CHT },
			{ "30", OPTION_VAL_30_CHT },
			{ "40", OPTION_VAL_40_CHT },
			{ "50", OPTION_VAL_50_CHT },
			{ "60", OPTION_VAL_60_CHT },
			{ "70", OPTION_VAL_70_CHT },
			{ "80", OPTION_VAL_80_CHT },
			{ "90", OPTION_VAL_90_CHT },
			{ "100", OPTION_VAL_100_CHT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_CHT,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_CHT,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_CHT },
			{ "swapped", OPTION_VAL_SWAPPED_CHT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CHT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CHT,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CHT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CHT,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_CHT,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_CHT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_CHT,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_CHT,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CHT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CHT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CHT,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_CS "Systém"
#define CATEGORY_SYSTEM_INFO_0_CS NULL
#define CATEGORY_GRAPHICS_LABEL_CS NULL
#define CATEGORY_GRAPHICS_INFO_0_CS NULL
#define CATEGORY_CONTROLLER_LABEL_CS "Ovladač"
#define CATEGORY_CONTROLLER_INFO_0_CS NULL
#define CATEGORY_TITLE_MANAGER_LABEL_CS NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_CS NULL
#define CATEGORY_CORE_LABEL_CS "Jádro"
#define CATEGORY_CORE_INFO_0_CS NULL
#define CATEGORY_LOGGING_LABEL_CS "Logování"
#define CATEGORY_LOGGING_INFO_0_CS NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CS NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CS NULL
#define CATEGORY_CHEATS_LABEL_CS NULL
#define CATEGORY_CHEATS_INFO_0_CS NULL
#define CEMU_CPU_MODE_LABEL_CS NULL
#define CEMU_CPU_MODE_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_CS NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CS NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CS NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CS NULL
#define CEMU_THREAD_QUANTUM_LABEL_CS NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_CS NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_CS NULL
#define OPTION_VAL_MONO_CS NULL
#define OPTION_VAL_STEREO_CS NULL
#define OPTION_VAL_SURROUND_CS NULL
#define CEMU_ACCOUNT_LABEL_CS NULL
#define CEMU_ACCOUNT_INFO_0_CS NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CS NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CS NULL
#define CEMU_RENAME_ACCOUNT_LABEL_CS NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_CS NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CS NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CS NULL
#define CEMU_GPU_API_LABEL_CS NULL
#define CEMU_GPU_API_INFO_0_CS NULL
#define OPTION_VAL_OPENGL_CS NULL
#define OPTION_VAL_VULKAN_CS NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CS NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_CS NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CS NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CS NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_CS NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CS NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_CS NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_CS NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_CS NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CS NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CS NULL
#define OPTION_VAL_10_CS NULL
#define OPTION_VAL_20_CS NULL
#define OPTION_VAL_30_CS NULL
#define OPTION_VAL_40_CS NULL
#define OPTION_VAL_50_CS NULL
#define OPTION_VAL_60_CS NULL
#define OPTION_VAL_70_CS NULL
#define OPTION_VAL_80_CS NULL
#define OPTION_VAL_90_CS NULL
#define OPTION_VAL_100_CS NULL
#define CEMU_GAMEPAD_MOTION_LABEL_CS NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_CS NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_CS NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CS NULL
#define OPTION_VAL_0_25X_CS NULL
#define OPTION_VAL_0_5X_CS NULL
#define OPTION_VAL_0_75X_CS NULL
#define OPTION_VAL_NATIVE_CS "Nativní"
#define OPTION_VAL_1_5X_CS NULL
#define OPTION_VAL_2X_CS NULL
#define OPTION_VAL_3X_CS NULL
#define CEMU_RENDER_AHEAD_LABEL_CS NULL
#define CEMU_RENDER_AHEAD_INFO_0_CS NULL
#define CEMU_AUDIO_THREAD_LABEL_CS NULL
#define CEMU_AUDIO_THREAD_INFO_0_CS NULL
#define CEMU_BC1_16BIT_LABEL_CS NULL
#define CEMU_BC1_16BIT_INFO_0_CS NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CS NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CS NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CS NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CS NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_CS, CATEGORY_SYSTEM_INFO_0_CS },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_CS, CATEGORY_GRAPHICS_INFO_0_CS },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_CS, CATEGORY_CONTROLLER_INFO_0_CS },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_CS, CATEGORY_TITLE_MANAGER_INFO_0_CS },
	{ "core", CATEGORY_CORE_LABEL_CS, CATEGORY_CORE_INFO_0_CS },
	{ "logging", CATEGORY_LOGGING_LABEL_CS, CATEGORY_LOGGING_INFO_0_CS },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CS, CATEGORY_GRAPHIC_PACKS_INFO_0_CS },
	{ "cheats", CATEGORY_CHEATS_LABEL_CS, CATEGORY_CHEATS_INFO_0_CS },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_CS,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_CS,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_CS },
			{ "stereo", OPTION_VAL_STEREO_CS },
			{ "surround", OPTION_VAL_SURROUND_CS },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CS,
		NULL,
		CEMU_ACCOUNT_INFO_0_CS,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_CS,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_CS,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CS },
			{ "Vulkan", OPTION_VAL_VULKAN_CS },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CS,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_CS,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CS,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CS,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_CS,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CS },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CS,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_CS,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_CS,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_CS,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CS,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CS,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_CS },
			{ "20", OPTION_VAL_20_CS },
			{ "30", OPTION_VAL_30_CS },
			{ "40", OPTION_VAL_40_CS },
			{ "50", OPTION_VAL_50_CS },
			{ "60", OPTION_VAL_60_CS },
			{ "70", OPTION_VAL_70_CS },
			{ "80", OPTION_VAL_80_CS },
			{ "90", OPTION_VAL_90_CS },
			{ "100", OPTION_VAL_100_CS },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_CS,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_CS,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_CS },
			{ "swapped", OPTION_VAL_SWAPPED_CS },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CS,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CS,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CS,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CS,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_CS,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_CS,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_CS,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_CS,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CS,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CS,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CS,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_CY NULL
#define CATEGORY_SYSTEM_INFO_0_CY NULL
#define CATEGORY_GRAPHICS_LABEL_CY NULL
#define CATEGORY_GRAPHICS_INFO_0_CY NULL
#define CATEGORY_CONTROLLER_LABEL_CY NULL
#define CATEGORY_CONTROLLER_INFO_0_CY NULL
#define CATEGORY_TITLE_MANAGER_LABEL_CY NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_CY NULL
#define CATEGORY_CORE_LABEL_CY "Craidd"
#define CATEGORY_CORE_INFO_0_CY NULL
#define CATEGORY_LOGGING_LABEL_CY "Logio"
#define CATEGORY_LOGGING_INFO_0_CY NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_CY NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_CY NULL
#define CATEGORY_CHEATS_LABEL_CY NULL
#define CATEGORY_CHEATS_INFO_0_CY NULL
#define CEMU_CPU_MODE_LABEL_CY NULL
#define CEMU_CPU_MODE_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_CY NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_CY NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_CY NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_CY NULL
#define CEMU_THREAD_QUANTUM_LABEL_CY NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_CY NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_CY NULL
#define OPTION_VAL_MONO_CY NULL
#define OPTION_VAL_STEREO_CY NULL
#define OPTION_VAL_SURROUND_CY NULL
#define CEMU_ACCOUNT_LABEL_CY NULL
#define CEMU_ACCOUNT_INFO_0_CY NULL
#define CEMU_CREATE_ACCOUNT_LABEL_CY NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_CY NULL
#define CEMU_RENAME_ACCOUNT_LABEL_CY NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_CY NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_CY NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_CY NULL
#define CEMU_GPU_API_LABEL_CY NULL
#define CEMU_GPU_API_INFO_0_CY NULL
#define OPTION_VAL_OPENGL_CY NULL
#define OPTION_VAL_VULKAN_CY NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_CY NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_CY NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_CY NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_CY NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_CY NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_CY NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_CY NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_CY NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_CY NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_CY NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_CY NULL
#define OPTION_VAL_10_CY NULL
#define OPTION_VAL_20_CY NULL
#define OPTION_VAL_30_CY NULL
#define OPTION_VAL_40_CY NULL
#define OPTION_VAL_50_CY NULL
#define OPTION_VAL_60_CY NULL
#define OPTION_VAL_70_CY NULL
#define OPTION_VAL_80_CY NULL
#define OPTION_VAL_90_CY NULL
#define OPTION_VAL_100_CY NULL
#define CEMU_GAMEPAD_MOTION_LABEL_CY NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_CY NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_CY NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_CY NULL
#define OPTION_VAL_0_25X_CY NULL
#define OPTION_VAL_0_5X_CY NULL
#define OPTION_VAL_0_75X_CY NULL
#define OPTION_VAL_NATIVE_CY NULL
#define OPTION_VAL_1_5X_CY NULL
#define OPTION_VAL_2X_CY NULL
#define OPTION_VAL_3X_CY NULL
#define CEMU_RENDER_AHEAD_LABEL_CY NULL
#define CEMU_RENDER_AHEAD_INFO_0_CY NULL
#define CEMU_AUDIO_THREAD_LABEL_CY NULL
#define CEMU_AUDIO_THREAD_INFO_0_CY NULL
#define CEMU_BC1_16BIT_LABEL_CY NULL
#define CEMU_BC1_16BIT_INFO_0_CY NULL
#define CEMU_SHOW_GAME_FPS_LABEL_CY NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_CY NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CY NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_CY NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_CY, CATEGORY_SYSTEM_INFO_0_CY },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_CY, CATEGORY_GRAPHICS_INFO_0_CY },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_CY, CATEGORY_CONTROLLER_INFO_0_CY },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_CY, CATEGORY_TITLE_MANAGER_INFO_0_CY },
	{ "core", CATEGORY_CORE_LABEL_CY, CATEGORY_CORE_INFO_0_CY },
	{ "logging", CATEGORY_LOGGING_LABEL_CY, CATEGORY_LOGGING_INFO_0_CY },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_CY, CATEGORY_GRAPHIC_PACKS_INFO_0_CY },
	{ "cheats", CATEGORY_CHEATS_LABEL_CY, CATEGORY_CHEATS_INFO_0_CY },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_CY,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_CY,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_CY },
			{ "stereo", OPTION_VAL_STEREO_CY },
			{ "surround", OPTION_VAL_SURROUND_CY },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_CY,
		NULL,
		CEMU_ACCOUNT_INFO_0_CY,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_CY,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_CY,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_CY },
			{ "Vulkan", OPTION_VAL_VULKAN_CY },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_CY,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_CY,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CY },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_CY,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_CY,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_CY,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_CY },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_CY,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_CY,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_CY,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_CY,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_CY,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_CY,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_CY },
			{ "20", OPTION_VAL_20_CY },
			{ "30", OPTION_VAL_30_CY },
			{ "40", OPTION_VAL_40_CY },
			{ "50", OPTION_VAL_50_CY },
			{ "60", OPTION_VAL_60_CY },
			{ "70", OPTION_VAL_70_CY },
			{ "80", OPTION_VAL_80_CY },
			{ "90", OPTION_VAL_90_CY },
			{ "100", OPTION_VAL_100_CY },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_CY,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_CY,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_CY },
			{ "swapped", OPTION_VAL_SWAPPED_CY },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_CY,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_CY,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_CY,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_CY,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_CY,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_CY,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_CY,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_CY,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_CY,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_CY,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_CY,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_DA NULL
#define CATEGORY_SYSTEM_INFO_0_DA NULL
#define CATEGORY_GRAPHICS_LABEL_DA NULL
#define CATEGORY_GRAPHICS_INFO_0_DA NULL
#define CATEGORY_CONTROLLER_LABEL_DA NULL
#define CATEGORY_CONTROLLER_INFO_0_DA NULL
#define CATEGORY_TITLE_MANAGER_LABEL_DA NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_DA NULL
#define CATEGORY_CORE_LABEL_DA "Kerne"
#define CATEGORY_CORE_INFO_0_DA NULL
#define CATEGORY_LOGGING_LABEL_DA "Logning"
#define CATEGORY_LOGGING_INFO_0_DA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_DA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_DA NULL
#define CATEGORY_CHEATS_LABEL_DA NULL
#define CATEGORY_CHEATS_INFO_0_DA NULL
#define CEMU_CPU_MODE_LABEL_DA NULL
#define CEMU_CPU_MODE_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_DA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_DA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_DA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_DA NULL
#define CEMU_THREAD_QUANTUM_LABEL_DA NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_DA NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_DA NULL
#define OPTION_VAL_MONO_DA NULL
#define OPTION_VAL_STEREO_DA NULL
#define OPTION_VAL_SURROUND_DA NULL
#define CEMU_ACCOUNT_LABEL_DA NULL
#define CEMU_ACCOUNT_INFO_0_DA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_DA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_DA NULL
#define CEMU_RENAME_ACCOUNT_LABEL_DA NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_DA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_DA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_DA NULL
#define CEMU_GPU_API_LABEL_DA NULL
#define CEMU_GPU_API_INFO_0_DA NULL
#define OPTION_VAL_OPENGL_DA NULL
#define OPTION_VAL_VULKAN_DA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_DA NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_DA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_DA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_DA NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_DA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_DA NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_DA NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_DA NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_DA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_DA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_DA NULL
#define OPTION_VAL_10_DA NULL
#define OPTION_VAL_20_DA NULL
#define OPTION_VAL_30_DA NULL
#define OPTION_VAL_40_DA NULL
#define OPTION_VAL_50_DA NULL
#define OPTION_VAL_60_DA NULL
#define OPTION_VAL_70_DA NULL
#define OPTION_VAL_80_DA NULL
#define OPTION_VAL_90_DA NULL
#define OPTION_VAL_100_DA NULL
#define CEMU_GAMEPAD_MOTION_LABEL_DA NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_DA NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_DA NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_DA NULL
#define OPTION_VAL_0_25X_DA NULL
#define OPTION_VAL_0_5X_DA NULL
#define OPTION_VAL_0_75X_DA NULL
#define OPTION_VAL_NATIVE_DA NULL
#define OPTION_VAL_1_5X_DA NULL
#define OPTION_VAL_2X_DA NULL
#define OPTION_VAL_3X_DA NULL
#define CEMU_RENDER_AHEAD_LABEL_DA NULL
#define CEMU_RENDER_AHEAD_INFO_0_DA NULL
#define CEMU_AUDIO_THREAD_LABEL_DA NULL
#define CEMU_AUDIO_THREAD_INFO_0_DA NULL
#define CEMU_BC1_16BIT_LABEL_DA NULL
#define CEMU_BC1_16BIT_INFO_0_DA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_DA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_DA NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_DA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_DA, CATEGORY_SYSTEM_INFO_0_DA },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_DA, CATEGORY_GRAPHICS_INFO_0_DA },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_DA, CATEGORY_CONTROLLER_INFO_0_DA },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_DA, CATEGORY_TITLE_MANAGER_INFO_0_DA },
	{ "core", CATEGORY_CORE_LABEL_DA, CATEGORY_CORE_INFO_0_DA },
	{ "logging", CATEGORY_LOGGING_LABEL_DA, CATEGORY_LOGGING_INFO_0_DA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_DA, CATEGORY_GRAPHIC_PACKS_INFO_0_DA },
	{ "cheats", CATEGORY_CHEATS_LABEL_DA, CATEGORY_CHEATS_INFO_0_DA },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_DA,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_DA,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_DA },
			{ "stereo", OPTION_VAL_STEREO_DA },
			{ "surround", OPTION_VAL_SURROUND_DA },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_DA,
		NULL,
		CEMU_ACCOUNT_INFO_0_DA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_DA,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_DA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_DA },
			{ "Vulkan", OPTION_VAL_VULKAN_DA },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_DA,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_DA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_DA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_DA,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_DA,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_DA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_DA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_DA,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_DA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_DA,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_DA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_DA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_DA,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_DA },
			{ "20", OPTION_VAL_20_DA },
			{ "30", OPTION_VAL_30_DA },
			{ "40", OPTION_VAL_40_DA },
			{ "50", OPTION_VAL_50_DA },
			{ "60", OPTION_VAL_60_DA },
			{ "70", OPTION_VAL_70_DA },
			{ "80", OPTION_VAL_80_DA },
			{ "90", OPTION_VAL_90_DA },
			{ "100", OPTION_VAL_100_DA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_DA,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_DA,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_DA },
			{ "swapped", OPTION_VAL_SWAPPED_DA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_DA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_DA,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_DA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_DA,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_DA,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_DA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_DA,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_DA,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_DA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_DA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DA,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_DE NULL
#define CATEGORY_SYSTEM_INFO_0_DE "CPU, Sprache, Audiokanäle und Konten."
#define CATEGORY_GRAPHICS_LABEL_DE "Grafik (Neustart)"
#define CATEGORY_GRAPHICS_INFO_0_DE "Grafik-API und Shader. Sie werden beim nächsten Start des Spiels angewendet, sofern bei der Option nichts anderes angegeben ist."
#define CATEGORY_CONTROLLER_LABEL_DE "Controllertreiber"
#define CATEGORY_CONTROLLER_INFO_0_DE "Vibration, Bewegungssteuerung und welcher Wii-U-Bildschirm angezeigt wird und wie."
#define CATEGORY_TITLE_MANAGER_LABEL_DE "Titelverwaltung"
#define CATEGORY_TITLE_MANAGER_INFO_0_DE "Spiele, Titelupdates und DLC in saves/Cemu/mlc01, dem Speicher der emulierten Konsole, installieren und deinstallieren sowie den geladenen Titel in eine .wua-Datei konvertieren."
#define CATEGORY_CORE_LABEL_DE "Cores"
#define CATEGORY_CORE_INFO_0_DE "Optionen dieses Cores, die Cemu als eigenständige Anwendung nicht bietet."
#define CATEGORY_LOGGING_LABEL_DE "Protokollierung"
#define CATEGORY_LOGGING_INFO_0_DE "Zusätzliche Protokollausgabe zur Diagnose von Problemen."
#define CATEGORY_GRAPHIC_PACKS_LABEL_DE "Grafikpakete (Neustart)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_DE "Grafikpakete und ihre Voreinstellungen für das geladene Spiel. Eigene Pakete und bearbeitete Kopien der integrierten Pakete gehören in system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_DE "Cheats (Neustart)"
#define CATEGORY_CHEATS_INFO_0_DE "Cheat-Pakete des geladenen Spiels aus dem „Cheats“-Ordner der Grafikpakete."
#define CEMU_CPU_MODE_LABEL_DE "CPU-Modus (Neustart)"
#define CEMU_CPU_MODE_INFO_0_DE "Legt fest, wie die PowerPC-Kerne der Wii U emuliert werden. Automatisch: der im Spieleprofil festgelegte Modus, sofern vorhanden – wie in Cemu als eigenständiger Anwendung. Andernfalls wird auf einer CPU mit mindestens vier physischen Kernen der Mehrkern-Recompiler verwendet, auf anderen CPUs der Einzelkern-Recompiler. Die Interpreter sind deutlich langsamer und für Debugging vorgesehen."
#define OPTION_VAL_AUTO_DE NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_DE "Einzelkern-Interpreter"
#define OPTION_VAL_SINGLECORE_RECOMPILER_DE "Einzelkern-Recompiler"
#define OPTION_VAL_MULTICORE_RECOMPILER_DE "Mehrkern-Recompiler"
#define OPTION_VAL_MULTICORE_INTERPRETER_DE "Mehrkern-Interpreter"
#define CEMU_THREAD_QUANTUM_LABEL_DE "Thread-Zeitquantum"
#define CEMU_CONSOLE_LANGUAGE_LABEL_DE "Konsolensprache (Neustart)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_DE "Audiokanäle (Neustart)"
#define CEMU_AUDIO_CHANNELS_INFO_0_DE "Der Fernseher, den die Konsole den Spielen meldet, entsprechend der Einstellung „TV-Kanäle“ in der Standalone-Version: Spiele, die diese Einstellung unterstützen, mischen den Ton für die angegebene Anzahl an Lautsprechern ab. Surround-Sound in 5.1 wird an RetroArch als 6-Kanal-Audio ausgegeben, sofern Mehrkanal-Audioausgabe verfügbar ist; andernfalls wird er auf Stereo heruntergemischt."
#define OPTION_VAL_MONO_DE NULL
#define OPTION_VAL_STEREO_DE NULL
#define OPTION_VAL_SURROUND_DE NULL
#define CEMU_ACCOUNT_LABEL_DE "Aktives Konto (Neustart)"
#define CEMU_ACCOUNT_INFO_0_DE "Das Wii-U-Konto, unter dem das Spiel ausgeführt wird; jedes Konto hat eigene Speicherstände und ein eigenes Mii. Die Liste enthält die Konten im Kontoverzeichnis.\n\nBis zum nächsten Spielstart speichert das laufende Spiel weiterhin unter dem Konto, mit dem es gestartet wurde."
#define CEMU_CREATE_ACCOUNT_LABEL_DE "Konto erstellen"
#define CEMU_CREATE_ACCOUNT_INFO_0_DE "Erstellt ein neues Konto mit dem Namen „Spieler 2“, „Spieler 3“ usw. und legt es als aktives Konto fest. Anschließend springt diese Option auf „AUS“ zurück. Das neue Konto erscheint in der Kontenliste, nachdem dieses Menü geschlossen und erneut geöffnet wurde. Auf der Konsole können bis zu 12 Konten gespeichert werden."
#define CEMU_RENAME_ACCOUNT_LABEL_DE "Aktives Konto umbenennen"
#define CEMU_RENAME_ACCOUNT_INFO_0_DE "Öffnet nach dem Schließen dieses Menüs die Namenseingabe für das aktive Konto und springt anschließend auf „AUS“ zurück. Der bisher eingegebene Name wird als Benachrichtigung über dem Spiel angezeigt. Daher müssen die Bildschirmanzeigen des Frontends aktiviert sein.\n\nMit einem Controller: Mit Oben und Unten das letzte Zeichen ändern, mit Rechts ein Zeichen hinzufügen, mit Links ein Zeichen entfernen, mit Start bestätigen und mit Select abbrechen.\n\nMit einer Tastatur: Text eingeben, mit der Rücktaste ein Zeichen entfernen, mit Eingabe bestätigen und mit Esc abbrechen (möglicherweise muss im Frontend der Spielfokus aktiviert sein, damit Tasten an den Core weitergegeben werden).\n\nEin Name darf bis zu 10 Zeichen lang sein. Bis zum Schließen der Eingabe werden keine Eingaben an das Spiel weitergegeben. Bei einem laufenden Spiel wird der neue Name erst nach einem erneuten Start angezeigt."
#define CEMU_REMOVE_ACCOUNT_LABEL_DE "Konto entfernen"
#define CEMU_REMOVE_ACCOUNT_INFO_0_DE "Entfernt das ausgewählte Konto beim Verlassen dieses Menüs aus dem Kontoverzeichnis (saves/Cemu/mlc01/usr/save/system/act), wie beim Löschen eines Benutzers auf der Konsole. Beim erneuten Öffnen des Menüs wird die Option wieder als AUS angezeigt.\n\nDas aktive Konto kann nicht entfernt werden. Ebenso wenig kann das Konto entfernt werden, mit dem das laufende Spiel gestartet wurde, solange das Spiel nicht geschlossen ist.\n\nWARNUNG: Beim Entfernen eines Kontos werden auch alle damit erstellten Spielstände in sämtlichen Spielen dauerhaft gelöscht. Spielstände, die erhalten bleiben sollen, vor dem Entfernen sichern."
#define CEMU_GPU_API_LABEL_DE "Grafik-API"
#define CEMU_GPU_API_INFO_0_DE "Die Grafik-API, mit der Cemu rendert."
#define OPTION_VAL_OPENGL_DE NULL
#define OPTION_VAL_VULKAN_DE NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_DE "Vorkompilierte Shader (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_DE "Ein Cache für kompilierte Shaderprogramme. Automatisch: die Einstellung des Spieleprofils, sofern vorhanden – wie in Cemu als eigenständiger Anwendung. Andernfalls ist der Cache auf NVIDIA-GPUs deaktiviert, da deren Treiber einen eigenen Cache verwaltet, und auf anderen GPUs aktiviert."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_DE "Asynchrone Shaderkompilierung (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_DE "Präzise Shadermultiplikation"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_DE "Emuliert die Multiplikation der GPU exakt, wie es die meisten Spiele erfordern. Automatisch: die Einstellung des Spieleprofils, sofern vorhanden – wie in Cemu als eigenständiger Anwendung (bei Super Mario 3D World, Captain Toad und Xenoblade Chronicles X ist sie deaktiviert). Andernfalls aktiviert."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_DE "GX2DrawDone-Synchronisierung"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_DE "Lässt das Spiel bei jedem Aufruf von GX2DrawDone warten, bis die GPU ihre gesamte Arbeit abgeschlossen hat – wie „Full sync at GX2DrawDone“ in Cemu als eigenständiger Anwendung. Einige Spiele benötigen diese Option für eine korrekte Darstellung; deaktiviert kann sie die Leistung verbessern. Während des Spiels umschaltbar."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_DE "Präzise Barrieren (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_DE "Sorgt für die Synchronisierung zwischen Zeichenaufrufen, die manche Spiele für eine korrekte Darstellung benötigen – wie die gleichnamige Option in Cemu als eigenständiger Anwendung. Deaktiviert kann die Leistung verbessern, bei diesen Spielen jedoch Grafikfehler verursachen. Während des Spiels umschaltbar."
#define CEMU_RUMBLE_STRENGTH_LABEL_DE "Vibrationsstärke"
#define CEMU_RUMBLE_STRENGTH_INFO_0_DE "Wie stark der Controller vibriert, wenn das Spiel dies anfordert: sowohl der Motor des GamePads als auch der Motor der Wii-Fernbedienung bzw. des Pro Controllers. Bei „Aus“ werden vom Frontend überhaupt keine Vibrationssignale gesendet."
#define OPTION_VAL_10_DE "10 %"
#define OPTION_VAL_20_DE "20 %"
#define OPTION_VAL_30_DE "30 %"
#define OPTION_VAL_40_DE "40 %"
#define OPTION_VAL_50_DE "50 %"
#define OPTION_VAL_60_DE "60 %"
#define OPTION_VAL_70_DE "70 %"
#define OPTION_VAL_80_DE "80 %"
#define OPTION_VAL_90_DE "90 %"
#define OPTION_VAL_100_DE "100 %"
#define CEMU_GAMEPAD_MOTION_LABEL_DE "Bewegungssteuerung des GamePads"
#define CEMU_GAMEPAD_MOTION_INFO_0_DE "Kreisel- und Beschleunigungssensor des GamePads, ausgelesen von RetroArch an Port 1: die Sensoren eines Smartphones oder Tablets oder die eines Controllers, sofern der Eingabetreiber von RetroArch sie unterstützt (DualShock 4, DualSense und andere). Spiele, bei denen durch Neigen des GamePads gezielt oder gelenkt wird, benötigen diese Funktion. Aus: Das GamePad bleibt unbewegt, wie bei deaktivierter Bewegungssteuerung im Standalone-Modus."
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
#define CEMU_INSTALL_GAME_LABEL_DE "Spiele installieren"
#define CEMU_INSTALL_GAME_INFO_0_DE "Installiert alle Spiele aus dem Quellverzeichnis (system/Cemu/titles) einschließlich aller Unterordner in das Verzeichnis für installierte Spiele der emulierten Wii U (saves/Cemu/mlc01/usr/title/00050000), so wie die Konsole ein Spiel von einer Disc installiert. Ein Spiel ist ein Disc-Image (.wud, .wux, .iso) oder eine .wua-Datei. Darin enthaltene Titelupdates und DLC werden ebenfalls installiert. Für ein verschlüsseltes Disc-Image (.wud, .wux) wird der Disc-Schlüssel benötigt: entweder in einer Datei mit demselben Namen und der Endung .key daneben (game.wux, game.key) oder in system/Cemu/keys.txt. Ein Spiel, das bereits in derselben oder einer neueren Version installiert ist, bleibt unverändert.\n\nWenn diese Option auf EIN steht, beginnt die Installation sofort. Der Fortschritt wird als Benachrichtigung angezeigt. Die Option wird wieder auf AUS gesetzt, sobald alle Spiele installiert sind und dieses Menü verlassen oder eine andere Option geändert wird. Ein installiertes Spiel wird gestartet, indem die .rpx-Datei im code-Ordner des Spiels im Verzeichnis für installierte Spiele geladen wird. Das Disc-Image wird dafür nicht mehr benötigt."
#define CEMU_UNINSTALL_GAME_LABEL_DE "Spiel deinstallieren"
#define CEMU_UNINSTALL_GAME_INFO_0_DE "Deinstalliert das laufende Spiel sowie alle zugehörigen Titelupdates und DLC aus dem Installationsverzeichnis (saves/Cemu/mlc01/usr/title), sobald das Spiel geschlossen oder zurückgesetzt wird. Die Option bleibt bis dahin auf EIN. Spielstände für die Titel-ID des Spiels (saves/Cemu/mlc01/usr/save/) werden nicht entfernt."
#define CEMU_INSTALL_TITLES_LABEL_DE "Inhalt installieren"
#define CEMU_INSTALL_TITLES_INFO_0_DE "Installiert alle Titelupdates und DLC aus dem Quellverzeichnis (system/Cemu/titles) einschließlich aller Unterordner in das Installationsverzeichnis (saves/Cemu/mlc01/usr/title). Jedes Update und jedes DLC muss sich in einem eigenen Ordner im Quellverzeichnis befinden. Bei einem NUS-Download (.app-Dateien) müssen die zugehörigen title.tmd- und title.tik-Dateien sowie der Entschlüsselungsschlüssel danebenliegen. Eine bereits installierte Version, die gleich oder neuer ist, bleibt unverändert.\n\nWenn diese Option auf EIN steht, beginnt die Installation sofort. Der Fortschritt wird als Benachrichtigung angezeigt. Die Option wird wieder auf AUS gesetzt, sobald alle Inhalte installiert sind und dieses Menü verlassen oder eine andere Option geändert wird. Nach einem Neustart verwendet das Spiel die installierten Inhalte.\n\nInhalte von anderen Speicherorten lassen sich über RetroArchs „Hauptmenü“ > „Inhalte laden“ installieren. Dazu die zugehörige title.tmd auswählen; die title.tik muss danebenliegen."
#define CEMU_UNINSTALL_TITLES_LABEL_DE "Inhalt deinstallieren"
#define CEMU_UNINSTALL_TITLES_INFO_0_DE "Deinstalliert das Titelupdate und die DLC des laufenden Spiels aus dem Installationsverzeichnis (saves/Cemu/mlc01/usr/title), sobald das Spiel geschlossen oder zurückgesetzt wird. Die Option bleibt bis dahin auf EIN. Kopien im Quellverzeichnis (system/Cemu/titles) bleiben unberührt."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_DE "Dateien nach der Installation entfernen"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_DE "Entfernt aus dem Quellverzeichnis (system/Cemu/titles), was über „Spiele installieren“ und „Inhalte installieren“ installiert wurde: den Ordner eines Titelupdates oder DLCs nach dessen Installation sowie ein Disc-Image (einschließlich der zugehörigen .key-Datei) oder eine .wua-Datei, sobald alle darin enthaltenen Inhalte installiert sind. Vom laufenden Spiel verwendete Dateien werden beim Schließen oder Zurücksetzen des Spiels entfernt.\n\nWARNUNG: Dadurch werden Dateien dauerhaft aus dem Quellverzeichnis entfernt. Dieses Verzeichnis ist für die Verwaltung durch den Core vorgesehen. Spielinhalte, die archiviert werden sollen, an anderer Stelle aufbewahren."
#define CEMU_WUA_OUTPUT_DIR_LABEL_DE "Ausgabeverzeichnis"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_DE "Wohin die .wua-Datei gespeichert wird. Dafür muss Speicherplatz vorhanden sein."
#define CEMU_CONVERT_TO_WUA_LABEL_DE "Konvertierung in WUA starten"
#define CEMU_CONVERT_TO_WUA_INFO_0_DE "Schreibt den Titel als .wua in das Ausgabeverzeichnis. Der Titel läuft währenddessen weiter."
#define CEMU_INTERNAL_RESOLUTION_LABEL_DE "Interne Auflösung (Neustart)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_DE "Ein allgemeiner Ersatz für Spiele ohne Grafikpaket zur Auflösungsanpassung: Skaliert alle bildschirmförmigen Renderziele, die manche Spiele für Inhalte verwenden, die bei einer Größenänderung fehlerhaft dargestellt werden. Ein Vielfaches der spielinternen Auflösung: Bei einem 720p-Spiel entspricht 0,5× einer Auflösung von 640 × 360, also einem Viertel der Pixelanzahl; 2× entspricht 2560 × 1440. Bei einem 1080p-Spiel entspricht 0,5× einer Auflösung von 960 × 540. Ist für das geladene Spiel ein Auflösungspaket aktiviert („Grafikpakete“), legt dieses die Auflösung fest."
#define OPTION_VAL_0_25X_DE "0,25× (320×180 bei 720p)"
#define OPTION_VAL_0_5X_DE "0,5× (640×360 bei 720p)"
#define OPTION_VAL_0_75X_DE "0.75× (960×540 bei 720p)"
#define OPTION_VAL_NATIVE_DE "Nativ"
#define OPTION_VAL_1_5X_DE "1,5× (1920×1080 bei 720p)"
#define OPTION_VAL_2X_DE "2× (2560 × 1440 bei 720p)"
#define OPTION_VAL_3X_DE "3× (3840 × 2160 bei 720p)"
#define CEMU_RENDER_AHEAD_LABEL_DE "Einen Frame voraus rendern"
#define CEMU_RENDER_AHEAD_INFO_0_DE "Ermöglicht Cemu, mit dem Zeichnen des nächsten Frames zu beginnen, während RetroArch noch das vorherige anzeigt – wie Cemu als eigenständige Anwendung. Sorgt für eine flüssigere Darstellung, wenn das Zeichnen eines Frames den Großteil der Framezeit beansprucht, erhöht jedoch die Eingabeverzögerung um einen Frame."
#define CEMU_AUDIO_THREAD_LABEL_DE "Audiothread (Neustart)"
#define CEMU_AUDIO_THREAD_INFO_0_DE "Ein: RetroArch verarbeitet den Ton in einem eigenen Thread, und der Ton der Wii U läuft wie in Cemu als eigenständiger Anwendung taktgesteuert. Dadurch wird die Wiedergabe nicht unterbrochen, wenn ein Frame verspätet ist (beim Laden oder bei der Shaderkompilierung). Die Audiosynchronisierung von RetroArch taktet dann nicht mehr die Frames; das übernimmt die vertikale Synchronisierung, und die Audiostatistiken von RetroArch bleiben leer. Aus: Der Ton wird mit jedem Frame übergeben."
#define CEMU_BC1_16BIT_LABEL_DE "BC1-Texturspeicher reduzieren (Neustart)"
#define CEMU_BC1_16BIT_INFO_0_DE "Halbiert den Speicherbedarf von BC1-Texturen auf GPUs, die BC nicht abtasten können, auf Kosten eines Bits im Grünkanal. Hat keine Auswirkungen, wenn BC unterstützt wird."
#define CEMU_SHOW_GAME_FPS_LABEL_DE "Spiel-FPS anzeigen"
#define CEMU_SHOW_GAME_FPS_INFO_0_DE "Zeigt einmal pro Sekunde die Bildrate an, mit der das Spiel rendert, und zwar im Bildschirm-Overlay von RetroArch."
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
#define CEMU_DUMP_SHADERS_INFO_0_DE "Schreibt den Quelltext jedes vom Spiel verwendeten Shaders nach system/Cemu/dump/shaders. Die Dateien werden nach ihren Hashes benannt, wie sie in log.txt erscheinen. Zum Melden von Shadern, die auf einer bestimmten GPU fehlschlagen oder fehlerhaft dargestellt werden. Verlangsamt die Shaderkompilierung und füllt den Ordner schnell, daher anschließend wieder deaktivieren."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DE "Skylanders Portal of Power emulieren (Neustart)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_DE "Infinity Base emulieren (Neustart)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_DE "Dimensions Toy Pad emulieren (Neustart)"

struct retro_core_option_v2_category option_cats_de[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_DE, CATEGORY_SYSTEM_INFO_0_DE },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_DE, CATEGORY_GRAPHICS_INFO_0_DE },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_DE, CATEGORY_CONTROLLER_INFO_0_DE },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_DE, CATEGORY_TITLE_MANAGER_INFO_0_DE },
	{ "core", CATEGORY_CORE_LABEL_DE, CATEGORY_CORE_INFO_0_DE },
	{ "logging", CATEGORY_LOGGING_LABEL_DE, CATEGORY_LOGGING_INFO_0_DE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_DE, CATEGORY_GRAPHIC_PACKS_INFO_0_DE },
	{ "cheats", CATEGORY_CHEATS_LABEL_DE, CATEGORY_CHEATS_INFO_0_DE },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_DE,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_DE,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_DE },
			{ "stereo", OPTION_VAL_STEREO_DE },
			{ "surround", OPTION_VAL_SURROUND_DE },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_DE,
		NULL,
		CEMU_ACCOUNT_INFO_0_DE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_DE,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_DE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_DE },
			{ "Vulkan", OPTION_VAL_VULKAN_DE },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_DE,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_DE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_DE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_DE,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_DE,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_DE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_DE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_DE,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_DE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_DE,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_DE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_DE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_DE,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_DE },
			{ "20", OPTION_VAL_20_DE },
			{ "30", OPTION_VAL_30_DE },
			{ "40", OPTION_VAL_40_DE },
			{ "50", OPTION_VAL_50_DE },
			{ "60", OPTION_VAL_60_DE },
			{ "70", OPTION_VAL_70_DE },
			{ "80", OPTION_VAL_80_DE },
			{ "90", OPTION_VAL_90_DE },
			{ "100", OPTION_VAL_100_DE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_DE,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_DE,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_DE },
			{ "swapped", OPTION_VAL_SWAPPED_DE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_DE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_DE,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_DE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_DE,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_DE,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_DE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_DE,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_DE,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_DE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_DE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_DE,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_EL "Σύστημα"
#define CATEGORY_SYSTEM_INFO_0_EL NULL
#define CATEGORY_GRAPHICS_LABEL_EL NULL
#define CATEGORY_GRAPHICS_INFO_0_EL NULL
#define CATEGORY_CONTROLLER_LABEL_EL "Χειριστήριο"
#define CATEGORY_CONTROLLER_INFO_0_EL NULL
#define CATEGORY_TITLE_MANAGER_LABEL_EL NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_EL NULL
#define CATEGORY_CORE_LABEL_EL "Πυρήνας"
#define CATEGORY_CORE_INFO_0_EL NULL
#define CATEGORY_LOGGING_LABEL_EL "Αρχείο Καταγραφής"
#define CATEGORY_LOGGING_INFO_0_EL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EL NULL
#define CATEGORY_CHEATS_LABEL_EL NULL
#define CATEGORY_CHEATS_INFO_0_EL NULL
#define CEMU_CPU_MODE_LABEL_EL NULL
#define CEMU_CPU_MODE_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL "Αυτόματο"
#define OPTION_VAL_SINGLECORE_INTERPRETER_EL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EL NULL
#define CEMU_THREAD_QUANTUM_LABEL_EL NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_EL NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_EL NULL
#define OPTION_VAL_MONO_EL NULL
#define OPTION_VAL_STEREO_EL NULL
#define OPTION_VAL_SURROUND_EL NULL
#define CEMU_ACCOUNT_LABEL_EL NULL
#define CEMU_ACCOUNT_INFO_0_EL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EL NULL
#define CEMU_RENAME_ACCOUNT_LABEL_EL NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_EL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EL NULL
#define CEMU_GPU_API_LABEL_EL NULL
#define CEMU_GPU_API_INFO_0_EL NULL
#define OPTION_VAL_OPENGL_EL NULL
#define OPTION_VAL_VULKAN_EL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EL NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_EL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EL NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_EL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EL NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_EL NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_EL NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_EL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EL NULL
#define OPTION_VAL_10_EL NULL
#define OPTION_VAL_20_EL NULL
#define OPTION_VAL_30_EL NULL
#define OPTION_VAL_40_EL NULL
#define OPTION_VAL_50_EL NULL
#define OPTION_VAL_60_EL NULL
#define OPTION_VAL_70_EL NULL
#define OPTION_VAL_80_EL "το 80%"
#define OPTION_VAL_90_EL NULL
#define OPTION_VAL_100_EL NULL
#define CEMU_GAMEPAD_MOTION_LABEL_EL NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_EL NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_EL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EL NULL
#define OPTION_VAL_0_25X_EL NULL
#define OPTION_VAL_0_5X_EL NULL
#define OPTION_VAL_0_75X_EL NULL
#define OPTION_VAL_NATIVE_EL "Ντόπιος"
#define OPTION_VAL_1_5X_EL NULL
#define OPTION_VAL_2X_EL NULL
#define OPTION_VAL_3X_EL NULL
#define CEMU_RENDER_AHEAD_LABEL_EL NULL
#define CEMU_RENDER_AHEAD_INFO_0_EL NULL
#define CEMU_AUDIO_THREAD_LABEL_EL NULL
#define CEMU_AUDIO_THREAD_INFO_0_EL NULL
#define CEMU_BC1_16BIT_LABEL_EL NULL
#define CEMU_BC1_16BIT_INFO_0_EL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EL NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_EL, CATEGORY_SYSTEM_INFO_0_EL },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_EL, CATEGORY_GRAPHICS_INFO_0_EL },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_EL, CATEGORY_CONTROLLER_INFO_0_EL },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_EL, CATEGORY_TITLE_MANAGER_INFO_0_EL },
	{ "core", CATEGORY_CORE_LABEL_EL, CATEGORY_CORE_INFO_0_EL },
	{ "logging", CATEGORY_LOGGING_LABEL_EL, CATEGORY_LOGGING_INFO_0_EL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EL, CATEGORY_GRAPHIC_PACKS_INFO_0_EL },
	{ "cheats", CATEGORY_CHEATS_LABEL_EL, CATEGORY_CHEATS_INFO_0_EL },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_EL,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_EL,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_EL },
			{ "stereo", OPTION_VAL_STEREO_EL },
			{ "surround", OPTION_VAL_SURROUND_EL },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EL,
		NULL,
		CEMU_ACCOUNT_INFO_0_EL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_EL,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_EL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EL },
			{ "Vulkan", OPTION_VAL_VULKAN_EL },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EL,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_EL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EL,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EL,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_EL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EL,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_EL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_EL,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_EL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EL,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_EL },
			{ "20", OPTION_VAL_20_EL },
			{ "30", OPTION_VAL_30_EL },
			{ "40", OPTION_VAL_40_EL },
			{ "50", OPTION_VAL_50_EL },
			{ "60", OPTION_VAL_60_EL },
			{ "70", OPTION_VAL_70_EL },
			{ "80", OPTION_VAL_80_EL },
			{ "90", OPTION_VAL_90_EL },
			{ "100", OPTION_VAL_100_EL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_EL,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_EL,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_EL },
			{ "swapped", OPTION_VAL_SWAPPED_EL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EL,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EL,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_EL,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_EL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_EL,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_EL,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EL,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_EN NULL
#define CATEGORY_SYSTEM_INFO_0_EN NULL
#define CATEGORY_GRAPHICS_LABEL_EN NULL
#define CATEGORY_GRAPHICS_INFO_0_EN NULL
#define CATEGORY_CONTROLLER_LABEL_EN NULL
#define CATEGORY_CONTROLLER_INFO_0_EN NULL
#define CATEGORY_TITLE_MANAGER_LABEL_EN NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_EN NULL
#define CATEGORY_CORE_LABEL_EN NULL
#define CATEGORY_CORE_INFO_0_EN NULL
#define CATEGORY_LOGGING_LABEL_EN NULL
#define CATEGORY_LOGGING_INFO_0_EN NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EN NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EN NULL
#define CATEGORY_CHEATS_LABEL_EN NULL
#define CATEGORY_CHEATS_INFO_0_EN NULL
#define CEMU_CPU_MODE_LABEL_EN NULL
#define CEMU_CPU_MODE_INFO_0_EN NULL
#define OPTION_VAL_AUTO_EN NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_EN NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EN NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EN NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EN NULL
#define CEMU_THREAD_QUANTUM_LABEL_EN NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_EN NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_EN NULL
#define OPTION_VAL_MONO_EN NULL
#define OPTION_VAL_STEREO_EN NULL
#define OPTION_VAL_SURROUND_EN NULL
#define CEMU_ACCOUNT_LABEL_EN NULL
#define CEMU_ACCOUNT_INFO_0_EN NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EN NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EN NULL
#define CEMU_RENAME_ACCOUNT_LABEL_EN NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_EN NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EN NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EN NULL
#define CEMU_GPU_API_LABEL_EN NULL
#define CEMU_GPU_API_INFO_0_EN NULL
#define OPTION_VAL_OPENGL_EN NULL
#define OPTION_VAL_VULKAN_EN NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EN NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_EN NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EN NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EN NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_EN NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EN NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_EN NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_EN NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_EN NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EN NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EN NULL
#define OPTION_VAL_10_EN NULL
#define OPTION_VAL_20_EN NULL
#define OPTION_VAL_30_EN NULL
#define OPTION_VAL_40_EN NULL
#define OPTION_VAL_50_EN NULL
#define OPTION_VAL_60_EN NULL
#define OPTION_VAL_70_EN NULL
#define OPTION_VAL_80_EN NULL
#define OPTION_VAL_90_EN NULL
#define OPTION_VAL_100_EN NULL
#define CEMU_GAMEPAD_MOTION_LABEL_EN NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_EN NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_EN NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EN NULL
#define OPTION_VAL_0_25X_EN NULL
#define OPTION_VAL_0_5X_EN NULL
#define OPTION_VAL_0_75X_EN NULL
#define OPTION_VAL_NATIVE_EN NULL
#define OPTION_VAL_1_5X_EN NULL
#define OPTION_VAL_2X_EN NULL
#define OPTION_VAL_3X_EN NULL
#define CEMU_RENDER_AHEAD_LABEL_EN NULL
#define CEMU_RENDER_AHEAD_INFO_0_EN NULL
#define CEMU_AUDIO_THREAD_LABEL_EN NULL
#define CEMU_AUDIO_THREAD_INFO_0_EN NULL
#define CEMU_BC1_16BIT_LABEL_EN NULL
#define CEMU_BC1_16BIT_INFO_0_EN NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EN NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EN NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EN NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EN NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EN NULL

struct retro_core_option_v2_category option_cats_en[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_EN, CATEGORY_SYSTEM_INFO_0_EN },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_EN, CATEGORY_GRAPHICS_INFO_0_EN },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_EN, CATEGORY_CONTROLLER_INFO_0_EN },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_EN, CATEGORY_TITLE_MANAGER_INFO_0_EN },
	{ "core", CATEGORY_CORE_LABEL_EN, CATEGORY_CORE_INFO_0_EN },
	{ "logging", CATEGORY_LOGGING_LABEL_EN, CATEGORY_LOGGING_INFO_0_EN },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EN, CATEGORY_GRAPHIC_PACKS_INFO_0_EN },
	{ "cheats", CATEGORY_CHEATS_LABEL_EN, CATEGORY_CHEATS_INFO_0_EN },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_EN,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_EN,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_EN },
			{ "stereo", OPTION_VAL_STEREO_EN },
			{ "surround", OPTION_VAL_SURROUND_EN },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EN,
		NULL,
		CEMU_ACCOUNT_INFO_0_EN,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_EN,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_EN,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EN },
			{ "Vulkan", OPTION_VAL_VULKAN_EN },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EN,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_EN,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EN,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EN,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_EN,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EN,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_EN,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_EN,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_EN,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EN,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EN,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_EN },
			{ "20", OPTION_VAL_20_EN },
			{ "30", OPTION_VAL_30_EN },
			{ "40", OPTION_VAL_40_EN },
			{ "50", OPTION_VAL_50_EN },
			{ "60", OPTION_VAL_60_EN },
			{ "70", OPTION_VAL_70_EN },
			{ "80", OPTION_VAL_80_EN },
			{ "90", OPTION_VAL_90_EN },
			{ "100", OPTION_VAL_100_EN },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_EN,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_EN,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_EN },
			{ "swapped", OPTION_VAL_SWAPPED_EN },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EN,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EN,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EN,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EN,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_EN,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_EN,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_EN,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_EN,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EN,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EN,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EN,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_EO "Sistemo"
#define CATEGORY_SYSTEM_INFO_0_EO NULL
#define CATEGORY_GRAPHICS_LABEL_EO NULL
#define CATEGORY_GRAPHICS_INFO_0_EO NULL
#define CATEGORY_CONTROLLER_LABEL_EO "Regilo"
#define CATEGORY_CONTROLLER_INFO_0_EO NULL
#define CATEGORY_TITLE_MANAGER_LABEL_EO NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_EO NULL
#define CATEGORY_CORE_LABEL_EO "Kerno"
#define CATEGORY_CORE_INFO_0_EO NULL
#define CATEGORY_LOGGING_LABEL_EO "Protokolado"
#define CATEGORY_LOGGING_INFO_0_EO NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_EO NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_EO NULL
#define CATEGORY_CHEATS_LABEL_EO NULL
#define CATEGORY_CHEATS_INFO_0_EO NULL
#define CEMU_CPU_MODE_LABEL_EO NULL
#define CEMU_CPU_MODE_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO "Aŭtomata"
#define OPTION_VAL_SINGLECORE_INTERPRETER_EO NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_EO NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_EO NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_EO NULL
#define CEMU_THREAD_QUANTUM_LABEL_EO NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_EO NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_EO NULL
#define OPTION_VAL_MONO_EO "Unukanala"
#define OPTION_VAL_STEREO_EO "Dukanala"
#define OPTION_VAL_SURROUND_EO NULL
#define CEMU_ACCOUNT_LABEL_EO NULL
#define CEMU_ACCOUNT_INFO_0_EO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_EO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_EO NULL
#define CEMU_RENAME_ACCOUNT_LABEL_EO NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_EO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_EO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_EO NULL
#define CEMU_GPU_API_LABEL_EO NULL
#define CEMU_GPU_API_INFO_0_EO NULL
#define OPTION_VAL_OPENGL_EO NULL
#define OPTION_VAL_VULKAN_EO NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_EO NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_EO NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_EO NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_EO NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_EO NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_EO NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_EO NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_EO NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_EO NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_EO NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_EO NULL
#define OPTION_VAL_10_EO NULL
#define OPTION_VAL_20_EO NULL
#define OPTION_VAL_30_EO NULL
#define OPTION_VAL_40_EO NULL
#define OPTION_VAL_50_EO NULL
#define OPTION_VAL_60_EO NULL
#define OPTION_VAL_70_EO NULL
#define OPTION_VAL_80_EO NULL
#define OPTION_VAL_90_EO NULL
#define OPTION_VAL_100_EO NULL
#define CEMU_GAMEPAD_MOTION_LABEL_EO NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_EO NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_EO NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_EO NULL
#define OPTION_VAL_0_25X_EO NULL
#define OPTION_VAL_0_5X_EO NULL
#define OPTION_VAL_0_75X_EO NULL
#define OPTION_VAL_NATIVE_EO "Indiĝena"
#define OPTION_VAL_1_5X_EO NULL
#define OPTION_VAL_2X_EO NULL
#define OPTION_VAL_3X_EO NULL
#define CEMU_RENDER_AHEAD_LABEL_EO NULL
#define CEMU_RENDER_AHEAD_INFO_0_EO NULL
#define CEMU_AUDIO_THREAD_LABEL_EO NULL
#define CEMU_AUDIO_THREAD_INFO_0_EO NULL
#define CEMU_BC1_16BIT_LABEL_EO NULL
#define CEMU_BC1_16BIT_INFO_0_EO NULL
#define CEMU_SHOW_GAME_FPS_LABEL_EO NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_EO NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_EO NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_EO, CATEGORY_SYSTEM_INFO_0_EO },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_EO, CATEGORY_GRAPHICS_INFO_0_EO },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_EO, CATEGORY_CONTROLLER_INFO_0_EO },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_EO, CATEGORY_TITLE_MANAGER_INFO_0_EO },
	{ "core", CATEGORY_CORE_LABEL_EO, CATEGORY_CORE_INFO_0_EO },
	{ "logging", CATEGORY_LOGGING_LABEL_EO, CATEGORY_LOGGING_INFO_0_EO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_EO, CATEGORY_GRAPHIC_PACKS_INFO_0_EO },
	{ "cheats", CATEGORY_CHEATS_LABEL_EO, CATEGORY_CHEATS_INFO_0_EO },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_EO,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_EO,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_EO },
			{ "stereo", OPTION_VAL_STEREO_EO },
			{ "surround", OPTION_VAL_SURROUND_EO },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_EO,
		NULL,
		CEMU_ACCOUNT_INFO_0_EO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_EO,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_EO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_EO },
			{ "Vulkan", OPTION_VAL_VULKAN_EO },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_EO,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_EO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_EO,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_EO,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_EO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_EO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_EO,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_EO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_EO,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_EO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_EO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_EO,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_EO },
			{ "20", OPTION_VAL_20_EO },
			{ "30", OPTION_VAL_30_EO },
			{ "40", OPTION_VAL_40_EO },
			{ "50", OPTION_VAL_50_EO },
			{ "60", OPTION_VAL_60_EO },
			{ "70", OPTION_VAL_70_EO },
			{ "80", OPTION_VAL_80_EO },
			{ "90", OPTION_VAL_90_EO },
			{ "100", OPTION_VAL_100_EO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_EO,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_EO,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_EO },
			{ "swapped", OPTION_VAL_SWAPPED_EO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_EO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_EO,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_EO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_EO,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_EO,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_EO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_EO,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_EO,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_EO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_EO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_EO,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_ES "Sistema"
#define CATEGORY_SYSTEM_INFO_0_ES "CPU, idioma, canales de audio y cuentas."
#define CATEGORY_GRAPHICS_LABEL_ES "Gráficos (es necesario reiniciar)"
#define CATEGORY_GRAPHICS_INFO_0_ES "API de gráficos y shaders. Los cambios se aplicarán al volver a arrancar el juego a menos que la opción diga lo contrario."
#define CATEGORY_CONTROLLER_LABEL_ES "Mando"
#define CATEGORY_CONTROLLER_INFO_0_ES "Vibración, movimientos, cuál de las pantallas de una Wii U se mostrará y cómo."
#define CATEGORY_TITLE_MANAGER_LABEL_ES "Administrador de títulos"
#define CATEGORY_TITLE_MANAGER_INFO_0_ES "Instala y desinstala juegos, actualizaciones y contenidos descargables (DLC) en saves/Cemu/mlc01, el almacenamiento emulado de la consola, y convierte un título cargado a un archivo .wua."
#define CATEGORY_CORE_LABEL_ES "Núcleos"
#define CATEGORY_CORE_INFO_0_ES "Las opciones para este núcleo que no tiene la versión independiente de Cemu."
#define CATEGORY_LOGGING_LABEL_ES "Registros"
#define CATEGORY_LOGGING_INFO_0_ES "Amplía los registros generados para diagnosticar problemas."
#define CATEGORY_GRAPHIC_PACKS_LABEL_ES "Paquetes de gráficos (es necesario reiniciar)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_ES "Selecciona los paquetes de gráficos del juego cargado y sus preajustes. Tus paquetes o las copias cambiadas de los paquetes integrados deben ir a system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_ES "Trucos (es necesario reiniciar)"
#define CATEGORY_CHEATS_INFO_0_ES "Selecciona los paquetes de trucos del juego cargado que se encuentren en la carpeta Cheats de los paquetes de gráficos."
#define CEMU_CPU_MODE_LABEL_ES "Modo de CPU (es necesario reiniciar)"
#define CEMU_CPU_MODE_INFO_0_ES "Indica la forma de emular los núcleos PowerPC de la Wii U. El valor automático utilizará el perfil del juego si existe, como haría la aplicación independiente, en caso contrario, utilizará el recompilador multinúcleo en una CPU que tenga cuatro núcleos físicos o más, o si no los tiene, el mononúcleo con solo uno. Los intérpretes son mucho más lentos y solo están pensados para fines de depuración."
#define OPTION_VAL_AUTO_ES "Valor automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_ES "Intérprete mononúcleo"
#define OPTION_VAL_SINGLECORE_RECOMPILER_ES "Recompilador mononúcleo"
#define OPTION_VAL_MULTICORE_RECOMPILER_ES "Recompilador multinúcleo"
#define OPTION_VAL_MULTICORE_INTERPRETER_ES "Intérprete multinúcleo"
#define CEMU_THREAD_QUANTUM_LABEL_ES "Cuantía de hilos"
#define CEMU_CONSOLE_LANGUAGE_LABEL_ES "Idioma de la consola (es necesario reiniciar)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_ES "Canales de audio (es necesario reiniciar)"
#define CEMU_AUDIO_CHANNELS_INFO_0_ES "Establece el tipo de televisor que indica la consola a los juegos (tal y como estaría configurado dicho televisor): los juegos que sean compatibles producirán una mezcla de audio para el número de altavoces indicado. 5.1 Surround se mostrará en RetroArch como seis canales si tiene activada la salida de audio multicanal, en caso contrario, se convertirá a estéreo."
#define OPTION_VAL_MONO_ES "Monoaural"
#define OPTION_VAL_STEREO_ES "Estéreo"
#define OPTION_VAL_SURROUND_ES "5.1 Surround"
#define CEMU_ACCOUNT_LABEL_ES "Cuenta activa (es necesario reiniciar)"
#define CEMU_ACCOUNT_INFO_0_ES "Indica la cuenta de Wii U con la que se ejecutará el juego, con sus datos guardados y Mii correspondientes. Esta lista mostrará todas las cuentas del directorio de cuentas.\n\nEl título se esté ejecutando seguirá guardando información en la cuenta con la que se haya ejecutado."
#define CEMU_CREATE_ACCOUNT_LABEL_ES "Crear cuenta"
#define CEMU_CREATE_ACCOUNT_INFO_0_ES "Crea una cuenta nueva llamada Jugador 2, Jugador 3, etcétera; y la asigna como cuenta activa. Tras crear dicha cuenta, esta opción volverá a desactivarse. La cuenta nueva aparecerá en la lista de cuentas una vez hayas salido y vuelto a entrar a este menú. Una consola puede tener hasta 12 cuentas."
#define CEMU_RENAME_ACCOUNT_LABEL_ES "Cambiar nombre de cuenta activa"
#define CEMU_RENAME_ACCOUNT_INFO_0_ES "Abre la pantalla de introducción de nombre de la cuenta activa una vez hayas salido de este menú y luego desactiva esta opción. El nombre se mostrará como una notificación superpuesta al juego, así que es necesario tener activadas las notificaciones en pantalla del front-end.\n\nCon mando: Arriba/Abajo cambian el último carácter, Derecha añade uno, Izquierda quita uno, START acepta y SELECT cancela.\n\nCon teclado: escribe con las teclas, Retroceso quita el último carácter, Intro acepta, Esc cancela (es posible que el front-end necesite que la prioridad al juego esté activada para transmitir las pulsaciones al núcleo).\n\nUn nombre puede tener hasta 10 caracteres. El juego no recibirá pulsaciones hasta que se termine de introducir un nombre, un juego que se esté ejecutando mostrará el nombre nuevo cuando se haya reiniciado."
#define CEMU_REMOVE_ACCOUNT_LABEL_ES "Eliminar cuenta"
#define CEMU_REMOVE_ACCOUNT_INFO_0_ES "Elimina la cuenta seleccionada del directorio de cuentas (saves/Cemu/mlc01/usr/save/system/act) tal y como eliminaría un usuario la consola en cuanto salgas de este menú. La opción se volverá a mostrar como desactivada cuando vuelvas a este menú.\n\nNo se pueden eliminar ni la cuenta activa ni la cuenta con la que se ha iniciado el juego que esté ejecutándose hasta que se haya cerrado el mismo.\n\nADVERTENCIA: si eliminas una cuenta, perderás también las partidas que hayas guardado en todos los juegos con dicha cuenta. Haz copias de seguridad de todas las partidas que quieras conservar antes de eliminar su cuenta."
#define CEMU_GPU_API_LABEL_ES "API de gráficos"
#define CEMU_GPU_API_INFO_0_ES "La API de gráficos que utilizará Cemu para renderizar."
#define OPTION_VAL_OPENGL_ES NULL
#define OPTION_VAL_VULKAN_ES NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_ES "Shaders precompilados (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_ES "Utiliza una caché de programas de shaders (sombreados) compliados. El valor automático utilizará el perfil del juego si existe, como haría la aplicación independiente, en caso contrario esta opción se desactivará en GPU de Nvidia, donde el controlador ya tiene una caché propia, y se mantendrá activada en el resto de casos."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_ES "Compilación asincrónica de shaders (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_ES "Multiplicación precisa de shaders"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_ES "Emula las multiplicaciones dentro de la GPU de forma exacta, necesarias para la mayoría de juegos. El valor automático utilizará el perfil del juego si existe, como haría la aplicación independiente (Super Mario 3D World, Captain Toad y Xenoblade Chronicles X la desactivarán), en caso contrario, esta opción se mantendrá activada."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_ES "Sincronización de GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_ES "Cuando la GPU invoque GX2DrawDonw, obliga al juego a que espere hasta que haya terminado todas sus tareas, como haría la aplicación independiente con la opción Sincronización completa en GX2DrawDone. Algunos juegos necesitan este comportamiento para mostrarse correctamente, desactivar esta opción podría ser más rápido. Esta opción puede cambiarse durante una partida."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_ES "Barreras precisas (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_ES "Mantiene la sincronización entre dibujados que es necesaria para que algunos juegos se rendericen correctamente, tal y como haría la opción con el mismo nombre de la aplicación independiente. Desactiva esta opción para aumentar la velocidad mostrando defectos gráficos en dichos juegos. Esta opción puede cambiarse durante una partida."
#define CEMU_RUMBLE_STRENGTH_LABEL_ES "Intensidad de vibración"
#define CEMU_RUMBLE_STRENGTH_INFO_0_ES "Establece la fuerza con la que vibrará el mando cuando lo ordene el juego: la del motor del GamePad y la del mando de Wii o el mando Pro. Si desactivas esta opción, el front-end no transmitirá ninguna señal de vibración."
#define OPTION_VAL_10_ES "10 %"
#define OPTION_VAL_20_ES "20 %"
#define OPTION_VAL_30_ES "30 %"
#define OPTION_VAL_40_ES "40 %"
#define OPTION_VAL_50_ES "50 %"
#define OPTION_VAL_60_ES "60 %"
#define OPTION_VAL_70_ES "70 %"
#define OPTION_VAL_80_ES "80 %"
#define OPTION_VAL_90_ES "90 %"
#define OPTION_VAL_100_ES "100 %"
#define CEMU_GAMEPAD_MOTION_LABEL_ES "Movimientos del GamePad"
#define CEMU_GAMEPAD_MOTION_INFO_0_ES "Asigna el giroscopio y acelerómetro del GamePad a los sensores que leerá el RetroPad del puerto 1: los de un smartphone o tablet por un lado, o los de un mando que pueda reconocer el controlador de entrada de RetroArch por el otro (DualShock 4, DualSense, entre otros). Necesario para juegos en los que se apunte o conduzca con el GamePad. Desactiva esta opción para que el GamePad se quede quieto, desactivando sus movimientos."
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
#define CEMU_INSTALL_GAME_LABEL_ES "Instalar juegos"
#define CEMU_INSTALL_GAME_INFO_0_ES "Instala todos los juegos del directorio de origen (system/Cemu/titles), subcarpetas incluidas, en el almacenamiento emulado de Wii U (saves/Cemu/mlc01/usr/title/00050000), como haría la consola al instalar un juego desde su disco. Un juego es una imagen de disco (en formato .wud, .wux o .iso) o un archivo .wua, también se instalarán las actualizaciones y contenidos descargables que incluyan los archivos .wua. Una imagen de disco encriptada (.wud, .wux) necesitará su clave de disco: debe ser un archivo con su mismo nombre pero con la extensión .key (juego.wux, juego.key) y situarse en la misma carpeta de la imagen o en system/Cemu/keys.txt. o Si ya existe una versión idéntica o superior, no se hará ningún cambio.\n\nAl activar esta opción la instalación comenzará inmediatamente, su progreso se mostrará en una notificación y la opción se volverá a desactivar en cuanto se hayan instalado todos los juegos, hayas salido de este menú o hayas cambiado otra opción. El juego instalado se podrá ejecutar cargando el archivo .rpx de su carpeta code y la imagen de disco ya no será necesaria."
#define CEMU_UNINSTALL_GAME_LABEL_ES "Desinstalar juegos"
#define CEMU_UNINSTALL_GAME_INFO_0_ES "Desinstala el juego que se esté ejecutando, así como todas sus actualizaciones y contenidos descargables, del directorio de instalación (saves/Cemu/mlc01/usr/title) cuando se cierre o reinicie el juego; esta opción se mantendrá activada hasta entonces. No se tocarán los datos guardados para el ID de título del juego (saves/Cemu/mlc01/usr/save/<id de título>)."
#define CEMU_INSTALL_TITLES_LABEL_ES "Instalar contenidos"
#define CEMU_INSTALL_TITLES_INFO_0_ES "Instala todas las actualizaciones y contenidos descargables (DLC) del directorio de origen (system/Cemu/titles), subcarpetas incluidas, en el directorio de instalación (saves/Cemu/mlc01/usr/title). Cada elemento tendrá una carpeta propia en el directorio de origen, una descarga en formato NUS (archivos .app) necesitará sus archivos title.tmd, title.tlk y la clave de desencriptado en la misma carpeta. Si ya existe una versión idéntica o superior, no se hará ningún cambio.\n\nAl activar esta opción la instalación comenzará inmediatamente, su progreso se mostrará en una notificación y la opción se volverá a desactivar en cuanto se hayan instalado todos los contenidos, abandones este menú o cambies otra opción. El juego utilizará los contenidos instalados una vez se reinicie.\n\nLos contenidos ubicados en otros sitios pueden instalarse dentro del menú principal de RetroArch > Cargar contenido y luego seleccionando el archivo title.tmd (acompañado de su title.tik)."
#define CEMU_UNINSTALL_TITLES_LABEL_ES "Desinstalar contenidos"
#define CEMU_UNINSTALL_TITLES_INFO_0_ES "Desinstala las actualizaciones y contenidos descargables del juego que se esté ejecutando ubicadas en el directorio de instalación (saves/Cemu/mlc01/usr/title) cuando se cierre o reinicie el juego; esta opción se mantendrá activada hasta terminar el proceso. No se tocarán las copias guardadas en el directorio de origen (system/Cemu/titles)."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_ES "Eliminar archivos tras su instalación"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_ES "Elimina los datos instalados con las opciones Instalar juegos e Instalar contenido del directorio de origen (system/Cemu/titles): la carpeta con una actualización o con contenidos descargables una vez se hayan instalado y una imagen de disco (con su archivo .key) o un archivo .wua cuando se hayan instalado todos sus contenidos. Los archivos que esté usando el juego en ejecución se eliminarán cuando se cierre o reinicie el juego.\n\nADVERTENCIA: se eliminarán de forma permanente los archivos que se encuentren en el directorio de origen. Este directorio es administrado por el núcleo, guarda los archivos que quieras conservar en otra parte."
#define CEMU_WUA_OUTPUT_DIR_LABEL_ES "Directorio de salida"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_ES "Indica dónde se escribirá el archivo .wua. Es necesario que haya espacio suficiente en memoria."
#define CEMU_CONVERT_TO_WUA_LABEL_ES "Iniciar conversión a WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_ES "Escribe el título en el directorio de salida en formato .wua. El emulador seguirá ejecutándose durante el proceso."
#define CEMU_INTERNAL_RESOLUTION_LABEL_ES "Resolución interna (es necesario reiniciar)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_ES "Una alternativa genérica para aquellos juegos que no tengan paquetes de gráficos para resoluciones: reescala todos los objetivos de renderizado con forma de pantalla, usados por algunos juegos en cosas que fallan al ser reescaladas. El valor es un múltiplo de la resolución interna del juego: si el juego se muestra a 720p, × 0,5 la reducirá a 640 × 360, una cuarta parte de los píxeles, y un valor de × 2 la duplicaría a 2560 × 1440; en el caso de un juego mostrado a 1080p, x 160 reducirá su resolución a 960 × 540. Cuando se active un paquete de resolución para el juego cargado (un paquete de gráficos), el paquete establecerá una resolución concreta."
#define OPTION_VAL_0_25X_ES "× 0,25 (320 × 180 a 720p)"
#define OPTION_VAL_0_5X_ES "× 0,5 (640 × 360 a 720p)"
#define OPTION_VAL_0_75X_ES "× 0,75 (960 × 540 a 720p)"
#define OPTION_VAL_NATIVE_ES "Nativa"
#define OPTION_VAL_1_5X_ES "× 1,5 (1920 × 1080 a 720p)"
#define OPTION_VAL_2X_ES "× 2 (2560 × 1440 a 720p)"
#define OPTION_VAL_3X_ES "× 3 (3840 × 2160 a 720p)"
#define CEMU_RENDER_AHEAD_LABEL_ES "Renderizar un fotograma por adelantado"
#define CEMU_RENDER_AHEAD_INFO_0_ES "Permite que Cemu empiece a dibujar el siguiente fotograma mientras RetroArch muestra el anterior, tal y como hace la versión independiente de Cemu. Ofrece una mayor fluidez en aquellos casos en los que los fotogramas tardan la mayor parte de su duración en renderizarse, añadiendo un fotograma más de latencia de entrada."
#define CEMU_AUDIO_THREAD_LABEL_ES "Hilo para audio (es necesario reiniciar)"
#define CEMU_AUDIO_THREAD_INFO_0_ES "Activa esta opción para que RetroArch procese el audio en un subproceso independiente y para que el audio del Wii U se ejecute al momento, tal y como haría la versión independiente de Cemu, para que no falle cuando se retrase un fotograma (por cargas o compilación de shaders). La sincronización de audio de RetroArch dejará de marcar el ritmo de los fotogramas y pasará a hacerlo la sincronización vertical, lo que mantendrá en blanco las estadísticas de audio de RetroArch. Desactiva esta opción para enviar audio con cada fotograma."
#define CEMU_BC1_16BIT_LABEL_ES "Reducir memoria de texturas BC1 (es necesario reiniciar)"
#define CEMU_BC1_16BIT_INFO_0_ES "Reduce a la mitad el coste de las texturas BC1 en aquellas GPU que no puedan leer el formato BC a costa de perder un bit de verde. Esta opción no surtirá efecto si el formato BC es compatible."
#define CEMU_SHOW_GAME_FPS_LABEL_ES "Mostrar FPS del juego"
#define CEMU_SHOW_GAME_FPS_INFO_0_ES "Muestra la velocidad de fotogramas con la que se renderiza el juego dentro de la interfaz en pantalla de RetroArch, actualizada una vez por segundo."
#define CEMU_LOG_TO_FILE_LABEL_ES "Escribir registro de Cemu en log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_ES "Registrar acceso a archivos (depuración)"
#define CEMU_LOG_THREAD_SYNC_LABEL_ES "Registrar sincronización de hilos de CPU (depuración)"
#define CEMU_LOG_SYSTEM_API_LABEL_ES "Registrar llamadas a API del sistema (depuración)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_ES "Registrar memoria de texturas (depuración)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_ES "Informa de la cantidad de memoria de texturas en formato BC que ha tenido que ser descomprimida porque la GPU no puede leer sus muestras."
#define CEMU_LOG_INPUT_API_LABEL_ES "Registrar llamadas a API de mando (depuración)"
#define CEMU_LOG_INPUT_API_INFO_0_ES "Registra todas las llamadas que hace un título a los mandos: qué mandos ha sondeado y qué ha recibido de vuelta. Es muy molesto; se muestra durante varios segundos."
#define CEMU_LOG_AUDIO_LABEL_ES "Registrar ritmo de audio y de fotogramas (depuración)"
#define CEMU_LOG_AUDIO_INFO_0_ES "Registra una vez por segundo cuántas muestras ha producido el AX, cuantas pérdidas ha sufrido el anillo y cuántas ha sufrido el front-end, así como cuántas veces ha ejecutado el front-end al núcleo, cuántos fotogramas ha acabado el título y dónde se ha dedicado el tiempo (a esperar al hilo de la CPU, a presentar, al audio). Sirve para identificar si un juego está ralentizándose debido a la CPU emulada, la GPU o el front-end."
#define CEMU_LOG_THREAD_TIME_LABEL_ES "Registrar duración de hilos de CPU (depuración)"
#define CEMU_LOG_THREAD_TIME_INFO_0_ES "Registra una vez por segundo la ocupación de cada hilo emulado del PowerPC, de la GPU y del front-end en porcentajes por cada núcleo del equipo. Un hilo cuyo porcentaje esté muy cerca del 100 % será el hilo al que esté esperando un juego ralentizado."
#define CEMU_DUMP_SHADERS_LABEL_ES "Volcar shaders (depuración)"
#define CEMU_DUMP_SHADERS_INFO_0_ES "Escribe el origen de todos los shaders usados por un juego en system/Cemu/dump/shaders, nombrándolos con sus hashes tal y como aparezcan en el archivo log.txt. Utiliza esta opción cuando quieras informar de un shader que falle o que se muestre erróneamente en una GPU concreta. Ralentizará la compilación de shaders y llenará rápidamente la carpeta, así que desactiva esta opción en cuanto hayas acabado."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ES "Emular Portal de Poder de Skylanders (es necesario reiniciar)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_ES "Emular base de Infinity (es necesario reiniciar)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ES "Emular Toy Pad de Dimensions (es necesario reiniciar)"

struct retro_core_option_v2_category option_cats_es[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_ES, CATEGORY_SYSTEM_INFO_0_ES },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_ES, CATEGORY_GRAPHICS_INFO_0_ES },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_ES, CATEGORY_CONTROLLER_INFO_0_ES },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_ES, CATEGORY_TITLE_MANAGER_INFO_0_ES },
	{ "core", CATEGORY_CORE_LABEL_ES, CATEGORY_CORE_INFO_0_ES },
	{ "logging", CATEGORY_LOGGING_LABEL_ES, CATEGORY_LOGGING_INFO_0_ES },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_ES, CATEGORY_GRAPHIC_PACKS_INFO_0_ES },
	{ "cheats", CATEGORY_CHEATS_LABEL_ES, CATEGORY_CHEATS_INFO_0_ES },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_ES,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_ES,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_ES },
			{ "stereo", OPTION_VAL_STEREO_ES },
			{ "surround", OPTION_VAL_SURROUND_ES },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_ES,
		NULL,
		CEMU_ACCOUNT_INFO_0_ES,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_ES,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_ES,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_ES },
			{ "Vulkan", OPTION_VAL_VULKAN_ES },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_ES,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_ES,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_ES },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_ES,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_ES,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_ES,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_ES },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_ES,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_ES,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_ES,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_ES,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_ES,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_ES,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_ES },
			{ "20", OPTION_VAL_20_ES },
			{ "30", OPTION_VAL_30_ES },
			{ "40", OPTION_VAL_40_ES },
			{ "50", OPTION_VAL_50_ES },
			{ "60", OPTION_VAL_60_ES },
			{ "70", OPTION_VAL_70_ES },
			{ "80", OPTION_VAL_80_ES },
			{ "90", OPTION_VAL_90_ES },
			{ "100", OPTION_VAL_100_ES },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_ES,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_ES,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_ES },
			{ "swapped", OPTION_VAL_SWAPPED_ES },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_ES,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_ES,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_ES,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_ES,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_ES,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_ES,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_ES,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_ES,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_ES,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_ES,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ES,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_FA "سیستم"
#define CATEGORY_SYSTEM_INFO_0_FA NULL
#define CATEGORY_GRAPHICS_LABEL_FA NULL
#define CATEGORY_GRAPHICS_INFO_0_FA NULL
#define CATEGORY_CONTROLLER_LABEL_FA "دستهٔ بازی"
#define CATEGORY_CONTROLLER_INFO_0_FA NULL
#define CATEGORY_TITLE_MANAGER_LABEL_FA NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_FA NULL
#define CATEGORY_CORE_LABEL_FA "هسته"
#define CATEGORY_CORE_INFO_0_FA NULL
#define CATEGORY_LOGGING_LABEL_FA "ثبت گزارش‌ها"
#define CATEGORY_LOGGING_INFO_0_FA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_FA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FA NULL
#define CATEGORY_CHEATS_LABEL_FA NULL
#define CATEGORY_CHEATS_INFO_0_FA NULL
#define CEMU_CPU_MODE_LABEL_FA NULL
#define CEMU_CPU_MODE_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA "خودکار"
#define OPTION_VAL_SINGLECORE_INTERPRETER_FA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_FA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_FA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_FA NULL
#define CEMU_THREAD_QUANTUM_LABEL_FA NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_FA NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_FA NULL
#define OPTION_VAL_MONO_FA NULL
#define OPTION_VAL_STEREO_FA NULL
#define OPTION_VAL_SURROUND_FA NULL
#define CEMU_ACCOUNT_LABEL_FA NULL
#define CEMU_ACCOUNT_INFO_0_FA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_FA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_FA NULL
#define CEMU_RENAME_ACCOUNT_LABEL_FA NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_FA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_FA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_FA NULL
#define CEMU_GPU_API_LABEL_FA NULL
#define CEMU_GPU_API_INFO_0_FA NULL
#define OPTION_VAL_OPENGL_FA NULL
#define OPTION_VAL_VULKAN_FA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_FA NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_FA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FA NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_FA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FA NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_FA NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_FA NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_FA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_FA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_FA NULL
#define OPTION_VAL_10_FA NULL
#define OPTION_VAL_20_FA NULL
#define OPTION_VAL_30_FA NULL
#define OPTION_VAL_40_FA NULL
#define OPTION_VAL_50_FA NULL
#define OPTION_VAL_60_FA NULL
#define OPTION_VAL_70_FA NULL
#define OPTION_VAL_80_FA NULL
#define OPTION_VAL_90_FA NULL
#define OPTION_VAL_100_FA NULL
#define CEMU_GAMEPAD_MOTION_LABEL_FA NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_FA NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_FA NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FA NULL
#define OPTION_VAL_0_25X_FA NULL
#define OPTION_VAL_0_5X_FA NULL
#define OPTION_VAL_0_75X_FA NULL
#define OPTION_VAL_NATIVE_FA NULL
#define OPTION_VAL_1_5X_FA NULL
#define OPTION_VAL_2X_FA NULL
#define OPTION_VAL_3X_FA NULL
#define CEMU_RENDER_AHEAD_LABEL_FA NULL
#define CEMU_RENDER_AHEAD_INFO_0_FA NULL
#define CEMU_AUDIO_THREAD_LABEL_FA NULL
#define CEMU_AUDIO_THREAD_INFO_0_FA NULL
#define CEMU_BC1_16BIT_LABEL_FA NULL
#define CEMU_BC1_16BIT_INFO_0_FA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_FA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_FA NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_FA, CATEGORY_SYSTEM_INFO_0_FA },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_FA, CATEGORY_GRAPHICS_INFO_0_FA },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_FA, CATEGORY_CONTROLLER_INFO_0_FA },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_FA, CATEGORY_TITLE_MANAGER_INFO_0_FA },
	{ "core", CATEGORY_CORE_LABEL_FA, CATEGORY_CORE_INFO_0_FA },
	{ "logging", CATEGORY_LOGGING_LABEL_FA, CATEGORY_LOGGING_INFO_0_FA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FA, CATEGORY_GRAPHIC_PACKS_INFO_0_FA },
	{ "cheats", CATEGORY_CHEATS_LABEL_FA, CATEGORY_CHEATS_INFO_0_FA },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_FA,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_FA,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_FA },
			{ "stereo", OPTION_VAL_STEREO_FA },
			{ "surround", OPTION_VAL_SURROUND_FA },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FA,
		NULL,
		CEMU_ACCOUNT_INFO_0_FA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_FA,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_FA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FA },
			{ "Vulkan", OPTION_VAL_VULKAN_FA },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FA,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_FA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FA,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FA,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_FA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FA,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_FA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_FA,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_FA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FA,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_FA },
			{ "20", OPTION_VAL_20_FA },
			{ "30", OPTION_VAL_30_FA },
			{ "40", OPTION_VAL_40_FA },
			{ "50", OPTION_VAL_50_FA },
			{ "60", OPTION_VAL_60_FA },
			{ "70", OPTION_VAL_70_FA },
			{ "80", OPTION_VAL_80_FA },
			{ "90", OPTION_VAL_90_FA },
			{ "100", OPTION_VAL_100_FA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_FA,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_FA,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_FA },
			{ "swapped", OPTION_VAL_SWAPPED_FA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FA,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FA,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_FA,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_FA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_FA,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_FA,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FA,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_FI "Järjestelmä"
#define CATEGORY_SYSTEM_INFO_0_FI NULL
#define CATEGORY_GRAPHICS_LABEL_FI NULL
#define CATEGORY_GRAPHICS_INFO_0_FI NULL
#define CATEGORY_CONTROLLER_LABEL_FI "Ohjain"
#define CATEGORY_CONTROLLER_INFO_0_FI NULL
#define CATEGORY_TITLE_MANAGER_LABEL_FI NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_FI NULL
#define CATEGORY_CORE_LABEL_FI "Ydin"
#define CATEGORY_CORE_INFO_0_FI NULL
#define CATEGORY_LOGGING_LABEL_FI "Lokiin kirjaus"
#define CATEGORY_LOGGING_INFO_0_FI NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_FI NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FI NULL
#define CATEGORY_CHEATS_LABEL_FI NULL
#define CATEGORY_CHEATS_INFO_0_FI NULL
#define CEMU_CPU_MODE_LABEL_FI NULL
#define CEMU_CPU_MODE_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_SINGLECORE_INTERPRETER_FI NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_FI NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_FI NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_FI NULL
#define CEMU_THREAD_QUANTUM_LABEL_FI NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_FI NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_FI NULL
#define OPTION_VAL_MONO_FI NULL
#define OPTION_VAL_STEREO_FI NULL
#define OPTION_VAL_SURROUND_FI NULL
#define CEMU_ACCOUNT_LABEL_FI NULL
#define CEMU_ACCOUNT_INFO_0_FI NULL
#define CEMU_CREATE_ACCOUNT_LABEL_FI NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_FI NULL
#define CEMU_RENAME_ACCOUNT_LABEL_FI NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_FI NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_FI NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_FI NULL
#define CEMU_GPU_API_LABEL_FI NULL
#define CEMU_GPU_API_INFO_0_FI NULL
#define OPTION_VAL_OPENGL_FI NULL
#define OPTION_VAL_VULKAN_FI NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_FI NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_FI NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FI NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FI NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_FI NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FI NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_FI NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_FI NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_FI NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_FI NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_FI NULL
#define OPTION_VAL_10_FI NULL
#define OPTION_VAL_20_FI "20 %"
#define OPTION_VAL_30_FI "30 %"
#define OPTION_VAL_40_FI "40 %"
#define OPTION_VAL_50_FI "50 %"
#define OPTION_VAL_60_FI "60 %"
#define OPTION_VAL_70_FI "70 %"
#define OPTION_VAL_80_FI "80 %"
#define OPTION_VAL_90_FI "90 %"
#define OPTION_VAL_100_FI "100 %"
#define CEMU_GAMEPAD_MOTION_LABEL_FI NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_FI NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_FI NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FI NULL
#define OPTION_VAL_0_25X_FI NULL
#define OPTION_VAL_0_5X_FI NULL
#define OPTION_VAL_0_75X_FI NULL
#define OPTION_VAL_NATIVE_FI "Natiivi"
#define OPTION_VAL_1_5X_FI NULL
#define OPTION_VAL_2X_FI NULL
#define OPTION_VAL_3X_FI NULL
#define CEMU_RENDER_AHEAD_LABEL_FI NULL
#define CEMU_RENDER_AHEAD_INFO_0_FI NULL
#define CEMU_AUDIO_THREAD_LABEL_FI NULL
#define CEMU_AUDIO_THREAD_INFO_0_FI NULL
#define CEMU_BC1_16BIT_LABEL_FI NULL
#define CEMU_BC1_16BIT_INFO_0_FI NULL
#define CEMU_SHOW_GAME_FPS_LABEL_FI NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_FI NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FI NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FI NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_FI, CATEGORY_SYSTEM_INFO_0_FI },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_FI, CATEGORY_GRAPHICS_INFO_0_FI },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_FI, CATEGORY_CONTROLLER_INFO_0_FI },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_FI, CATEGORY_TITLE_MANAGER_INFO_0_FI },
	{ "core", CATEGORY_CORE_LABEL_FI, CATEGORY_CORE_INFO_0_FI },
	{ "logging", CATEGORY_LOGGING_LABEL_FI, CATEGORY_LOGGING_INFO_0_FI },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FI, CATEGORY_GRAPHIC_PACKS_INFO_0_FI },
	{ "cheats", CATEGORY_CHEATS_LABEL_FI, CATEGORY_CHEATS_INFO_0_FI },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_FI,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_FI,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_FI },
			{ "stereo", OPTION_VAL_STEREO_FI },
			{ "surround", OPTION_VAL_SURROUND_FI },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FI,
		NULL,
		CEMU_ACCOUNT_INFO_0_FI,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_FI,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_FI,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FI },
			{ "Vulkan", OPTION_VAL_VULKAN_FI },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FI,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_FI,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FI },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FI,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FI,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_FI,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FI },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FI,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_FI,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_FI,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_FI,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FI,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FI,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_FI },
			{ "20", OPTION_VAL_20_FI },
			{ "30", OPTION_VAL_30_FI },
			{ "40", OPTION_VAL_40_FI },
			{ "50", OPTION_VAL_50_FI },
			{ "60", OPTION_VAL_60_FI },
			{ "70", OPTION_VAL_70_FI },
			{ "80", OPTION_VAL_80_FI },
			{ "90", OPTION_VAL_90_FI },
			{ "100", OPTION_VAL_100_FI },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_FI,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_FI,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_FI },
			{ "swapped", OPTION_VAL_SWAPPED_FI },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FI,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FI,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FI,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FI,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_FI,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_FI,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_FI,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_FI,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FI,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FI,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FI,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_FR "Système"
#define CATEGORY_SYSTEM_INFO_0_FR NULL
#define CATEGORY_GRAPHICS_LABEL_FR NULL
#define CATEGORY_GRAPHICS_INFO_0_FR NULL
#define CATEGORY_CONTROLLER_LABEL_FR "Manettes "
#define CATEGORY_CONTROLLER_INFO_0_FR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_FR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_FR NULL
#define CATEGORY_CORE_LABEL_FR "Cœurs"
#define CATEGORY_CORE_INFO_0_FR NULL
#define CATEGORY_LOGGING_LABEL_FR "Journalisation"
#define CATEGORY_LOGGING_INFO_0_FR "Sortie de journal supplémentaire, pour le diagnostic de problèmes."
#define CATEGORY_GRAPHIC_PACKS_LABEL_FR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_FR NULL
#define CATEGORY_CHEATS_LABEL_FR NULL
#define CATEGORY_CHEATS_INFO_0_FR NULL
#define CEMU_CPU_MODE_LABEL_FR NULL
#define CEMU_CPU_MODE_INFO_0_FR NULL
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_FR "Interpréteur monocœur"
#define OPTION_VAL_SINGLECORE_RECOMPILER_FR "Recompilateur monocœur"
#define OPTION_VAL_MULTICORE_RECOMPILER_FR "Recompilateur multicœur"
#define OPTION_VAL_MULTICORE_INTERPRETER_FR "Interpréteur multicœur"
#define CEMU_THREAD_QUANTUM_LABEL_FR "Quantum de fil d'exécution"
#define CEMU_CONSOLE_LANGUAGE_LABEL_FR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_FR "Canaux audio (redémarrer)"
#define CEMU_AUDIO_CHANNELS_INFO_0_FR "La console signale au jeu les caractéristiques du téléviseur, selon le paramètre de sortie audio de la console elle-même ; les jeux compatibles effectuent alors le mixage pour le nombre d'enceintes correspondant. Le son surround 5.1 est transmis à RetroArch sous forme de six canaux lorsque la sortie audio multicanal est active, dans le cas contraire, il est mixé en stéréo."
#define OPTION_VAL_MONO_FR NULL
#define OPTION_VAL_STEREO_FR "Stéréo"
#define OPTION_VAL_SURROUND_FR NULL
#define CEMU_ACCOUNT_LABEL_FR NULL
#define CEMU_ACCOUNT_INFO_0_FR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_FR "Créer un compte"
#define CEMU_CREATE_ACCOUNT_INFO_0_FR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_FR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_FR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_FR "Supprimer le compte"
#define CEMU_REMOVE_ACCOUNT_INFO_0_FR "Supprime le compte sélectionné du dossier des comptes (saves/Cemu/mlc01/usr/save/system/act), tout comme le ferait la suppression d'un utilisateur sur la console, une fois ce menu quitté. L'option affiche à nouveau Désactivé au retour dans le menu.\n\nLe compte actif ne peut pas être supprimé, pas plus que le compte ayant servi à lancer le jeu en cours d'exécution, tant qu'il n'est pas fermé.\n\nATTENTION : la suppression d'un compte entraîne également la suppression définitive des sauvegardes associées à ce compte dans tous les jeux. Veuillez sauvegarder les données que vous souhaitez conserver avant de procéder à la suppression."
#define CEMU_GPU_API_LABEL_FR "API graphique"
#define CEMU_GPU_API_INFO_0_FR NULL
#define OPTION_VAL_OPENGL_FR NULL
#define OPTION_VAL_VULKAN_FR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_FR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_FR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_FR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_FR "Multiplication précise des shaders"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_FR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_FR "Synchronisation GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_FR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_FR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_FR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_FR "Force de la vibration"
#define CEMU_RUMBLE_STRENGTH_INFO_0_FR "L'intensité des vibrations de la manette lorsque le jeu les sollicite : qu'il s'agisse du moteur du GamePad, de celui de la télécommande Wii ou de celui de la manette Pro. Désactivée supprime toute vibration au niveau de l'interface."
#define OPTION_VAL_10_FR NULL
#define OPTION_VAL_20_FR "20 %"
#define OPTION_VAL_30_FR "30 %"
#define OPTION_VAL_40_FR "40 %"
#define OPTION_VAL_50_FR "50 %"
#define OPTION_VAL_60_FR "60 %"
#define OPTION_VAL_70_FR "70 %"
#define OPTION_VAL_80_FR "80 %"
#define OPTION_VAL_90_FR "90 %"
#define OPTION_VAL_100_FR "100 %"
#define CEMU_GAMEPAD_MOTION_LABEL_FR "Mouvement du GamePad"
#define CEMU_GAMEPAD_MOTION_INFO_0_FR "Le gyroscope et l'accéléromètre du GamePad depuis les capteurs de RetroArch se lisent sur le port 1 : ceux d'un téléphone ou d'une tablette, ou d'une manette où le pilote d'entrée de RetroArch les donne (DualShock 4, DualSense et autres). Les jeux visant ou dirigeant en inclinant le GamePad en ont besoin. Désactivé : le GemePad reste immobile, comme avec le mouvement désactivé dans la version autonome."
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
#define CEMU_INSTALL_GAME_LABEL_FR "Installer les jeux"
#define CEMU_INSTALL_GAME_INFO_0_FR "Installe tous les jeux présents dans le dossier source (system/Cemu/titles), sous-dossiers inclus, vers le dossoer des jeux installés de la Wii U émulée (saves/Cemu/mlc01/usr/title/00050000), reproduisant ainsi le processus d'installation d'un jeu depuis un disque sur la console. Un jeu peut se présenter sous la forme d'une image disque (.wud, .wux, .iso) ou d'un fichier .wua ; les mises à jour et les DLC contenus dans un fichier .wua sont installés en même temps que le jeu. Une image disque chiffrée (.wud, .wux) nécessite sa clé de disque, laquelle doit figurer soit dans un fichier adjacent portant le même nom et l'extension .key (ex. : game.wux et game.key), soit dans le fichier system/Cemu/keys.txt. Si un jeu est déjà installé dans une version identique ou plus récente, il n'est pas réinstallé.\n\nLorsque cette option est activée, l'installation démarre immédiatement et sa progression s'affiche sous forme de notification ; l'option se désactive automatiquement une fois tous les jeux installés, dès que l'on quitte ce menu ou que l'on modifie une autre option. Pour lancer un jeu installé, il faut charger le fichier .rpx situé dans le dossier code du répertoire des jeux installés ; l'image disque d'origine n'est alors plus nécessaire."
#define CEMU_UNINSTALL_GAME_LABEL_FR "Désinstaller le jeu"
#define CEMU_UNINSTALL_GAME_INFO_0_FR "Désinstalle le jeu en cours d'exécution ainsi que toutes les mises à jour de titre et tous les DLC associés depuis le répertoire d'installation (saves/Cemu/mlc01/usr/title) une fois le jeu fermé ou réinitialisé ; l'option reste activée jusqu'à ce moment-là. Les sauvegardes correspondant à l'ID du titre (saves/Cemu/mlc01/usr/save/<id titre>) ne sont pas supprimées."
#define CEMU_INSTALL_TITLES_LABEL_FR "Installer le contenu"
#define CEMU_INSTALL_TITLES_INFO_0_FR "Installe toutes les mises à jour de titre et tous les DLC depuis le dossier source (system/Cemu/titles), sous-dossiers inclus, vers le dossier d'installation (saves/Cemu/mlc01/usr/title). Chaque élément doit se trouver dans son propre dossier au sein du répertoire source ; un téléchargement NUS (fichiers .app) nécessite la présence des fichiers title.tmd et title.tik, contenant la clé de déchiffrement, à ses côtés. Si une version identique ou plus récente est déjà installée, elle n'est pas modifiée.\n\nLorsque cette option est activée, l'installation démarre immédiatement et sa progression s'affiche sous forme de notification ; l'option se désactive automatiquement une fois tout le contenu installé, dès que l'on quitte ce menu ou que l'on modifie un autre paramètre. Le jeu utilise le contenu installé une fois redémarré.\n\nIl est possible d'installer du contenu provenant d'autres emplacements via le menu principal de RetroArch > Charger du contenu, en sélectionnant le fichier title.tmd correspondant, à condition que le fichier title.tik soit présent à côté."
#define CEMU_UNINSTALL_TITLES_LABEL_FR "Désinstaller le contenu"
#define CEMU_UNINSTALL_TITLES_INFO_0_FR "Désinstalle la mise à jour du titre et les DLC du jeu en cours d'exécution depuis le dossier d'installation (saves/Cemu/mlc01/usr/title) une fois le jeu fermé ou réinitialisé ; l'option reste activée jusqu'à ce moment-là. Les copies présentes dans le dossier source (system/Cemu/titles) ne sont pas modifiées."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_FR "Supprimer les fichiers après l'installation"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_FR "Supprime du dossier source (system/Cemu/titles) les éléments installés via les fonctions Installer les jeux et Installer le contenu : le dossier d'une mise à jour de titre ou d'un DLC une fois installé, ainsi qu'une image disque (avec son fichier .key) ou un fichier .wua une fois tout son contenu installé. Les fichiers utilisés par le jeu en cours d'exécution sont supprimés lorsque celui-ci est fermé ou réinitialisé.\n\nATTENTION : cette opération supprime définitivement les fichiers du dossier source. Ce dossier est destiné à la gestion par le cœur ; conservez ailleurs les données de jeu que vous souhaitez archiver."
#define CEMU_WUA_OUTPUT_DIR_LABEL_FR "Dossier de sortie"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_FR "L'emplacement où le fichier .wua est écrit. Il faut prévoir de l'espace pour celui-ci."
#define CEMU_CONVERT_TO_WUA_LABEL_FR "Lancer la conversion vers WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_FR "Écrit le titre dans le dossier de sortie au format .wua. Il continue de fonctionner pendant que cela se produit."
#define CEMU_INTERNAL_RESOLUTION_LABEL_FR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_FR NULL
#define OPTION_VAL_0_25X_FR "x0,25 (320 x 180 à 720p)"
#define OPTION_VAL_0_5X_FR "x0,5 (640 x 360 à 720p)"
#define OPTION_VAL_0_75X_FR "x0,75 (960 x 540 à 720p)"
#define OPTION_VAL_NATIVE_FR NULL
#define OPTION_VAL_1_5X_FR "x1,5 (1920 x 1080 à 720p)"
#define OPTION_VAL_2X_FR "x2 (2560 x 1440 à 720p)"
#define OPTION_VAL_3X_FR "x3 (3840 x 2160 à 720p)"
#define CEMU_RENDER_AHEAD_LABEL_FR NULL
#define CEMU_RENDER_AHEAD_INFO_0_FR NULL
#define CEMU_AUDIO_THREAD_LABEL_FR NULL
#define CEMU_AUDIO_THREAD_INFO_0_FR NULL
#define CEMU_BC1_16BIT_LABEL_FR NULL
#define CEMU_BC1_16BIT_INFO_0_FR "Réduit de moitié le coût des textures BC1 sur un processeur graphique qui ne peut pas échantillonner BC, au prix d'un peu de vert. Aucun effet là où BC est pris en charge."
#define CEMU_SHOW_GAME_FPS_LABEL_FR "Afficher les images/s du jeu"
#define CEMU_SHOW_GAME_FPS_INFO_0_FR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_FR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_FR NULL

struct retro_core_option_v2_category option_cats_fr[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_FR, CATEGORY_SYSTEM_INFO_0_FR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_FR, CATEGORY_GRAPHICS_INFO_0_FR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_FR, CATEGORY_CONTROLLER_INFO_0_FR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_FR, CATEGORY_TITLE_MANAGER_INFO_0_FR },
	{ "core", CATEGORY_CORE_LABEL_FR, CATEGORY_CORE_INFO_0_FR },
	{ "logging", CATEGORY_LOGGING_LABEL_FR, CATEGORY_LOGGING_INFO_0_FR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_FR, CATEGORY_GRAPHIC_PACKS_INFO_0_FR },
	{ "cheats", CATEGORY_CHEATS_LABEL_FR, CATEGORY_CHEATS_INFO_0_FR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_FR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_FR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_FR },
			{ "stereo", OPTION_VAL_STEREO_FR },
			{ "surround", OPTION_VAL_SURROUND_FR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_FR,
		NULL,
		CEMU_ACCOUNT_INFO_0_FR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_FR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_FR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_FR },
			{ "Vulkan", OPTION_VAL_VULKAN_FR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_FR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_FR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_FR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_FR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_FR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_FR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_FR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_FR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_FR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_FR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_FR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_FR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_FR },
			{ "20", OPTION_VAL_20_FR },
			{ "30", OPTION_VAL_30_FR },
			{ "40", OPTION_VAL_40_FR },
			{ "50", OPTION_VAL_50_FR },
			{ "60", OPTION_VAL_60_FR },
			{ "70", OPTION_VAL_70_FR },
			{ "80", OPTION_VAL_80_FR },
			{ "90", OPTION_VAL_90_FR },
			{ "100", OPTION_VAL_100_FR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_FR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_FR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_FR },
			{ "swapped", OPTION_VAL_SWAPPED_FR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_FR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_FR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_FR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_FR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_FR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_FR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_FR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_FR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_FR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_FR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_FR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_GA "Córas"
#define CATEGORY_SYSTEM_INFO_0_GA "LAP, teanga, cainéil fuaime agus cuntais."
#define CATEGORY_GRAPHICS_LABEL_GA "Grafaicí (Atosaigh)"
#define CATEGORY_GRAPHICS_INFO_0_GA "API grafaicí agus scáthóirí. Cuirtear i bhfeidhm iad nuair a thosaítear an cluiche arís, mura ndeir an rogha a mhalairt."
#define CATEGORY_CONTROLLER_LABEL_GA "Rialaitheoir"
#define CATEGORY_CONTROLLER_INFO_0_GA "Creathadh, gluaiseacht, agus cén scáileán Wii U a thaispeántar, chomh maith leis an gcaoi a dtaispeántar é."
#define CATEGORY_TITLE_MANAGER_LABEL_GA "Bainisteoir Teideal"
#define CATEGORY_TITLE_MANAGER_INFO_0_GA "Suiteáil agus díshuiteáil cluichí, nuashonruithe teidil agus DLC in `saves/Cemu/mlc01` — stóras an chonsóil insamhailte — agus tiontaigh an teideal atá luchtaithe go formáid `.wua`."
#define CATEGORY_CORE_LABEL_GA "Croí"
#define CATEGORY_CORE_INFO_0_GA "Roghanna sa chroí seo nach bhfuil ar fáil sa leagan neamhspleách de Cemu."
#define CATEGORY_LOGGING_LABEL_GA "Logáil"
#define CATEGORY_LOGGING_INFO_0_GA "Aschur loga breise, chun fadhbanna a dhiagnóisiú."
#define CATEGORY_GRAPHIC_PACKS_LABEL_GA "Pacáistí Grafaicí (Atosaigh)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_GA "Pacáistí grafaicí an chluiche atá luchtaithe agus na réamhshocruithe a bhaineann leo. Téann do phacáistí féin, nó cóipeanna modhnaithe de na cinn atá ionsuite, isteach i system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_GA "Cleasanna (Atosaigh)"
#define CATEGORY_CHEATS_INFO_0_GA "Pacáistí cleas an chluiche atá luchtaithe, ó fhillteán na gcleas sna pacáistí grafaicí."
#define CEMU_CPU_MODE_LABEL_GA "Mód LAP (Atosaigh)"
#define CEMU_CPU_MODE_INFO_0_GA "An chaoi a ndéantar eamulú ar chroíthe PowerPC an Wii U. Auto: an modh atá sainithe i bpróifíl an chluiche (má tá ceann ann) mar shocrú neamhspleách; mura bhfuil, úsáidtear an t-aththiomsaitheoir ilchroí má tá ceithre chroí fhisiciúla nó níos mó ag an LAP, agus an t-aththiomsaitheoir aonchroí i gcásanna eile. Tá na léirmhínitheoirí i bhfad níos moille agus tá siad beartaithe chun críocha dífhabhtaithe."
#define OPTION_VAL_AUTO_GA "Uathoibríoch"
#define OPTION_VAL_SINGLECORE_INTERPRETER_GA "Léirmhínitheoir aonchroíleáin"
#define OPTION_VAL_SINGLECORE_RECOMPILER_GA "Aththiomsaitheoir Aonchroí"
#define OPTION_VAL_MULTICORE_RECOMPILER_GA "Athiompailteoir Ilchroí"
#define OPTION_VAL_MULTICORE_INTERPRETER_GA "Léirmhínitheoir Ilchroí"
#define CEMU_THREAD_QUANTUM_LABEL_GA "Snáithe Candamach"
#define CEMU_CONSOLE_LANGUAGE_LABEL_GA "Teanga an Chonsóil (Atosaigh)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_GA "Cainéil Fuaime (Atosaigh)"
#define CEMU_AUDIO_CHANNELS_INFO_0_GA "Cuireann an consól in iúl do na cluichí cén cineál teilifíse atá i gceist (amhail is gur teilifís neamhspleách í): déanann na cluichí a thacaíonn leis sin an fhuaim a chumasc don líon sin cainteoirí. Seoltar fuaim timpeallach 5.1 chuig RetroArch mar shé chainéal nuair a bhíonn aschur fuaime ilchainéil ar fáil; murach sin, déantar í a chumasc síos go steiréó."
#define OPTION_VAL_MONO_GA NULL
#define OPTION_VAL_STEREO_GA "Steiréó"
#define OPTION_VAL_SURROUND_GA "Fuaim thimpeallach 5.1"
#define CEMU_ACCOUNT_LABEL_GA "Cuntas Gníomhach (Atosaigh)"
#define CEMU_ACCOUNT_INFO_0_GA "An cuntas Wii U a úsáidtear chun an cluiche a reáchtáil; tá a shábháilchomhaid agus a Mii féin ag gach ceann acu. Is iad na cuntais atá i gclár na gcuntas atá sa liosta.\n\nGo dtí go gcuirfear tús leis an gcluiche arís, leanfaidh an cluiche atá ar siúl ag sábháil sonraí chuig an gcuntas ar cuireadh tús leis an gcluiche air ar dtús."
#define CEMU_CREATE_ACCOUNT_LABEL_GA "Cruthaigh Cuntas"
#define CEMU_CREATE_ACCOUNT_INFO_0_GA "Cruthaítear cuntas nua - darb ainm Player 2, Player 3, agus mar sin de - agus socraítear é mar an gcuntas gníomhach. Ina dhiaidh sin, filleann an socrú ar OFF. Beidh an cuntas nua le feiceáil sa liosta cuntas nuair a bheidh an roghchlár dúnta agus oscailte arís. Is féidir leis an gconsól suas le 12 chuntas a choinneáil."
#define CEMU_RENAME_ACCOUNT_LABEL_GA "Athainmnigh an Cuntas Gníomhach"
#define CEMU_RENAME_ACCOUNT_INFO_0_GA "Osclaíonn sé seo an iontráil ainm don chuntas gníomhach nuair a fhágtar an roghchlár seo, agus filleann sé ar AS. Taispeántar an t-ainm go dtí seo mar fhógra os cionn an chluiche, mar sin caithfidh fógraí ar an scáileán an tosaigh a bheith ar siúl.\n\nLe ceap: Suas agus Síos athraíonn an carachtar deireanach, cuireann Deas ceann leis, baintear Clé ceann, glacann Tosaigh, cealaíonn Roghnaigh.\n\nLe méarchlár: clóscríobh, baintear Cúlspás, glacann Iontráil, cealaíonn Éalú (b’fhéidir go mbeidh Fócas Cluiche ag teastáil ón tosaigh chun eochracha a thabhairt don chroílár).\n\nTá suas le 10 gcarachtar in ainm. Ní fhaigheann an cluiche aon ionchur go dtí go ndúnfar an iontráil, agus taispeánann cluiche atá ag rith an t-ainm nua a luaithe a thosaítear arís é."
#define CEMU_REMOVE_ACCOUNT_LABEL_GA "Bain an Cuntas"
#define CEMU_REMOVE_ACCOUNT_INFO_0_GA "Baintear an cuntas roghnaithe as eolaire na gcuntas (saves/Cemu/mlc01/usr/save/system/act) — díreach mar a tharlaíonn nuair a scriostar úsáideoir ar an gconsól — nuair a fhágtar an roghchlár seo. Taispeántar ‘OFF’ arís sa roghchlár nuair a fhilltear air.\n\nNí féidir an cuntas gníomhach a bhaint, ná an cuntas a úsáideadh chun an cluiche atá ar siúl faoi láthair a thosú, go dtí go ndúntar an cluiche sin.\n\nRABHADH: Má bhaintear cuntas, scriostar go buan freisin na comhaid sábhála a cruthaíodh faoin gcuntas sin i ngach cluiche. Déan cóip chúltaca d’aon chomhaid sábhála ar mhaith leat iad a choinneáil sula mbainfidh tú an cuntas."
#define CEMU_GPU_API_LABEL_GA "API Grafaice"
#define CEMU_GPU_API_INFO_0_GA "An API grafaicí a úsáideann Cemu chun rindreáil a dhéanamh."
#define OPTION_VAL_OPENGL_GA NULL
#define OPTION_VAL_VULKAN_GA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_GA "Scáthóirí Réamhthiomsaithe (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_GA "Taisce de chláir scáthaithe (shader programs) tiomsaithe. Auto: an socrú atá i bpróifíl an chluiche (má tá ceann ann) mar shocrú neamhspleách; murach sin, bíonn sé múchta i gcás Nvidia (toisc go gcoinníonn a dtiománaí féin a thaisce féin), ach bíonn sé ar siúl i gcásanna eile."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_GA "Tiomsú Scáthaitheoirí Asincrónach (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_GA "Iolrú Cruinn Scáthóra"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_GA "Déanann sé aithris chruinn ar an iolrú a dhéanann an GPU, rud a bhíonn ag teastáil ón gcuid is mó de na cluichí. Auto: an socrú atá i bpróifíl an chluiche (má tá ceann ann), nó má ritheann an cluiche ina aonar (mar shampla, bíonn sé múchta i gcás Super Mario 3D World, Captain Toad agus Xenoblade Chronicles X); ar shlí eile, bíonn sé ar siúl."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_GA "Sioncrónú GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_GA "Cuireann sé iallach ar an gcluiche fanacht go dtí go mbeidh an obair ar fad críochnaithe ag an GPU gach uair a ghlaoitear GX2DrawDone — is ionann é seo agus 'sioncronú iomlán ag GX2DrawDone'. Teastaíonn sé seo ó chuid cluichí chun go dtaispeánfar iad i gceart; d’fhéadfadh sé a bheith níos tapúla má bhíonn sé múchta. Is féidir é a chur ar siúl nó a mhúchadh le linn an chluiche."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_GA "Bacainní Cruinne (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_GA "Coinníonn sé an sioncrónú idir tarraingtí a chaithfidh roinnt cluichí a dhéanamh chun iad a rindreáil i gceart, mar rogha neamhspleách den ainm sin. Is féidir le múchadh a bheith níos tapúla, le fabhtanna sna cluichí sin. Is féidir é a lascadh le linn an chluiche."
#define CEMU_RUMBLE_STRENGTH_LABEL_GA "Neart Rumble"
#define CEMU_RUMBLE_STRENGTH_INFO_0_GA "An déine a bhíonn ag baint le creathadh an rialaitheora nuair a iarrann an cluiche é: mótar an GamePad, agus mótar an Wii Remote nó an Pro Controller. Má roghnaítear 'As' (Off), ní sheoltar aon chreathadh chuig an gcomhéadan."
#define OPTION_VAL_10_GA NULL
#define OPTION_VAL_20_GA NULL
#define OPTION_VAL_30_GA NULL
#define OPTION_VAL_40_GA NULL
#define OPTION_VAL_50_GA NULL
#define OPTION_VAL_60_GA NULL
#define OPTION_VAL_70_GA NULL
#define OPTION_VAL_80_GA NULL
#define OPTION_VAL_90_GA NULL
#define OPTION_VAL_100_GA NULL
#define CEMU_GAMEPAD_MOTION_LABEL_GA "Gluaiseacht an GamePad"
#define CEMU_GAMEPAD_MOTION_INFO_0_GA "Baineann sé seo le gíreascóp agus luasghéaraitheoir an GamePad — na braiteoirí a léann RetroArch ar phort 1: cibé acu braiteoirí an fhóin nó an táibléid féin iad, nó braiteoirí rialaitheora a sholáthraíonn tiománaí ionchuir RetroArch (amhail DualShock 4, DualSense, agus eile). Bíonn gá leis seo i gcás cluichí ina ndéantar díriú nó stiúradh trí chlaonadh a dhéanamh ar an GamePad. As: fanann an GamePad ina stad, díreach mar a bhíonn nuair a bhíonn gné na gluaiseachta múchta i bhfeidhmchlár neamhspleách."
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
#define CEMU_INSTALL_GAME_LABEL_GA "Suiteáil Cluichí"
#define CEMU_INSTALL_GAME_INFO_0_GA "Déantar gach cluiche ón eolaire foinse (system/Cemu/titles) — lena n-áirítear fo-fhillteáin — a shuiteáil in eolaire na gcluichí suiteáilte den Wii U insamhlaithe (saves/Cemu/mlc01/usr/title/00050000), ar an gcaoi chéanna a shuiteálann an consól cluiche ó dhiosca. Is íomhá diosca (.wud, .wux, .iso) nó comhad .wua é an cluiche; déantar an nuashonrú teidil agus an DLC atá sa chomhad .wua a shuiteáil leis freisin. Teastaíonn eochair an diosca le haghaidh íomhá diosca criptithe (.wud, .wux): bíodh sí i gcomhad in aice leis an íomhá a bhfuil an t-ainm céanna air agus an síneadh .key aige (m.sh. game.wux, game.key), nó sa chomhad system/Cemu/keys.txt. Má tá an cluiche suiteáilte cheana féin (sa leagan céanna nó i leagan níos nuaí), ní dhéantar aon athrú air.\n\nNuair a bhíonn an ghné seo AR siúl, tosaíonn an tsuiteáil láithreach agus taispeántar an dul chun cinn mar fhógra; múchtar an ghné arís nuair a bhíonn gach cluiche suiteáilte agus nuair a fhágtar an roghchlár seo nó nuair a athraítear rogha eile. Cuirtear tús le cluiche suiteáilte tríd an gcomhad .rpx ina fhillteán cóid (san eolaire cluichí suiteáilte) a luchtú; ní bhíonn gá leis an íomhá diosca a thuilleadh."
#define CEMU_UNINSTALL_GAME_LABEL_GA "Díshuiteáil an Cluiche"
#define CEMU_UNINSTALL_GAME_INFO_0_GA "Baintear an cluiche atá á rith, chomh maith le gach nuashonrú teidil agus ábhar in-íoslódáilte (DLC) gaolmhar, ón eolaire suiteála (saves/Cemu/mlc01/usr/title) nuair a dhúntar nó nuair a athshocraítear an cluiche; fanann an rogha seo gníomhach go dtí sin. Ní bhaintear na comhaid sábhála a bhaineann le haitheantas teidil an chluiche (saves/Cemu/mlc01/usr/save/<title id>)."
#define CEMU_INSTALL_TITLES_LABEL_GA "Suiteáil Ábhar"
#define CEMU_INSTALL_TITLES_INFO_0_GA "Déantar gach nuashonrú teidil agus ábhar in-íoslódáilte (DLC) a shuiteáil ón eolaire foinse (system/Cemu/titles) — lena n-áirítear fo-fhillteáin — isteach san eolaire suiteála (saves/Cemu/mlc01/usr/title). Cuirtear gach ceann acu ina fhillteán féin san eolaire foinse; i gcás íoslódáil NUS (comhaid .app), ní mór an comhad title.tmd agus an comhad title.tik (an eochair dhíchriptithe) a bheith i láthair in aice leo. Má tá leagan den chlár suiteáilte cheana féin atá comhionann leis an leagan nua nó níos nuaí ná é, ní dhéantar aon athrú air.\n\nNuair a bhíonn an ghné seo gníomhach (ON), tosaíonn an tsuiteáil láithreach agus taispeántar an dul chun cinn mar fhógra; múchtar an ghné (OFF) nuair a bhíonn an t-ábhar ar fad suiteáilte agus nuair a fhágtar an roghchlár seo nó nuair a athraítear rogha eile. Úsáideann an cluiche an t-ábhar suiteáilte nuair a atosaítear é.\n\nIs féidir ábhar ó shuíomhanna eile a shuiteáil trí úsáid a bhaint as Príomh-Roghchlár RetroArch > Load Content, agus an comhad title.tmd cuí a roghnú agus an comhad title.tik ina aice."
#define CEMU_UNINSTALL_TITLES_LABEL_GA "Díshuiteáil Ábhar"
#define CEMU_UNINSTALL_TITLES_INFO_0_GA "Baintear nuashonrú teidil agus DLC an chluiche atá á imirt ón eolaire suiteála (saves/Cemu/mlc01/usr/title) nuair a dhéantar an cluiche a dhúnadh nó a athshocrú; fanann an rogha gníomhach go dtí sin. Ní dhéantar aon athrú ar na cóipeanna san eolaire foinse (system/Cemu/titles)."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_GA "Bain comhaid tar éis iad a shuiteáil"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_GA "Baintear den eolaire foinse (system/Cemu/titles) na nithe a shuiteáil 'Install Games' agus 'Install Content': fillteán nuashonrúcháin teidil nó DLC nuair a bhíonn sé suiteáilte, agus íomhá diosca (mar aon leis an gcomhad .wua nó .key a bhaineann léi) nuair a bhíonn gach rud atá inti suiteáilte. Baintear comhaid a bhíonn in úsáid ag an gcluiche atá ar siúl nuair a dhúntar nó nuair a athshocraítear é.\n\nRABHADH: baintear comhaid go buan den eolaire foinse leis seo. Is ag an gcroí-chóras atá sé an t-eolaire sin a bhainistiú; coinnigh sonraí cluiche ar mhaith leat iad a chartlannú in áit eile."
#define CEMU_WUA_OUTPUT_DIR_LABEL_GA "Eolaire Aschuir"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_GA "Áit a bhfuil an .wua scríofa. Teastaíonn spás dó."
#define CEMU_CONVERT_TO_WUA_LABEL_GA "Tosaigh an t-aistriú go WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_GA "Scríobhann sé an teideal chuig an eolaire aschuir mar chomhad .wua. Leanann sé air ag rith fad is atá sé seo ar siúl."
#define CEMU_INTERNAL_RESOLUTION_LABEL_GA "Réiteach Inmheánach (Atosaigh)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_GA "Cúlstop ginearálta do chluichí nach bhfuil pacáiste grafaicí réitigh acu: athraíonn sé méid gach sprice rindreála atá múnlaithe ar nós scáileáin — rud a úsáideann roinnt cluichí le haghaidh eilimintí a théann i mí-ord nuair a athraítear a méid. Iolra de réiteach bunaidh an chluiche: i gcás cluiche 720p, is ionann 0.5x agus 640x360 (ceathrú cuid de na picteilíní), agus is ionann 2x agus 2560x1440; i gcás cluiche 1080p, is ionann 0.5x agus 960x540. Nuair a bhíonn pacáiste réitigh cumasaithe don chluiche atá á rith (Pacáistí Grafaicí), is é an pacáiste sin a shocraíonn an réiteach."
#define OPTION_VAL_0_25X_GA "0.25x (320x180 ag 720p)"
#define OPTION_VAL_0_5X_GA "0.5x (640x360 ag 720p)"
#define OPTION_VAL_0_75X_GA "0.75x (960x540 ag 720p)"
#define OPTION_VAL_NATIVE_GA "Dúchasach"
#define OPTION_VAL_1_5X_GA "1.5x (1920x1080 ag 720p)"
#define OPTION_VAL_2X_GA "2x (2560x1440 ag 720p)"
#define OPTION_VAL_3X_GA "3x (3840x2160 ag 720p)"
#define CEMU_RENDER_AHEAD_LABEL_GA "Rindreáil Fráma Amháin Chun Tosaigh"
#define CEMU_RENDER_AHEAD_INFO_0_GA "Ligeann sé do Cemu tosú ag tarraingt an chéad fhráma eile agus taispeánann RetroArch an ceann deireanach, mar a dhéanann Cemu neamhspleách. Níos réidhe nuair a thógann frámaí an chuid is mó den am fráma le tarraingt, le moill ionchuir fráma amháin níos mó."
#define CEMU_AUDIO_THREAD_LABEL_GA "Snáithe Fuaime (Atosaigh)"
#define CEMU_AUDIO_THREAD_INFO_0_GA "Ar siúl: Láimhseálann RetroArch an fhuaim ar a shnáithe féin, agus ritheann fuaim an Wii U de réir an chloig, díreach mar a tharlaíonn i gcás Cemu ina aonar; dá bhrí sin, ní bhíonn briseadh sa bhfuaim má bhíonn moill ar fhráma (le linn luchtú nó tiomsú scáthaithe, mar shampla). Sa chás seo, ní rialaíonn gné sioncronaithe fuaime RetroArch luas na bhfrámaí a thuilleadh; is é an sioncronú ingearach a dhéanann amhlaidh, agus fanann staitisticí fuaime RetroArch folamh. Múchta: cuirtear an fhuaim ar aghaidh i gcomhthráth le gach fráma."
#define CEMU_BC1_16BIT_LABEL_GA "Laghdaigh Cuimhne Uigeachta BC1 (Atosaigh)"
#define CEMU_BC1_16BIT_INFO_0_GA "Laghdaítear go leith costas uigeachtaí BC1 ar GPU nach bhfuil in ann sampláil a dhéanamh ar BC, ar chostas giotán amháin den dath glas. Níl aon tionchar aige i gcásanna ina dtacaítear le BC."
#define CEMU_SHOW_GAME_FPS_LABEL_GA "Taispeáin FPS an chluiche"
#define CEMU_SHOW_GAME_FPS_INFO_0_GA "Taispeánann sé an ráta frámaí a úsáideann an cluiche le linn rindreála ar thaispeántas ar an scáileán de chuid RetroArch, uair sa soicind."
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
#define CEMU_LOG_THREAD_TIME_INFO_0_GA "Déantar tomhas gach soicind ar an méid oibre a bhí á dhéanamh ag snáithe gach croíleacáin PowerPC insamhlaithe, ag snáithe an GPU agus ag snáithe an chórais tosaigh (frontend), mar chuid de chroíleacán amháin den óstach. Is é an snáithe atá ag feidhmiú ag leibhéal gar do 100% ná an ceann a bhfuil cluiche mall ag fanacht leis."
#define CEMU_DUMP_SHADERS_LABEL_GA "Dumpáil Scáthóirí (dífhabhtú)"
#define CEMU_DUMP_SHADERS_INFO_0_GA "Scríobhann sé foinse gach *shader* a úsáideann an cluiche chuig `system/Cemu/dump/shaders`, agus ainmnítear iad de réir a gcuid *hash* mar a fheictear iad i `log.txt`. Úsáidtear é seo chun tuairisc a thabhairt ar *shader* a theipeann nó a tharraingítear go mícheart ar GPU áirithe. Moillíonn sé tiomsú na *shader* agus líonann sé an fillteán go tapa, mar sin déan é a mhúchadh arís ina dhiaidh sin."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GA "Aithris a dhéanamh ar Skylanders Portal of Power (Atosaigh)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_GA "Aithris a dhéanamh ar Infinity Base (Atosaigh)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GA "Aithris a dhéanamh ar an Toy Pad de chuid Dimensions (Atosaigh)"

struct retro_core_option_v2_category option_cats_ga[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_GA, CATEGORY_SYSTEM_INFO_0_GA },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_GA, CATEGORY_GRAPHICS_INFO_0_GA },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_GA, CATEGORY_CONTROLLER_INFO_0_GA },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_GA, CATEGORY_TITLE_MANAGER_INFO_0_GA },
	{ "core", CATEGORY_CORE_LABEL_GA, CATEGORY_CORE_INFO_0_GA },
	{ "logging", CATEGORY_LOGGING_LABEL_GA, CATEGORY_LOGGING_INFO_0_GA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_GA, CATEGORY_GRAPHIC_PACKS_INFO_0_GA },
	{ "cheats", CATEGORY_CHEATS_LABEL_GA, CATEGORY_CHEATS_INFO_0_GA },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_GA,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_GA,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_GA },
			{ "stereo", OPTION_VAL_STEREO_GA },
			{ "surround", OPTION_VAL_SURROUND_GA },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_GA,
		NULL,
		CEMU_ACCOUNT_INFO_0_GA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_GA,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_GA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_GA },
			{ "Vulkan", OPTION_VAL_VULKAN_GA },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_GA,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_GA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_GA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_GA,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_GA,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_GA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_GA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_GA,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_GA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_GA,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_GA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_GA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_GA,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_GA },
			{ "20", OPTION_VAL_20_GA },
			{ "30", OPTION_VAL_30_GA },
			{ "40", OPTION_VAL_40_GA },
			{ "50", OPTION_VAL_50_GA },
			{ "60", OPTION_VAL_60_GA },
			{ "70", OPTION_VAL_70_GA },
			{ "80", OPTION_VAL_80_GA },
			{ "90", OPTION_VAL_90_GA },
			{ "100", OPTION_VAL_100_GA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_GA,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_GA,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_GA },
			{ "swapped", OPTION_VAL_SWAPPED_GA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_GA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_GA,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_GA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_GA,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_GA,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_GA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_GA,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_GA,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_GA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_GA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GA,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_GL "Sistema"
#define CATEGORY_SYSTEM_INFO_0_GL NULL
#define CATEGORY_GRAPHICS_LABEL_GL NULL
#define CATEGORY_GRAPHICS_INFO_0_GL NULL
#define CATEGORY_CONTROLLER_LABEL_GL "Mando"
#define CATEGORY_CONTROLLER_INFO_0_GL NULL
#define CATEGORY_TITLE_MANAGER_LABEL_GL NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_GL NULL
#define CATEGORY_CORE_LABEL_GL "Núcleo"
#define CATEGORY_CORE_INFO_0_GL NULL
#define CATEGORY_LOGGING_LABEL_GL "Rexistro de eventos"
#define CATEGORY_LOGGING_INFO_0_GL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_GL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_GL NULL
#define CATEGORY_CHEATS_LABEL_GL NULL
#define CATEGORY_CHEATS_INFO_0_GL NULL
#define CEMU_CPU_MODE_LABEL_GL NULL
#define CEMU_CPU_MODE_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_GL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_GL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_GL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_GL NULL
#define CEMU_THREAD_QUANTUM_LABEL_GL NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_GL NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_GL NULL
#define OPTION_VAL_MONO_GL NULL
#define OPTION_VAL_STEREO_GL "Estéreo"
#define OPTION_VAL_SURROUND_GL NULL
#define CEMU_ACCOUNT_LABEL_GL NULL
#define CEMU_ACCOUNT_INFO_0_GL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_GL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_GL NULL
#define CEMU_RENAME_ACCOUNT_LABEL_GL NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_GL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_GL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_GL NULL
#define CEMU_GPU_API_LABEL_GL NULL
#define CEMU_GPU_API_INFO_0_GL NULL
#define OPTION_VAL_OPENGL_GL NULL
#define OPTION_VAL_VULKAN_GL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_GL NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_GL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_GL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_GL NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_GL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_GL NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_GL NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_GL NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_GL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_GL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_GL NULL
#define OPTION_VAL_10_GL NULL
#define OPTION_VAL_20_GL NULL
#define OPTION_VAL_30_GL NULL
#define OPTION_VAL_40_GL NULL
#define OPTION_VAL_50_GL NULL
#define OPTION_VAL_60_GL NULL
#define OPTION_VAL_70_GL NULL
#define OPTION_VAL_80_GL NULL
#define OPTION_VAL_90_GL NULL
#define OPTION_VAL_100_GL NULL
#define CEMU_GAMEPAD_MOTION_LABEL_GL NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_GL NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_GL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_GL NULL
#define OPTION_VAL_0_25X_GL NULL
#define OPTION_VAL_0_5X_GL NULL
#define OPTION_VAL_0_75X_GL NULL
#define OPTION_VAL_NATIVE_GL "Nativo"
#define OPTION_VAL_1_5X_GL NULL
#define OPTION_VAL_2X_GL NULL
#define OPTION_VAL_3X_GL NULL
#define CEMU_RENDER_AHEAD_LABEL_GL NULL
#define CEMU_RENDER_AHEAD_INFO_0_GL NULL
#define CEMU_AUDIO_THREAD_LABEL_GL NULL
#define CEMU_AUDIO_THREAD_INFO_0_GL NULL
#define CEMU_BC1_16BIT_LABEL_GL NULL
#define CEMU_BC1_16BIT_INFO_0_GL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_GL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_GL NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_GL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_GL, CATEGORY_SYSTEM_INFO_0_GL },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_GL, CATEGORY_GRAPHICS_INFO_0_GL },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_GL, CATEGORY_CONTROLLER_INFO_0_GL },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_GL, CATEGORY_TITLE_MANAGER_INFO_0_GL },
	{ "core", CATEGORY_CORE_LABEL_GL, CATEGORY_CORE_INFO_0_GL },
	{ "logging", CATEGORY_LOGGING_LABEL_GL, CATEGORY_LOGGING_INFO_0_GL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_GL, CATEGORY_GRAPHIC_PACKS_INFO_0_GL },
	{ "cheats", CATEGORY_CHEATS_LABEL_GL, CATEGORY_CHEATS_INFO_0_GL },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_GL,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_GL,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_GL },
			{ "stereo", OPTION_VAL_STEREO_GL },
			{ "surround", OPTION_VAL_SURROUND_GL },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_GL,
		NULL,
		CEMU_ACCOUNT_INFO_0_GL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_GL,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_GL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_GL },
			{ "Vulkan", OPTION_VAL_VULKAN_GL },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_GL,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_GL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_GL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_GL,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_GL,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_GL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_GL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_GL,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_GL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_GL,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_GL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_GL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_GL,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_GL },
			{ "20", OPTION_VAL_20_GL },
			{ "30", OPTION_VAL_30_GL },
			{ "40", OPTION_VAL_40_GL },
			{ "50", OPTION_VAL_50_GL },
			{ "60", OPTION_VAL_60_GL },
			{ "70", OPTION_VAL_70_GL },
			{ "80", OPTION_VAL_80_GL },
			{ "90", OPTION_VAL_90_GL },
			{ "100", OPTION_VAL_100_GL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_GL,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_GL,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_GL },
			{ "swapped", OPTION_VAL_SWAPPED_GL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_GL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_GL,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_GL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_GL,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_GL,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_GL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_GL,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_GL,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_GL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_GL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_GL,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_HE NULL
#define CATEGORY_SYSTEM_INFO_0_HE NULL
#define CATEGORY_GRAPHICS_LABEL_HE NULL
#define CATEGORY_GRAPHICS_INFO_0_HE NULL
#define CATEGORY_CONTROLLER_LABEL_HE "בקר משחק"
#define CATEGORY_CONTROLLER_INFO_0_HE NULL
#define CATEGORY_TITLE_MANAGER_LABEL_HE NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_HE NULL
#define CATEGORY_CORE_LABEL_HE "ליבה"
#define CATEGORY_CORE_INFO_0_HE NULL
#define CATEGORY_LOGGING_LABEL_HE "רישום"
#define CATEGORY_LOGGING_INFO_0_HE NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HE NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HE NULL
#define CATEGORY_CHEATS_LABEL_HE NULL
#define CATEGORY_CHEATS_INFO_0_HE NULL
#define CEMU_CPU_MODE_LABEL_HE NULL
#define CEMU_CPU_MODE_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_HE NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HE NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HE NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HE NULL
#define CEMU_THREAD_QUANTUM_LABEL_HE NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_HE NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_HE NULL
#define OPTION_VAL_MONO_HE NULL
#define OPTION_VAL_STEREO_HE NULL
#define OPTION_VAL_SURROUND_HE NULL
#define CEMU_ACCOUNT_LABEL_HE NULL
#define CEMU_ACCOUNT_INFO_0_HE NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HE NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HE NULL
#define CEMU_RENAME_ACCOUNT_LABEL_HE NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_HE NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HE NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HE NULL
#define CEMU_GPU_API_LABEL_HE NULL
#define CEMU_GPU_API_INFO_0_HE NULL
#define OPTION_VAL_OPENGL_HE NULL
#define OPTION_VAL_VULKAN_HE NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HE NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_HE NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HE NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HE NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_HE NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HE NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_HE NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_HE NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_HE NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HE NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HE NULL
#define OPTION_VAL_10_HE NULL
#define OPTION_VAL_20_HE NULL
#define OPTION_VAL_30_HE NULL
#define OPTION_VAL_40_HE NULL
#define OPTION_VAL_50_HE NULL
#define OPTION_VAL_60_HE NULL
#define OPTION_VAL_70_HE NULL
#define OPTION_VAL_80_HE NULL
#define OPTION_VAL_90_HE NULL
#define OPTION_VAL_100_HE NULL
#define CEMU_GAMEPAD_MOTION_LABEL_HE NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_HE NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_HE NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HE NULL
#define OPTION_VAL_0_25X_HE NULL
#define OPTION_VAL_0_5X_HE NULL
#define OPTION_VAL_0_75X_HE NULL
#define OPTION_VAL_NATIVE_HE NULL
#define OPTION_VAL_1_5X_HE NULL
#define OPTION_VAL_2X_HE NULL
#define OPTION_VAL_3X_HE NULL
#define CEMU_RENDER_AHEAD_LABEL_HE NULL
#define CEMU_RENDER_AHEAD_INFO_0_HE NULL
#define CEMU_AUDIO_THREAD_LABEL_HE NULL
#define CEMU_AUDIO_THREAD_INFO_0_HE NULL
#define CEMU_BC1_16BIT_LABEL_HE NULL
#define CEMU_BC1_16BIT_INFO_0_HE NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HE NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HE NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HE NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HE NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_HE, CATEGORY_SYSTEM_INFO_0_HE },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_HE, CATEGORY_GRAPHICS_INFO_0_HE },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_HE, CATEGORY_CONTROLLER_INFO_0_HE },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_HE, CATEGORY_TITLE_MANAGER_INFO_0_HE },
	{ "core", CATEGORY_CORE_LABEL_HE, CATEGORY_CORE_INFO_0_HE },
	{ "logging", CATEGORY_LOGGING_LABEL_HE, CATEGORY_LOGGING_INFO_0_HE },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HE, CATEGORY_GRAPHIC_PACKS_INFO_0_HE },
	{ "cheats", CATEGORY_CHEATS_LABEL_HE, CATEGORY_CHEATS_INFO_0_HE },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_HE,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_HE,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_HE },
			{ "stereo", OPTION_VAL_STEREO_HE },
			{ "surround", OPTION_VAL_SURROUND_HE },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HE,
		NULL,
		CEMU_ACCOUNT_INFO_0_HE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_HE,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_HE,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HE },
			{ "Vulkan", OPTION_VAL_VULKAN_HE },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HE,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_HE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HE,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HE,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_HE,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HE },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HE,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_HE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_HE,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_HE,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HE,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HE,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_HE },
			{ "20", OPTION_VAL_20_HE },
			{ "30", OPTION_VAL_30_HE },
			{ "40", OPTION_VAL_40_HE },
			{ "50", OPTION_VAL_50_HE },
			{ "60", OPTION_VAL_60_HE },
			{ "70", OPTION_VAL_70_HE },
			{ "80", OPTION_VAL_80_HE },
			{ "90", OPTION_VAL_90_HE },
			{ "100", OPTION_VAL_100_HE },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_HE,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_HE,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_HE },
			{ "swapped", OPTION_VAL_SWAPPED_HE },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HE,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HE,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HE,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HE,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_HE,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_HE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_HE,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_HE,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HE,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HE,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HE,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_HR "Sustav"
#define CATEGORY_SYSTEM_INFO_0_HR NULL
#define CATEGORY_GRAPHICS_LABEL_HR NULL
#define CATEGORY_GRAPHICS_INFO_0_HR NULL
#define CATEGORY_CONTROLLER_LABEL_HR "Kontroler"
#define CATEGORY_CONTROLLER_INFO_0_HR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_HR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_HR NULL
#define CATEGORY_CORE_LABEL_HR "Jezgra"
#define CATEGORY_CORE_INFO_0_HR NULL
#define CATEGORY_LOGGING_LABEL_HR "Izvještavanje"
#define CATEGORY_LOGGING_INFO_0_HR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HR NULL
#define CATEGORY_CHEATS_LABEL_HR NULL
#define CATEGORY_CHEATS_INFO_0_HR NULL
#define CEMU_CPU_MODE_LABEL_HR NULL
#define CEMU_CPU_MODE_INFO_0_HR NULL
#define OPTION_VAL_AUTO_HR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_HR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HR NULL
#define CEMU_THREAD_QUANTUM_LABEL_HR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_HR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_HR NULL
#define OPTION_VAL_MONO_HR NULL
#define OPTION_VAL_STEREO_HR NULL
#define OPTION_VAL_SURROUND_HR NULL
#define CEMU_ACCOUNT_LABEL_HR NULL
#define CEMU_ACCOUNT_INFO_0_HR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_HR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_HR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HR NULL
#define CEMU_GPU_API_LABEL_HR NULL
#define CEMU_GPU_API_INFO_0_HR NULL
#define OPTION_VAL_OPENGL_HR NULL
#define OPTION_VAL_VULKAN_HR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_HR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_HR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_HR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_HR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_HR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HR NULL
#define OPTION_VAL_10_HR NULL
#define OPTION_VAL_20_HR NULL
#define OPTION_VAL_30_HR NULL
#define OPTION_VAL_40_HR NULL
#define OPTION_VAL_50_HR NULL
#define OPTION_VAL_60_HR NULL
#define OPTION_VAL_70_HR NULL
#define OPTION_VAL_80_HR NULL
#define OPTION_VAL_90_HR NULL
#define OPTION_VAL_100_HR NULL
#define CEMU_GAMEPAD_MOTION_LABEL_HR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_HR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_HR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HR NULL
#define OPTION_VAL_0_25X_HR NULL
#define OPTION_VAL_0_5X_HR NULL
#define OPTION_VAL_0_75X_HR NULL
#define OPTION_VAL_NATIVE_HR NULL
#define OPTION_VAL_1_5X_HR NULL
#define OPTION_VAL_2X_HR NULL
#define OPTION_VAL_3X_HR NULL
#define CEMU_RENDER_AHEAD_LABEL_HR NULL
#define CEMU_RENDER_AHEAD_INFO_0_HR NULL
#define CEMU_AUDIO_THREAD_LABEL_HR NULL
#define CEMU_AUDIO_THREAD_INFO_0_HR NULL
#define CEMU_BC1_16BIT_LABEL_HR NULL
#define CEMU_BC1_16BIT_INFO_0_HR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HR NULL

struct retro_core_option_v2_category option_cats_hr[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_HR, CATEGORY_SYSTEM_INFO_0_HR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_HR, CATEGORY_GRAPHICS_INFO_0_HR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_HR, CATEGORY_CONTROLLER_INFO_0_HR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_HR, CATEGORY_TITLE_MANAGER_INFO_0_HR },
	{ "core", CATEGORY_CORE_LABEL_HR, CATEGORY_CORE_INFO_0_HR },
	{ "logging", CATEGORY_LOGGING_LABEL_HR, CATEGORY_LOGGING_INFO_0_HR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HR, CATEGORY_GRAPHIC_PACKS_INFO_0_HR },
	{ "cheats", CATEGORY_CHEATS_LABEL_HR, CATEGORY_CHEATS_INFO_0_HR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_HR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_HR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_HR },
			{ "stereo", OPTION_VAL_STEREO_HR },
			{ "surround", OPTION_VAL_SURROUND_HR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HR,
		NULL,
		CEMU_ACCOUNT_INFO_0_HR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_HR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_HR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HR },
			{ "Vulkan", OPTION_VAL_VULKAN_HR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_HR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_HR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_HR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_HR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_HR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_HR },
			{ "20", OPTION_VAL_20_HR },
			{ "30", OPTION_VAL_30_HR },
			{ "40", OPTION_VAL_40_HR },
			{ "50", OPTION_VAL_50_HR },
			{ "60", OPTION_VAL_60_HR },
			{ "70", OPTION_VAL_70_HR },
			{ "80", OPTION_VAL_80_HR },
			{ "90", OPTION_VAL_90_HR },
			{ "100", OPTION_VAL_100_HR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_HR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_HR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_HR },
			{ "swapped", OPTION_VAL_SWAPPED_HR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_HR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_HR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_HR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_HR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_HU "Rendszer"
#define CATEGORY_SYSTEM_INFO_0_HU NULL
#define CATEGORY_GRAPHICS_LABEL_HU NULL
#define CATEGORY_GRAPHICS_INFO_0_HU NULL
#define CATEGORY_CONTROLLER_LABEL_HU "Kontroller"
#define CATEGORY_CONTROLLER_INFO_0_HU NULL
#define CATEGORY_TITLE_MANAGER_LABEL_HU NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_HU NULL
#define CATEGORY_CORE_LABEL_HU "Magok"
#define CATEGORY_CORE_INFO_0_HU NULL
#define CATEGORY_LOGGING_LABEL_HU "Naplózás"
#define CATEGORY_LOGGING_INFO_0_HU NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_HU NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_HU NULL
#define CATEGORY_CHEATS_LABEL_HU NULL
#define CATEGORY_CHEATS_INFO_0_HU NULL
#define CEMU_CPU_MODE_LABEL_HU NULL
#define CEMU_CPU_MODE_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU "Automatikus"
#define OPTION_VAL_SINGLECORE_INTERPRETER_HU NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_HU NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_HU NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_HU NULL
#define CEMU_THREAD_QUANTUM_LABEL_HU NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_HU NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_HU NULL
#define OPTION_VAL_MONO_HU "Monó"
#define OPTION_VAL_STEREO_HU "Sztereó"
#define OPTION_VAL_SURROUND_HU NULL
#define CEMU_ACCOUNT_LABEL_HU NULL
#define CEMU_ACCOUNT_INFO_0_HU NULL
#define CEMU_CREATE_ACCOUNT_LABEL_HU NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_HU NULL
#define CEMU_RENAME_ACCOUNT_LABEL_HU NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_HU NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_HU NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_HU NULL
#define CEMU_GPU_API_LABEL_HU NULL
#define CEMU_GPU_API_INFO_0_HU NULL
#define OPTION_VAL_OPENGL_HU NULL
#define OPTION_VAL_VULKAN_HU NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_HU NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_HU NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_HU NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_HU NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_HU NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_HU NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_HU NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_HU NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_HU NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_HU NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_HU NULL
#define OPTION_VAL_10_HU NULL
#define OPTION_VAL_20_HU NULL
#define OPTION_VAL_30_HU NULL
#define OPTION_VAL_40_HU NULL
#define OPTION_VAL_50_HU NULL
#define OPTION_VAL_60_HU NULL
#define OPTION_VAL_70_HU NULL
#define OPTION_VAL_80_HU NULL
#define OPTION_VAL_90_HU NULL
#define OPTION_VAL_100_HU NULL
#define CEMU_GAMEPAD_MOTION_LABEL_HU NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_HU NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_HU NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_HU NULL
#define OPTION_VAL_0_25X_HU NULL
#define OPTION_VAL_0_5X_HU NULL
#define OPTION_VAL_0_75X_HU NULL
#define OPTION_VAL_NATIVE_HU "Eredeti"
#define OPTION_VAL_1_5X_HU NULL
#define OPTION_VAL_2X_HU NULL
#define OPTION_VAL_3X_HU NULL
#define CEMU_RENDER_AHEAD_LABEL_HU NULL
#define CEMU_RENDER_AHEAD_INFO_0_HU NULL
#define CEMU_AUDIO_THREAD_LABEL_HU NULL
#define CEMU_AUDIO_THREAD_INFO_0_HU NULL
#define CEMU_BC1_16BIT_LABEL_HU NULL
#define CEMU_BC1_16BIT_INFO_0_HU NULL
#define CEMU_SHOW_GAME_FPS_LABEL_HU NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_HU NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HU NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_HU NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_HU, CATEGORY_SYSTEM_INFO_0_HU },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_HU, CATEGORY_GRAPHICS_INFO_0_HU },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_HU, CATEGORY_CONTROLLER_INFO_0_HU },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_HU, CATEGORY_TITLE_MANAGER_INFO_0_HU },
	{ "core", CATEGORY_CORE_LABEL_HU, CATEGORY_CORE_INFO_0_HU },
	{ "logging", CATEGORY_LOGGING_LABEL_HU, CATEGORY_LOGGING_INFO_0_HU },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_HU, CATEGORY_GRAPHIC_PACKS_INFO_0_HU },
	{ "cheats", CATEGORY_CHEATS_LABEL_HU, CATEGORY_CHEATS_INFO_0_HU },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_HU,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_HU,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_HU },
			{ "stereo", OPTION_VAL_STEREO_HU },
			{ "surround", OPTION_VAL_SURROUND_HU },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_HU,
		NULL,
		CEMU_ACCOUNT_INFO_0_HU,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_HU,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_HU,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_HU },
			{ "Vulkan", OPTION_VAL_VULKAN_HU },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_HU,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_HU,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_HU,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_HU,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_HU,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_HU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_HU,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_HU,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_HU,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_HU,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_HU,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_HU,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_HU },
			{ "20", OPTION_VAL_20_HU },
			{ "30", OPTION_VAL_30_HU },
			{ "40", OPTION_VAL_40_HU },
			{ "50", OPTION_VAL_50_HU },
			{ "60", OPTION_VAL_60_HU },
			{ "70", OPTION_VAL_70_HU },
			{ "80", OPTION_VAL_80_HU },
			{ "90", OPTION_VAL_90_HU },
			{ "100", OPTION_VAL_100_HU },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_HU,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_HU,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_HU },
			{ "swapped", OPTION_VAL_SWAPPED_HU },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_HU,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_HU,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_HU,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_HU,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_HU,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_HU,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_HU,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_HU,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_HU,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_HU,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_HU,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_ID "Sistem"
#define CATEGORY_SYSTEM_INFO_0_ID NULL
#define CATEGORY_GRAPHICS_LABEL_ID NULL
#define CATEGORY_GRAPHICS_INFO_0_ID NULL
#define CATEGORY_CONTROLLER_LABEL_ID "Stik Kendali"
#define CATEGORY_CONTROLLER_INFO_0_ID NULL
#define CATEGORY_TITLE_MANAGER_LABEL_ID NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_ID NULL
#define CATEGORY_CORE_LABEL_ID NULL
#define CATEGORY_CORE_INFO_0_ID NULL
#define CATEGORY_LOGGING_LABEL_ID "Pencatatan Log"
#define CATEGORY_LOGGING_INFO_0_ID NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_ID NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_ID NULL
#define CATEGORY_CHEATS_LABEL_ID NULL
#define CATEGORY_CHEATS_INFO_0_ID NULL
#define CEMU_CPU_MODE_LABEL_ID NULL
#define CEMU_CPU_MODE_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID "Otomatis"
#define OPTION_VAL_SINGLECORE_INTERPRETER_ID NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_ID NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_ID NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_ID NULL
#define CEMU_THREAD_QUANTUM_LABEL_ID NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_ID NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_ID NULL
#define OPTION_VAL_MONO_ID NULL
#define OPTION_VAL_STEREO_ID NULL
#define OPTION_VAL_SURROUND_ID NULL
#define CEMU_ACCOUNT_LABEL_ID NULL
#define CEMU_ACCOUNT_INFO_0_ID NULL
#define CEMU_CREATE_ACCOUNT_LABEL_ID NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_ID NULL
#define CEMU_RENAME_ACCOUNT_LABEL_ID NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_ID NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_ID NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_ID NULL
#define CEMU_GPU_API_LABEL_ID NULL
#define CEMU_GPU_API_INFO_0_ID NULL
#define OPTION_VAL_OPENGL_ID NULL
#define OPTION_VAL_VULKAN_ID NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_ID NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_ID NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_ID NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_ID NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_ID NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_ID NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_ID NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_ID NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_ID NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_ID NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_ID NULL
#define OPTION_VAL_10_ID NULL
#define OPTION_VAL_20_ID NULL
#define OPTION_VAL_30_ID NULL
#define OPTION_VAL_40_ID NULL
#define OPTION_VAL_50_ID NULL
#define OPTION_VAL_60_ID NULL
#define OPTION_VAL_70_ID NULL
#define OPTION_VAL_80_ID NULL
#define OPTION_VAL_90_ID NULL
#define OPTION_VAL_100_ID NULL
#define CEMU_GAMEPAD_MOTION_LABEL_ID NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_ID NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_ID NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_ID NULL
#define OPTION_VAL_0_25X_ID NULL
#define OPTION_VAL_0_5X_ID NULL
#define OPTION_VAL_0_75X_ID NULL
#define OPTION_VAL_NATIVE_ID "Lokal"
#define OPTION_VAL_1_5X_ID NULL
#define OPTION_VAL_2X_ID NULL
#define OPTION_VAL_3X_ID NULL
#define CEMU_RENDER_AHEAD_LABEL_ID NULL
#define CEMU_RENDER_AHEAD_INFO_0_ID NULL
#define CEMU_AUDIO_THREAD_LABEL_ID NULL
#define CEMU_AUDIO_THREAD_INFO_0_ID NULL
#define CEMU_BC1_16BIT_LABEL_ID NULL
#define CEMU_BC1_16BIT_INFO_0_ID NULL
#define CEMU_SHOW_GAME_FPS_LABEL_ID NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_ID NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ID NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_ID NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_ID, CATEGORY_SYSTEM_INFO_0_ID },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_ID, CATEGORY_GRAPHICS_INFO_0_ID },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_ID, CATEGORY_CONTROLLER_INFO_0_ID },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_ID, CATEGORY_TITLE_MANAGER_INFO_0_ID },
	{ "core", CATEGORY_CORE_LABEL_ID, CATEGORY_CORE_INFO_0_ID },
	{ "logging", CATEGORY_LOGGING_LABEL_ID, CATEGORY_LOGGING_INFO_0_ID },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_ID, CATEGORY_GRAPHIC_PACKS_INFO_0_ID },
	{ "cheats", CATEGORY_CHEATS_LABEL_ID, CATEGORY_CHEATS_INFO_0_ID },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_ID,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_ID,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_ID },
			{ "stereo", OPTION_VAL_STEREO_ID },
			{ "surround", OPTION_VAL_SURROUND_ID },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_ID,
		NULL,
		CEMU_ACCOUNT_INFO_0_ID,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_ID,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_ID,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_ID },
			{ "Vulkan", OPTION_VAL_VULKAN_ID },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_ID,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_ID,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_ID },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_ID,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_ID,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_ID,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_ID },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_ID,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_ID,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_ID,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_ID,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_ID,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_ID,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_ID },
			{ "20", OPTION_VAL_20_ID },
			{ "30", OPTION_VAL_30_ID },
			{ "40", OPTION_VAL_40_ID },
			{ "50", OPTION_VAL_50_ID },
			{ "60", OPTION_VAL_60_ID },
			{ "70", OPTION_VAL_70_ID },
			{ "80", OPTION_VAL_80_ID },
			{ "90", OPTION_VAL_90_ID },
			{ "100", OPTION_VAL_100_ID },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_ID,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_ID,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_ID },
			{ "swapped", OPTION_VAL_SWAPPED_ID },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_ID,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_ID,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_ID,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_ID,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_ID,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_ID,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_ID,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_ID,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_ID,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_ID,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_ID,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_IT "Sistema"
#define CATEGORY_SYSTEM_INFO_0_IT NULL
#define CATEGORY_GRAPHICS_LABEL_IT NULL
#define CATEGORY_GRAPHICS_INFO_0_IT NULL
#define CATEGORY_CONTROLLER_LABEL_IT NULL
#define CATEGORY_CONTROLLER_INFO_0_IT NULL
#define CATEGORY_TITLE_MANAGER_LABEL_IT NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_IT NULL
#define CATEGORY_CORE_LABEL_IT NULL
#define CATEGORY_CORE_INFO_0_IT NULL
#define CATEGORY_LOGGING_LABEL_IT "Registrazione dei log"
#define CATEGORY_LOGGING_INFO_0_IT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_IT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_IT NULL
#define CATEGORY_CHEATS_LABEL_IT NULL
#define CATEGORY_CHEATS_INFO_0_IT NULL
#define CEMU_CPU_MODE_LABEL_IT NULL
#define CEMU_CPU_MODE_INFO_0_IT NULL
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_IT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_IT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_IT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_IT NULL
#define CEMU_THREAD_QUANTUM_LABEL_IT NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_IT NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_IT NULL
#define OPTION_VAL_MONO_IT NULL
#define OPTION_VAL_STEREO_IT NULL
#define OPTION_VAL_SURROUND_IT NULL
#define CEMU_ACCOUNT_LABEL_IT NULL
#define CEMU_ACCOUNT_INFO_0_IT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_IT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_IT NULL
#define CEMU_RENAME_ACCOUNT_LABEL_IT NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_IT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_IT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_IT NULL
#define CEMU_GPU_API_LABEL_IT NULL
#define CEMU_GPU_API_INFO_0_IT NULL
#define OPTION_VAL_OPENGL_IT NULL
#define OPTION_VAL_VULKAN_IT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_IT NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_IT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_IT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_IT NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_IT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_IT NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_IT NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_IT NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_IT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_IT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_IT NULL
#define OPTION_VAL_10_IT NULL
#define OPTION_VAL_20_IT NULL
#define OPTION_VAL_30_IT NULL
#define OPTION_VAL_40_IT NULL
#define OPTION_VAL_50_IT NULL
#define OPTION_VAL_60_IT NULL
#define OPTION_VAL_70_IT NULL
#define OPTION_VAL_80_IT NULL
#define OPTION_VAL_90_IT NULL
#define OPTION_VAL_100_IT NULL
#define CEMU_GAMEPAD_MOTION_LABEL_IT NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_IT NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_IT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_IT NULL
#define OPTION_VAL_0_25X_IT NULL
#define OPTION_VAL_0_5X_IT NULL
#define OPTION_VAL_0_75X_IT NULL
#define OPTION_VAL_NATIVE_IT "Nativo"
#define OPTION_VAL_1_5X_IT NULL
#define OPTION_VAL_2X_IT NULL
#define OPTION_VAL_3X_IT NULL
#define CEMU_RENDER_AHEAD_LABEL_IT NULL
#define CEMU_RENDER_AHEAD_INFO_0_IT NULL
#define CEMU_AUDIO_THREAD_LABEL_IT NULL
#define CEMU_AUDIO_THREAD_INFO_0_IT NULL
#define CEMU_BC1_16BIT_LABEL_IT NULL
#define CEMU_BC1_16BIT_INFO_0_IT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_IT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_IT NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_IT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_IT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_IT, CATEGORY_SYSTEM_INFO_0_IT },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_IT, CATEGORY_GRAPHICS_INFO_0_IT },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_IT, CATEGORY_CONTROLLER_INFO_0_IT },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_IT, CATEGORY_TITLE_MANAGER_INFO_0_IT },
	{ "core", CATEGORY_CORE_LABEL_IT, CATEGORY_CORE_INFO_0_IT },
	{ "logging", CATEGORY_LOGGING_LABEL_IT, CATEGORY_LOGGING_INFO_0_IT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_IT, CATEGORY_GRAPHIC_PACKS_INFO_0_IT },
	{ "cheats", CATEGORY_CHEATS_LABEL_IT, CATEGORY_CHEATS_INFO_0_IT },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_IT,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_IT,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_IT },
			{ "stereo", OPTION_VAL_STEREO_IT },
			{ "surround", OPTION_VAL_SURROUND_IT },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_IT,
		NULL,
		CEMU_ACCOUNT_INFO_0_IT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_IT,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_IT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_IT },
			{ "Vulkan", OPTION_VAL_VULKAN_IT },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_IT,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_IT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_IT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_IT,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_IT,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_IT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_IT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_IT,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_IT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_IT,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_IT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_IT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_IT,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_IT },
			{ "20", OPTION_VAL_20_IT },
			{ "30", OPTION_VAL_30_IT },
			{ "40", OPTION_VAL_40_IT },
			{ "50", OPTION_VAL_50_IT },
			{ "60", OPTION_VAL_60_IT },
			{ "70", OPTION_VAL_70_IT },
			{ "80", OPTION_VAL_80_IT },
			{ "90", OPTION_VAL_90_IT },
			{ "100", OPTION_VAL_100_IT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_IT,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_IT,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_IT },
			{ "swapped", OPTION_VAL_SWAPPED_IT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_IT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_IT,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_IT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_IT,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_IT,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_IT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_IT,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_IT,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_IT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_IT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_IT,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_JA "システム"
#define CATEGORY_SYSTEM_INFO_0_JA NULL
#define CATEGORY_GRAPHICS_LABEL_JA NULL
#define CATEGORY_GRAPHICS_INFO_0_JA NULL
#define CATEGORY_CONTROLLER_LABEL_JA "コントローラー"
#define CATEGORY_CONTROLLER_INFO_0_JA NULL
#define CATEGORY_TITLE_MANAGER_LABEL_JA NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_JA NULL
#define CATEGORY_CORE_LABEL_JA "コア"
#define CATEGORY_CORE_INFO_0_JA NULL
#define CATEGORY_LOGGING_LABEL_JA "ログ"
#define CATEGORY_LOGGING_INFO_0_JA NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_JA NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_JA NULL
#define CATEGORY_CHEATS_LABEL_JA NULL
#define CATEGORY_CHEATS_INFO_0_JA NULL
#define CEMU_CPU_MODE_LABEL_JA NULL
#define CEMU_CPU_MODE_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_SINGLECORE_INTERPRETER_JA NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_JA NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_JA NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_JA NULL
#define CEMU_THREAD_QUANTUM_LABEL_JA NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_JA NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_JA NULL
#define OPTION_VAL_MONO_JA "モノラル"
#define OPTION_VAL_STEREO_JA "ステレオ"
#define OPTION_VAL_SURROUND_JA NULL
#define CEMU_ACCOUNT_LABEL_JA NULL
#define CEMU_ACCOUNT_INFO_0_JA NULL
#define CEMU_CREATE_ACCOUNT_LABEL_JA NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_JA NULL
#define CEMU_RENAME_ACCOUNT_LABEL_JA NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_JA NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_JA NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_JA NULL
#define CEMU_GPU_API_LABEL_JA NULL
#define CEMU_GPU_API_INFO_0_JA NULL
#define OPTION_VAL_OPENGL_JA NULL
#define OPTION_VAL_VULKAN_JA NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_JA NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_JA NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_JA NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_JA NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_JA NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_JA NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_JA NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_JA NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_JA NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_JA NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_JA NULL
#define OPTION_VAL_10_JA NULL
#define OPTION_VAL_20_JA NULL
#define OPTION_VAL_30_JA NULL
#define OPTION_VAL_40_JA NULL
#define OPTION_VAL_50_JA NULL
#define OPTION_VAL_60_JA NULL
#define OPTION_VAL_70_JA NULL
#define OPTION_VAL_80_JA NULL
#define OPTION_VAL_90_JA NULL
#define OPTION_VAL_100_JA NULL
#define CEMU_GAMEPAD_MOTION_LABEL_JA NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_JA NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_JA NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_JA NULL
#define OPTION_VAL_0_25X_JA NULL
#define OPTION_VAL_0_5X_JA NULL
#define OPTION_VAL_0_75X_JA NULL
#define OPTION_VAL_NATIVE_JA "ネイティブ"
#define OPTION_VAL_1_5X_JA NULL
#define OPTION_VAL_2X_JA NULL
#define OPTION_VAL_3X_JA NULL
#define CEMU_RENDER_AHEAD_LABEL_JA NULL
#define CEMU_RENDER_AHEAD_INFO_0_JA NULL
#define CEMU_AUDIO_THREAD_LABEL_JA NULL
#define CEMU_AUDIO_THREAD_INFO_0_JA NULL
#define CEMU_BC1_16BIT_LABEL_JA NULL
#define CEMU_BC1_16BIT_INFO_0_JA NULL
#define CEMU_SHOW_GAME_FPS_LABEL_JA NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_JA NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_JA NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_JA NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_JA, CATEGORY_SYSTEM_INFO_0_JA },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_JA, CATEGORY_GRAPHICS_INFO_0_JA },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_JA, CATEGORY_CONTROLLER_INFO_0_JA },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_JA, CATEGORY_TITLE_MANAGER_INFO_0_JA },
	{ "core", CATEGORY_CORE_LABEL_JA, CATEGORY_CORE_INFO_0_JA },
	{ "logging", CATEGORY_LOGGING_LABEL_JA, CATEGORY_LOGGING_INFO_0_JA },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_JA, CATEGORY_GRAPHIC_PACKS_INFO_0_JA },
	{ "cheats", CATEGORY_CHEATS_LABEL_JA, CATEGORY_CHEATS_INFO_0_JA },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_JA,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_JA,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_JA },
			{ "stereo", OPTION_VAL_STEREO_JA },
			{ "surround", OPTION_VAL_SURROUND_JA },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_JA,
		NULL,
		CEMU_ACCOUNT_INFO_0_JA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_JA,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_JA,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_JA },
			{ "Vulkan", OPTION_VAL_VULKAN_JA },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_JA,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_JA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_JA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_JA,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_JA,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_JA,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_JA },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_JA,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_JA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_JA,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_JA,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_JA,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_JA,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_JA },
			{ "20", OPTION_VAL_20_JA },
			{ "30", OPTION_VAL_30_JA },
			{ "40", OPTION_VAL_40_JA },
			{ "50", OPTION_VAL_50_JA },
			{ "60", OPTION_VAL_60_JA },
			{ "70", OPTION_VAL_70_JA },
			{ "80", OPTION_VAL_80_JA },
			{ "90", OPTION_VAL_90_JA },
			{ "100", OPTION_VAL_100_JA },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_JA,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_JA,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_JA },
			{ "swapped", OPTION_VAL_SWAPPED_JA },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_JA,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_JA,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_JA,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_JA,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_JA,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_JA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_JA,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_JA,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_JA,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_JA,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_JA,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_KO "시스템"
#define CATEGORY_SYSTEM_INFO_0_KO NULL
#define CATEGORY_GRAPHICS_LABEL_KO NULL
#define CATEGORY_GRAPHICS_INFO_0_KO NULL
#define CATEGORY_CONTROLLER_LABEL_KO "컨트롤러 드라이버"
#define CATEGORY_CONTROLLER_INFO_0_KO NULL
#define CATEGORY_TITLE_MANAGER_LABEL_KO NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_KO NULL
#define CATEGORY_CORE_LABEL_KO "코어"
#define CATEGORY_CORE_INFO_0_KO NULL
#define CATEGORY_LOGGING_LABEL_KO "로그"
#define CATEGORY_LOGGING_INFO_0_KO "문제 해결을 위한 추가 로그 출력 설정입니다."
#define CATEGORY_GRAPHIC_PACKS_LABEL_KO NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_KO NULL
#define CATEGORY_CHEATS_LABEL_KO NULL
#define CATEGORY_CHEATS_INFO_0_KO NULL
#define CEMU_CPU_MODE_LABEL_KO NULL
#define CEMU_CPU_MODE_INFO_0_KO NULL
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_SINGLECORE_INTERPRETER_KO "싱글코어 인터프리터"
#define OPTION_VAL_SINGLECORE_RECOMPILER_KO "싱글코어 리컴파일러"
#define OPTION_VAL_MULTICORE_RECOMPILER_KO "멀티코어 리컴파일러"
#define OPTION_VAL_MULTICORE_INTERPRETER_KO "멀티코어 인터프리터"
#define CEMU_THREAD_QUANTUM_LABEL_KO "스레드 퀀텀"
#define CEMU_CONSOLE_LANGUAGE_LABEL_KO NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_KO NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_KO NULL
#define OPTION_VAL_MONO_KO "모노"
#define OPTION_VAL_STEREO_KO "스테레오"
#define OPTION_VAL_SURROUND_KO NULL
#define CEMU_ACCOUNT_LABEL_KO NULL
#define CEMU_ACCOUNT_INFO_0_KO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_KO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_KO NULL
#define CEMU_RENAME_ACCOUNT_LABEL_KO NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_KO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_KO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_KO NULL
#define CEMU_GPU_API_LABEL_KO "그래픽스 API"
#define CEMU_GPU_API_INFO_0_KO NULL
#define OPTION_VAL_OPENGL_KO NULL
#define OPTION_VAL_VULKAN_KO NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_KO NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_KO NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_KO NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_KO "정확한 셰이더 곱연산"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_KO NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_KO "GX2DrawDone 동기화"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_KO NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_KO NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_KO NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_KO "진동 강도"
#define CEMU_RUMBLE_STRENGTH_INFO_0_KO "게임이 GamePad의 모터, Wii 리모컨, Pro 컨트롤러의 진동을 요청할 때 컨트롤러를 얼마나 강하게 진동할 것인지를 설정합니다. 비활성화할 경우 컨트롤러가 진동하지 않습니다."
#define OPTION_VAL_10_KO NULL
#define OPTION_VAL_20_KO NULL
#define OPTION_VAL_30_KO NULL
#define OPTION_VAL_40_KO NULL
#define OPTION_VAL_50_KO NULL
#define OPTION_VAL_60_KO NULL
#define OPTION_VAL_70_KO NULL
#define OPTION_VAL_80_KO NULL
#define OPTION_VAL_90_KO NULL
#define OPTION_VAL_100_KO NULL
#define CEMU_GAMEPAD_MOTION_LABEL_KO NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_KO NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_KO NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_KO NULL
#define OPTION_VAL_0_25X_KO NULL
#define OPTION_VAL_0_5X_KO NULL
#define OPTION_VAL_0_75X_KO NULL
#define OPTION_VAL_NATIVE_KO "기본"
#define OPTION_VAL_1_5X_KO NULL
#define OPTION_VAL_2X_KO NULL
#define OPTION_VAL_3X_KO NULL
#define CEMU_RENDER_AHEAD_LABEL_KO NULL
#define CEMU_RENDER_AHEAD_INFO_0_KO NULL
#define CEMU_AUDIO_THREAD_LABEL_KO NULL
#define CEMU_AUDIO_THREAD_INFO_0_KO NULL
#define CEMU_BC1_16BIT_LABEL_KO NULL
#define CEMU_BC1_16BIT_INFO_0_KO "BC를 샘플링할 수 없는 GPU에서 초록색 1비트를 희생하여 BC1 텍스쳐의 처리속도를 2배로 늘립니다. BC가 지원되는 GPU에서는 영향이 없습니다."
#define CEMU_SHOW_GAME_FPS_LABEL_KO "게임 FPS 표시"
#define CEMU_SHOW_GAME_FPS_INFO_0_KO NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_KO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_KO NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_KO, CATEGORY_SYSTEM_INFO_0_KO },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_KO, CATEGORY_GRAPHICS_INFO_0_KO },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_KO, CATEGORY_CONTROLLER_INFO_0_KO },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_KO, CATEGORY_TITLE_MANAGER_INFO_0_KO },
	{ "core", CATEGORY_CORE_LABEL_KO, CATEGORY_CORE_INFO_0_KO },
	{ "logging", CATEGORY_LOGGING_LABEL_KO, CATEGORY_LOGGING_INFO_0_KO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_KO, CATEGORY_GRAPHIC_PACKS_INFO_0_KO },
	{ "cheats", CATEGORY_CHEATS_LABEL_KO, CATEGORY_CHEATS_INFO_0_KO },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_KO,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_KO,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_KO },
			{ "stereo", OPTION_VAL_STEREO_KO },
			{ "surround", OPTION_VAL_SURROUND_KO },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_KO,
		NULL,
		CEMU_ACCOUNT_INFO_0_KO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_KO,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_KO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_KO },
			{ "Vulkan", OPTION_VAL_VULKAN_KO },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_KO,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_KO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_KO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_KO,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_KO,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_KO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_KO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_KO,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_KO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_KO,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_KO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_KO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_KO,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_KO },
			{ "20", OPTION_VAL_20_KO },
			{ "30", OPTION_VAL_30_KO },
			{ "40", OPTION_VAL_40_KO },
			{ "50", OPTION_VAL_50_KO },
			{ "60", OPTION_VAL_60_KO },
			{ "70", OPTION_VAL_70_KO },
			{ "80", OPTION_VAL_80_KO },
			{ "90", OPTION_VAL_90_KO },
			{ "100", OPTION_VAL_100_KO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_KO,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_KO,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_KO },
			{ "swapped", OPTION_VAL_SWAPPED_KO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_KO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_KO,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_KO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_KO,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_KO,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_KO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_KO,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_KO,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_KO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_KO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_KO,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_NL "Systeem"
#define CATEGORY_SYSTEM_INFO_0_NL NULL
#define CATEGORY_GRAPHICS_LABEL_NL NULL
#define CATEGORY_GRAPHICS_INFO_0_NL NULL
#define CATEGORY_CONTROLLER_LABEL_NL NULL
#define CATEGORY_CONTROLLER_INFO_0_NL NULL
#define CATEGORY_TITLE_MANAGER_LABEL_NL NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_NL NULL
#define CATEGORY_CORE_LABEL_NL NULL
#define CATEGORY_CORE_INFO_0_NL NULL
#define CATEGORY_LOGGING_LABEL_NL "Loggen"
#define CATEGORY_LOGGING_INFO_0_NL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_NL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_NL NULL
#define CATEGORY_CHEATS_LABEL_NL NULL
#define CATEGORY_CHEATS_INFO_0_NL NULL
#define CEMU_CPU_MODE_LABEL_NL NULL
#define CEMU_CPU_MODE_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_SINGLECORE_INTERPRETER_NL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_NL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_NL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_NL NULL
#define CEMU_THREAD_QUANTUM_LABEL_NL NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_NL NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_NL NULL
#define OPTION_VAL_MONO_NL NULL
#define OPTION_VAL_STEREO_NL NULL
#define OPTION_VAL_SURROUND_NL NULL
#define CEMU_ACCOUNT_LABEL_NL NULL
#define CEMU_ACCOUNT_INFO_0_NL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_NL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_NL NULL
#define CEMU_RENAME_ACCOUNT_LABEL_NL NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_NL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_NL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_NL NULL
#define CEMU_GPU_API_LABEL_NL NULL
#define CEMU_GPU_API_INFO_0_NL NULL
#define OPTION_VAL_OPENGL_NL NULL
#define OPTION_VAL_VULKAN_NL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_NL NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_NL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_NL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_NL NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_NL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_NL NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_NL NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_NL NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_NL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_NL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_NL NULL
#define OPTION_VAL_10_NL NULL
#define OPTION_VAL_20_NL NULL
#define OPTION_VAL_30_NL NULL
#define OPTION_VAL_40_NL NULL
#define OPTION_VAL_50_NL NULL
#define OPTION_VAL_60_NL NULL
#define OPTION_VAL_70_NL NULL
#define OPTION_VAL_80_NL NULL
#define OPTION_VAL_90_NL NULL
#define OPTION_VAL_100_NL NULL
#define CEMU_GAMEPAD_MOTION_LABEL_NL NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_NL NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_NL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_NL NULL
#define OPTION_VAL_0_25X_NL NULL
#define OPTION_VAL_0_5X_NL NULL
#define OPTION_VAL_0_75X_NL NULL
#define OPTION_VAL_NATIVE_NL "Standaard"
#define OPTION_VAL_1_5X_NL NULL
#define OPTION_VAL_2X_NL NULL
#define OPTION_VAL_3X_NL NULL
#define CEMU_RENDER_AHEAD_LABEL_NL NULL
#define CEMU_RENDER_AHEAD_INFO_0_NL NULL
#define CEMU_AUDIO_THREAD_LABEL_NL NULL
#define CEMU_AUDIO_THREAD_INFO_0_NL NULL
#define CEMU_BC1_16BIT_LABEL_NL NULL
#define CEMU_BC1_16BIT_INFO_0_NL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_NL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_NL NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_NL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_NL, CATEGORY_SYSTEM_INFO_0_NL },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_NL, CATEGORY_GRAPHICS_INFO_0_NL },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_NL, CATEGORY_CONTROLLER_INFO_0_NL },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_NL, CATEGORY_TITLE_MANAGER_INFO_0_NL },
	{ "core", CATEGORY_CORE_LABEL_NL, CATEGORY_CORE_INFO_0_NL },
	{ "logging", CATEGORY_LOGGING_LABEL_NL, CATEGORY_LOGGING_INFO_0_NL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_NL, CATEGORY_GRAPHIC_PACKS_INFO_0_NL },
	{ "cheats", CATEGORY_CHEATS_LABEL_NL, CATEGORY_CHEATS_INFO_0_NL },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_NL,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_NL,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_NL },
			{ "stereo", OPTION_VAL_STEREO_NL },
			{ "surround", OPTION_VAL_SURROUND_NL },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_NL,
		NULL,
		CEMU_ACCOUNT_INFO_0_NL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_NL,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_NL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_NL },
			{ "Vulkan", OPTION_VAL_VULKAN_NL },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_NL,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_NL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_NL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_NL,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_NL,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_NL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_NL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_NL,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_NL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_NL,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_NL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_NL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_NL,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_NL },
			{ "20", OPTION_VAL_20_NL },
			{ "30", OPTION_VAL_30_NL },
			{ "40", OPTION_VAL_40_NL },
			{ "50", OPTION_VAL_50_NL },
			{ "60", OPTION_VAL_60_NL },
			{ "70", OPTION_VAL_70_NL },
			{ "80", OPTION_VAL_80_NL },
			{ "90", OPTION_VAL_90_NL },
			{ "100", OPTION_VAL_100_NL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_NL,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_NL,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_NL },
			{ "swapped", OPTION_VAL_SWAPPED_NL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_NL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_NL,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_NL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_NL,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_NL,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_NL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_NL,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_NL,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_NL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_NL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NL,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_NO NULL
#define CATEGORY_SYSTEM_INFO_0_NO NULL
#define CATEGORY_GRAPHICS_LABEL_NO NULL
#define CATEGORY_GRAPHICS_INFO_0_NO NULL
#define CATEGORY_CONTROLLER_LABEL_NO "Kontroller"
#define CATEGORY_CONTROLLER_INFO_0_NO NULL
#define CATEGORY_TITLE_MANAGER_LABEL_NO NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_NO NULL
#define CATEGORY_CORE_LABEL_NO "Kjerne"
#define CATEGORY_CORE_INFO_0_NO NULL
#define CATEGORY_LOGGING_LABEL_NO NULL
#define CATEGORY_LOGGING_INFO_0_NO NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_NO NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_NO NULL
#define CATEGORY_CHEATS_LABEL_NO NULL
#define CATEGORY_CHEATS_INFO_0_NO NULL
#define CEMU_CPU_MODE_LABEL_NO NULL
#define CEMU_CPU_MODE_INFO_0_NO NULL
#define OPTION_VAL_AUTO_NO NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_NO NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_NO NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_NO NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_NO NULL
#define CEMU_THREAD_QUANTUM_LABEL_NO NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_NO NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_NO NULL
#define OPTION_VAL_MONO_NO NULL
#define OPTION_VAL_STEREO_NO NULL
#define OPTION_VAL_SURROUND_NO NULL
#define CEMU_ACCOUNT_LABEL_NO NULL
#define CEMU_ACCOUNT_INFO_0_NO NULL
#define CEMU_CREATE_ACCOUNT_LABEL_NO NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_NO NULL
#define CEMU_RENAME_ACCOUNT_LABEL_NO NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_NO NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_NO NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_NO NULL
#define CEMU_GPU_API_LABEL_NO NULL
#define CEMU_GPU_API_INFO_0_NO NULL
#define OPTION_VAL_OPENGL_NO NULL
#define OPTION_VAL_VULKAN_NO NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_NO NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_NO NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_NO NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_NO NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_NO NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_NO NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_NO NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_NO NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_NO NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_NO NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_NO NULL
#define OPTION_VAL_10_NO NULL
#define OPTION_VAL_20_NO NULL
#define OPTION_VAL_30_NO NULL
#define OPTION_VAL_40_NO NULL
#define OPTION_VAL_50_NO NULL
#define OPTION_VAL_60_NO NULL
#define OPTION_VAL_70_NO NULL
#define OPTION_VAL_80_NO NULL
#define OPTION_VAL_90_NO NULL
#define OPTION_VAL_100_NO NULL
#define CEMU_GAMEPAD_MOTION_LABEL_NO NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_NO NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_NO NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_NO NULL
#define OPTION_VAL_0_25X_NO NULL
#define OPTION_VAL_0_5X_NO NULL
#define OPTION_VAL_0_75X_NO NULL
#define OPTION_VAL_NATIVE_NO NULL
#define OPTION_VAL_1_5X_NO NULL
#define OPTION_VAL_2X_NO NULL
#define OPTION_VAL_3X_NO NULL
#define CEMU_RENDER_AHEAD_LABEL_NO NULL
#define CEMU_RENDER_AHEAD_INFO_0_NO NULL
#define CEMU_AUDIO_THREAD_LABEL_NO NULL
#define CEMU_AUDIO_THREAD_INFO_0_NO NULL
#define CEMU_BC1_16BIT_LABEL_NO NULL
#define CEMU_BC1_16BIT_INFO_0_NO NULL
#define CEMU_SHOW_GAME_FPS_LABEL_NO NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_NO NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NO NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_NO NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_NO NULL

struct retro_core_option_v2_category option_cats_no[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_NO, CATEGORY_SYSTEM_INFO_0_NO },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_NO, CATEGORY_GRAPHICS_INFO_0_NO },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_NO, CATEGORY_CONTROLLER_INFO_0_NO },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_NO, CATEGORY_TITLE_MANAGER_INFO_0_NO },
	{ "core", CATEGORY_CORE_LABEL_NO, CATEGORY_CORE_INFO_0_NO },
	{ "logging", CATEGORY_LOGGING_LABEL_NO, CATEGORY_LOGGING_INFO_0_NO },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_NO, CATEGORY_GRAPHIC_PACKS_INFO_0_NO },
	{ "cheats", CATEGORY_CHEATS_LABEL_NO, CATEGORY_CHEATS_INFO_0_NO },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_NO,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_NO,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_NO },
			{ "stereo", OPTION_VAL_STEREO_NO },
			{ "surround", OPTION_VAL_SURROUND_NO },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_NO,
		NULL,
		CEMU_ACCOUNT_INFO_0_NO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_NO,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_NO,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_NO },
			{ "Vulkan", OPTION_VAL_VULKAN_NO },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_NO,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_NO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_NO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_NO,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_NO,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_NO,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_NO },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_NO,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_NO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_NO,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_NO,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_NO,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_NO,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_NO },
			{ "20", OPTION_VAL_20_NO },
			{ "30", OPTION_VAL_30_NO },
			{ "40", OPTION_VAL_40_NO },
			{ "50", OPTION_VAL_50_NO },
			{ "60", OPTION_VAL_60_NO },
			{ "70", OPTION_VAL_70_NO },
			{ "80", OPTION_VAL_80_NO },
			{ "90", OPTION_VAL_90_NO },
			{ "100", OPTION_VAL_100_NO },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_NO,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_NO,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_NO },
			{ "swapped", OPTION_VAL_SWAPPED_NO },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_NO,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_NO,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_NO,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_NO,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_NO,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_NO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_NO,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_NO,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_NO,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_NO,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_NO,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_OR NULL
#define CATEGORY_SYSTEM_INFO_0_OR NULL
#define CATEGORY_GRAPHICS_LABEL_OR NULL
#define CATEGORY_GRAPHICS_INFO_0_OR NULL
#define CATEGORY_CONTROLLER_LABEL_OR NULL
#define CATEGORY_CONTROLLER_INFO_0_OR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_OR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_OR NULL
#define CATEGORY_CORE_LABEL_OR NULL
#define CATEGORY_CORE_INFO_0_OR NULL
#define CATEGORY_LOGGING_LABEL_OR NULL
#define CATEGORY_LOGGING_INFO_0_OR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_OR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_OR NULL
#define CATEGORY_CHEATS_LABEL_OR NULL
#define CATEGORY_CHEATS_INFO_0_OR NULL
#define CEMU_CPU_MODE_LABEL_OR NULL
#define CEMU_CPU_MODE_INFO_0_OR NULL
#define OPTION_VAL_AUTO_OR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_OR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_OR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_OR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_OR NULL
#define CEMU_THREAD_QUANTUM_LABEL_OR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_OR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_OR NULL
#define OPTION_VAL_MONO_OR NULL
#define OPTION_VAL_STEREO_OR NULL
#define OPTION_VAL_SURROUND_OR NULL
#define CEMU_ACCOUNT_LABEL_OR NULL
#define CEMU_ACCOUNT_INFO_0_OR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_OR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_OR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_OR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_OR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_OR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_OR NULL
#define CEMU_GPU_API_LABEL_OR NULL
#define CEMU_GPU_API_INFO_0_OR NULL
#define OPTION_VAL_OPENGL_OR NULL
#define OPTION_VAL_VULKAN_OR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_OR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_OR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_OR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_OR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_OR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_OR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_OR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_OR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_OR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_OR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_OR NULL
#define OPTION_VAL_10_OR NULL
#define OPTION_VAL_20_OR NULL
#define OPTION_VAL_30_OR NULL
#define OPTION_VAL_40_OR NULL
#define OPTION_VAL_50_OR NULL
#define OPTION_VAL_60_OR NULL
#define OPTION_VAL_70_OR NULL
#define OPTION_VAL_80_OR NULL
#define OPTION_VAL_90_OR NULL
#define OPTION_VAL_100_OR NULL
#define CEMU_GAMEPAD_MOTION_LABEL_OR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_OR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_OR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_OR NULL
#define OPTION_VAL_0_25X_OR NULL
#define OPTION_VAL_0_5X_OR NULL
#define OPTION_VAL_0_75X_OR NULL
#define OPTION_VAL_NATIVE_OR NULL
#define OPTION_VAL_1_5X_OR NULL
#define OPTION_VAL_2X_OR NULL
#define OPTION_VAL_3X_OR NULL
#define CEMU_RENDER_AHEAD_LABEL_OR NULL
#define CEMU_RENDER_AHEAD_INFO_0_OR NULL
#define CEMU_AUDIO_THREAD_LABEL_OR NULL
#define CEMU_AUDIO_THREAD_INFO_0_OR NULL
#define CEMU_BC1_16BIT_LABEL_OR NULL
#define CEMU_BC1_16BIT_INFO_0_OR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_OR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_OR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_OR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_OR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_OR NULL

struct retro_core_option_v2_category option_cats_or[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_OR, CATEGORY_SYSTEM_INFO_0_OR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_OR, CATEGORY_GRAPHICS_INFO_0_OR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_OR, CATEGORY_CONTROLLER_INFO_0_OR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_OR, CATEGORY_TITLE_MANAGER_INFO_0_OR },
	{ "core", CATEGORY_CORE_LABEL_OR, CATEGORY_CORE_INFO_0_OR },
	{ "logging", CATEGORY_LOGGING_LABEL_OR, CATEGORY_LOGGING_INFO_0_OR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_OR, CATEGORY_GRAPHIC_PACKS_INFO_0_OR },
	{ "cheats", CATEGORY_CHEATS_LABEL_OR, CATEGORY_CHEATS_INFO_0_OR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_OR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_OR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_OR },
			{ "stereo", OPTION_VAL_STEREO_OR },
			{ "surround", OPTION_VAL_SURROUND_OR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_OR,
		NULL,
		CEMU_ACCOUNT_INFO_0_OR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_OR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_OR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_OR },
			{ "Vulkan", OPTION_VAL_VULKAN_OR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_OR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_OR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_OR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_OR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_OR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_OR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_OR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_OR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_OR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_OR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_OR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_OR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_OR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_OR },
			{ "20", OPTION_VAL_20_OR },
			{ "30", OPTION_VAL_30_OR },
			{ "40", OPTION_VAL_40_OR },
			{ "50", OPTION_VAL_50_OR },
			{ "60", OPTION_VAL_60_OR },
			{ "70", OPTION_VAL_70_OR },
			{ "80", OPTION_VAL_80_OR },
			{ "90", OPTION_VAL_90_OR },
			{ "100", OPTION_VAL_100_OR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_OR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_OR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_OR },
			{ "swapped", OPTION_VAL_SWAPPED_OR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_OR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_OR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_OR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_OR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_OR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_OR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_OR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_OR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_OR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_OR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_OR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_PL NULL
#define CATEGORY_SYSTEM_INFO_0_PL NULL
#define CATEGORY_GRAPHICS_LABEL_PL NULL
#define CATEGORY_GRAPHICS_INFO_0_PL NULL
#define CATEGORY_CONTROLLER_LABEL_PL "Kontroler"
#define CATEGORY_CONTROLLER_INFO_0_PL NULL
#define CATEGORY_TITLE_MANAGER_LABEL_PL NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_PL NULL
#define CATEGORY_CORE_LABEL_PL "Rdzeń"
#define CATEGORY_CORE_INFO_0_PL NULL
#define CATEGORY_LOGGING_LABEL_PL "Logowanie"
#define CATEGORY_LOGGING_INFO_0_PL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PL NULL
#define CATEGORY_CHEATS_LABEL_PL NULL
#define CATEGORY_CHEATS_INFO_0_PL NULL
#define CEMU_CPU_MODE_LABEL_PL NULL
#define CEMU_CPU_MODE_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL "Automatyczny"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PL NULL
#define CEMU_THREAD_QUANTUM_LABEL_PL NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_PL NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_PL NULL
#define OPTION_VAL_MONO_PL NULL
#define OPTION_VAL_STEREO_PL NULL
#define OPTION_VAL_SURROUND_PL NULL
#define CEMU_ACCOUNT_LABEL_PL NULL
#define CEMU_ACCOUNT_INFO_0_PL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PL NULL
#define CEMU_RENAME_ACCOUNT_LABEL_PL NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_PL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PL NULL
#define CEMU_GPU_API_LABEL_PL NULL
#define CEMU_GPU_API_INFO_0_PL NULL
#define OPTION_VAL_OPENGL_PL NULL
#define OPTION_VAL_VULKAN_PL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PL NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_PL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PL NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_PL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PL NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_PL NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_PL NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_PL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PL NULL
#define OPTION_VAL_10_PL NULL
#define OPTION_VAL_20_PL NULL
#define OPTION_VAL_30_PL "30 %"
#define OPTION_VAL_40_PL NULL
#define OPTION_VAL_50_PL "50 %"
#define OPTION_VAL_60_PL "60 %"
#define OPTION_VAL_70_PL NULL
#define OPTION_VAL_80_PL "80 %"
#define OPTION_VAL_90_PL NULL
#define OPTION_VAL_100_PL NULL
#define CEMU_GAMEPAD_MOTION_LABEL_PL NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_PL NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_PL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PL NULL
#define OPTION_VAL_0_25X_PL NULL
#define OPTION_VAL_0_5X_PL NULL
#define OPTION_VAL_0_75X_PL NULL
#define OPTION_VAL_NATIVE_PL "Natywny"
#define OPTION_VAL_1_5X_PL NULL
#define OPTION_VAL_2X_PL NULL
#define OPTION_VAL_3X_PL NULL
#define CEMU_RENDER_AHEAD_LABEL_PL NULL
#define CEMU_RENDER_AHEAD_INFO_0_PL NULL
#define CEMU_AUDIO_THREAD_LABEL_PL NULL
#define CEMU_AUDIO_THREAD_INFO_0_PL NULL
#define CEMU_BC1_16BIT_LABEL_PL NULL
#define CEMU_BC1_16BIT_INFO_0_PL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PL NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_PL, CATEGORY_SYSTEM_INFO_0_PL },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_PL, CATEGORY_GRAPHICS_INFO_0_PL },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_PL, CATEGORY_CONTROLLER_INFO_0_PL },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_PL, CATEGORY_TITLE_MANAGER_INFO_0_PL },
	{ "core", CATEGORY_CORE_LABEL_PL, CATEGORY_CORE_INFO_0_PL },
	{ "logging", CATEGORY_LOGGING_LABEL_PL, CATEGORY_LOGGING_INFO_0_PL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PL, CATEGORY_GRAPHIC_PACKS_INFO_0_PL },
	{ "cheats", CATEGORY_CHEATS_LABEL_PL, CATEGORY_CHEATS_INFO_0_PL },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_PL,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_PL,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_PL },
			{ "stereo", OPTION_VAL_STEREO_PL },
			{ "surround", OPTION_VAL_SURROUND_PL },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PL,
		NULL,
		CEMU_ACCOUNT_INFO_0_PL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_PL,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_PL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PL },
			{ "Vulkan", OPTION_VAL_VULKAN_PL },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PL,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_PL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PL,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PL,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_PL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PL,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_PL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_PL,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_PL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PL,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_PL },
			{ "20", OPTION_VAL_20_PL },
			{ "30", OPTION_VAL_30_PL },
			{ "40", OPTION_VAL_40_PL },
			{ "50", OPTION_VAL_50_PL },
			{ "60", OPTION_VAL_60_PL },
			{ "70", OPTION_VAL_70_PL },
			{ "80", OPTION_VAL_80_PL },
			{ "90", OPTION_VAL_90_PL },
			{ "100", OPTION_VAL_100_PL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_PL,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_PL,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_PL },
			{ "swapped", OPTION_VAL_SWAPPED_PL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PL,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PL,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_PL,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_PL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_PL,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_PL,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PL,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_PT_BR "Sistema"
#define CATEGORY_SYSTEM_INFO_0_PT_BR NULL
#define CATEGORY_GRAPHICS_LABEL_PT_BR NULL
#define CATEGORY_GRAPHICS_INFO_0_PT_BR NULL
#define CATEGORY_CONTROLLER_LABEL_PT_BR "Controle"
#define CATEGORY_CONTROLLER_INFO_0_PT_BR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_PT_BR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_PT_BR NULL
#define CATEGORY_CORE_LABEL_PT_BR "Núcleos"
#define CATEGORY_CORE_INFO_0_PT_BR NULL
#define CATEGORY_LOGGING_LABEL_PT_BR "Registro de eventos"
#define CATEGORY_LOGGING_INFO_0_PT_BR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PT_BR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PT_BR NULL
#define CATEGORY_CHEATS_LABEL_PT_BR NULL
#define CATEGORY_CHEATS_INFO_0_PT_BR NULL
#define CEMU_CPU_MODE_LABEL_PT_BR NULL
#define CEMU_CPU_MODE_INFO_0_PT_BR NULL
#define OPTION_VAL_AUTO_PT_BR "Automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PT_BR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PT_BR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PT_BR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PT_BR NULL
#define CEMU_THREAD_QUANTUM_LABEL_PT_BR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_PT_BR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_PT_BR NULL
#define OPTION_VAL_MONO_PT_BR NULL
#define OPTION_VAL_STEREO_PT_BR "Estéreo"
#define OPTION_VAL_SURROUND_PT_BR NULL
#define CEMU_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PT_BR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PT_BR NULL
#define CEMU_GPU_API_LABEL_PT_BR NULL
#define CEMU_GPU_API_INFO_0_PT_BR NULL
#define OPTION_VAL_OPENGL_PT_BR NULL
#define OPTION_VAL_VULKAN_PT_BR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PT_BR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_PT_BR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_BR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PT_BR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_PT_BR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PT_BR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_PT_BR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_PT_BR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_PT_BR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PT_BR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PT_BR NULL
#define OPTION_VAL_10_PT_BR NULL
#define OPTION_VAL_20_PT_BR NULL
#define OPTION_VAL_30_PT_BR NULL
#define OPTION_VAL_40_PT_BR NULL
#define OPTION_VAL_50_PT_BR NULL
#define OPTION_VAL_60_PT_BR NULL
#define OPTION_VAL_70_PT_BR NULL
#define OPTION_VAL_80_PT_BR NULL
#define OPTION_VAL_90_PT_BR NULL
#define OPTION_VAL_100_PT_BR NULL
#define CEMU_GAMEPAD_MOTION_LABEL_PT_BR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_PT_BR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_PT_BR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PT_BR NULL
#define OPTION_VAL_0_25X_PT_BR NULL
#define OPTION_VAL_0_5X_PT_BR NULL
#define OPTION_VAL_0_75X_PT_BR NULL
#define OPTION_VAL_NATIVE_PT_BR "Nativo"
#define OPTION_VAL_1_5X_PT_BR NULL
#define OPTION_VAL_2X_PT_BR NULL
#define OPTION_VAL_3X_PT_BR NULL
#define CEMU_RENDER_AHEAD_LABEL_PT_BR NULL
#define CEMU_RENDER_AHEAD_INFO_0_PT_BR NULL
#define CEMU_AUDIO_THREAD_LABEL_PT_BR NULL
#define CEMU_AUDIO_THREAD_INFO_0_PT_BR NULL
#define CEMU_BC1_16BIT_LABEL_PT_BR NULL
#define CEMU_BC1_16BIT_INFO_0_PT_BR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PT_BR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PT_BR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_BR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PT_BR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_PT_BR, CATEGORY_SYSTEM_INFO_0_PT_BR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_PT_BR, CATEGORY_GRAPHICS_INFO_0_PT_BR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_PT_BR, CATEGORY_CONTROLLER_INFO_0_PT_BR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_PT_BR, CATEGORY_TITLE_MANAGER_INFO_0_PT_BR },
	{ "core", CATEGORY_CORE_LABEL_PT_BR, CATEGORY_CORE_INFO_0_PT_BR },
	{ "logging", CATEGORY_LOGGING_LABEL_PT_BR, CATEGORY_LOGGING_INFO_0_PT_BR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PT_BR, CATEGORY_GRAPHIC_PACKS_INFO_0_PT_BR },
	{ "cheats", CATEGORY_CHEATS_LABEL_PT_BR, CATEGORY_CHEATS_INFO_0_PT_BR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_PT_BR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_PT_BR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_PT_BR },
			{ "stereo", OPTION_VAL_STEREO_PT_BR },
			{ "surround", OPTION_VAL_SURROUND_PT_BR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PT_BR,
		NULL,
		CEMU_ACCOUNT_INFO_0_PT_BR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_PT_BR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_PT_BR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PT_BR },
			{ "Vulkan", OPTION_VAL_VULKAN_PT_BR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PT_BR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_PT_BR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PT_BR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PT_BR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_PT_BR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PT_BR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PT_BR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_PT_BR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_PT_BR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_PT_BR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PT_BR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PT_BR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_PT_BR },
			{ "20", OPTION_VAL_20_PT_BR },
			{ "30", OPTION_VAL_30_PT_BR },
			{ "40", OPTION_VAL_40_PT_BR },
			{ "50", OPTION_VAL_50_PT_BR },
			{ "60", OPTION_VAL_60_PT_BR },
			{ "70", OPTION_VAL_70_PT_BR },
			{ "80", OPTION_VAL_80_PT_BR },
			{ "90", OPTION_VAL_90_PT_BR },
			{ "100", OPTION_VAL_100_PT_BR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_PT_BR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_PT_BR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_PT_BR },
			{ "swapped", OPTION_VAL_SWAPPED_PT_BR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PT_BR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PT_BR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PT_BR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PT_BR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_PT_BR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_PT_BR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_PT_BR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_PT_BR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PT_BR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PT_BR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_BR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_PT_PT NULL
#define CATEGORY_SYSTEM_INFO_0_PT_PT NULL
#define CATEGORY_GRAPHICS_LABEL_PT_PT NULL
#define CATEGORY_GRAPHICS_INFO_0_PT_PT NULL
#define CATEGORY_CONTROLLER_LABEL_PT_PT "Comando"
#define CATEGORY_CONTROLLER_INFO_0_PT_PT NULL
#define CATEGORY_TITLE_MANAGER_LABEL_PT_PT NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_PT_PT NULL
#define CATEGORY_CORE_LABEL_PT_PT "Núcleo"
#define CATEGORY_CORE_INFO_0_PT_PT NULL
#define CATEGORY_LOGGING_LABEL_PT_PT "Registo"
#define CATEGORY_LOGGING_INFO_0_PT_PT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_PT_PT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_PT_PT NULL
#define CATEGORY_CHEATS_LABEL_PT_PT NULL
#define CATEGORY_CHEATS_INFO_0_PT_PT NULL
#define CEMU_CPU_MODE_LABEL_PT_PT NULL
#define CEMU_CPU_MODE_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT "Automático"
#define OPTION_VAL_SINGLECORE_INTERPRETER_PT_PT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_PT_PT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_PT_PT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_PT_PT NULL
#define CEMU_THREAD_QUANTUM_LABEL_PT_PT NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_PT_PT NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_PT_PT NULL
#define OPTION_VAL_MONO_PT_PT NULL
#define OPTION_VAL_STEREO_PT_PT NULL
#define OPTION_VAL_SURROUND_PT_PT NULL
#define CEMU_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_RENAME_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_PT_PT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_PT_PT NULL
#define CEMU_GPU_API_LABEL_PT_PT NULL
#define CEMU_GPU_API_INFO_0_PT_PT NULL
#define OPTION_VAL_OPENGL_PT_PT NULL
#define OPTION_VAL_VULKAN_PT_PT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_PT_PT NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_PT_PT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_PT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_PT_PT NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_PT_PT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_PT_PT NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_PT_PT NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_PT_PT NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_PT_PT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_PT_PT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_PT_PT NULL
#define OPTION_VAL_10_PT_PT NULL
#define OPTION_VAL_20_PT_PT NULL
#define OPTION_VAL_30_PT_PT NULL
#define OPTION_VAL_40_PT_PT NULL
#define OPTION_VAL_50_PT_PT NULL
#define OPTION_VAL_60_PT_PT NULL
#define OPTION_VAL_70_PT_PT NULL
#define OPTION_VAL_80_PT_PT NULL
#define OPTION_VAL_90_PT_PT NULL
#define OPTION_VAL_100_PT_PT NULL
#define CEMU_GAMEPAD_MOTION_LABEL_PT_PT NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_PT_PT NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_PT_PT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_PT_PT NULL
#define OPTION_VAL_0_25X_PT_PT NULL
#define OPTION_VAL_0_5X_PT_PT NULL
#define OPTION_VAL_0_75X_PT_PT NULL
#define OPTION_VAL_NATIVE_PT_PT NULL
#define OPTION_VAL_1_5X_PT_PT NULL
#define OPTION_VAL_2X_PT_PT NULL
#define OPTION_VAL_3X_PT_PT NULL
#define CEMU_RENDER_AHEAD_LABEL_PT_PT NULL
#define CEMU_RENDER_AHEAD_INFO_0_PT_PT NULL
#define CEMU_AUDIO_THREAD_LABEL_PT_PT NULL
#define CEMU_AUDIO_THREAD_INFO_0_PT_PT NULL
#define CEMU_BC1_16BIT_LABEL_PT_PT NULL
#define CEMU_BC1_16BIT_INFO_0_PT_PT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_PT_PT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_PT_PT NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_PT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_PT_PT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_PT_PT, CATEGORY_SYSTEM_INFO_0_PT_PT },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_PT_PT, CATEGORY_GRAPHICS_INFO_0_PT_PT },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_PT_PT, CATEGORY_CONTROLLER_INFO_0_PT_PT },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_PT_PT, CATEGORY_TITLE_MANAGER_INFO_0_PT_PT },
	{ "core", CATEGORY_CORE_LABEL_PT_PT, CATEGORY_CORE_INFO_0_PT_PT },
	{ "logging", CATEGORY_LOGGING_LABEL_PT_PT, CATEGORY_LOGGING_INFO_0_PT_PT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_PT_PT, CATEGORY_GRAPHIC_PACKS_INFO_0_PT_PT },
	{ "cheats", CATEGORY_CHEATS_LABEL_PT_PT, CATEGORY_CHEATS_INFO_0_PT_PT },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_PT_PT,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_PT_PT,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_PT_PT },
			{ "stereo", OPTION_VAL_STEREO_PT_PT },
			{ "surround", OPTION_VAL_SURROUND_PT_PT },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_PT_PT,
		NULL,
		CEMU_ACCOUNT_INFO_0_PT_PT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_PT_PT,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_PT_PT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_PT_PT },
			{ "Vulkan", OPTION_VAL_VULKAN_PT_PT },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_PT_PT,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_PT_PT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PT_PT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_PT_PT,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_PT_PT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_PT_PT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_PT_PT,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_PT_PT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_PT_PT,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_PT_PT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_PT_PT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_PT_PT,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_PT_PT },
			{ "20", OPTION_VAL_20_PT_PT },
			{ "30", OPTION_VAL_30_PT_PT },
			{ "40", OPTION_VAL_40_PT_PT },
			{ "50", OPTION_VAL_50_PT_PT },
			{ "60", OPTION_VAL_60_PT_PT },
			{ "70", OPTION_VAL_70_PT_PT },
			{ "80", OPTION_VAL_80_PT_PT },
			{ "90", OPTION_VAL_90_PT_PT },
			{ "100", OPTION_VAL_100_PT_PT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_PT_PT,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_PT_PT,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_PT_PT },
			{ "swapped", OPTION_VAL_SWAPPED_PT_PT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_PT_PT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_PT_PT,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_PT_PT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_PT_PT,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_PT_PT,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_PT_PT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_PT_PT,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_PT_PT,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_PT_PT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_PT_PT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_PT_PT,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_RU "Система"
#define CATEGORY_SYSTEM_INFO_0_RU NULL
#define CATEGORY_GRAPHICS_LABEL_RU NULL
#define CATEGORY_GRAPHICS_INFO_0_RU NULL
#define CATEGORY_CONTROLLER_LABEL_RU "Контроллер"
#define CATEGORY_CONTROLLER_INFO_0_RU NULL
#define CATEGORY_TITLE_MANAGER_LABEL_RU NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_RU NULL
#define CATEGORY_CORE_LABEL_RU "Ядра"
#define CATEGORY_CORE_INFO_0_RU NULL
#define CATEGORY_LOGGING_LABEL_RU "Логирование"
#define CATEGORY_LOGGING_INFO_0_RU NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_RU NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_RU NULL
#define CATEGORY_CHEATS_LABEL_RU NULL
#define CATEGORY_CHEATS_INFO_0_RU NULL
#define CEMU_CPU_MODE_LABEL_RU NULL
#define CEMU_CPU_MODE_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU "Автоматически"
#define OPTION_VAL_SINGLECORE_INTERPRETER_RU NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_RU NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_RU NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_RU NULL
#define CEMU_THREAD_QUANTUM_LABEL_RU NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_RU NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_RU NULL
#define OPTION_VAL_MONO_RU "Моно"
#define OPTION_VAL_STEREO_RU "Стерео"
#define OPTION_VAL_SURROUND_RU NULL
#define CEMU_ACCOUNT_LABEL_RU NULL
#define CEMU_ACCOUNT_INFO_0_RU NULL
#define CEMU_CREATE_ACCOUNT_LABEL_RU NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_RU NULL
#define CEMU_RENAME_ACCOUNT_LABEL_RU NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_RU NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_RU NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_RU NULL
#define CEMU_GPU_API_LABEL_RU NULL
#define CEMU_GPU_API_INFO_0_RU NULL
#define OPTION_VAL_OPENGL_RU NULL
#define OPTION_VAL_VULKAN_RU NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_RU NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_RU NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_RU NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_RU NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_RU NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_RU NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_RU NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_RU NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_RU NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_RU NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_RU NULL
#define OPTION_VAL_10_RU NULL
#define OPTION_VAL_20_RU NULL
#define OPTION_VAL_30_RU NULL
#define OPTION_VAL_40_RU NULL
#define OPTION_VAL_50_RU NULL
#define OPTION_VAL_60_RU NULL
#define OPTION_VAL_70_RU NULL
#define OPTION_VAL_80_RU NULL
#define OPTION_VAL_90_RU NULL
#define OPTION_VAL_100_RU NULL
#define CEMU_GAMEPAD_MOTION_LABEL_RU NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_RU NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_RU NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_RU NULL
#define OPTION_VAL_0_25X_RU NULL
#define OPTION_VAL_0_5X_RU NULL
#define OPTION_VAL_0_75X_RU NULL
#define OPTION_VAL_NATIVE_RU "Исходное"
#define OPTION_VAL_1_5X_RU NULL
#define OPTION_VAL_2X_RU NULL
#define OPTION_VAL_3X_RU NULL
#define CEMU_RENDER_AHEAD_LABEL_RU NULL
#define CEMU_RENDER_AHEAD_INFO_0_RU NULL
#define CEMU_AUDIO_THREAD_LABEL_RU NULL
#define CEMU_AUDIO_THREAD_INFO_0_RU NULL
#define CEMU_BC1_16BIT_LABEL_RU NULL
#define CEMU_BC1_16BIT_INFO_0_RU NULL
#define CEMU_SHOW_GAME_FPS_LABEL_RU NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_RU NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_RU NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_RU NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_RU, CATEGORY_SYSTEM_INFO_0_RU },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_RU, CATEGORY_GRAPHICS_INFO_0_RU },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_RU, CATEGORY_CONTROLLER_INFO_0_RU },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_RU, CATEGORY_TITLE_MANAGER_INFO_0_RU },
	{ "core", CATEGORY_CORE_LABEL_RU, CATEGORY_CORE_INFO_0_RU },
	{ "logging", CATEGORY_LOGGING_LABEL_RU, CATEGORY_LOGGING_INFO_0_RU },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_RU, CATEGORY_GRAPHIC_PACKS_INFO_0_RU },
	{ "cheats", CATEGORY_CHEATS_LABEL_RU, CATEGORY_CHEATS_INFO_0_RU },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_RU,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_RU,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_RU },
			{ "stereo", OPTION_VAL_STEREO_RU },
			{ "surround", OPTION_VAL_SURROUND_RU },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_RU,
		NULL,
		CEMU_ACCOUNT_INFO_0_RU,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_RU,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_RU,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_RU },
			{ "Vulkan", OPTION_VAL_VULKAN_RU },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_RU,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_RU,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_RU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_RU,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_RU,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_RU,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_RU },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_RU,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_RU,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_RU,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_RU,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_RU,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_RU,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_RU },
			{ "20", OPTION_VAL_20_RU },
			{ "30", OPTION_VAL_30_RU },
			{ "40", OPTION_VAL_40_RU },
			{ "50", OPTION_VAL_50_RU },
			{ "60", OPTION_VAL_60_RU },
			{ "70", OPTION_VAL_70_RU },
			{ "80", OPTION_VAL_80_RU },
			{ "90", OPTION_VAL_90_RU },
			{ "100", OPTION_VAL_100_RU },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_RU,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_RU,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_RU },
			{ "swapped", OPTION_VAL_SWAPPED_RU },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_RU,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_RU,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_RU,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_RU,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_RU,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_RU,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_RU,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_RU,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_RU,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_RU,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_RU,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_SK "Systém"
#define CATEGORY_SYSTEM_INFO_0_SK "Procesor, jazyk, zvukové kanály a účty."
#define CATEGORY_GRAPHICS_LABEL_SK "Grafika (reštart)"
#define CATEGORY_GRAPHICS_INFO_0_SK "Grafické API a shadery. Prejavia sa pri ďalšom spustení hry, ak voľba neuvádza inak."
#define CATEGORY_CONTROLLER_LABEL_SK "Ovládač"
#define CATEGORY_CONTROLLER_INFO_0_SK "Vibrácie, pohyb a ktorá obrazovka Wii U sa zobrazuje a ako."
#define CATEGORY_TITLE_MANAGER_LABEL_SK "Správca titulov"
#define CATEGORY_TITLE_MANAGER_INFO_0_SK "Inštalácia a odinštalácia hier, aktualizácií titulov a DLC v saves/Cemu/mlc01, úložisku emulovanej konzoly, a konverzia načítaného titulu do .wua."
#define CATEGORY_CORE_LABEL_SK "Jadro"
#define CATEGORY_CORE_INFO_0_SK "Voľby tohto jadra, ktoré samostatný Cemu nemá."
#define CATEGORY_LOGGING_LABEL_SK "Záznam"
#define CATEGORY_LOGGING_INFO_0_SK "Dodatočný výstup do záznamu na diagnostiku problémov."
#define CATEGORY_GRAPHIC_PACKS_LABEL_SK "Grafické balíčky (reštart)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SK "Grafické balíčky načítanej hry a ich predvoľby. Vlastné balíčky alebo upravené kópie vstavaných patria do system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_SK "Cheaty (reštart)"
#define CATEGORY_CHEATS_INFO_0_SK "Balíčky cheatov načítanej hry z priečinka Cheats grafických balíčkov."
#define CEMU_CPU_MODE_LABEL_SK "Režim CPU (reštart)"
#define CEMU_CPU_MODE_INFO_0_SK "Ako sa emulujú jadrá PowerPC konzoly Wii U. Automaticky: režim z profilu hry, ak ho má, ako v samostatnom Cemu; inak viacjadrový rekompilátor na procesore so štyrmi alebo viac fyzickými jadrami a jednojadrový v ostatných prípadoch. Interpretery sú oveľa pomalšie a sú určené na ladenie."
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SK "Jednojadrový interpreter"
#define OPTION_VAL_SINGLECORE_RECOMPILER_SK "Jednojadrový rekompilátor"
#define OPTION_VAL_MULTICORE_RECOMPILER_SK "Viacjadrový rekompilátor"
#define OPTION_VAL_MULTICORE_INTERPRETER_SK "Viacjadrový interpreter"
#define CEMU_THREAD_QUANTUM_LABEL_SK "Kvantum vlákien"
#define CEMU_CONSOLE_LANGUAGE_LABEL_SK "Jazyk konzoly (reštart)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_SK "Zvukové kanály (reštart)"
#define CEMU_AUDIO_CHANNELS_INFO_0_SK "Televízor, ktorý konzola hlási hrám, ako nastavenie TV kanálov v samostatnej verzii: hry, ktoré to podporujú, miešajú zvuk pre taký počet reproduktorov. Surround 5.1 ide do RetroArchu ako šesť kanálov, ak má viackanálový zvukový výstup, inak sa zmieša do sterea."
#define OPTION_VAL_MONO_SK NULL
#define OPTION_VAL_STEREO_SK NULL
#define OPTION_VAL_SURROUND_SK NULL
#define CEMU_ACCOUNT_LABEL_SK "Aktívny účet (reštart)"
#define CEMU_ACCOUNT_INFO_0_SK "Účet Wii U, pod ktorým hra beží, každý s vlastnými uloženými hrami a Mii. Zoznam obsahuje účty v priečinku účtov.\n\nKým sa hra znova nespustí, bežiaca hra ukladá do účtu, s ktorým bola spustená."
#define CEMU_CREATE_ACCOUNT_LABEL_SK "Vytvoriť účet"
#define CEMU_CREATE_ACCOUNT_INFO_0_SK "Vytvorí nový účet s menom Player 2, Player 3 atď. a nastaví ho ako aktívny účet. Potom sa voľba vráti na VYPNUTÉ. Nový účet sa v zozname účtov objaví, keď sa táto ponuka zavrie a znovu otvorí. Konzola pojme najviac 12 účtov."
#define CEMU_RENAME_ACCOUNT_LABEL_SK "Premenovať aktívny účet"
#define CEMU_RENAME_ACCOUNT_INFO_0_SK "Po zatvorení tejto ponuky otvorí zadávanie mena aktívneho účtu a vráti sa na VYPNUTÉ. Rozpísané meno sa zobrazuje ako upozornenie nad hrou, preto musia byť zapnuté upozornenia frontendu na obrazovke.\n\nOvládačom: Hore a Dole menia posledný znak, Vpravo pridá znak, Vľavo jeden odstráni, Start potvrdí, Select zruší.\n\nKlávesnicou: píšte, Backspace odstraňuje, Enter potvrdí, Escape zruší (frontend môže potrebovať zapnutý Game Focus, aby jadru odovzdával klávesy).\n\nMeno má najviac 10 znakov. Hra nedostáva žiadny vstup, kým sa zadávanie nezavrie, a bežiaca hra ukáže nové meno až po ďalšom spustení."
#define CEMU_REMOVE_ACCOUNT_LABEL_SK "Odstrániť účet"
#define CEMU_REMOVE_ACCOUNT_INFO_0_SK "Odstráni vybraný účet z priečinka účtov (saves/Cemu/mlc01/usr/save/system/act), tak ako zmazanie používateľa na konzole, keď sa táto ponuka zavrie. Po návrate do ponuky voľba znovu ukazuje VYPNUTÉ.Aktívny účet sa odstrániť nedá, ani účet, s ktorým bola spustená bežiaca hra, kým sa tá hra nezavrie.VAROVANIE: odstránenie účtu natrvalo zmaže aj uložené pozície vytvorené pod ním v každej hre. Pred odstránením si zálohujte pozície, ktoré chcete zachovať."
#define CEMU_GPU_API_LABEL_SK "Grafické API"
#define CEMU_GPU_API_INFO_0_SK "Grafické API, ktorým Cemu vykresľuje."
#define OPTION_VAL_OPENGL_SK NULL
#define OPTION_VAL_VULKAN_SK NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_SK "Predkompilované shadery (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_SK "Vyrovnávacia pamäť skompilovaných shaderových programov. Automaticky: nastavenie z profilu hry, ak ho má, ako v samostatnom Cemu; inak vypnuté na Nvidii, ktorej ovládač má vlastnú vyrovnávaciu pamäť, a inde zapnuté."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SK "Asynchrónna kompilácia shaderov (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SK "Presné násobenie v shaderoch"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_SK "Presne emuluje násobenie v GPU, ako to väčšina hier potrebuje. Automaticky: nastavenie z profilu hry, ak ho má, ako v samostatnom Cemu (Super Mario 3D World, Captain Toad a Xenoblade Chronicles X bežia s vypnutým); inak zapnuté."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SK "Synchronizácia GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_SK "Pri každom volaní GX2DrawDone nechá hru čakať, kým GPU dokončí všetku prácu, ako voľba Full sync at GX2DrawDone v samostatnom Cemu. Niektoré hry to potrebujú na správne zobrazenie; vypnuté môže byť rýchlejšie. Dá sa prepnúť počas hrania."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_SK "Presné bariéry (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_SK "Zachová synchronizáciu medzi kresleniami, ktorú niektoré hry potrebujú na správne vykresľovanie, ako rovnomenná voľba samostatného Cemu. Vypnuté môže byť rýchlejšie, s chybami v týchto hrách. Dá sa prepnúť počas hrania."
#define CEMU_RUMBLE_STRENGTH_LABEL_SK "Sila vibrácií"
#define CEMU_RUMBLE_STRENGTH_INFO_0_SK "Ako silno ovládač vibruje, keď o to hra požiada: motor GamePadu a Wii Remote alebo Pro Controllera. Pri vypnutí sa frontendu neposielajú žiadne vibrácie."
#define OPTION_VAL_10_SK NULL
#define OPTION_VAL_20_SK NULL
#define OPTION_VAL_30_SK NULL
#define OPTION_VAL_40_SK NULL
#define OPTION_VAL_50_SK NULL
#define OPTION_VAL_60_SK NULL
#define OPTION_VAL_70_SK NULL
#define OPTION_VAL_80_SK NULL
#define OPTION_VAL_90_SK NULL
#define OPTION_VAL_100_SK NULL
#define CEMU_GAMEPAD_MOTION_LABEL_SK "Pohyb GamePadu"
#define CEMU_GAMEPAD_MOTION_INFO_0_SK "Gyroskop a akcelerometer GamePadu zo senzorov, ktoré RetroArch číta na porte 1: vlastné senzory telefónu alebo tabletu, alebo ovládača, kde ich poskytuje vstupný ovládač RetroArchu (DualShock 4, DualSense a ďalšie). Potrebujú to hry, v ktorých sa mieri alebo riadi nakláňaním GamePadu. Vypnuté: GamePad leží nehybne, ako pri vypnutom pohybe v samostatnej verzii."
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
#define CEMU_INSTALL_GAME_LABEL_SK "Inštalovať hry"
#define CEMU_INSTALL_GAME_INFO_0_SK "Nainštaluje každú hru zo zdrojového priečinka (system/Cemu/titles), vrátane podpriečinkov, do priečinka nainštalovaných hier emulovaného Wii U (saves/Cemu/mlc01/usr/title/00050000), tak ako konzola inštaluje hru z disku. Hra je obraz disku (.wud, .wux, .iso) alebo .wua; aktualizácia titulu a DLC, ktoré .wua obsahuje, sa nainštalujú s ňou. Šifrovaný obraz disku (.wud, .wux) potrebuje svoj kľúč disku: v súbore vedľa neho s rovnakým názvom a príponou .key (game.wux, game.key), alebo v system/Cemu/keys.txt. Hra už nainštalovaná v rovnakej alebo novšej verzii sa nemení.Keď je toto ZAPNUTÉ, inštalácia začne okamžite, jej priebeh sa zobrazuje ako upozornenie, a znovu sa VYPNE, keď sú všetky hry nainštalované a táto ponuka sa zavrie alebo sa zmení iná voľba. Nainštalovaná hra sa spúšťa načítaním súboru .rpx v jej priečinku code v priečinku nainštalovaných hier; jej obraz disku už nie je potrebný."
#define CEMU_UNINSTALL_GAME_LABEL_SK "Odinštalovať hru"
#define CEMU_UNINSTALL_GAME_INFO_0_SK "Odinštaluje bežiacu hru a všetky súvisiace aktualizácie titulu a DLC z priečinka nainštalovaného obsahu (saves/Cemu/mlc01/usr/title), keď sa hra zavrie alebo resetuje; dovtedy voľba ostáva ZAPNUTÁ. Uložené pozície pre ID titulu hry (saves/Cemu/mlc01/usr/save/<title id>) sa neodstraňujú."
#define CEMU_INSTALL_TITLES_LABEL_SK "Inštalovať obsah"
#define CEMU_INSTALL_TITLES_INFO_0_SK "Nainštaluje každú aktualizáciu titulu a DLC zo zdrojového priečinka (system/Cemu/titles), vrátane podpriečinkov, do priečinka nainštalovaného obsahu (saves/Cemu/mlc01/usr/title). Každá ide do vlastného priečinka v zdrojovom priečinku; stiahnutie z NUS (súbory .app) potrebuje vedľa seba svoj title.tmd a title.tik, dešifrovací kľúč. Už nainštalovaná rovnaká alebo novšia verzia sa nemení.Keď je toto ZAPNUTÉ, inštalácia začne okamžite, jej priebeh sa zobrazuje ako upozornenie, a znovu sa VYPNE, keď je všetok obsah nainštalovaný a táto ponuka sa zavrie alebo sa zmení iná voľba. Hra použije nainštalovaný obsah po opätovnom spustení.Obsah z iných umiestnení sa dá nainštalovať cez Hlavná ponuka > Načítať obsah v RetroArchu výberom príslušného title.tmd, s jeho title.tik vedľa neho."
#define CEMU_UNINSTALL_TITLES_LABEL_SK "Odinštalovať obsah"
#define CEMU_UNINSTALL_TITLES_INFO_0_SK "Odinštaluje aktualizáciu titulu a DLC bežiacej hry z priečinka nainštalovaného obsahu (saves/Cemu/mlc01/usr/title), keď sa hra zavrie alebo resetuje; dovtedy voľba ostáva ZAPNUTÁ. Kópie v zdrojovom priečinku (system/Cemu/titles) sa nemenia."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_SK "Odstrániť súbory po inštalácii"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SK "Odstráni zo zdrojového priečinka (system/Cemu/titles) to, čo nainštalovali Inštalovať hry a Inštalovať obsah: priečinok aktualizácie titulu alebo DLC po jeho nainštalovaní, a obraz disku (s jeho súborom .key) alebo .wua, keď je nainštalované všetko, čo obsahuje. Súbory, ktoré používa bežiaca hra, sa odstránia, keď sa zavrie alebo resetuje.VAROVANIE: toto natrvalo odstraňuje súbory zo zdrojového priečinka. Ten priečinok spravuje jadro; herné dáta, ktoré chcete archivovať, majte inde."
#define CEMU_WUA_OUTPUT_DIR_LABEL_SK "Výstupný priečinok"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_SK "Kam sa zapíše súbor .wua. Musí mať preň dosť miesta."
#define CEMU_CONVERT_TO_WUA_LABEL_SK "Spustiť konverziu do WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_SK "Zapíše titul do výstupného priečinka ako .wua. Počas toho beží ďalej."
#define CEMU_INTERNAL_RESOLUTION_LABEL_SK "Vnútorné rozlíšenie (reštart)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SK "Všeobecné náhradné riešenie pre hry bez grafického balíčka rozlíšenia: zmení veľkosť každého vykresľovacieho cieľa v tvare obrazovky, čo niektoré hry používajú na veci, ktoré sa pri zmene veľkosti pokazia. Násobok vlastného rozlíšenia hry: pre hru v 720p je 0.5x 640x360, štvrtina pixelov, a 2x je 2560x1440; pre hru v 1080p je 0.5x 960x540. Keď je pre načítanú hru zapnutý balíček rozlíšenia (Grafické balíčky), rozlíšenie určuje balíček."
#define OPTION_VAL_0_25X_SK "0.25x (320x180 pri 720p)"
#define OPTION_VAL_0_5X_SK "0.5x (640x360 pri 720p)"
#define OPTION_VAL_0_75X_SK "0.75x (960x540 pri 720p)"
#define OPTION_VAL_NATIVE_SK "Natívne"
#define OPTION_VAL_1_5X_SK "1.5x (1920x1080 pri 720p)"
#define OPTION_VAL_2X_SK "2x (2560x1440 pri 720p)"
#define OPTION_VAL_3X_SK "3x (3840x2160 pri 720p)"
#define CEMU_RENDER_AHEAD_LABEL_SK "Vykresľovať o snímku dopredu"
#define CEMU_RENDER_AHEAD_INFO_0_SK "Umožní Cemu začať kresliť ďalšiu snímku, kým RetroArch zobrazuje predchádzajúcu, ako to robí samostatný Cemu. Plynulejšie tam, kde kreslenie snímky zaberá väčšinu času snímky, za cenu oneskorenia vstupu o jednu snímku navyše."
#define CEMU_AUDIO_THREAD_LABEL_SK "Zvukové vlákno (reštart)"
#define CEMU_AUDIO_THREAD_INFO_0_SK "Zapnuté: RetroArch preberá zvuk vo vlastnom vlákne a zvuk Wii U beží podľa hodín ako v samostatnom Cemu, takže sa nepreruší, keď snímka mešká (načítanie, kompilácia shaderov). Synchronizácia zvuku v RetroArchu potom už nečasuje snímky; robí to Vertikálna synchronizácia a štatistiky zvuku v RetroArchu ostanú prázdne. Vypnuté: zvuk sa odovzdáva s každou snímkou."
#define CEMU_BC1_16BIT_LABEL_SK "Zmenšiť pamäť textúr BC1 (reštart)"
#define CEMU_BC1_16BIT_INFO_0_SK "Zníži na polovicu pamäť, ktorú zaberajú textúry BC1 na GPU, ktorá nevie vzorkovať BC, za cenu jedného bitu zelenej. Kde je BC podporované, nemá žiadny účinok."
#define CEMU_SHOW_GAME_FPS_LABEL_SK "Zobraziť FPS hry"
#define CEMU_SHOW_GAME_FPS_INFO_0_SK "Raz za sekundu zobrazí na obrazovke RetroArchu snímkovú frekvenciu, akou hra vykresľuje."
#define CEMU_LOG_TO_FILE_LABEL_SK "Zapisovať záznam Cemu do log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_SK "Zaznamenávať prístup k súborom (ladenie)"
#define CEMU_LOG_THREAD_SYNC_LABEL_SK "Zaznamenávať synchronizáciu vlákien (ladenie)"
#define CEMU_LOG_SYSTEM_API_LABEL_SK "Zaznamenávať volania systémového API (ladenie)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_SK "Zaznamenávať pamäť textúr (ladenie)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_SK "Hlási, koľko pamäte textúr tvoria textúry BC, ktoré bolo treba dekomprimovať, lebo ich táto GPU nevie vzorkovať."
#define CEMU_LOG_INPUT_API_LABEL_SK "Zaznamenávať volania API ovládačov (ladenie)"
#define CEMU_LOG_INPUT_API_INFO_0_SK "Zaznamená každé volanie ovládača, ktoré titul urobí – ktoré gamepady hľadal a čo sa dozvedel. Veľa záznamov; zapínajte na pár sekúnd."
#define CEMU_LOG_AUDIO_LABEL_SK "Zaznamenávať zvuk a časovanie snímok (ladenie)"
#define CEMU_LOG_AUDIO_INFO_0_SK "Raz za sekundu: koľko vzoriek vyrobil AX, koľko ich musel kruhový zásobník zahodiť a koľko si vzal frontend; a koľkokrát frontend spustil jadro, koľko snímok titul dokončil a kam šiel čas (čakanie na vlákno GPU, prezentácia, zvuk). Na zistenie, či pomalú hru brzdí emulovaný procesor, GPU alebo frontend."
#define CEMU_LOG_THREAD_TIME_LABEL_SK "Zaznamenávať procesorový čas vlákien (ladenie)"
#define CEMU_LOG_THREAD_TIME_INFO_0_SK "Raz za sekundu: ako vyťažené bolo vlákno každého emulovaného jadra PowerPC, vlákno GPU a vlákno frontendu, ako podiel jedného jadra hostiteľa. Vlákno blízko 100 % je to, na ktoré pomalá hra čaká."
#define CEMU_DUMP_SHADERS_LABEL_SK "Ukladať shadery (ladenie)"
#define CEMU_DUMP_SHADERS_INFO_0_SK "Zapíše zdrojový kód každého shadera, ktorý hra používa, do system/Cemu/dump/shaders, pomenovaný podľa jeho hashov tak, ako sa objavujú v log.txt. Na nahlásenie shadera, ktorý na konkrétnom GPU zlyhá alebo kreslí nesprávne. Spomaľuje kompiláciu shaderov a priečinok rýchlo zapĺňa, preto ho potom znova vypnite."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SK "Emulovať Skylanders Portal of Power (reštart)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SK "Emulovať Infinity Base (reštart)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SK "Emulovať Dimensions Toy Pad (reštart)"

struct retro_core_option_v2_category option_cats_sk[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_SK, CATEGORY_SYSTEM_INFO_0_SK },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_SK, CATEGORY_GRAPHICS_INFO_0_SK },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_SK, CATEGORY_CONTROLLER_INFO_0_SK },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_SK, CATEGORY_TITLE_MANAGER_INFO_0_SK },
	{ "core", CATEGORY_CORE_LABEL_SK, CATEGORY_CORE_INFO_0_SK },
	{ "logging", CATEGORY_LOGGING_LABEL_SK, CATEGORY_LOGGING_INFO_0_SK },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SK, CATEGORY_GRAPHIC_PACKS_INFO_0_SK },
	{ "cheats", CATEGORY_CHEATS_LABEL_SK, CATEGORY_CHEATS_INFO_0_SK },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_SK,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_SK,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_SK },
			{ "stereo", OPTION_VAL_STEREO_SK },
			{ "surround", OPTION_VAL_SURROUND_SK },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SK,
		NULL,
		CEMU_ACCOUNT_INFO_0_SK,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_SK,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_SK,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SK },
			{ "Vulkan", OPTION_VAL_VULKAN_SK },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SK,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_SK,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SK,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SK,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_SK,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SK,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_SK,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_SK,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_SK,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SK,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SK,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_SK },
			{ "20", OPTION_VAL_20_SK },
			{ "30", OPTION_VAL_30_SK },
			{ "40", OPTION_VAL_40_SK },
			{ "50", OPTION_VAL_50_SK },
			{ "60", OPTION_VAL_60_SK },
			{ "70", OPTION_VAL_70_SK },
			{ "80", OPTION_VAL_80_SK },
			{ "90", OPTION_VAL_90_SK },
			{ "100", OPTION_VAL_100_SK },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_SK,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_SK,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_SK },
			{ "swapped", OPTION_VAL_SWAPPED_SK },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SK,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SK,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SK,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SK,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_SK,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_SK,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_SK,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_SK,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SK,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SK,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SK,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_SR NULL
#define CATEGORY_SYSTEM_INFO_0_SR NULL
#define CATEGORY_GRAPHICS_LABEL_SR NULL
#define CATEGORY_GRAPHICS_INFO_0_SR NULL
#define CATEGORY_CONTROLLER_LABEL_SR "Kontroler"
#define CATEGORY_CONTROLLER_INFO_0_SR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_SR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_SR NULL
#define CATEGORY_CORE_LABEL_SR "Jezgro"
#define CATEGORY_CORE_INFO_0_SR NULL
#define CATEGORY_LOGGING_LABEL_SR "Beleženje"
#define CATEGORY_LOGGING_INFO_0_SR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_SR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SR NULL
#define CATEGORY_CHEATS_LABEL_SR NULL
#define CATEGORY_CHEATS_INFO_0_SR NULL
#define CEMU_CPU_MODE_LABEL_SR NULL
#define CEMU_CPU_MODE_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_SR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_SR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_SR NULL
#define CEMU_THREAD_QUANTUM_LABEL_SR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_SR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_SR NULL
#define OPTION_VAL_MONO_SR NULL
#define OPTION_VAL_STEREO_SR NULL
#define OPTION_VAL_SURROUND_SR NULL
#define CEMU_ACCOUNT_LABEL_SR NULL
#define CEMU_ACCOUNT_INFO_0_SR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_SR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_SR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_SR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_SR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_SR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_SR NULL
#define CEMU_GPU_API_LABEL_SR NULL
#define CEMU_GPU_API_INFO_0_SR NULL
#define OPTION_VAL_OPENGL_SR NULL
#define OPTION_VAL_VULKAN_SR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_SR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_SR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_SR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_SR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_SR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_SR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_SR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_SR NULL
#define OPTION_VAL_10_SR NULL
#define OPTION_VAL_20_SR NULL
#define OPTION_VAL_30_SR NULL
#define OPTION_VAL_40_SR NULL
#define OPTION_VAL_50_SR NULL
#define OPTION_VAL_60_SR NULL
#define OPTION_VAL_70_SR NULL
#define OPTION_VAL_80_SR NULL
#define OPTION_VAL_90_SR NULL
#define OPTION_VAL_100_SR NULL
#define CEMU_GAMEPAD_MOTION_LABEL_SR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_SR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_SR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SR NULL
#define OPTION_VAL_0_25X_SR NULL
#define OPTION_VAL_0_5X_SR NULL
#define OPTION_VAL_0_75X_SR NULL
#define OPTION_VAL_NATIVE_SR NULL
#define OPTION_VAL_1_5X_SR NULL
#define OPTION_VAL_2X_SR NULL
#define OPTION_VAL_3X_SR NULL
#define CEMU_RENDER_AHEAD_LABEL_SR NULL
#define CEMU_RENDER_AHEAD_INFO_0_SR NULL
#define CEMU_AUDIO_THREAD_LABEL_SR NULL
#define CEMU_AUDIO_THREAD_INFO_0_SR NULL
#define CEMU_BC1_16BIT_LABEL_SR NULL
#define CEMU_BC1_16BIT_INFO_0_SR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_SR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_SR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_SR, CATEGORY_SYSTEM_INFO_0_SR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_SR, CATEGORY_GRAPHICS_INFO_0_SR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_SR, CATEGORY_CONTROLLER_INFO_0_SR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_SR, CATEGORY_TITLE_MANAGER_INFO_0_SR },
	{ "core", CATEGORY_CORE_LABEL_SR, CATEGORY_CORE_INFO_0_SR },
	{ "logging", CATEGORY_LOGGING_LABEL_SR, CATEGORY_LOGGING_INFO_0_SR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SR, CATEGORY_GRAPHIC_PACKS_INFO_0_SR },
	{ "cheats", CATEGORY_CHEATS_LABEL_SR, CATEGORY_CHEATS_INFO_0_SR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_SR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_SR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_SR },
			{ "stereo", OPTION_VAL_STEREO_SR },
			{ "surround", OPTION_VAL_SURROUND_SR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SR,
		NULL,
		CEMU_ACCOUNT_INFO_0_SR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_SR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_SR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SR },
			{ "Vulkan", OPTION_VAL_VULKAN_SR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_SR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_SR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_SR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_SR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_SR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_SR },
			{ "20", OPTION_VAL_20_SR },
			{ "30", OPTION_VAL_30_SR },
			{ "40", OPTION_VAL_40_SR },
			{ "50", OPTION_VAL_50_SR },
			{ "60", OPTION_VAL_60_SR },
			{ "70", OPTION_VAL_70_SR },
			{ "80", OPTION_VAL_80_SR },
			{ "90", OPTION_VAL_90_SR },
			{ "100", OPTION_VAL_100_SR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_SR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_SR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_SR },
			{ "swapped", OPTION_VAL_SWAPPED_SR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_SR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_SR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_SR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_SR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_SV NULL
#define CATEGORY_SYSTEM_INFO_0_SV "CPU, språk, ljudkanaler och konton."
#define CATEGORY_GRAPHICS_LABEL_SV "Grafik (starta om)"
#define CATEGORY_GRAPHICS_INFO_0_SV "Grafik-API och shaders. De tillämpas när spelet startas igen, om inget annat anges."
#define CATEGORY_CONTROLLER_LABEL_SV "Spelkontroll"
#define CATEGORY_CONTROLLER_INFO_0_SV "Rumble, rörelse och vilken Wii U-skärm som visas samt hur."
#define CATEGORY_TITLE_MANAGER_LABEL_SV "Titelhanterare"
#define CATEGORY_TITLE_MANAGER_INFO_0_SV "Installera och avinstallera spel, titeluppdateringar och DLC i sparfiler/Cemu/mlc01, den emulerade konsolens lagring, och konvertera den inlästa titeln till en .wua."
#define CATEGORY_CORE_LABEL_SV "Kärna"
#define CATEGORY_CORE_INFO_0_SV "Alternativ för denna kärna som fristående Cemu saknar."
#define CATEGORY_LOGGING_LABEL_SV "Loggning"
#define CATEGORY_LOGGING_INFO_0_SV "Extra loggutdata för att felsöka problem."
#define CATEGORY_GRAPHIC_PACKS_LABEL_SV "Grafikpaket (starta om)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_SV "Det inlästa spelets grafikpaket och deras förinställningar. Egna paket eller ändrade kopior av de inbyggda placeras i system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_SV "Fusk (starta om)"
#define CATEGORY_CHEATS_INFO_0_SV "Det inlästa spelets fuskkoder från mappen Cheats i grafikpaketen."
#define CEMU_CPU_MODE_LABEL_SV "CPU-läge (starta om)"
#define CEMU_CPU_MODE_INFO_0_SV "Hur Wii U:s PowerPC-kärnor emuleras. Auto: spellägets profil när den finns, som i fristående Cemu; annars flerkärnig rekompilering på en CPU med minst fyra fysiska kärnor och enkärnig i övriga fall. Tolkarna är mycket långsammare och avsedda för felsökning."
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_SV "Enkelkärnig tolk"
#define OPTION_VAL_SINGLECORE_RECOMPILER_SV "Enkelkärnig omkompilerare"
#define OPTION_VAL_MULTICORE_RECOMPILER_SV "Flerkärnig omkompilerare"
#define OPTION_VAL_MULTICORE_INTERPRETER_SV "Flerkärnig tolk"
#define CEMU_THREAD_QUANTUM_LABEL_SV "Trådkvantum"
#define CEMU_CONSOLE_LANGUAGE_LABEL_SV "Konsolspråk (starta om)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_SV "Ljudkanaler (omstart)"
#define CEMU_AUDIO_CHANNELS_INFO_0_SV "Konsolen rapporterar till spelen vilken typ av TV/ljudsystem som används baserat på inställningen för TV-ljud; spel som har stöd för detta anpassar ljudmixen efter antalet högtalare. 5.1-surroundljud skickas till RetroArch som sex kanaler när flerkanaligt ljudutmatning används, annars mixas det ner till stereo."
#define OPTION_VAL_MONO_SV NULL
#define OPTION_VAL_STEREO_SV NULL
#define OPTION_VAL_SURROUND_SV NULL
#define CEMU_ACCOUNT_LABEL_SV "Aktivt konto (starta om)"
#define CEMU_ACCOUNT_INFO_0_SV "Wii U-kontot som spelet körs som, med egna sparfiler och Mii för varje konto. Listan innehåller kontona i kontokatalogen.Tills spelet startas om fortsätter spelet att spara till kontot som användes vid starten."
#define CEMU_CREATE_ACCOUNT_LABEL_SV "Skapa konto"
#define CEMU_CREATE_ACCOUNT_INFO_0_SV "Skapar ett nytt konto med namnet Spelare 2, Spelare 3 och så vidare och gör det till det aktiva kontot. Därefter återgår detta till AV. Det nya kontot visas i kontolistan när den här menyn har stängts och öppnats igen. Konsolen rymmer upp till 12 konton."
#define CEMU_RENAME_ACCOUNT_LABEL_SV "Byt namn på aktivt konto"
#define CEMU_RENAME_ACCOUNT_INFO_0_SV "Öppnar namninmatningen för det aktiva kontot när den här menyn stängs och återgår till AV. Namnet hittills visas som en notis över spelet, så gränssnittets skärmnotiser måste vara aktiverade.\n\nMed handkontroll: Upp och Ned ändrar det sista tecknet, Höger lägger till ett, Vänster tar bort ett, Start bekräftar, Select avbryter.\n\nMed tangentbord: skriv, Backsteg tar bort, Retur bekräftar, Escape avbryter (gränssnittet kan behöva ha spelfokus aktiverat för att skicka tangenterna till kärnan).\n\nEtt namn får ha högst 10 tecken. Spelet får ingen inmatning förrän inmatningen stängs och ett aktivt spel visar det nya namnet när det startas igen."
#define CEMU_REMOVE_ACCOUNT_LABEL_SV "Ta bort konto"
#define CEMU_REMOVE_ACCOUNT_INFO_0_SV "Tar bort det valda kontot från kontokatalogen (saves/Cemu/mlc01/usr/save/system/act), på samma sätt som när en användare tas bort på konsolen, när den här menyn stängs. Alternativet visar AV igen när du återvänder till menyn.Det aktiva kontot kan inte tas bort. Inte heller kontot som det körande spelet startades med förrän spelet har stängts.VARNING: om du tar bort ett konto raderas även sparfilerna under det permanent i alla spel. Säkerhetskopiera sparfiler som du vill behålla innan du tar bort det."
#define CEMU_GPU_API_LABEL_SV "Grafik-API"
#define CEMU_GPU_API_INFO_0_SV "Det grafik-API som Cemu använder för rendering."
#define OPTION_VAL_OPENGL_SV NULL
#define OPTION_VAL_VULKAN_SV NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_SV "Förkompilerade shaders (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_SV "En cache med kompilerade shaderprogram. Auto: spelprofilens inställning om den finns, som i fristående Cemu; annars av på Nvidia, vars drivrutin har en egen cache, och på i övriga fall."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_SV "Asynkron shaderkompilering (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_SV "Noggrann shadermultiplikation"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_SV "Emulerar GPU:ns multiplikation exakt, vilket de flesta spel behöver. Auto använder spelprofilens inställning när den finns, som för fristående spel. Super Mario 3D World, Captain Toad och Xenoblade Chronicles X körs med den avstängd. Annars används den."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_SV "GX2DrawDone-synkronisering"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_SV "Gör att spelet väntar tills GPU:n har slutfört allt arbete när det anropar GX2DrawDone, som fristående Cemus Full sync at GX2DrawDone. Vissa spel behöver det för att visas korrekt; av kan vara snabbare. Kan växlas under spelets gång."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_SV "Noggranna barriärer (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_SV "Behåller synkroniseringen mellan ritningar som vissa spel behöver för korrekt rendering, som motsvarande alternativ i fristående Cemu. Av kan vara snabbare men ge grafikfel i dessa spel. Kan växlas under spelets gång."
#define CEMU_RUMBLE_STRENGTH_LABEL_SV "Vibrationsstyrka"
#define CEMU_RUMBLE_STRENGTH_INFO_0_SV "Hur kraftigt handkontrollen vibrerar när spelet begär det: GamePadens motor och Wii-fjärrkontrollens eller Pro Controller-handkontrollens motor. Av skickar ingen vibration alls till front-endet."
#define OPTION_VAL_10_SV "10 %"
#define OPTION_VAL_20_SV NULL
#define OPTION_VAL_30_SV NULL
#define OPTION_VAL_40_SV NULL
#define OPTION_VAL_50_SV NULL
#define OPTION_VAL_60_SV NULL
#define OPTION_VAL_70_SV NULL
#define OPTION_VAL_80_SV NULL
#define OPTION_VAL_90_SV NULL
#define OPTION_VAL_100_SV NULL
#define CEMU_GAMEPAD_MOTION_LABEL_SV "GamePad-rörelse"
#define CEMU_GAMEPAD_MOTION_INFO_0_SV "Använder GamePadens gyroskop och accelerometer från de sensorer som RetroArch läser på port 1. Det kan vara telefonens eller surfplattans egna sensorer, eller handkontrollens när RetroArchs inmatningsdrivrutin erbjuder dem, till exempel DualShock 4 och DualSense. Spel där man siktar eller styr genom att luta GamePaden behöver detta. Av: GamePaden ligger stilla, som när rörelsefunktionen är avstängd i det fristående programmet."
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
#define CEMU_INSTALL_GAME_LABEL_SV "Installera spel"
#define CEMU_INSTALL_GAME_INFO_0_SV "Installerar varje spel från källkatalogen (system/Cemu/titles), inklusive underkataloger, i den emulerade Wii U-konsolens katalog för installerade spel (saves/Cemu/mlc01/usr/title/00050000), på samma sätt som konsolen installerar ett spel från skivan. Ett spel är en skivavbild (.wud, .wux, .iso) eller en .wua. Titeluppdateringen och DLC:n som en .wua innehåller installeras tillsammans med den. En krypterad skivavbild (.wud, .wux) behöver sin skivnyckel: i en fil bredvid den med samma namn och filändelsen .key (game.wux, game.key), eller i system/Cemu/keys.txt. Ett spel som redan är installerat i samma eller en nyare version lämnas orört.När detta är PÅ startar installationen genast, med framsteg som visas som en avisering. Alternativet återgår till AV när alla spel har installerats och menyn stängs eller ett annat alternativ ändras. Ett installerat spel startas genom att läsa in .rpx-filen i dess kodkatalog i katalogen för installerade spel. Skivavbilden behövs inte längre."
#define CEMU_UNINSTALL_GAME_LABEL_SV "Avinstallera spel"
#define CEMU_UNINSTALL_GAME_INFO_0_SV "Avinstallerar det körande spelet och alla tillhörande titeluppdateringar och DLC från den installerade katalogen (saves/Cemu/mlc01/usr/title) när spelet stängs eller återställs. Alternativet förblir PÅ tills dess. Sparfiler för spelets titel-id (saves/Cemu/mlc01/usr/save/<title id>) tas inte bort."
#define CEMU_INSTALL_TITLES_LABEL_SV "Installera innehåll"
#define CEMU_INSTALL_TITLES_INFO_0_SV "Installerar varje titeluppdatering och DLC från källkatalogen (system/Cemu/titles), inklusive underkataloger, i den installerade katalogen (saves/Cemu/mlc01/usr/title). Varje objekt ska ligga i en egen katalog i källkatalogen. En NUS-hämtning (.app-filer) behöver title.tmd och title.tik, dekrypteringsnyckeln, bredvid dem. En redan installerad version som är samma eller nyare lämnas orörd.När detta är PÅ startar installationen genast, med framsteg som visas som en avisering. Alternativet återgår till AV när allt innehåll har installerats och menyn stängs eller ett annat alternativ ändras. Spelet använder det installerade innehållet när det startas om.Innehåll från andra platser kan installeras via RetroArchs huvudmeny > Läs in innehåll genom att välja motsvarande title.tmd med title.tik bredvid."
#define CEMU_UNINSTALL_TITLES_LABEL_SV "Avinstallera innehåll"
#define CEMU_UNINSTALL_TITLES_INFO_0_SV "Avinstallerar det körande spelets titeluppdatering och DLC från den installerade katalogen (saves/Cemu/mlc01/usr/title) när spelet stängs eller återställs. Alternativet förblir PÅ tills dess. Kopior i källkatalogen (system/Cemu/titles) lämnas orörda."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_SV "Ta bort filer efter installation"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_SV "Tar bort det som Installera spel och Installera innehåll har installerat från källkatalogen (system/Cemu/titles): katalogen för en titeluppdatering eller DLC när den har installerats och en skivavbild med .key-filen eller en .wua när allt dess innehåll har installerats. Filer som det körande spelet använder tas bort när spelet stängs eller återställs.VARNING: Detta tar permanent bort filer från källkatalogen. Katalogen är avsedd att hanteras av kärnan. Spara speldata som du vill arkivera på en annan plats."
#define CEMU_WUA_OUTPUT_DIR_LABEL_SV "Utdatakatalog"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_SV "Där .wua-filen skrivs. Kräver utrymme för den."
#define CEMU_CONVERT_TO_WUA_LABEL_SV "Starta konvertering till WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_SV "Skriver titeln till utdatakatalogen som en .wua-fil. Den fortsätter att köras medan detta sker."
#define CEMU_INTERNAL_RESOLUTION_LABEL_SV "Intern upplösning (starta om)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_SV "Ett generellt reservläge för spel utan grafikpaket för upplösning: ändrar storlek på varje skärmformat renderingsmål, som vissa spel använder för sådant som slutar fungera när storleken ändras. En multipel av spelets egen upplösning: för ett 720p-spel är 0,5× 640×360, en fjärdedel så många bildpunkter, och 2× är 2560×1440; för ett 1080p-spel är 0,5× 960×540. När ett upplösningspaket är aktiverat för det inlästa spelet (Graphic Packs) anger paketet upplösningen."
#define OPTION_VAL_0_25X_SV "0.25x (320x180 vid 720p)"
#define OPTION_VAL_0_5X_SV "0.5x (640x360 vid 720p)"
#define OPTION_VAL_0_75X_SV "0.75x (960x540 vid 720p)"
#define OPTION_VAL_NATIVE_SV "Inbyggd"
#define OPTION_VAL_1_5X_SV "1.5x (1920x1080 vid 720p)"
#define OPTION_VAL_2X_SV "2x (2560x1440 vid 720p)"
#define OPTION_VAL_3X_SV "3x (3840x2160 vid 720p)"
#define CEMU_RENDER_AHEAD_LABEL_SV "Rendera en bildruta i förväg"
#define CEMU_RENDER_AHEAD_INFO_0_SV "Låter Cemu börja rita nästa bildruta medan RetroArch visar den föregående, som fristående Cemu. Ger mjukare bild när ritningen tar merparten av bildrutetiden, med en bildruta högre inmatningsfördröjning."
#define CEMU_AUDIO_THREAD_LABEL_SV "Ljudtråd (starta om)"
#define CEMU_AUDIO_THREAD_INFO_0_SV "På: RetroArch hanterar ljudet i en egen tråd och Wii U-ljudet körs klockstyrt som i fristående Cemu, så att det inte hackar när en bildruta blir sen, till exempel vid inläsning eller shaderkompilering. RetroArchs ljudsynkronisering styr då inte längre bildrutorna; det gör vertikal synkronisering. Av: ljudet lämnas över med varje bildruta."
#define CEMU_BC1_16BIT_LABEL_SV "Minska BC1-texturminnet (starta om)"
#define CEMU_BC1_16BIT_INFO_0_SV "Halverar vad BC1-texturer kostar på en GPU som inte kan sampla BC, på bekostnad av en bit grönt. Ingen effekt där BC stöds."
#define CEMU_SHOW_GAME_FPS_LABEL_SV "Visa spelets bildfrekvens"
#define CEMU_SHOW_GAME_FPS_INFO_0_SV "Visar bildfrekvensen som spelet renderar med i RetroArchs skärmvisning, en gång per sekund."
#define CEMU_LOG_TO_FILE_LABEL_SV "Skriv Cemu-loggen till log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_SV "Logga filåtkomst (felsökning)"
#define CEMU_LOG_THREAD_SYNC_LABEL_SV "Logga trådsynkronisering (felsökning)"
#define CEMU_LOG_SYSTEM_API_LABEL_SV "Logga systemets API-anrop (felsökning)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_SV "Logga texturminne (felsökning)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_SV "Rapporterar hur mycket av texturminnet som är BC och som måste dekomprimeras eftersom denna GPU inte kan sampla det."
#define CEMU_LOG_INPUT_API_LABEL_SV "Logga handkontrollens API-anrop (felsökning)"
#define CEMU_LOG_INPUT_API_INFO_0_SV "Loggar varje handkontrollsanrop som ett spel gör – vilka handkontroller det undersökte och vad det fick veta. Ordrikt; använd i några sekunder åt gången."
#define CEMU_LOG_AUDIO_LABEL_SV "Logga ljud och bildrutekadens (felsökning)"
#define CEMU_LOG_AUDIO_INFO_0_SV "En gång per sekund: hur många samplingar AX producerade, hur många ringen måste släppa och hur många gränssnittet tog emot; samt hur många gånger gränssnittet körde kärnan, hur många bildrutor titeln avslutade och vart tiden tog vägen (väntan på GPU-tråden, presentation, ljud). Används för att avgöra om ett långsamt spel hålls tillbaka av den emulerade processorn, GPU:n eller gränssnittet."
#define CEMU_LOG_THREAD_TIME_LABEL_SV "Logga CPU-tid för trådar (felsökning)"
#define CEMU_LOG_THREAD_TIME_INFO_0_SV "En gång per sekund: hur upptagen varje emulerad PowerPC-kärnas tråd, GPU-tråden och gränssnittets tråd var, som andel av en värdkärna. En tråd nära 100 % är den som ett långsamt spel väntar på."
#define CEMU_DUMP_SHADERS_LABEL_SV "Dumpa shaderprogram (felsökning)"
#define CEMU_DUMP_SHADERS_INFO_0_SV "Skriver källkoden för varje shaderprogram som spelet använder till system/Cemu/dump/shaders, namngiven efter dess hashar så som de visas i log.txt. Används för att rapportera ett shaderprogram som misslyckas eller ritas fel på en viss GPU. Det gör shaderkompilering långsammare och fyller katalogen snabbt, så stäng av funktionen igen efteråt."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SV "Emulera Skylanders Portal of Power (starta om)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_SV "Emulera Infinity Base (starta om)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_SV "Emulera Dimensions Toy Pad (starta om)"

struct retro_core_option_v2_category option_cats_sv[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_SV, CATEGORY_SYSTEM_INFO_0_SV },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_SV, CATEGORY_GRAPHICS_INFO_0_SV },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_SV, CATEGORY_CONTROLLER_INFO_0_SV },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_SV, CATEGORY_TITLE_MANAGER_INFO_0_SV },
	{ "core", CATEGORY_CORE_LABEL_SV, CATEGORY_CORE_INFO_0_SV },
	{ "logging", CATEGORY_LOGGING_LABEL_SV, CATEGORY_LOGGING_INFO_0_SV },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_SV, CATEGORY_GRAPHIC_PACKS_INFO_0_SV },
	{ "cheats", CATEGORY_CHEATS_LABEL_SV, CATEGORY_CHEATS_INFO_0_SV },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_SV,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_SV,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_SV },
			{ "stereo", OPTION_VAL_STEREO_SV },
			{ "surround", OPTION_VAL_SURROUND_SV },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_SV,
		NULL,
		CEMU_ACCOUNT_INFO_0_SV,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_SV,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_SV,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_SV },
			{ "Vulkan", OPTION_VAL_VULKAN_SV },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_SV,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_SV,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SV },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_SV,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_SV,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_SV,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_SV },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_SV,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_SV,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_SV,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_SV,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_SV,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_SV,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_SV },
			{ "20", OPTION_VAL_20_SV },
			{ "30", OPTION_VAL_30_SV },
			{ "40", OPTION_VAL_40_SV },
			{ "50", OPTION_VAL_50_SV },
			{ "60", OPTION_VAL_60_SV },
			{ "70", OPTION_VAL_70_SV },
			{ "80", OPTION_VAL_80_SV },
			{ "90", OPTION_VAL_90_SV },
			{ "100", OPTION_VAL_100_SV },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_SV,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_SV,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_SV },
			{ "swapped", OPTION_VAL_SWAPPED_SV },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_SV,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_SV,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_SV,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_SV,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_SV,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_SV,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_SV,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_SV,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_SV,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_SV,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_SV,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_TH "ระบบ"
#define CATEGORY_SYSTEM_INFO_0_TH NULL
#define CATEGORY_GRAPHICS_LABEL_TH NULL
#define CATEGORY_GRAPHICS_INFO_0_TH NULL
#define CATEGORY_CONTROLLER_LABEL_TH "คอนโทรลเลอร์"
#define CATEGORY_CONTROLLER_INFO_0_TH NULL
#define CATEGORY_TITLE_MANAGER_LABEL_TH NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_TH NULL
#define CATEGORY_CORE_LABEL_TH NULL
#define CATEGORY_CORE_INFO_0_TH NULL
#define CATEGORY_LOGGING_LABEL_TH "การบันทึกข้อมูล"
#define CATEGORY_LOGGING_INFO_0_TH NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TH NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TH NULL
#define CATEGORY_CHEATS_LABEL_TH NULL
#define CATEGORY_CHEATS_INFO_0_TH NULL
#define CEMU_CPU_MODE_LABEL_TH NULL
#define CEMU_CPU_MODE_INFO_0_TH NULL
#define OPTION_VAL_AUTO_TH "อัตโนมัติ"
#define OPTION_VAL_SINGLECORE_INTERPRETER_TH NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TH NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TH NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TH NULL
#define CEMU_THREAD_QUANTUM_LABEL_TH NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_TH NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_TH NULL
#define OPTION_VAL_MONO_TH "โมโน"
#define OPTION_VAL_STEREO_TH "สเตอริโอ"
#define OPTION_VAL_SURROUND_TH NULL
#define CEMU_ACCOUNT_LABEL_TH NULL
#define CEMU_ACCOUNT_INFO_0_TH NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TH NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TH NULL
#define CEMU_RENAME_ACCOUNT_LABEL_TH NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_TH NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TH NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TH NULL
#define CEMU_GPU_API_LABEL_TH NULL
#define CEMU_GPU_API_INFO_0_TH NULL
#define OPTION_VAL_OPENGL_TH NULL
#define OPTION_VAL_VULKAN_TH NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TH NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_TH NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TH NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TH NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_TH NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TH NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_TH NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_TH NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_TH NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TH NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TH NULL
#define OPTION_VAL_10_TH NULL
#define OPTION_VAL_20_TH NULL
#define OPTION_VAL_30_TH NULL
#define OPTION_VAL_40_TH NULL
#define OPTION_VAL_50_TH NULL
#define OPTION_VAL_60_TH NULL
#define OPTION_VAL_70_TH NULL
#define OPTION_VAL_80_TH NULL
#define OPTION_VAL_90_TH NULL
#define OPTION_VAL_100_TH NULL
#define CEMU_GAMEPAD_MOTION_LABEL_TH NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_TH NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_TH NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TH NULL
#define OPTION_VAL_0_25X_TH NULL
#define OPTION_VAL_0_5X_TH NULL
#define OPTION_VAL_0_75X_TH NULL
#define OPTION_VAL_NATIVE_TH "ดั้งเดิม"
#define OPTION_VAL_1_5X_TH NULL
#define OPTION_VAL_2X_TH NULL
#define OPTION_VAL_3X_TH NULL
#define CEMU_RENDER_AHEAD_LABEL_TH NULL
#define CEMU_RENDER_AHEAD_INFO_0_TH NULL
#define CEMU_AUDIO_THREAD_LABEL_TH NULL
#define CEMU_AUDIO_THREAD_INFO_0_TH NULL
#define CEMU_BC1_16BIT_LABEL_TH NULL
#define CEMU_BC1_16BIT_INFO_0_TH NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TH NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TH NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TH NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TH NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TH NULL

struct retro_core_option_v2_category option_cats_th[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_TH, CATEGORY_SYSTEM_INFO_0_TH },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_TH, CATEGORY_GRAPHICS_INFO_0_TH },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_TH, CATEGORY_CONTROLLER_INFO_0_TH },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_TH, CATEGORY_TITLE_MANAGER_INFO_0_TH },
	{ "core", CATEGORY_CORE_LABEL_TH, CATEGORY_CORE_INFO_0_TH },
	{ "logging", CATEGORY_LOGGING_LABEL_TH, CATEGORY_LOGGING_INFO_0_TH },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TH, CATEGORY_GRAPHIC_PACKS_INFO_0_TH },
	{ "cheats", CATEGORY_CHEATS_LABEL_TH, CATEGORY_CHEATS_INFO_0_TH },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_TH,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_TH,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_TH },
			{ "stereo", OPTION_VAL_STEREO_TH },
			{ "surround", OPTION_VAL_SURROUND_TH },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TH,
		NULL,
		CEMU_ACCOUNT_INFO_0_TH,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_TH,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_TH,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TH },
			{ "Vulkan", OPTION_VAL_VULKAN_TH },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TH,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_TH,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TH },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TH,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TH,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_TH,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TH },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TH,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_TH,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_TH,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_TH,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TH,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TH,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_TH },
			{ "20", OPTION_VAL_20_TH },
			{ "30", OPTION_VAL_30_TH },
			{ "40", OPTION_VAL_40_TH },
			{ "50", OPTION_VAL_50_TH },
			{ "60", OPTION_VAL_60_TH },
			{ "70", OPTION_VAL_70_TH },
			{ "80", OPTION_VAL_80_TH },
			{ "90", OPTION_VAL_90_TH },
			{ "100", OPTION_VAL_100_TH },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_TH,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_TH,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_TH },
			{ "swapped", OPTION_VAL_SWAPPED_TH },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TH,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TH,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TH,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TH,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_TH,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_TH,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_TH,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_TH,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TH,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TH,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TH,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_TR "Sistem"
#define CATEGORY_SYSTEM_INFO_0_TR NULL
#define CATEGORY_GRAPHICS_LABEL_TR NULL
#define CATEGORY_GRAPHICS_INFO_0_TR NULL
#define CATEGORY_CONTROLLER_LABEL_TR "Kontrolcü"
#define CATEGORY_CONTROLLER_INFO_0_TR NULL
#define CATEGORY_TITLE_MANAGER_LABEL_TR NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_TR NULL
#define CATEGORY_CORE_LABEL_TR "Çekirdek"
#define CATEGORY_CORE_INFO_0_TR NULL
#define CATEGORY_LOGGING_LABEL_TR "Günlükler"
#define CATEGORY_LOGGING_INFO_0_TR NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TR NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TR NULL
#define CATEGORY_CHEATS_LABEL_TR NULL
#define CATEGORY_CHEATS_INFO_0_TR NULL
#define CEMU_CPU_MODE_LABEL_TR NULL
#define CEMU_CPU_MODE_INFO_0_TR NULL
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_SINGLECORE_INTERPRETER_TR NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TR NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TR NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TR NULL
#define CEMU_THREAD_QUANTUM_LABEL_TR NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_TR NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_TR NULL
#define OPTION_VAL_MONO_TR NULL
#define OPTION_VAL_STEREO_TR NULL
#define OPTION_VAL_SURROUND_TR NULL
#define CEMU_ACCOUNT_LABEL_TR NULL
#define CEMU_ACCOUNT_INFO_0_TR NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TR NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TR NULL
#define CEMU_RENAME_ACCOUNT_LABEL_TR NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_TR NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TR NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TR NULL
#define CEMU_GPU_API_LABEL_TR NULL
#define CEMU_GPU_API_INFO_0_TR NULL
#define OPTION_VAL_OPENGL_TR NULL
#define OPTION_VAL_VULKAN_TR NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TR NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_TR NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TR NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TR NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_TR NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TR NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_TR NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_TR NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_TR NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TR NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TR NULL
#define OPTION_VAL_10_TR NULL
#define OPTION_VAL_20_TR "%20"
#define OPTION_VAL_30_TR "%30"
#define OPTION_VAL_40_TR "%40"
#define OPTION_VAL_50_TR "%50"
#define OPTION_VAL_60_TR "%60"
#define OPTION_VAL_70_TR "%70"
#define OPTION_VAL_80_TR "%80"
#define OPTION_VAL_90_TR "%90"
#define OPTION_VAL_100_TR "%100"
#define CEMU_GAMEPAD_MOTION_LABEL_TR NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_TR NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_TR NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TR NULL
#define OPTION_VAL_0_25X_TR NULL
#define OPTION_VAL_0_5X_TR NULL
#define OPTION_VAL_0_75X_TR NULL
#define OPTION_VAL_NATIVE_TR "Özgün"
#define OPTION_VAL_1_5X_TR NULL
#define OPTION_VAL_2X_TR NULL
#define OPTION_VAL_3X_TR NULL
#define CEMU_RENDER_AHEAD_LABEL_TR NULL
#define CEMU_RENDER_AHEAD_INFO_0_TR NULL
#define CEMU_AUDIO_THREAD_LABEL_TR NULL
#define CEMU_AUDIO_THREAD_INFO_0_TR NULL
#define CEMU_BC1_16BIT_LABEL_TR NULL
#define CEMU_BC1_16BIT_INFO_0_TR NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TR NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TR NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TR NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TR NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_TR, CATEGORY_SYSTEM_INFO_0_TR },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_TR, CATEGORY_GRAPHICS_INFO_0_TR },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_TR, CATEGORY_CONTROLLER_INFO_0_TR },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_TR, CATEGORY_TITLE_MANAGER_INFO_0_TR },
	{ "core", CATEGORY_CORE_LABEL_TR, CATEGORY_CORE_INFO_0_TR },
	{ "logging", CATEGORY_LOGGING_LABEL_TR, CATEGORY_LOGGING_INFO_0_TR },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TR, CATEGORY_GRAPHIC_PACKS_INFO_0_TR },
	{ "cheats", CATEGORY_CHEATS_LABEL_TR, CATEGORY_CHEATS_INFO_0_TR },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_TR,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_TR,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_TR },
			{ "stereo", OPTION_VAL_STEREO_TR },
			{ "surround", OPTION_VAL_SURROUND_TR },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TR,
		NULL,
		CEMU_ACCOUNT_INFO_0_TR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_TR,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_TR,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TR },
			{ "Vulkan", OPTION_VAL_VULKAN_TR },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TR,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_TR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TR,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TR,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_TR,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TR },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TR,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_TR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_TR,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_TR,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TR,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TR,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_TR },
			{ "20", OPTION_VAL_20_TR },
			{ "30", OPTION_VAL_30_TR },
			{ "40", OPTION_VAL_40_TR },
			{ "50", OPTION_VAL_50_TR },
			{ "60", OPTION_VAL_60_TR },
			{ "70", OPTION_VAL_70_TR },
			{ "80", OPTION_VAL_80_TR },
			{ "90", OPTION_VAL_90_TR },
			{ "100", OPTION_VAL_100_TR },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_TR,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_TR,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_TR },
			{ "swapped", OPTION_VAL_SWAPPED_TR },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TR,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TR,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TR,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TR,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_TR,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_TR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_TR,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_TR,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TR,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TR,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TR,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_TT NULL
#define CATEGORY_SYSTEM_INFO_0_TT NULL
#define CATEGORY_GRAPHICS_LABEL_TT NULL
#define CATEGORY_GRAPHICS_INFO_0_TT NULL
#define CATEGORY_CONTROLLER_LABEL_TT NULL
#define CATEGORY_CONTROLLER_INFO_0_TT NULL
#define CATEGORY_TITLE_MANAGER_LABEL_TT NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_TT NULL
#define CATEGORY_CORE_LABEL_TT NULL
#define CATEGORY_CORE_INFO_0_TT NULL
#define CATEGORY_LOGGING_LABEL_TT NULL
#define CATEGORY_LOGGING_INFO_0_TT NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_TT NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_TT NULL
#define CATEGORY_CHEATS_LABEL_TT NULL
#define CATEGORY_CHEATS_INFO_0_TT NULL
#define CEMU_CPU_MODE_LABEL_TT NULL
#define CEMU_CPU_MODE_INFO_0_TT NULL
#define OPTION_VAL_AUTO_TT NULL
#define OPTION_VAL_SINGLECORE_INTERPRETER_TT NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_TT NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_TT NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_TT NULL
#define CEMU_THREAD_QUANTUM_LABEL_TT NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_TT NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_TT NULL
#define OPTION_VAL_MONO_TT NULL
#define OPTION_VAL_STEREO_TT "Стерео"
#define OPTION_VAL_SURROUND_TT NULL
#define CEMU_ACCOUNT_LABEL_TT NULL
#define CEMU_ACCOUNT_INFO_0_TT NULL
#define CEMU_CREATE_ACCOUNT_LABEL_TT NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_TT NULL
#define CEMU_RENAME_ACCOUNT_LABEL_TT NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_TT NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_TT NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_TT NULL
#define CEMU_GPU_API_LABEL_TT NULL
#define CEMU_GPU_API_INFO_0_TT NULL
#define OPTION_VAL_OPENGL_TT NULL
#define OPTION_VAL_VULKAN_TT NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_TT NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_TT NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_TT NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_TT NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_TT NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_TT NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_TT NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_TT NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_TT NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_TT NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_TT NULL
#define OPTION_VAL_10_TT NULL
#define OPTION_VAL_20_TT NULL
#define OPTION_VAL_30_TT NULL
#define OPTION_VAL_40_TT NULL
#define OPTION_VAL_50_TT NULL
#define OPTION_VAL_60_TT NULL
#define OPTION_VAL_70_TT NULL
#define OPTION_VAL_80_TT NULL
#define OPTION_VAL_90_TT NULL
#define OPTION_VAL_100_TT NULL
#define CEMU_GAMEPAD_MOTION_LABEL_TT NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_TT NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_TT NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_TT NULL
#define OPTION_VAL_0_25X_TT NULL
#define OPTION_VAL_0_5X_TT NULL
#define OPTION_VAL_0_75X_TT NULL
#define OPTION_VAL_NATIVE_TT NULL
#define OPTION_VAL_1_5X_TT NULL
#define OPTION_VAL_2X_TT NULL
#define OPTION_VAL_3X_TT NULL
#define CEMU_RENDER_AHEAD_LABEL_TT NULL
#define CEMU_RENDER_AHEAD_INFO_0_TT NULL
#define CEMU_AUDIO_THREAD_LABEL_TT NULL
#define CEMU_AUDIO_THREAD_INFO_0_TT NULL
#define CEMU_BC1_16BIT_LABEL_TT NULL
#define CEMU_BC1_16BIT_INFO_0_TT NULL
#define CEMU_SHOW_GAME_FPS_LABEL_TT NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_TT NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TT NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_TT NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_TT NULL

struct retro_core_option_v2_category option_cats_tt[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_TT, CATEGORY_SYSTEM_INFO_0_TT },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_TT, CATEGORY_GRAPHICS_INFO_0_TT },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_TT, CATEGORY_CONTROLLER_INFO_0_TT },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_TT, CATEGORY_TITLE_MANAGER_INFO_0_TT },
	{ "core", CATEGORY_CORE_LABEL_TT, CATEGORY_CORE_INFO_0_TT },
	{ "logging", CATEGORY_LOGGING_LABEL_TT, CATEGORY_LOGGING_INFO_0_TT },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_TT, CATEGORY_GRAPHIC_PACKS_INFO_0_TT },
	{ "cheats", CATEGORY_CHEATS_LABEL_TT, CATEGORY_CHEATS_INFO_0_TT },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_TT,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_TT,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_TT },
			{ "stereo", OPTION_VAL_STEREO_TT },
			{ "surround", OPTION_VAL_SURROUND_TT },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_TT,
		NULL,
		CEMU_ACCOUNT_INFO_0_TT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_TT,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_TT,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_TT },
			{ "Vulkan", OPTION_VAL_VULKAN_TT },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_TT,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_TT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_TT,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_TT,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_TT,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_TT },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_TT,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_TT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_TT,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_TT,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_TT,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_TT,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_TT },
			{ "20", OPTION_VAL_20_TT },
			{ "30", OPTION_VAL_30_TT },
			{ "40", OPTION_VAL_40_TT },
			{ "50", OPTION_VAL_50_TT },
			{ "60", OPTION_VAL_60_TT },
			{ "70", OPTION_VAL_70_TT },
			{ "80", OPTION_VAL_80_TT },
			{ "90", OPTION_VAL_90_TT },
			{ "100", OPTION_VAL_100_TT },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_TT,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_TT,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_TT },
			{ "swapped", OPTION_VAL_SWAPPED_TT },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_TT,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_TT,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_TT,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_TT,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_TT,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_TT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_TT,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_TT,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_TT,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_TT,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_TT,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_UK "Система"
#define CATEGORY_SYSTEM_INFO_0_UK NULL
#define CATEGORY_GRAPHICS_LABEL_UK NULL
#define CATEGORY_GRAPHICS_INFO_0_UK NULL
#define CATEGORY_CONTROLLER_LABEL_UK "Контролер"
#define CATEGORY_CONTROLLER_INFO_0_UK NULL
#define CATEGORY_TITLE_MANAGER_LABEL_UK NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_UK NULL
#define CATEGORY_CORE_LABEL_UK "Ядро"
#define CATEGORY_CORE_INFO_0_UK NULL
#define CATEGORY_LOGGING_LABEL_UK "Журналювання"
#define CATEGORY_LOGGING_INFO_0_UK NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_UK NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_UK NULL
#define CATEGORY_CHEATS_LABEL_UK NULL
#define CATEGORY_CHEATS_INFO_0_UK NULL
#define CEMU_CPU_MODE_LABEL_UK NULL
#define CEMU_CPU_MODE_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK "Автоматично"
#define OPTION_VAL_SINGLECORE_INTERPRETER_UK NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_UK NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_UK NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_UK NULL
#define CEMU_THREAD_QUANTUM_LABEL_UK NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_UK NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_UK NULL
#define OPTION_VAL_MONO_UK "Моно"
#define OPTION_VAL_STEREO_UK "Cтерео"
#define OPTION_VAL_SURROUND_UK NULL
#define CEMU_ACCOUNT_LABEL_UK NULL
#define CEMU_ACCOUNT_INFO_0_UK NULL
#define CEMU_CREATE_ACCOUNT_LABEL_UK NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_UK NULL
#define CEMU_RENAME_ACCOUNT_LABEL_UK NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_UK NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_UK NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_UK NULL
#define CEMU_GPU_API_LABEL_UK NULL
#define CEMU_GPU_API_INFO_0_UK NULL
#define OPTION_VAL_OPENGL_UK NULL
#define OPTION_VAL_VULKAN_UK NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_UK NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_UK NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_UK NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_UK NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_UK NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_UK NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_UK NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_UK NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_UK NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_UK NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_UK NULL
#define OPTION_VAL_10_UK NULL
#define OPTION_VAL_20_UK NULL
#define OPTION_VAL_30_UK NULL
#define OPTION_VAL_40_UK NULL
#define OPTION_VAL_50_UK NULL
#define OPTION_VAL_60_UK NULL
#define OPTION_VAL_70_UK NULL
#define OPTION_VAL_80_UK NULL
#define OPTION_VAL_90_UK NULL
#define OPTION_VAL_100_UK NULL
#define CEMU_GAMEPAD_MOTION_LABEL_UK NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_UK NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_UK NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_UK NULL
#define OPTION_VAL_0_25X_UK NULL
#define OPTION_VAL_0_5X_UK NULL
#define OPTION_VAL_0_75X_UK NULL
#define OPTION_VAL_NATIVE_UK "Рідний"
#define OPTION_VAL_1_5X_UK NULL
#define OPTION_VAL_2X_UK NULL
#define OPTION_VAL_3X_UK NULL
#define CEMU_RENDER_AHEAD_LABEL_UK NULL
#define CEMU_RENDER_AHEAD_INFO_0_UK NULL
#define CEMU_AUDIO_THREAD_LABEL_UK NULL
#define CEMU_AUDIO_THREAD_INFO_0_UK NULL
#define CEMU_BC1_16BIT_LABEL_UK NULL
#define CEMU_BC1_16BIT_INFO_0_UK NULL
#define CEMU_SHOW_GAME_FPS_LABEL_UK NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_UK NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_UK NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_UK NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_UK, CATEGORY_SYSTEM_INFO_0_UK },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_UK, CATEGORY_GRAPHICS_INFO_0_UK },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_UK, CATEGORY_CONTROLLER_INFO_0_UK },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_UK, CATEGORY_TITLE_MANAGER_INFO_0_UK },
	{ "core", CATEGORY_CORE_LABEL_UK, CATEGORY_CORE_INFO_0_UK },
	{ "logging", CATEGORY_LOGGING_LABEL_UK, CATEGORY_LOGGING_INFO_0_UK },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_UK, CATEGORY_GRAPHIC_PACKS_INFO_0_UK },
	{ "cheats", CATEGORY_CHEATS_LABEL_UK, CATEGORY_CHEATS_INFO_0_UK },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_UK,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_UK,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_UK },
			{ "stereo", OPTION_VAL_STEREO_UK },
			{ "surround", OPTION_VAL_SURROUND_UK },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_UK,
		NULL,
		CEMU_ACCOUNT_INFO_0_UK,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_UK,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_UK,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_UK },
			{ "Vulkan", OPTION_VAL_VULKAN_UK },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_UK,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_UK,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_UK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_UK,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_UK,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_UK,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_UK },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_UK,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_UK,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_UK,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_UK,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_UK,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_UK,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_UK },
			{ "20", OPTION_VAL_20_UK },
			{ "30", OPTION_VAL_30_UK },
			{ "40", OPTION_VAL_40_UK },
			{ "50", OPTION_VAL_50_UK },
			{ "60", OPTION_VAL_60_UK },
			{ "70", OPTION_VAL_70_UK },
			{ "80", OPTION_VAL_80_UK },
			{ "90", OPTION_VAL_90_UK },
			{ "100", OPTION_VAL_100_UK },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_UK,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_UK,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_UK },
			{ "swapped", OPTION_VAL_SWAPPED_UK },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_UK,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_UK,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_UK,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_UK,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_UK,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_UK,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_UK,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_UK,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_UK,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_UK,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_UK,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_VAL "Sistema"
#define CATEGORY_SYSTEM_INFO_0_VAL NULL
#define CATEGORY_GRAPHICS_LABEL_VAL NULL
#define CATEGORY_GRAPHICS_INFO_0_VAL NULL
#define CATEGORY_CONTROLLER_LABEL_VAL "Comandament"
#define CATEGORY_CONTROLLER_INFO_0_VAL NULL
#define CATEGORY_TITLE_MANAGER_LABEL_VAL NULL
#define CATEGORY_TITLE_MANAGER_INFO_0_VAL NULL
#define CATEGORY_CORE_LABEL_VAL "Nucli"
#define CATEGORY_CORE_INFO_0_VAL NULL
#define CATEGORY_LOGGING_LABEL_VAL "Registres"
#define CATEGORY_LOGGING_INFO_0_VAL NULL
#define CATEGORY_GRAPHIC_PACKS_LABEL_VAL NULL
#define CATEGORY_GRAPHIC_PACKS_INFO_0_VAL NULL
#define CATEGORY_CHEATS_LABEL_VAL NULL
#define CATEGORY_CHEATS_INFO_0_VAL NULL
#define CEMU_CPU_MODE_LABEL_VAL NULL
#define CEMU_CPU_MODE_INFO_0_VAL NULL
#define OPTION_VAL_AUTO_VAL "Selecció automàtica"
#define OPTION_VAL_SINGLECORE_INTERPRETER_VAL NULL
#define OPTION_VAL_SINGLECORE_RECOMPILER_VAL NULL
#define OPTION_VAL_MULTICORE_RECOMPILER_VAL NULL
#define OPTION_VAL_MULTICORE_INTERPRETER_VAL NULL
#define CEMU_THREAD_QUANTUM_LABEL_VAL NULL
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
#define CEMU_AUDIO_CHANNELS_LABEL_VAL NULL
#define CEMU_AUDIO_CHANNELS_INFO_0_VAL NULL
#define OPTION_VAL_MONO_VAL NULL
#define OPTION_VAL_STEREO_VAL NULL
#define OPTION_VAL_SURROUND_VAL NULL
#define CEMU_ACCOUNT_LABEL_VAL NULL
#define CEMU_ACCOUNT_INFO_0_VAL NULL
#define CEMU_CREATE_ACCOUNT_LABEL_VAL NULL
#define CEMU_CREATE_ACCOUNT_INFO_0_VAL NULL
#define CEMU_RENAME_ACCOUNT_LABEL_VAL NULL
#define CEMU_RENAME_ACCOUNT_INFO_0_VAL NULL
#define CEMU_REMOVE_ACCOUNT_LABEL_VAL NULL
#define CEMU_REMOVE_ACCOUNT_INFO_0_VAL NULL
#define CEMU_GPU_API_LABEL_VAL NULL
#define CEMU_GPU_API_INFO_0_VAL NULL
#define OPTION_VAL_OPENGL_VAL NULL
#define OPTION_VAL_VULKAN_VAL NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_VAL NULL
#define CEMU_PRECOMPILED_SHADERS_INFO_0_VAL NULL
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_VAL NULL
#define CEMU_ACCURATE_SHADER_MUL_LABEL_VAL NULL
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_VAL NULL
#define CEMU_GX2DRAWDONE_SYNC_LABEL_VAL NULL
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_VAL NULL
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_VAL NULL
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_VAL NULL
#define CEMU_RUMBLE_STRENGTH_LABEL_VAL NULL
#define CEMU_RUMBLE_STRENGTH_INFO_0_VAL NULL
#define OPTION_VAL_10_VAL NULL
#define OPTION_VAL_20_VAL NULL
#define OPTION_VAL_30_VAL NULL
#define OPTION_VAL_40_VAL NULL
#define OPTION_VAL_50_VAL NULL
#define OPTION_VAL_60_VAL NULL
#define OPTION_VAL_70_VAL NULL
#define OPTION_VAL_80_VAL NULL
#define OPTION_VAL_90_VAL NULL
#define OPTION_VAL_100_VAL NULL
#define CEMU_GAMEPAD_MOTION_LABEL_VAL NULL
#define CEMU_GAMEPAD_MOTION_INFO_0_VAL NULL
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
#define CEMU_INTERNAL_RESOLUTION_LABEL_VAL NULL
#define CEMU_INTERNAL_RESOLUTION_INFO_0_VAL NULL
#define OPTION_VAL_0_25X_VAL NULL
#define OPTION_VAL_0_5X_VAL NULL
#define OPTION_VAL_0_75X_VAL NULL
#define OPTION_VAL_NATIVE_VAL NULL
#define OPTION_VAL_1_5X_VAL NULL
#define OPTION_VAL_2X_VAL NULL
#define OPTION_VAL_3X_VAL NULL
#define CEMU_RENDER_AHEAD_LABEL_VAL NULL
#define CEMU_RENDER_AHEAD_INFO_0_VAL NULL
#define CEMU_AUDIO_THREAD_LABEL_VAL NULL
#define CEMU_AUDIO_THREAD_INFO_0_VAL NULL
#define CEMU_BC1_16BIT_LABEL_VAL NULL
#define CEMU_BC1_16BIT_INFO_0_VAL NULL
#define CEMU_SHOW_GAME_FPS_LABEL_VAL NULL
#define CEMU_SHOW_GAME_FPS_INFO_0_VAL NULL
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
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VAL NULL
#define CEMU_EMULATE_INFINITY_BASE_LABEL_VAL NULL
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VAL NULL

struct retro_core_option_v2_category option_cats_val[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_VAL, CATEGORY_SYSTEM_INFO_0_VAL },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_VAL, CATEGORY_GRAPHICS_INFO_0_VAL },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_VAL, CATEGORY_CONTROLLER_INFO_0_VAL },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_VAL, CATEGORY_TITLE_MANAGER_INFO_0_VAL },
	{ "core", CATEGORY_CORE_LABEL_VAL, CATEGORY_CORE_INFO_0_VAL },
	{ "logging", CATEGORY_LOGGING_LABEL_VAL, CATEGORY_LOGGING_INFO_0_VAL },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_VAL, CATEGORY_GRAPHIC_PACKS_INFO_0_VAL },
	{ "cheats", CATEGORY_CHEATS_LABEL_VAL, CATEGORY_CHEATS_INFO_0_VAL },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_VAL,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_VAL,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_VAL },
			{ "stereo", OPTION_VAL_STEREO_VAL },
			{ "surround", OPTION_VAL_SURROUND_VAL },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_VAL,
		NULL,
		CEMU_ACCOUNT_INFO_0_VAL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_VAL,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_VAL,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_VAL },
			{ "Vulkan", OPTION_VAL_VULKAN_VAL },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_VAL,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_VAL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_VAL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_VAL,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_VAL,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_VAL },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_VAL,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_VAL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_VAL,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_VAL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_VAL,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_VAL,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_VAL },
			{ "20", OPTION_VAL_20_VAL },
			{ "30", OPTION_VAL_30_VAL },
			{ "40", OPTION_VAL_40_VAL },
			{ "50", OPTION_VAL_50_VAL },
			{ "60", OPTION_VAL_60_VAL },
			{ "70", OPTION_VAL_70_VAL },
			{ "80", OPTION_VAL_80_VAL },
			{ "90", OPTION_VAL_90_VAL },
			{ "100", OPTION_VAL_100_VAL },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_VAL,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_VAL,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_VAL },
			{ "swapped", OPTION_VAL_SWAPPED_VAL },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_VAL,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_VAL,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_VAL,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_VAL,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_VAL,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_VAL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_VAL,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_VAL,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_VAL,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_VAL,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VAL,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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

#define CATEGORY_SYSTEM_LABEL_VN "Hệ thống"
#define CATEGORY_SYSTEM_INFO_0_VN "CPU, ngôn ngữ, số kênh âm thanh và tài khoản."
#define CATEGORY_GRAPHICS_LABEL_VN "Đồ họa (Cần khởi động lại)"
#define CATEGORY_GRAPHICS_INFO_0_VN "Giao diện lập trình đồ họa và bộ đổ bóng. Các thiết lập này có hiệu lực khi khởi động lại trò chơi, trừ khi có ghi chú khác."
#define CATEGORY_CONTROLLER_LABEL_VN "Bộ điều khiển"
#define CATEGORY_CONTROLLER_INFO_0_VN "Độ rung, chuyển động và màn hình Wii U được hiển thị, cùng cách hiển thị."
#define CATEGORY_TITLE_MANAGER_LABEL_VN "Quản lý trò chơi"
#define CATEGORY_TITLE_MANAGER_INFO_0_VN "Cài đặt và gỡ cài đặt trò chơi, bản cập nhật trò chơi và nội dung tải thêm trong saves/Cemu/mlc01, bộ nhớ lưu trữ của máy chơi game được mô phỏng, đồng thời chuyển trò chơi đang tải thành tệp .wua."
#define CATEGORY_CORE_LABEL_VN "Danh mục trình giả lập"
#define CATEGORY_CORE_INFO_0_VN "Tùy chọn của trình giả lập này mà phiên bản Cemu độc lập không có."
#define CATEGORY_LOGGING_LABEL_VN "Ghi nhật ký"
#define CATEGORY_LOGGING_INFO_0_VN "Thông tin nhật ký bổ sung để chẩn đoán sự cố."
#define CATEGORY_GRAPHIC_PACKS_LABEL_VN "Gói đồ họa (Cần khởi động lại)"
#define CATEGORY_GRAPHIC_PACKS_INFO_0_VN "Các gói đồ họa của trò chơi đang tải và các thiết lập có sẵn của chúng. Các gói tự tạo hoặc bản sao đã chỉnh sửa của những gói tích hợp được đặt trong system/Cemu/customGraphicPacks."
#define CATEGORY_CHEATS_LABEL_VN "Mã gian lận (Cần khởi động lại)"
#define CATEGORY_CHEATS_INFO_0_VN "Các gói mã gian lận của trò chơi đang tải, lấy từ thư mục Cheats của các gói đồ họa."
#define CEMU_CPU_MODE_LABEL_VN "Chế độ CPU (Cần khởi động lại)"
#define CEMU_CPU_MODE_INFO_0_VN "Cách mô phỏng các trình giả lập PowerPC của Wii U. Tự động: sử dụng chế độ trong hồ sơ trò chơi nếu có, giống như phiên bản độc lập; nếu không, dùng trình biên dịch lại đa lõi trên CPU có từ bốn lõi vật lý trở lên và dùng trình biên dịch lại đơn lõi trong các trường hợp còn lại. Các chế độ thông dịch chậm hơn nhiều và chủ yếu dành cho việc gỡ lỗi."
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_SINGLECORE_INTERPRETER_VN "Trình thông dịch đơn luồng"
#define OPTION_VAL_SINGLECORE_RECOMPILER_VN "Trình biên dịch lại đơn luồng"
#define OPTION_VAL_MULTICORE_RECOMPILER_VN "Trình biên dịch lại đa luồng"
#define OPTION_VAL_MULTICORE_INTERPRETER_VN "Trình thông dịch đa luồng"
#define CEMU_THREAD_QUANTUM_LABEL_VN "Lượng xử lý mỗi luồng"
#define CEMU_CONSOLE_LANGUAGE_LABEL_VN "Ngôn ngữ máy chơi game (Cần khởi động lại)"
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
#define CEMU_AUDIO_CHANNELS_LABEL_VN "Kênh âm thanh (cần khởi động lại)"
#define CEMU_AUDIO_CHANNELS_INFO_0_VN "Loại TV mà máy chơi game thông báo với các trò chơi, tương tự thiết lập kênh TV của chế độ chạy độc lập: các trò chơi hỗ trợ thiết lập này sẽ phối âm thanh cho số lượng loa tương ứng. Âm thanh vòm 5.1 được gửi đến RetroArch dưới dạng sáu kênh khi có đầu ra âm thanh đa kênh, nếu không sẽ được trộn xuống âm thanh nổi."
#define OPTION_VAL_MONO_VN NULL
#define OPTION_VAL_STEREO_VN NULL
#define OPTION_VAL_SURROUND_VN "Âm thanh vòm 5.1"
#define CEMU_ACCOUNT_LABEL_VN "Tài khoản đang hoạt động (Cần khởi động lại)"
#define CEMU_ACCOUNT_INFO_0_VN "Tài khoản Wii U mà trò chơi sử dụng để chạy, mỗi tài khoản có dữ liệu lưu và nhân vật Mii riêng. Danh sách hiển thị các tài khoản trong thư mục tài khoản.\n\nCho đến khi trò chơi được khởi động lại, trò chơi đang chạy vẫn tiếp tục lưu dữ liệu vào tài khoản đã dùng khi khởi chạy."
#define CEMU_CREATE_ACCOUNT_LABEL_VN "Tạo tài khoản"
#define CEMU_CREATE_ACCOUNT_INFO_0_VN "Tạo tài khoản mới có tên Người chơi 2, Người chơi 3, v. v. và đặt tài khoản đó làm tài khoản đang hoạt động. Sau đó, thiết lập này tự chuyển về TẮT. Tài khoản mới sẽ xuất hiện trong danh sách tài khoản sau khi thoát khỏi menu này và mở lại. Máy chơi game hỗ trợ tối đa 12 tài khoản."
#define CEMU_RENAME_ACCOUNT_LABEL_VN "Đổi tên tài khoản đang hoạt động"
#define CEMU_RENAME_ACCOUNT_INFO_0_VN "Mở giao diện nhập tên cho tài khoản đang hoạt động sau khi thoát khỏi menu này, rồi chuyển về TẮT. Tên đang nhập sẽ được hiển thị dưới dạng thông báo đè lên trò chơi, vì vậy thông báo trên màn hình của giao diện điều khiển phải được bật.\n\nVới tay cầm: Lên và Xuống thay đổi ký tự cuối cùng, Phải thêm một ký tự, Trái xóa một ký tự, Start xác nhận, Select hủy.\n\nVới bàn phím: nhập văn bản, Backspace xóa một ký tự, Enter xác nhận, Escape hủy (có thể cần bật Tập trung vào trò chơi trên giao diện điều khiển để chuyển phím đến lõi).\n\nTên có tối đa 10 ký tự. Trò chơi sẽ không nhận được thao tác điều khiển nào cho đến khi giao diện nhập tên được đóng, và trò chơi đang chạy sẽ hiển thị tên mới khi được khởi chạy lại."
#define CEMU_REMOVE_ACCOUNT_LABEL_VN "Xóa tài khoản"
#define CEMU_REMOVE_ACCOUNT_INFO_0_VN "Xóa tài khoản đã chọn khỏi thư mục tài khoản (saves/Cemu/mlc01/usr/save/system/act), tương tự thao tác xóa người dùng trên máy chơi game, khi thoát khỏi trình đơn này. Tùy chọn sẽ hiển thị lại TẮT khi quay lại trình đơn.\n\nKhông thể xóa tài khoản đang hoạt động, cũng như tài khoản đã dùng để khởi chạy trò chơi đang chạy cho đến khi trò chơi đó được đóng.\n\nCẢNH BÁO: xóa tài khoản cũng sẽ xóa vĩnh viễn dữ liệu lưu của tài khoản đó trong tất cả trò chơi. Hãy sao lưu mọi dữ liệu lưu muốn giữ lại trước khi xóa tài khoản."
#define CEMU_GPU_API_LABEL_VN "Giao diện đồ họa"
#define CEMU_GPU_API_INFO_0_VN "Giao diện lập trình đồ họa mà Cemu sử dụng để dựng hình."
#define OPTION_VAL_OPENGL_VN NULL
#define OPTION_VAL_VULKAN_VN NULL
#define CEMU_PRECOMPILED_SHADERS_LABEL_VN "Bộ đổ bóng biên dịch sẵn (OpenGL)"
#define CEMU_PRECOMPILED_SHADERS_INFO_0_VN "Bộ nhớ đệm chứa các chương trình đổ bóng đã biên dịch. Tự động: sử dụng thiết lập trong hồ sơ trò chơi nếu có, giống như phiên bản độc lập; nếu không, tắt trên card đồ họa Nvidia vì trình điều khiển của hãng có bộ nhớ đệm riêng, và bật trên các card đồ họa khác."
#define CEMU_ASYNC_SHADER_COMPILE_LABEL_VN "Biên dịch bộ đổ bóng bất đồng bộ (Vulkan)"
#define CEMU_ACCURATE_SHADER_MUL_LABEL_VN "Tính toán nhân bộ đổ bóng chính xác"
#define CEMU_ACCURATE_SHADER_MUL_INFO_0_VN "Mô phỏng chính xác phép nhân của bộ xử lý đồ họa, điều mà hầu hết trò chơi cần. Tự động: sử dụng thiết lập trong hồ sơ trò chơi nếu có, giống như phiên bản độc lập (Super Mario 3D World, Captain Toad và Xenoblade Chronicles X chạy khi tắt tùy chọn này); nếu không, bật."
#define CEMU_GX2DRAWDONE_SYNC_LABEL_VN "Đồng bộ GX2DrawDone"
#define CEMU_GX2DRAWDONE_SYNC_INFO_0_VN "Buộc trò chơi chờ cho đến khi bộ xử lý đồ họa hoàn tất mọi công việc mỗi khi trò chơi gọi GX2DrawDone, giống như tùy chọn Đồng bộ hoàn toàn tại GX2DrawDone trong phiên bản độc lập. Một số trò chơi cần tùy chọn này để hiển thị chính xác; tắt có thể giúp chạy nhanh hơn. Có thể bật hoặc tắt trong khi chơi."
#define CEMU_VK_ACCURATE_BARRIERS_LABEL_VN "Rào cản đồng bộ chính xác (Vulkan)"
#define CEMU_VK_ACCURATE_BARRIERS_INFO_0_VN "Duy trì đồng bộ hóa giữa các lệnh vẽ mà một số trò chơi cần để dựng hình chính xác, giống như tùy chọn cùng tên trong phiên bản độc lập. Tắt có thể giúp chạy nhanh hơn nhưng sẽ gây lỗi hiển thị trong những trò chơi đó. Có thể bật hoặc tắt trong khi chơi."
#define CEMU_RUMBLE_STRENGTH_LABEL_VN "Cường độ rung"
#define CEMU_RUMBLE_STRENGTH_INFO_0_VN "Mức rung của tay cầm khi trò chơi yêu cầu: động cơ của Tay cầm chơi game và của Điều khiển Wii hoặc Tay cầm Pro. Tắt sẽ không gửi bất kỳ lệnh rung nào đến giao diện chính."
#define OPTION_VAL_10_VN NULL
#define OPTION_VAL_20_VN NULL
#define OPTION_VAL_30_VN NULL
#define OPTION_VAL_40_VN NULL
#define OPTION_VAL_50_VN NULL
#define OPTION_VAL_60_VN NULL
#define OPTION_VAL_70_VN NULL
#define OPTION_VAL_80_VN NULL
#define OPTION_VAL_90_VN NULL
#define OPTION_VAL_100_VN NULL
#define CEMU_GAMEPAD_MOTION_LABEL_VN "Điều khiển chuyển động của tay cầm GamePad"
#define CEMU_GAMEPAD_MOTION_INFO_0_VN "Con quay hồi chuyển và cảm biến gia tốc của tay cầm GamePad, lấy từ các cảm biến mà RetroArch đọc được trên cổng 1: cảm biến tích hợp của điện thoại hoặc máy tính bảng, hoặc cảm biến của tay cầm nếu trình điều khiển đầu vào của RetroArch hỗ trợ (DualShock 4, DualSense và các loại khác). Cần bật tùy chọn này đối với những trò chơi yêu cầu ngắm bắn hoặc điều khiển hướng di chuyển bằng cách nghiêng tay cầm GamePad. Tắt: tay cầm GamePad giữ nguyên trạng thái đứng yên, giống như khi tắt chức năng chuyển động trong chế độ độc lập."
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
#define CEMU_INSTALL_GAME_LABEL_VN "Cài đặt trò chơi"
#define CEMU_INSTALL_GAME_INFO_0_VN "Cài đặt mọi trò chơi từ thư mục nguồn (system/Cemu/titles), bao gồm cả các thư mục con, vào thư mục trò chơi đã cài đặt của máy Wii U được mô phỏng (saves/Cemu/mlc01/usr/title/00050000), tương tự cách máy chơi game cài đặt trò chơi từ đĩa. Một trò chơi là ảnh đĩa (.wud, .wux, .iso) hoặc tệp .wua; bản cập nhật trò chơi và nội dung tải thêm chứa trong tệp .wua cũng được cài đặt cùng. Ảnh đĩa được mã hóa (.wud, .wux) cần có khóa đĩa: đặt trong một tệp cùng tên với ảnh đĩa và có phần mở rộng .key (game.wux, game.key), hoặc trong system/Cemu/keys.txt. Trò chơi đã được cài đặt ở cùng phiên bản hoặc phiên bản mới hơn sẽ được giữ nguyên.\n\nKhi BẬT, quá trình cài đặt bắt đầu ngay lập tức, tiến trình được hiển thị dưới dạng thông báo, và thiết lập này sẽ tự TẮT khi tất cả trò chơi đã được cài đặt và bạn thoát khỏi trình đơn này hoặc thay đổi tùy chọn khác. Trò chơi đã cài đặt được khởi chạy bằng cách nạp tệp .rpx trong thư mục mã của trò chơi ở thư mục trò chơi đã cài đặt; không cần đến ảnh đĩa của trò chơi nữa."
#define CEMU_UNINSTALL_GAME_LABEL_VN "Gỡ cài đặt trò chơi"
#define CEMU_UNINSTALL_GAME_INFO_0_VN "Gỡ cài đặt trò chơi đang chạy cùng tất cả bản cập nhật trò chơi và nội dung tải thêm liên quan khỏi thư mục đã cài đặt (saves/Cemu/mlc01/usr/title) sau khi trò chơi được đóng hoặc khởi động lại; tùy chọn vẫn BẬT cho đến lúc đó. Dữ liệu lưu có mã định danh trò chơi (saves/Cemu/mlc01/usr/save/) sẽ không bị xóa."
#define CEMU_INSTALL_TITLES_LABEL_VN "Cài đặt nội dung"
#define CEMU_INSTALL_TITLES_INFO_0_VN "Cài đặt mọi bản cập nhật trò chơi và nội dung tải thêm từ thư mục nguồn (system/Cemu/titles), bao gồm cả các thư mục con, vào thư mục đã cài đặt (saves/Cemu/mlc01/usr/title). Mỗi nội dung phải nằm trong một thư mục riêng trong thư mục nguồn; bản tải xuống từ máy chủ NUS (các tệp .app) cần có tệp title.tmd và title.tik chứa khóa giải mã đặt bên cạnh. Phiên bản đã cài đặt nếu bằng hoặc mới hơn sẽ được giữ nguyên.\n\nKhi BẬT, quá trình cài đặt bắt đầu ngay lập tức, tiến trình được hiển thị dưới dạng thông báo, và thiết lập này sẽ tự TẮT khi tất cả nội dung đã được cài đặt và bạn thoát khỏi trình đơn này hoặc thay đổi tùy chọn khác. Trò chơi sẽ sử dụng nội dung đã cài đặt sau khi được khởi động lại.\n\nCó thể cài đặt nội dung từ các vị trí khác bằng cách vào Trình đơn chính > Nạp nội dung của RetroArch, rồi chọn tệp title.tmd tương ứng, với tệp title.tik đặt bên cạnh."
#define CEMU_UNINSTALL_TITLES_LABEL_VN "Gỡ cài đặt nội dung"
#define CEMU_UNINSTALL_TITLES_INFO_0_VN "Gỡ cài đặt bản cập nhật trò chơi và nội dung tải thêm của trò chơi đang chạy khỏi thư mục đã cài đặt (saves/Cemu/mlc01/usr/title) sau khi trò chơi được đóng hoặc khởi động lại; tùy chọn vẫn BẬT cho đến lúc đó. Các bản sao trong thư mục nguồn (system/Cemu/titles) sẽ được giữ nguyên."
#define CEMU_INSTALL_REMOVE_SOURCE_LABEL_VN "Xóa tệp sau khi cài đặt"
#define CEMU_INSTALL_REMOVE_SOURCE_INFO_0_VN "Xóa những nội dung mà các tùy chọn Cài đặt trò chơi và Cài đặt nội dung đã cài đặt khỏi thư mục nguồn (system/Cemu/titles): thư mục của bản cập nhật trò chơi hoặc nội dung tải thêm sau khi được cài đặt, và ảnh đĩa (cùng tệp .key) hoặc tệp .wua sau khi mọi nội dung chứa trong đó đã được cài đặt. Các tệp đang được trò chơi chạy sử dụng sẽ bị xóa khi trò chơi được đóng hoặc khởi động lại.\n\nCẢNH BÁO: thao tác này sẽ xóa vĩnh viễn các tệp khỏi thư mục nguồn. Thư mục đó dành cho lõi tự quản lý; hãy lưu trữ dữ liệu trò chơi muốn giữ lại ở một nơi khác."
#define CEMU_WUA_OUTPUT_DIR_LABEL_VN "Thư mục đầu ra"
#define CEMU_WUA_OUTPUT_DIR_INFO_0_VN "Nơi tệp .wua được ghi. Cần đủ dung lượng để chứa tệp này."
#define CEMU_CONVERT_TO_WUA_LABEL_VN "Bắt đầu chuyển đổi sang WUA"
#define CEMU_CONVERT_TO_WUA_INFO_0_VN "Ghi trò chơi vào thư mục đầu ra dưới dạng tệp .wua. Quá trình này vẫn tiếp tục chạy trong khi thực hiện."
#define CEMU_INTERNAL_RESOLUTION_LABEL_VN "Độ phân giải nội bộ (Cần khởi động lại)"
#define CEMU_INTERNAL_RESOLUTION_INFO_0_VN "Thiết lập dự phòng chung cho các trò chơi không có gói đồ họa điều chỉnh độ phân giải: thay đổi kích thước mọi vùng đệm dựng hình có hình dạng tương ứng với màn hình, trong đó một số trò chơi sử dụng các vùng đệm có thể gặp lỗi khi thay đổi kích thước. Giá trị là bội số của độ phân giải gốc của trò chơi: với trò chơi 720p, mức 0.5x là 640x360, bằng một phần tư số điểm ảnh, còn mức 2x là 2560x1440; với trò chơi 1080p, mức 0.5x là 960x540. Khi bật gói điều chỉnh độ phân giải cho trò chơi đang tải (Gói đồ họa), gói đó sẽ quyết định độ phân giải."
#define OPTION_VAL_0_25X_VN "0.25x (320x180 ở 720p)"
#define OPTION_VAL_0_5X_VN "0.5x (640x360 ở 720p)"
#define OPTION_VAL_0_75X_VN "0.75x (960x540 ở 720p)"
#define OPTION_VAL_NATIVE_VN "Nguyên bản"
#define OPTION_VAL_1_5X_VN "1.5x (1920x1080 ở 720p)"
#define OPTION_VAL_2X_VN "2x (2560x1440 ở 720p)"
#define OPTION_VAL_3X_VN "3x (3840x2160 ở 720p)"
#define CEMU_RENDER_AHEAD_LABEL_VN "Kết xuất trước một khung hình"
#define CEMU_RENDER_AHEAD_INFO_0_VN "Cho phép Cemu bắt đầu dựng hình khung hình tiếp theo trong khi RetroArch hiển thị khung hình trước đó, giống như Cemu độc lập. Hình ảnh mượt hơn khi thời gian dựng hình chiếm phần lớn thời gian của mỗi khung hình, nhưng độ trễ đầu vào tăng thêm một khung hình."
#define CEMU_AUDIO_THREAD_LABEL_VN "Luồng âm thanh (Cần khởi động lại)"
#define CEMU_AUDIO_THREAD_INFO_0_VN "Bật: RetroArch xử lý âm thanh trên luồng riêng, còn âm thanh của Wii U chạy theo nhịp đồng hồ như trong Cemu độc lập, nhờ đó âm thanh không bị ngắt quãng khi một khung hình bị trễ (đang tải, biên dịch bộ đổ bóng). Khi đó, tính năng Đồng bộ âm thanh của RetroArch không còn điều tiết nhịp xử lý khung hình; Đồng bộ dọc sẽ đảm nhiệm việc này, còn số liệu thống kê âm thanh của RetroArch sẽ để trống. Tắt: Âm thanh được chuyển giao cùng với từng khung hình."
#define CEMU_BC1_16BIT_LABEL_VN "Giảm bộ nhớ kết cấu BC1 (Cần khởi động lại)"
#define CEMU_BC1_16BIT_INFO_0_VN "Giảm một nửa dung lượng mà kết cấu BC1 chiếm dụng trên GPU không thể lấy mẫu BC, đổi lại mất một bit màu xanh lá. Không có tác dụng trên GPU hỗ trợ BC."
#define CEMU_SHOW_GAME_FPS_LABEL_VN "Hiển thị FPS của trò chơi"
#define CEMU_SHOW_GAME_FPS_INFO_0_VN "Hiển thị tốc độ khung hình mà trò chơi dựng được trên màn hình hiển thị thông tin của RetroArch, cập nhật mỗi giây."
#define CEMU_LOG_TO_FILE_LABEL_VN "Ghi nhật ký Cemu vào log.txt"
#define CEMU_LOG_FILESYSTEM_LABEL_VN "Ghi quyền truy cập tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_THREAD_SYNC_LABEL_VN "Ghi đồng bộ hóa luồng vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_SYSTEM_API_LABEL_VN "Ghi các lệnh gọi API hệ thống vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_TEXTURE_MEMORY_LABEL_VN "Ghi bộ nhớ kết cấu vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_TEXTURE_MEMORY_INFO_0_VN "Báo cáo lượng bộ nhớ kết cấu thuộc loại BC đã phải giải nén vì GPU này không thể lấy mẫu loại dữ liệu đó."
#define CEMU_LOG_INPUT_API_LABEL_VN "Ghi các lệnh gọi API tay cầm vào tệp nhật ký (gỡ lỗi)"
#define CEMU_LOG_INPUT_API_INFO_0_VN "Ghi lại mọi lệnh gọi tay cầm mà trò chơi thực hiện - trò chơi kiểm tra những tay cầm nào và hệ thống đã phản hồi như thế nào. Tạo rất nhiều dữ liệu; chỉ nên bật trong vài giây mỗi lần."
#define CEMU_LOG_AUDIO_LABEL_VN "Ghi nhật ký âm thanh và nhịp khung hình (gỡ lỗi)"
#define CEMU_LOG_AUDIO_INFO_0_VN "Mỗi giây, ghi lại số mẫu âm thanh AX đã tạo ra, số mẫu phải loại bỏ khỏi bộ đệm vòng và số mẫu giao diện chính đã lấy; đồng thời ghi lại số lần giao diện chính chạy lõi giả lập, số khung hình trò chơi đã hoàn thành và thời gian được phân bổ cho từng công việc (chờ luồng xử lý đồ họa, xuất khung hình, âm thanh). Dùng để xác định liệu trò chơi chạy chậm bị giới hạn bởi bộ xử lý được mô phỏng, bộ xử lý đồ họa hay giao diện chính."
#define CEMU_LOG_THREAD_TIME_LABEL_VN "Ghi nhật ký thời gian xử lý của luồng (gỡ lỗi)"
#define CEMU_LOG_THREAD_TIME_INFO_0_VN "Mỗi giây, ghi lại mức độ bận của luồng trên từng lõi PowerPC được mô phỏng, luồng xử lý đồ họa và luồng của giao diện chính, tính theo tỷ lệ phần trăm công suất của một lõi máy thật. Luồng gần mức 100% chính là luồng mà trò chơi chạy chậm đang phải chờ."
#define CEMU_DUMP_SHADERS_LABEL_VN "Xuất bộ tạo bóng (gỡ lỗi)"
#define CEMU_DUMP_SHADERS_INFO_0_VN "Ghi mã nguồn của mọi bộ tạo bóng mà game sử dụng vào system/Cemu/dump/shaders, đặt tên theo mã băm của chúng như được hiển thị trong log.txt. Dùng để báo cáo bộ tạo bóng bị lỗi hoặc hiển thị sai trên một GPU cụ thể. Làm chậm quá trình biên dịch bộ tạo bóng và nhanh chóng làm đầy thư mục, vì vậy hãy tắt lại sau khi sử dụng."
#define CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VN "Mô phỏng cổng sức mạnh Skylanders (Cần khởi động lại)"
#define CEMU_EMULATE_INFINITY_BASE_LABEL_VN "Mô phỏng đế Infinity (Cần khởi động lại)"
#define CEMU_EMULATE_DIMENSIONS_TOYPAD_LABEL_VN "Mô phỏng bàn chơi Dimensions (Cần khởi động lại)"

struct retro_core_option_v2_category option_cats_vn[] = {
	// In the order RetroArch shows them, which is the order of their first
	// options below (Graphic Packs and Cheats come after Logging, as their
	// options are added at run time)
	{ "system", CATEGORY_SYSTEM_LABEL_VN, CATEGORY_SYSTEM_INFO_0_VN },
	{ "graphics", CATEGORY_GRAPHICS_LABEL_VN, CATEGORY_GRAPHICS_INFO_0_VN },
	// What a port drives is a frontend device type, not a core option
	{ "controller", CATEGORY_CONTROLLER_LABEL_VN, CATEGORY_CONTROLLER_INFO_0_VN },
	{ "title_manager", CATEGORY_TITLE_MANAGER_LABEL_VN, CATEGORY_TITLE_MANAGER_INFO_0_VN },
	{ "core", CATEGORY_CORE_LABEL_VN, CATEGORY_CORE_INFO_0_VN },
	{ "logging", CATEGORY_LOGGING_LABEL_VN, CATEGORY_LOGGING_INFO_0_VN },
	{ "graphic_packs", CATEGORY_GRAPHIC_PACKS_LABEL_VN, CATEGORY_GRAPHIC_PACKS_INFO_0_VN },
	{ "cheats", CATEGORY_CHEATS_LABEL_VN, CATEGORY_CHEATS_INFO_0_VN },
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
		"cemu_audio_channels",
		CEMU_AUDIO_CHANNELS_LABEL_VN,
		NULL,
		CEMU_AUDIO_CHANNELS_INFO_0_VN,
		NULL,
		"system",
		{
			{ "mono", OPTION_VAL_MONO_VN },
			{ "stereo", OPTION_VAL_STEREO_VN },
			{ "surround", OPTION_VAL_SURROUND_VN },
			{ NULL, NULL },
		},
		"stereo"
	},
	{
		"cemu_account",
		CEMU_ACCOUNT_LABEL_VN,
		NULL,
		CEMU_ACCOUNT_INFO_0_VN,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_rename_account",
		CEMU_RENAME_ACCOUNT_LABEL_VN,
		NULL,
		CEMU_RENAME_ACCOUNT_INFO_0_VN,
		NULL,
		"system",
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
		"system",
		{
			{ "disabled", NULL },
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
		"graphics",
		{
			{ "OpenGL", OPTION_VAL_OPENGL_VN },
			{ "Vulkan", OPTION_VAL_VULKAN_VN },
			{ NULL, NULL },
		},
		"Vulkan"
	},
#endif
	{
		"cemu_precompiled_shaders",
		CEMU_PRECOMPILED_SHADERS_LABEL_VN,
		NULL,
		CEMU_PRECOMPILED_SHADERS_INFO_0_VN,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_VN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_async_shader_compile",
		CEMU_ASYNC_SHADER_COMPILE_LABEL_VN,
		NULL,
		NULL,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_accurate_shader_mul",
		CEMU_ACCURATE_SHADER_MUL_LABEL_VN,
		NULL,
		CEMU_ACCURATE_SHADER_MUL_INFO_0_VN,
		NULL,
		"graphics",
		{
			{ "auto", OPTION_VAL_AUTO_VN },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_gx2drawdone_sync",
		CEMU_GX2DRAWDONE_SYNC_LABEL_VN,
		NULL,
		CEMU_GX2DRAWDONE_SYNC_INFO_0_VN,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_vk_accurate_barriers",
		CEMU_VK_ACCURATE_BARRIERS_LABEL_VN,
		NULL,
		CEMU_VK_ACCURATE_BARRIERS_INFO_0_VN,
		NULL,
		"graphics",
		{
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"enabled"
	},
	{
		"cemu_rumble_strength",
		CEMU_RUMBLE_STRENGTH_LABEL_VN,
		NULL,
		CEMU_RUMBLE_STRENGTH_INFO_0_VN,
		NULL,
		"controller",
		{
			{ "0", "Off" },
			{ "10", OPTION_VAL_10_VN },
			{ "20", OPTION_VAL_20_VN },
			{ "30", OPTION_VAL_30_VN },
			{ "40", OPTION_VAL_40_VN },
			{ "50", OPTION_VAL_50_VN },
			{ "60", OPTION_VAL_60_VN },
			{ "70", OPTION_VAL_70_VN },
			{ "80", OPTION_VAL_80_VN },
			{ "90", OPTION_VAL_90_VN },
			{ "100", OPTION_VAL_100_VN },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_gamepad_motion",
		CEMU_GAMEPAD_MOTION_LABEL_VN,
		NULL,
		CEMU_GAMEPAD_MOTION_INFO_0_VN,
		NULL,
		"controller",
		{
			{ "disabled", "Disabled" },
			{ "enabled", "Enabled" },
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
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
		"controller",
		{
			{ "normal", OPTION_VAL_NORMAL_VN },
			{ "swapped", OPTION_VAL_SWAPPED_VN },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_install_game",
		CEMU_INSTALL_GAME_LABEL_VN,
		NULL,
		CEMU_INSTALL_GAME_INFO_0_VN,
		NULL,
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
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
		"title_manager",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_internal_resolution",
		CEMU_INTERNAL_RESOLUTION_LABEL_VN,
		NULL,
		CEMU_INTERNAL_RESOLUTION_INFO_0_VN,
		NULL,
		"core",
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
		"cemu_render_ahead",
		CEMU_RENDER_AHEAD_LABEL_VN,
		NULL,
		CEMU_RENDER_AHEAD_INFO_0_VN,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_audio_thread",
		CEMU_AUDIO_THREAD_LABEL_VN,
		NULL,
		CEMU_AUDIO_THREAD_INFO_0_VN,
		NULL,
		"core",
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
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
	},
	{
		"cemu_show_game_fps",
		CEMU_SHOW_GAME_FPS_LABEL_VN,
		NULL,
		CEMU_SHOW_GAME_FPS_INFO_0_VN,
		NULL,
		"core",
		{
			{ "disabled", NULL },
			{ "enabled", NULL },
			{ NULL, NULL },
		},
		"disabled"
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
		"cemu_emulate_skylander_portal",
		CEMU_EMULATE_SKYLANDER_PORTAL_LABEL_VN,
		NULL,
		NULL,
		NULL,
		NULL,
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
		NULL,
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
		NULL,
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