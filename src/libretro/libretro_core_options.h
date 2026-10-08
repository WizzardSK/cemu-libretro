#ifndef LIBRETRO_CORE_OPTIONS_H__
#define LIBRETRO_CORE_OPTIONS_H__

#include <stdlib.h>
#include <string.h>

#include "libretro.h"

#ifndef HAVE_NO_LANGEXTRA
#include "libretro_core_options_intl.h"
#endif

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

/* RETRO_LANGUAGE_ENGLISH */

/* Default language:
 * - All other languages must include the same keys and values
 * - Will be used as a fallback in the event that frontend language
 *   is not available
 * - Will be used as a fallback for any missing entries in
 *   frontend language definition
 * - Translations live in libretro_core_options_intl.h, which is
 *   generated from Crowdin - edit only the English texts here
 */

struct retro_core_option_v2_category option_cats_us[] = {
	{ "video", "Video", "Resolution, scaling and frame pacing." },
	{ "shaders", "Shaders", "Shader translation, caching and compilation." },
	{ "screen", "Screen", "Which Wii U screen is shown, and how." },
	// No Input category: what a port drives is a frontend device type, not
	// a core option, and an empty submenu is worse than no submenu.
	{ "system", "System", "CPU, language and scheduling." },
	{ "addons", "Add-ons", "Skylanders, Infinity and Dimensions portals." },
	{ "logging", "Logging", "Extra log output, for diagnosing problems." },
	{ "accounts", "Accounts", "Manage accounts in the Wii U's account directory (saves/Cemu/mlc01/usr/save/system/act)." },
	{ "install", "Content", "Manage games, title updates and DLC in saves/Cemu/mlc01, the emulated console's storage." },
	{ "convert", "Convert to WUA", "Write the loaded title out as a .wua archive." },
	{ "graphic_packs", "Graphic Packs", "The loaded game's graphic packs and their presets. Changes apply the next time the game is loaded." },
	{ "cheats", "Cheats", "The loaded game's cheat packs, from the graphic packs' Cheats folder. Changes apply the next time the game is loaded." },
	{ NULL, NULL, NULL },
};

