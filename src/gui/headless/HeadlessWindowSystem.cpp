#include "WindowSystem.h"

#include "Cemu/Logging/CemuLogging.h"

#include <optional>

#if BOOST_OS_WINDOWS
#include <Windows.h>
#endif

namespace WindowSystem
{
	WindowInfo g_window_info{};

	void ShowErrorDialog(std::string_view message, std::string_view title, std::optional<ErrorCategory> /*errorCategory*/)
	{
		if (!title.empty())
			cemuLog_log(LogType::Force, "{}: {}", title, message);
		else
			cemuLog_log(LogType::Force, "{}", message);
	}

	void Create()
	{
		g_window_info.app_active = true;

		// Default to 1920x1080 for libretro (will be updated by core options)
		g_window_info.width = 1920;
		g_window_info.height = 1080;
		g_window_info.phys_width = 1920;
		g_window_info.phys_height = 1080;
		g_window_info.dpi_scale = 1.0;

		g_window_info.pad_open = false;  // Will be set dynamically based on DRC mode
		g_window_info.pad_width = 854;  // DRC native resolution
		g_window_info.pad_height = 480;
		g_window_info.phys_pad_width = 854;
		g_window_info.phys_pad_height = 480;
		g_window_info.pad_dpi_scale = 1.0;

		g_window_info.is_fullscreen = false;
	}

	WindowInfo& GetWindowInfo()
	{
		return g_window_info;
	}

	void UpdateWindowTitles(bool /*isIdle*/, bool /*isLoading*/, double /*fps*/)
	{
	}

	void GetWindowSize(int& w, int& h)
	{
		w = g_window_info.width;
		h = g_window_info.height;
	}

	void GetPadWindowSize(int& w, int& h)
	{
		w = g_window_info.pad_open ? g_window_info.pad_width.load() : 0;
		h = g_window_info.pad_open ? g_window_info.pad_height.load() : 0;
	}

	void GetWindowPhysSize(int& w, int& h)
	{
		w = g_window_info.phys_width;
		h = g_window_info.phys_height;
	}

	void GetPadWindowPhysSize(int& w, int& h)
	{
		w = g_window_info.pad_open ? g_window_info.phys_pad_width.load() : 0;
		h = g_window_info.pad_open ? g_window_info.phys_pad_height.load() : 0;
	}

	double GetWindowDPIScale()
	{
		return g_window_info.dpi_scale;
	}

	double GetPadDPIScale()
	{
		return g_window_info.pad_open ? g_window_info.pad_dpi_scale.load() : 1.0;
	}

	bool IsPadWindowOpen()
	{
		return g_window_info.pad_open;
	}

	bool IsKeyDown(uint32 key)
	{
		return g_window_info.get_keystate(key);
	}

	bool IsKeyDown(PlatformKeyCodes platformKey)
	{
		uint32 key = 0;
		switch (platformKey)
		{
#if BOOST_OS_WINDOWS
		case PlatformKeyCodes::LCONTROL:
			key = VK_LCONTROL;
			break;
		case PlatformKeyCodes::RCONTROL:
			key = VK_RCONTROL;
			break;
		case PlatformKeyCodes::TAB:
			key = VK_TAB;
			break;
		case PlatformKeyCodes::ESCAPE:
			key = VK_ESCAPE;
			break;
#else
		default:
			return false;
#endif
		}
		return IsKeyDown(key);
	}

	std::string GetKeyCodeName(uint32 key)
	{
#if BOOST_OS_WINDOWS
		LONG scan_code = MapVirtualKeyA((UINT)key, MAPVK_VK_TO_VSC_EX);
		if (HIBYTE(scan_code))
			scan_code |= 0x100;

		switch (key)
		{
		case VK_LEFT:
		case VK_UP:
		case VK_RIGHT:
		case VK_DOWN:
		case VK_PRIOR:
		case VK_NEXT:
		case VK_END:
		case VK_HOME:
		case VK_INSERT:
		case VK_DELETE:
		case VK_DIVIDE:
		case VK_NUMLOCK:
		{
			scan_code |= 0x100;
			break;
		}
		}

		scan_code <<= 16;

		char key_name[128];
		if (GetKeyNameTextA(scan_code, key_name, std::size(key_name)) != 0)
			return key_name;
		return fmt::format("key_{}", key);
#else
		return fmt::format("key_{}", key);
#endif
	}

	bool InputConfigWindowHasFocus()
	{
		return false;
	}

	void NotifyGameLoaded() {}
	void NotifyGameExited() {}
	void RefreshGameList() {}

	bool IsFullScreen()
	{
		return g_window_info.is_fullscreen;
	}

	void CaptureInput(const ControllerState& /*currentState*/, const ControllerState& /*lastState*/)
	{
	}
}
