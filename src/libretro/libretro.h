#pragma once

#include <stddef.h>
#include <stdint.h>

#if defined(_WIN32) || defined(__CYGWIN__)
#define RETRO_CALLCONV __cdecl
#ifdef RETRO_CORE
#define RETRO_API __declspec(dllexport)
#else
#define RETRO_API __declspec(dllimport)
#endif
#else
#define RETRO_CALLCONV
#define RETRO_API __attribute__((visibility("default")))
#endif

#define RETRO_API_VERSION 1

#define RETRO_ENVIRONMENT_EXPERIMENTAL 0x10000

#define RETRO_ENVIRONMENT_SET_PIXEL_FORMAT 10
#define RETRO_ENVIRONMENT_SET_HW_RENDER 14
#define RETRO_ENVIRONMENT_GET_SYSTEM_DIRECTORY 9
#define RETRO_ENVIRONMENT_GET_SAVE_DIRECTORY 31
#define RETRO_ENVIRONMENT_GET_LIBRETRO_PATH 19
#define RETRO_ENVIRONMENT_GET_LOG_INTERFACE 27
#define RETRO_ENVIRONMENT_SET_HW_SHARED_CONTEXT (44 | RETRO_ENVIRONMENT_EXPERIMENTAL)
#define RETRO_ENVIRONMENT_GET_VARIABLE 15
#define RETRO_ENVIRONMENT_SET_VARIABLES 16
#define RETRO_ENVIRONMENT_GET_VARIABLE_UPDATE 17
#define RETRO_ENVIRONMENT_SET_CORE_OPTIONS 53
#define RETRO_ENVIRONMENT_SET_CORE_OPTIONS_INTL 54
#define RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2 67
#define RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2_INTL 68
#define RETRO_ENVIRONMENT_SET_CORE_OPTIONS_UPDATE_DISPLAY 69
#define RETRO_ENVIRONMENT_SET_SERIALIZATION_QUIRKS 56
#define RETRO_ENVIRONMENT_GET_INPUT_BITMASKS 51

enum retro_log_level
{
	RETRO_LOG_DEBUG = 0,
	RETRO_LOG_INFO,
	RETRO_LOG_WARN,
	RETRO_LOG_ERROR
};

typedef void (RETRO_CALLCONV *retro_log_printf_t)(enum retro_log_level level, const char *fmt, ...);

struct retro_log_callback
{
	retro_log_printf_t log;
};

#define RETRO_REGION_NTSC 0
#define RETRO_REGION_PAL 1

#define RETRO_DEVICE_JOYPAD 1
#define RETRO_DEVICE_ANALOG 5
#define RETRO_DEVICE_POINTER 6

#define RETRO_DEVICE_ID_JOYPAD_B        0
#define RETRO_DEVICE_ID_JOYPAD_Y        1
#define RETRO_DEVICE_ID_JOYPAD_SELECT   2
#define RETRO_DEVICE_ID_JOYPAD_START    3
#define RETRO_DEVICE_ID_JOYPAD_UP       4
#define RETRO_DEVICE_ID_JOYPAD_DOWN     5
#define RETRO_DEVICE_ID_JOYPAD_LEFT     6
#define RETRO_DEVICE_ID_JOYPAD_RIGHT    7
#define RETRO_DEVICE_ID_JOYPAD_A        8
#define RETRO_DEVICE_ID_JOYPAD_X        9
#define RETRO_DEVICE_ID_JOYPAD_L       10
#define RETRO_DEVICE_ID_JOYPAD_R       11
#define RETRO_DEVICE_ID_JOYPAD_L2      12
#define RETRO_DEVICE_ID_JOYPAD_R2      13
#define RETRO_DEVICE_ID_JOYPAD_L3      14
#define RETRO_DEVICE_ID_JOYPAD_R3      15
#define RETRO_DEVICE_ID_JOYPAD_MASK    256

#define RETRO_DEVICE_INDEX_ANALOG_LEFT   0
#define RETRO_DEVICE_INDEX_ANALOG_RIGHT  1
#define RETRO_DEVICE_ID_ANALOG_X         0
#define RETRO_DEVICE_ID_ANALOG_Y         1

#define RETRO_DEVICE_ID_POINTER_X         0
#define RETRO_DEVICE_ID_POINTER_Y         1
#define RETRO_DEVICE_ID_POINTER_PRESSED   2

#define RETRO_ENVIRONMENT_SET_KEYBOARD_CALLBACK 12

