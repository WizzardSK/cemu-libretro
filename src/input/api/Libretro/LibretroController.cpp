#include "input/api/Libretro/LibretroController.h"

#include <boost/container/small_vector.hpp>

// Provided by the libretro core (src/libretro/CemuLibretro.cpp), same shape as
// the VPAD hooks in vpad.cpp.
extern bool libretro_get_joypad_button(uint32_t port, uint32_t retro_id);
extern void libretro_get_joypad_analog(uint32_t port, float* lx, float* ly, float* rx, float* ry);

namespace
{
	// RETRO_DEVICE_ID_JOYPAD_*, in id order. Named after what the button reads
	// as on a RetroPad, not after the Wii U button it ends up driving.
	constexpr std::string_view kButtonNames[] = {
		"B", "Y", "Select", "Start", "Up", "Down", "Left", "Right",
		"A", "X", "L", "R", "L2", "R2", "L3", "R3",
	};
	constexpr uint32 kButtonCount = (uint32)std::size(kButtonNames);
}

LibretroController::LibretroController(uint32 port)
	: base_type(fmt::format("libretro_{}", port), fmt::format("RetroPad {}", port + 1)), m_port(port)
{
}

std::string LibretroController::get_button_name(uint64 button) const
{
	if (button >= kButton0 && button < kButton0 + kButtonCount)
		return std::string(kButtonNames[button - kButton0]);

	return base_type::get_button_name(button);
}

ControllerState LibretroController::raw_state()
{
	ControllerState result{};

	boost::container::small_vector<uint32, 16> pressedButtons;
	for (uint32 id = 0; id < kButtonCount; ++id)
	{
		if (libretro_get_joypad_button(m_port, id))
			pressedButtons.emplace_back(kButton0 + id);
	}
	result.buttons.SetPressedButtons(pressedButtons);

	float lx, ly, rx, ry;
	libretro_get_joypad_analog(m_port, &lx, &ly, &rx, &ry);
	result.axis = { lx, ly };
	result.rotation = { rx, ry };

	return result;
}
