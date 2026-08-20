#include "input/api/Libretro/LibretroControllerProvider.h"
#include "input/api/Libretro/LibretroController.h"

std::vector<std::shared_ptr<ControllerBase>> LibretroControllerProvider::get_controllers()
{
	std::vector<std::shared_ptr<ControllerBase>> result;
	result.reserve(kLibretroMaxPorts);
	for (uint32 port = 0; port < kLibretroMaxPorts; ++port)
		result.emplace_back(std::make_shared<LibretroController>(port));

	return result;
}