struct retro_core_option_v2_definition option_defs_us[] = {
	{
		"cemu_cpu_mode",
		"CPU Mode",
		NULL,
		"How the Wii U's PowerPC cores are emulated. Auto takes the multicore recompiler on a CPU with four or more physical cores and the single-core one otherwise. The interpreters are far slower and are meant for debugging. (Restart required)",
		NULL,
		"system",
		{
			{ "auto", "Auto" },
			{ "singlecore_interpreter", "Singlecore Interpreter" },
			{ "singlecore_recompiler", "Singlecore Recompiler" },
			{ "multicore_recompiler", "Multicore Recompiler" },
			{ "multicore_interpreter", "Multicore Interpreter" },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_console_language",
		"Console Language",
		NULL,
		NULL,
		NULL,
		"system",
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
			{ NULL, NULL },
		},
		"English"
	},
	{
		"cemu_async_shader_compile",
		"Async Shader Compile",
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
		"GX2DrawDone Sync",
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
		"Precompiled Shaders",
		NULL,
		NULL,
		NULL,
		"shaders",
		{
			{ "auto", "Auto" },
			{ "enabled", NULL },
			{ "disabled", NULL },
			{ NULL, NULL },
		},
		"auto"
	},
	{
		"cemu_accurate_shader_mul",
		"Accurate Shader Multiplication",
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
		"cemu_upscale_filter",
		"Upscale Filter",
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", "Linear" },
			{ "bicubic", "Bicubic" },
			{ "bicubic_hermite", "Bicubic Hermite" },
			{ "nearest", "Nearest" },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_show_game_fps",
		"Show Game FPS",
		NULL,
		"Show the frame rate the game renders at. RetroArch's own FPS counter counts how often the core runs, and that stays at 60 when the game drops frames, because every run carries a frame's worth of audio.",
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
		"cemu_downscale_filter",
		"Downscale Filter",
		NULL,
		NULL,
		NULL,
		"video",
		{
			{ "linear", "Linear" },
			{ "bicubic", "Bicubic" },
			{ "bicubic_hermite", "Bicubic Hermite" },
			{ "nearest", "Nearest" },
			{ NULL, NULL },
		},
		"linear"
	},
	{
		"cemu_internal_resolution",
		"Internal Resolution",
		NULL,
		"A generic fallback for games without a resolution graphic pack: resizes every screen-shaped render target, which some games use for things that break when resized. A multiple of the game's own resolution: for a 720p game 0.5x is 640x360, a quarter of the pixels, and 2x is 2560x1440; for a 1080p game 0.5x is 960x540. When a resolution pack is enabled for the loaded game (Graphic Packs), the pack sets the resolution and this option is hidden.",
		NULL,
		"video",
		{
			{ "0.25x", "0.25x (320x180 at 720p)" },
			{ "0.5x", "0.5x (640x360 at 720p)" },
			{ "0.75x", "0.75x (960x540 at 720p)" },
			{ "native", "Native" },
			{ "1.5x", "1.5x (1920x1080 at 720p)" },
			{ "2x", "2x (2560x1440 at 720p)" },
			{ "3x", "3x (3840x2160 at 720p)" },
			{ NULL, NULL },
		},
		"native"
	},
	{
		"cemu_thread_quantum",
		"Thread Quantum",
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
		"Rumble Strength",
		NULL,
		"How strongly the controller vibrates when the game asks for it: the GamePad's motor, and the Wii Remote's or Pro Controller's. Off sends the frontend no rumble at all.",
		NULL,
		"system",
		{
			{ "0", "Off" },
			{ "25", "25%" },
			{ "50", "50%" },
			{ "75", "75%" },
			{ "100", "100%" },
			{ NULL, NULL },
		},
		"100"
	},
	{
		"cemu_emulate_skylander_portal",
		"Emulate Skylanders Portal of Power",
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
		"Emulate Infinity Base",
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
		"Emulate Dimensions Toy Pad",
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
		"# of Screen Layouts",
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
		"Layout 1",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", NULL },
			{ "GamePad Screen", NULL },
			{ "Side by Side", NULL },
			{ "Top Bottom", NULL },
			{ "Picture in Picture", NULL },
			{ NULL, NULL },
		},
		"Default Screen"
	},
	{
		"cemu_screen_layout2",
		"Layout 2",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", NULL },
			{ "GamePad Screen", NULL },
			{ "Side by Side", NULL },
			{ "Top Bottom", NULL },
			{ "Picture in Picture", NULL },
			{ NULL, NULL },
		},
		"GamePad Screen"
	},
	{
		"cemu_screen_layout3",
		"Layout 3",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", NULL },
			{ "GamePad Screen", NULL },
			{ "Side by Side", NULL },
			{ "Top Bottom", NULL },
			{ "Picture in Picture", NULL },
			{ NULL, NULL },
		},
		"Side by Side"
	},
	{
		"cemu_screen_layout4",
		"Layout 4",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", NULL },
			{ "GamePad Screen", NULL },
			{ "Side by Side", NULL },
			{ "Top Bottom", NULL },
			{ "Picture in Picture", NULL },
			{ NULL, NULL },
		},
		"Top Bottom"
	},
	{
		"cemu_screen_layout5",
		"Layout 5",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Default Screen", NULL },
			{ "GamePad Screen", NULL },
			{ "Side by Side", NULL },
			{ "Top Bottom", NULL },
			{ "Picture in Picture", NULL },
			{ NULL, NULL },
		},
		"Picture in Picture"
	},
	{
		"cemu_next_screen_layout_button",
		"Next Screen Layout",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "Disabled", NULL },
			{ "L + R + L2 + R2 + L3 + R3", NULL },
			{ "Select + L3", NULL },
			{ "Select + R3", NULL },
			{ "Tab", NULL },
			{ NULL, NULL },
		},
		"L + R + L2 + R2 + L3 + R3"
	},
	{
		"cemu_drc_position",
		"GamePad Position",
		NULL,
		NULL,
		NULL,
		"screen",
		{
			{ "normal", "Normal" },
			{ "swapped", "Swapped" },
			{ NULL, NULL },
		},
		"normal"
	},
	{
		"cemu_log_to_file",
		"Write Cemu Log to log.txt",
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
		"Log File Access (debugging)",
		NULL,
		NULL,
		NULL,
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
		"Log Thread Synchronisation (debugging)",
		NULL,
		NULL,
		NULL,
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
		"Log System API Calls (debugging)",
		NULL,
		NULL,
		NULL,
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
		"Log Texture Memory (debugging)",
		NULL,
		"Reports how much of the texture memory is BC that had to be decompressed because this GPU cannot sample it.",
		NULL,
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
		"Log Controller API Calls (debugging)",
		NULL,
		"Logs every controller call a title makes - which pads it probed for and what it was told. Noisy; for a few seconds at a time.",
		NULL,
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
		"Log Audio and Frame Pacing (debugging)",
		NULL,
		"Once a second, how many samples AX produced, how many the ring had to drop, and how many the frontend took; and how many times the frontend ran the core, how many frames the title finished, and where the time went (waiting for the GPU thread, presenting, audio). For working out whether a slow game is held up by the emulated CPU, the GPU or the frontend.",
		NULL,
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
		"Log Thread CPU Time (debugging)",
		NULL,
		"Once a second, how busy each emulated PowerPC core's thread, the GPU thread and the frontend's thread were, as a share of one host core. A thread near 100% is the one a slow game is waiting on.",
		NULL,
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
		"Dump Shaders (debugging)",
		NULL,
		"Writes the source of every shader the game uses to system/Cemu/dump/shaders, named by its hashes as they appear in log.txt. For reporting a shader that fails or draws wrongly on a particular GPU. Slows shader compilation down and fills the folder quickly, so turn it off again afterwards.",
		NULL,
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
		"Reduce BC1 Texture Memory",
		NULL,
		"Halves what BC1 textures cost on a GPU that cannot sample BC, at the price of one bit of green. No effect where BC is supported.",
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
		"Graphics API",
		NULL,
		"The graphics API Cemu renders with. (Restart required)",
		NULL,
		"video",
		{
			{ "OpenGL", NULL },
			{ "Vulkan", NULL },
			{ NULL, NULL },
		},
		"OpenGL"
	},