enum retro_key
{
	RETROK_UNKNOWN        = 0,
	RETROK_BACKSPACE      = 8,
	RETROK_TAB            = 9,
	RETROK_CLEAR          = 12,
	RETROK_RETURN         = 13,
	RETROK_PAUSE          = 19,
	RETROK_ESCAPE         = 27,
	RETROK_SPACE          = 32,
	RETROK_DELETE         = 127,

	RETROK_UP             = 273,
	RETROK_DOWN           = 274,
	RETROK_RIGHT          = 275,
	RETROK_LEFT           = 276,
	RETROK_INSERT         = 277,
	RETROK_HOME           = 278,
	RETROK_END            = 279,
	RETROK_PAGEUP         = 280,
	RETROK_PAGEDOWN       = 281,

	RETROK_F1             = 282,
	RETROK_F2             = 283,
	RETROK_F3             = 284,
	RETROK_F4             = 285,
	RETROK_F5             = 286,
	RETROK_F6             = 287,
	RETROK_F7             = 288,
	RETROK_F8             = 289,
	RETROK_F9             = 290,
	RETROK_F10            = 291,
	RETROK_F11            = 292,
	RETROK_F12            = 293,

	RETROK_RSHIFT         = 303,
	RETROK_LSHIFT         = 304,
	RETROK_RCTRL          = 305,
	RETROK_LCTRL          = 306,
	RETROK_RALT           = 307,
	RETROK_LALT           = 308,

	RETROK_LAST
};

enum retro_mod
{
	RETROKMOD_NONE       = 0x0000,
	RETROKMOD_SHIFT      = 0x01,
	RETROKMOD_CTRL       = 0x02,
	RETROKMOD_ALT        = 0x04,
	RETROKMOD_META       = 0x08,
	RETROKMOD_NUMLOCK    = 0x10,
	RETROKMOD_CAPSLOCK   = 0x20,
	RETROKMOD_SCROLLOCK  = 0x40
};

typedef void (RETRO_CALLCONV *retro_keyboard_event_t)(bool down, unsigned keycode, uint32_t character, uint16_t key_modifiers);

struct retro_keyboard_callback
{
	retro_keyboard_event_t callback;
};

#define RETRO_HW_FRAME_BUFFER_VALID ((void*)-1)

typedef bool (RETRO_CALLCONV* retro_environment_t)(unsigned cmd, void* data);

typedef void (RETRO_CALLCONV* retro_video_refresh_t)(const void* data, unsigned width, unsigned height, size_t pitch);

typedef void (RETRO_CALLCONV* retro_audio_sample_t)(int16_t left, int16_t right);

typedef size_t (RETRO_CALLCONV* retro_audio_sample_batch_t)(const int16_t* data, size_t frames);

typedef void (RETRO_CALLCONV* retro_input_poll_t)(void);

typedef int16_t (RETRO_CALLCONV* retro_input_state_t)(unsigned port, unsigned device, unsigned index, unsigned id);

typedef void* (RETRO_CALLCONV* retro_proc_address_t)(const char*);

struct retro_variable
{
	const char* key;
	const char* value;
};

struct retro_core_option_value
{
	const char* value;
	const char* label;
};

#define RETRO_NUM_CORE_OPTION_VALUES_MAX 128

struct retro_core_option_definition
{
	const char* key;
	const char* desc;
	const char* info;
	struct retro_core_option_value values[RETRO_NUM_CORE_OPTION_VALUES_MAX];
	const char* default_value;
};

struct retro_core_option_v2_category
{
	const char* key;
	const char* desc;
	const char* info;
};

struct retro_core_option_v2_definition
{
	const char* key;
	const char* desc;
	const char* desc_categorized;
	const char* info;
	const char* info_categorized;
	const char* category_key;
	struct retro_core_option_value values[RETRO_NUM_CORE_OPTION_VALUES_MAX];
	const char* default_value;
};

struct retro_core_options_v2
{
	struct retro_core_option_v2_category* categories;
	struct retro_core_option_v2_definition* definitions;
};

struct retro_game_info
{
	const char* path;
	const void* data;
	size_t size;
	const char* meta;
};

struct retro_system_info
{
	const char* library_name;
	const char* library_version;
	const char* valid_extensions;
	bool need_fullpath;
	bool block_extract;
};

struct retro_game_geometry
{
	unsigned base_width;
	unsigned base_height;
	unsigned max_width;
	unsigned max_height;
	float aspect_ratio;
};

