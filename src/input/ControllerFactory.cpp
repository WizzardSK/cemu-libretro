#include "input/ControllerFactory.h"

#include "input/emulated/VPADController.h"
#include "input/emulated/ProController.h"
#include "input/emulated/ClassicController.h"
#include "input/emulated/WiimoteController.h"



#include "input/api/Libretro/LibretroController.h"


ControllerPtr ControllerFactory::CreateController(InputAPI::Type api, std::string_view uuid,
                                                  std::string_view display_name)
{
	switch (api)
	{
#if HAS_LIBRETRO
	case InputAPI::Libretro:
		{
			const auto port = ConvertString<uint32>(uuid);
			if (port >= kLibretroMaxPorts)
				throw std::invalid_argument(fmt::format("invalid libretro port: {}", uuid));

			return std::make_shared<LibretroController>(port);
		}
#endif
	default:
		throw std::invalid_argument(fmt::format("unhandled controller api: {}", api));
	}
	/*
	case InputAPI::WGIGamepad: break;
	case InputAPI::WGIRawController: break;
	*/
}

EmulatedControllerPtr
ControllerFactory::CreateEmulatedController(size_t player_index, EmulatedController::Type type)
{
	switch (type)
	{
	case EmulatedController::Type::VPAD:
		return std::make_shared<VPADController>(player_index);
	case EmulatedController::Type::Pro:
		return std::make_shared<ProController>(player_index);
	case EmulatedController::Type::Classic:
		return std::make_shared<ClassicController>(player_index);
	case EmulatedController::Type::Wiimote:
		return std::make_shared<WiimoteController>(player_index);
	default:
		throw std::runtime_error(fmt::format("unknown emulated controller type: {}", type));
	}
}

ControllerProviderPtr ControllerFactory::CreateControllerProvider(InputAPI::Type api, const ControllerProviderSettings& settings)
{
	switch (api)
	{
#if HAS_LIBRETRO
	case InputAPI::Libretro:
		return std::make_shared<LibretroControllerProvider>();
#endif
	default:
		cemu_assert_debug(false);
		return {};
	}
}