#endif
	{
		"cemu_account",
		"Active Account",
		NULL,
		"The Wii U account the game runs as, each with its own saves and Mii. The list is the accounts in the account directory.\n\nA change applies when the title is closed and started again, or reset. Until then the running title keeps saving to the account it was started with.",
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
		"Create Account",
		NULL,
		"Creates a new account, named Player 2, Player 3 and so on, and makes it the Active Account. Then this goes back to OFF. The console holds up to 12 accounts.",
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
		"Remove Account",
		NULL,
		"WARNING: removing an account also deletes its save data in every game, and this cannot be undone.\n\nRemoves the chosen account, as deleting a user on the console does: the account goes from the account directory, and its saves from every title's save folder. The account is removed when you leave the menu, and this then goes back to OFF.\n\nThe active account cannot be removed, and neither can the account the running game was started with until that game is closed. So the last account cannot be removed.",
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
		"Install Games",
		NULL,
		"Installs every game in system/Cemu/titles, subfolders included, into the emulated Wii U's installed game directory (saves/Cemu/mlc01/usr/title/00050000), as the console installs a game from its disc. A game is a disc image (.wud, .wux, .iso) or a .wua; the title update and DLC a .wua holds are installed with it. A game already installed in the same or a newer version is left alone.\n\nWhen this is ON, installing begins immediately, with its progress shown as a notification, and it turns OFF again when all games are installed. An installed game is started by loading the .rpx in its code folder in the installed game directory; its disc image is not needed any more.",
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
		"Uninstall Game",
		NULL,
		"Uninstalls the running game from the installed game directory (saves/Cemu/mlc01/usr/title/00050000) once the game is closed or reset, together with its installed title update and DLC; it stays ON until then. Its saves are left alone, as are the disc image or .wua it was installed from.",
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
		"Install Content",
		NULL,
		"Installs every title update and DLC in system/Cemu/titles, subfolders included, into the emulated Wii U's storage (saves/Cemu/mlc01/usr/title). Each one goes in a folder of its own in system/Cemu/titles; a NUS download (.app files) needs its title.tmd and its title.tik, the decryption key, next to them. A version already installed that is the same or newer is left alone.\n\nWhen this is ON, installing begins immediately, with its progress shown as a notification, and it turns OFF again when all content is installed and this menu is exited or another option is changed. The game uses the installed content once it is restarted.\n\nContent from other locations can be installed with RetroArch's Main Menu > Load Content, by selecting the corresponding title.tmd, with its title.tik beside it.",
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
		"Uninstall Content",
		NULL,
		"Uninstalls the running game's title update and DLC from the emulated Wii U's storage (saves/Cemu/mlc01/usr/title) once the game is closed or reset; it stays ON until then. Copies in system/Cemu/titles are left alone.",
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
		"Remove Files After Installing",
		NULL,
		"WARNING: this deletes files from system/Cemu/titles, and that cannot be undone. system/Cemu/titles is a folder for the core to manage; keep the only copy of a dump elsewhere.\n\nDeletes what Install Games and Install Content have installed from system/Cemu/titles: a title update or DLC folder once it is installed, and a disc image or .wua once everything it holds is installed (Install Content alone leaves a .wua that also holds the game). Files in use by the running game go when it is closed or reset. Content loaded through Load Content is left where it is.",
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
		"Output Directory",
		NULL,
		"Where the .wua is written. Needs room for it.",
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
		"Start Conversion to WUA",
		NULL,
		"Writes the title to the output directory as a .wua. It keeps running while this happens.",
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

struct retro_core_options_v2 options_us = {
   option_cats_us,
   option_defs_us
};

/*
 ********************************
 * Language Mapping
 ********************************
*/

#ifndef HAVE_NO_LANGEXTRA
struct retro_core_options_v2 *options_intl[RETRO_LANGUAGE_LAST] = {
   &options_us,       /* RETRO_LANGUAGE_ENGLISH */
   &options_ja,       /* RETRO_LANGUAGE_JAPANESE */
   &options_fr,       /* RETRO_LANGUAGE_FRENCH */
   &options_es,       /* RETRO_LANGUAGE_SPANISH */
   &options_de,       /* RETRO_LANGUAGE_GERMAN */
   &options_it,       /* RETRO_LANGUAGE_ITALIAN */
   &options_nl,       /* RETRO_LANGUAGE_DUTCH */
   &options_pt_br,    /* RETRO_LANGUAGE_PORTUGUESE_BRAZIL */
   &options_pt_pt,    /* RETRO_LANGUAGE_PORTUGUESE_PORTUGAL */
   &options_ru,       /* RETRO_LANGUAGE_RUSSIAN */
   &options_ko,       /* RETRO_LANGUAGE_KOREAN */
   &options_cht,      /* RETRO_LANGUAGE_CHINESE_TRADITIONAL */
   &options_chs,      /* RETRO_LANGUAGE_CHINESE_SIMPLIFIED */
   &options_eo,       /* RETRO_LANGUAGE_ESPERANTO */
   &options_pl,       /* RETRO_LANGUAGE_POLISH */
   &options_vn,       /* RETRO_LANGUAGE_VIETNAMESE */
   &options_ar,       /* RETRO_LANGUAGE_ARABIC */
   &options_el,       /* RETRO_LANGUAGE_GREEK */
   &options_tr,       /* RETRO_LANGUAGE_TURKISH */
   &options_sk,       /* RETRO_LANGUAGE_SLOVAK */
   &options_fa,       /* RETRO_LANGUAGE_PERSIAN */
   &options_he,       /* RETRO_LANGUAGE_HEBREW */
   &options_ast,      /* RETRO_LANGUAGE_ASTURIAN */
   &options_fi,       /* RETRO_LANGUAGE_FINNISH */
   &options_id,       /* RETRO_LANGUAGE_INDONESIAN */
   &options_sv,       /* RETRO_LANGUAGE_SWEDISH */
   &options_uk,       /* RETRO_LANGUAGE_UKRAINIAN */
   &options_cs,       /* RETRO_LANGUAGE_CZECH */
   &options_val,      /* RETRO_LANGUAGE_CATALAN_VALENCIA */
   &options_ca,       /* RETRO_LANGUAGE_CATALAN */
   &options_en,       /* RETRO_LANGUAGE_BRITISH_ENGLISH */
   &options_hu,       /* RETRO_LANGUAGE_HUNGARIAN */
   &options_be,       /* RETRO_LANGUAGE_BELARUSIAN */
   &options_gl,       /* RETRO_LANGUAGE_GALICIAN */
   &options_no,       /* RETRO_LANGUAGE_NORWEGIAN */
   &options_ga,       /* RETRO_LANGUAGE_IRISH */
};
#endif

/*
 ********************************
 * Functions
 ********************************
*/

/* Handles configuration/setting of core options.
 * Should be called as early as possible - ideally inside
 * retro_set_environment(), and no later than retro_load_game()
 * > We place the function body in the header to avoid the
 *   necessity of adding more .c files (i.e. want this to
 *   be as painless as possible for core devs)
 */

static inline void libretro_set_core_options(retro_environment_t environ_cb,
      bool *categories_supported)
{
   unsigned version  = 0;
#ifndef HAVE_NO_LANGEXTRA
   unsigned language = 0;
#endif

   if (!environ_cb || !categories_supported)
      return;

   *categories_supported = false;

   if (!environ_cb(RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION, &version))
      version = 0;

   if (version >= 2)
   {
#ifndef HAVE_NO_LANGEXTRA
      struct retro_core_options_v2_intl core_options_intl;

      core_options_intl.us    = &options_us;
      core_options_intl.local = NULL;

      if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
          (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH))
         core_options_intl.local = options_intl[language];

      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL,
            &core_options_intl);
#else
      *categories_supported = environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2,
            &options_us);