struct retro_system_timing
{
	double fps;
	double sample_rate;
};

struct retro_system_av_info
{
	struct retro_game_geometry geometry;
	struct retro_system_timing timing;
};

enum retro_pixel_format
{
	RETRO_PIXEL_FORMAT_0RGB1555 = 0,
	RETRO_PIXEL_FORMAT_XRGB8888 = 1,
	RETRO_PIXEL_FORMAT_RGB565 = 2
};

typedef void (RETRO_CALLCONV* retro_hw_context_reset_t)(void);

typedef uintptr_t (RETRO_CALLCONV* retro_hw_get_current_framebuffer_t)(void);

typedef retro_proc_address_t (RETRO_CALLCONV* retro_hw_get_proc_address_t)(const char* sym);

enum retro_hw_context_type
{
	RETRO_HW_CONTEXT_NONE = 0,
	RETRO_HW_CONTEXT_OPENGL = 1,
	RETRO_HW_CONTEXT_OPENGLES2 = 2,
	RETRO_HW_CONTEXT_OPENGL_CORE = 3,
	RETRO_HW_CONTEXT_OPENGLES3 = 4,
	RETRO_HW_CONTEXT_OPENGLES_VERSION = 5,
	RETRO_HW_CONTEXT_VULKAN = 6,
	RETRO_HW_CONTEXT_D3D11 = 7,
	RETRO_HW_CONTEXT_D3D10 = 8,
	RETRO_HW_CONTEXT_D3D12 = 9,
	RETRO_HW_CONTEXT_D3D9 = 10
};

struct retro_hw_render_callback
{
	enum retro_hw_context_type context_type;
	retro_hw_context_reset_t context_reset;
	retro_hw_get_current_framebuffer_t get_current_framebuffer;
	retro_hw_get_proc_address_t get_proc_address;
	bool depth;
	bool stencil;
	bool bottom_left_origin;
	unsigned version_major;
	unsigned version_minor;
	bool cache_context;
	retro_hw_context_reset_t context_destroy;
	bool debug_context;
};

#ifdef __cplusplus
extern "C" {
#endif

RETRO_API unsigned RETRO_CALLCONV retro_api_version(void);

RETRO_API void RETRO_CALLCONV retro_set_environment(retro_environment_t cb);
RETRO_API void RETRO_CALLCONV retro_set_video_refresh(retro_video_refresh_t cb);
RETRO_API void RETRO_CALLCONV retro_set_audio_sample(retro_audio_sample_t cb);
RETRO_API void RETRO_CALLCONV retro_set_audio_sample_batch(retro_audio_sample_batch_t cb);
RETRO_API void RETRO_CALLCONV retro_set_input_poll(retro_input_poll_t cb);
RETRO_API void RETRO_CALLCONV retro_set_input_state(retro_input_state_t cb);

RETRO_API void RETRO_CALLCONV retro_init(void);
RETRO_API void RETRO_CALLCONV retro_deinit(void);

RETRO_API void RETRO_CALLCONV retro_get_system_info(struct retro_system_info* info);
RETRO_API void RETRO_CALLCONV retro_get_system_av_info(struct retro_system_av_info* info);

RETRO_API void RETRO_CALLCONV retro_set_controller_port_device(unsigned port, unsigned device);

RETRO_API void RETRO_CALLCONV retro_reset(void);
RETRO_API void RETRO_CALLCONV retro_run(void);

RETRO_API size_t RETRO_CALLCONV retro_serialize_size(void);
RETRO_API bool RETRO_CALLCONV retro_serialize(void* data, size_t size);
RETRO_API bool RETRO_CALLCONV retro_unserialize(const void* data, size_t size);

RETRO_API void RETRO_CALLCONV retro_cheat_reset(void);
RETRO_API void RETRO_CALLCONV retro_cheat_set(unsigned index, bool enabled, const char* code);

RETRO_API bool RETRO_CALLCONV retro_load_game(const struct retro_game_info* game);
RETRO_API bool RETRO_CALLCONV retro_load_game_special(unsigned game_type, const struct retro_game_info* info, size_t num_info);
RETRO_API void RETRO_CALLCONV retro_unload_game(void);

RETRO_API unsigned RETRO_CALLCONV retro_get_region(void);
RETRO_API void* RETRO_CALLCONV retro_get_memory_data(unsigned id);
RETRO_API size_t RETRO_CALLCONV retro_get_memory_size(unsigned id);

#ifdef __cplusplus
}
#endif
