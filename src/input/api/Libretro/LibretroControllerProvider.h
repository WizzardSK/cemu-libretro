#pragma once

#include "input/api/ControllerProvider.h"

#ifndef HAS_LIBRETRO
#ifdef ENABLE_LIBRETRO
#define HAS_LIBRETRO 1
#else
#define HAS_LIBRETRO 0
#endif
#endif

// Libretro pads are not enumerated - the frontend always exposes a fixed number
// of ports and reports "not pressed" for the ones nobody plugged a pad into.
constexpr uint32 kLibretroMaxPorts = 4;

class LibretroControllerProvider : public ControllerProviderBase
{
	friend class LibretroController;
public:
	inline static InputAPI::Type kAPIType = InputAPI::Libretro;
	InputAPI::Type api() const override { return kAPIType; }

	std::vector<std::shared_ptr<ControllerBase>> get_controllers() override;
};