#endif
   }
   else
   {
      size_t i, j;
      size_t option_index              = 0;
      size_t num_options               = 0;
      struct retro_core_option_definition
            *option_v1_defs_us         = NULL;
#ifndef HAVE_NO_LANGEXTRA
      size_t num_options_intl          = 0;
      struct retro_core_option_v2_definition
            *option_defs_intl          = NULL;
      struct retro_core_option_definition
            *option_v1_defs_intl       = NULL;
      struct retro_core_options_intl
            core_options_v1_intl;
#endif
      struct retro_variable *variables = NULL;
      char **values_buf                = NULL;

      /* Determine total number of options */
      while (true)
      {
         if (option_defs_us[num_options].key)
            num_options++;
         else
            break;
      }

      if (version >= 1)
      {
         /* Allocate US array */
         option_v1_defs_us = (struct retro_core_option_definition *)
               calloc(num_options + 1, sizeof(struct retro_core_option_definition));

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            struct retro_core_option_v2_definition *option_def_us = &option_defs_us[i];
            struct retro_core_option_value *option_values         = option_def_us->values;
            struct retro_core_option_definition *option_v1_def_us = &option_v1_defs_us[i];
            struct retro_core_option_value *option_v1_values      = option_v1_def_us->values;

            option_v1_def_us->key           = option_def_us->key;
            option_v1_def_us->desc          = option_def_us->desc;
            option_v1_def_us->info          = option_def_us->info;
            option_v1_def_us->default_value = option_def_us->default_value;

            /* Values must be copied individually... */
            while (option_values->value)
            {
               option_v1_values->value = option_values->value;
               option_v1_values->label = option_values->label;

               option_values++;
               option_v1_values++;
            }
         }

#ifndef HAVE_NO_LANGEXTRA
         if (environ_cb(RETRO_ENVIRONMENT_GET_LANGUAGE, &language) &&
             (language < RETRO_LANGUAGE_LAST) && (language != RETRO_LANGUAGE_ENGLISH) &&
             options_intl[language])
            option_defs_intl = options_intl[language]->definitions;

         if (option_defs_intl)
         {
            /* Determine number of intl options */
            while (true)
            {
               if (option_defs_intl[num_options_intl].key)
                  num_options_intl++;
               else
                  break;
            }

            /* Allocate intl array */
            option_v1_defs_intl = (struct retro_core_option_definition *)
                  calloc(num_options_intl + 1, sizeof(struct retro_core_option_definition));

            /* Copy parameters from option_defs_intl array */
            for (i = 0; i < num_options_intl; i++)
            {
               struct retro_core_option_v2_definition *option_def_intl = &option_defs_intl[i];
               struct retro_core_option_value *option_values           = option_def_intl->values;
               struct retro_core_option_definition *option_v1_def_intl = &option_v1_defs_intl[i];
               struct retro_core_option_value *option_v1_values        = option_v1_def_intl->values;

               option_v1_def_intl->key           = option_def_intl->key;
               option_v1_def_intl->desc          = option_def_intl->desc;
               option_v1_def_intl->info          = option_def_intl->info;
               option_v1_def_intl->default_value = option_def_intl->default_value;

               /* Values must be copied individually... */
               while (option_values->value)
               {
                  option_v1_values->value = option_values->value;
                  option_v1_values->label = option_values->label;

                  option_values++;
                  option_v1_values++;
               }
            }
         }

         core_options_v1_intl.us    = option_v1_defs_us;
         core_options_v1_intl.local = option_v1_defs_intl;

         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL, &core_options_v1_intl);
