#pragma once

#include "input/api/Libretro/LibretroControllerProvider.h"
#include "input/api/Controller.h"

// A libretro port seen as a Cemu controller. Button ids are the libretro joypad
// ids (RETRO_DEVICE_ID_JOYPAD_*) offset by kButton0, so a mapping reads as
// kButton0 + RETRO_DEVICE_ID_JOYPAD_B and needs no translation table.
class LibretroController : public Controller<LibretroControllerProvider>
{
public:
	explicit LibretroController(uint32 port);

	std::string_view api_name() const override
	{
		static_assert(to_string(InputAPI::Libretro) == "Libretro");
		return to_string(InputAPI::Libretro);
	}
	InputAPI::Type api() const override { return InputAPI::Libretro; }

	bool is_connected() override { return true; }

	uint32 port() const { return m_port; }

	std::string get_button_name(uint64 button) const override;

protected:
	ControllerState raw_state() override;

private:
	uint32 m_port;
};