#else
         environ_cb(RETRO_ENVIRONMENT_SET_CORE_OPTIONS, option_v1_defs_us);
#endif
      }
      else
      {
         /* Allocate arrays */
         variables  = (struct retro_variable *)calloc(num_options + 1,
               sizeof(struct retro_variable));
         values_buf = (char **)calloc(num_options, sizeof(char *));

         if (!variables || !values_buf)
            goto error;

         /* Copy parameters from option_defs_us array */
         for (i = 0; i < num_options; i++)
         {
            const char *key                        = option_defs_us[i].key;
            const char *desc                       = option_defs_us[i].desc;
            const char *default_value              = option_defs_us[i].default_value;
            struct retro_core_option_value *values = option_defs_us[i].values;
            size_t buf_len                         = 3;
            size_t default_index                   = 0;

            values_buf[i] = NULL;

            if (desc)
            {
               size_t num_values = 0;

               /* Determine number of values */
               while (true)
               {
                  if (values[num_values].value)
                  {
                     /* Check if this is the default value */
                     if (default_value)
                        if (strcmp(values[num_values].value, default_value) == 0)
                           default_index = num_values;

                     buf_len += strlen(values[num_values].value);
                     num_values++;
                  }
                  else
                     break;
               }

               /* Build values string */
               if (num_values > 0)
               {
                  buf_len += num_values - 1;
                  buf_len += strlen(desc);

                  values_buf[i] = (char *)calloc(buf_len, sizeof(char));
                  if (!values_buf[i])
                     goto error;

                  strcpy(values_buf[i], desc);
                  strcat(values_buf[i], "; ");

                  /* Default value goes first */
                  strcat(values_buf[i], values[default_index].value);

                  /* Add remaining values */
                  for (j = 0; j < num_values; j++)
                  {
                     if (j != default_index)
                     {
                        strcat(values_buf[i], "|");
                        strcat(values_buf[i], values[j].value);
                     }
                  }
               }
            }

            variables[option_index].key   = key;
            variables[option_index].value = values_buf[i];
            option_index++;
         }

         /* Set variables */
         environ_cb(RETRO_ENVIRONMENT_SET_VARIABLES, variables);
      }

error:
      /* Clean up */

      if (option_v1_defs_us)
      {
         free(option_v1_defs_us);
         option_v1_defs_us = NULL;
      }

#ifndef HAVE_NO_LANGEXTRA
      if (option_v1_defs_intl)
      {
         free(option_v1_defs_intl);
         option_v1_defs_intl = NULL;
      }
#endif

      if (values_buf)
      {
         for (i = 0; i < num_options; i++)
         {
            if (values_buf[i])
            {
               free(values_buf[i]);
               values_buf[i] = NULL;
            }
         }

         free(values_buf);
         values_buf = NULL;
      }

      if (variables)
      {
         free(variables);
         variables = NULL;
      }
   }
}

#ifdef __cplusplus
}
#endif

#endif
