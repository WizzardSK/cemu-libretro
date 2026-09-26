add_library(CemuInput
	InputManager.cpp
	InputManager.h
	ControllerFactory.cpp
	ControllerFactory.h
	api/ControllerState.h
	api/Controller.cpp
	api/Controller.h
	api/ControllerState.cpp
	api/InputAPI.h
	api/ControllerProvider.h
	api/Libretro/LibretroControllerProvider.h
	api/Libretro/LibretroControllerProvider.cpp
	api/Libretro/LibretroController.cpp
	api/Libretro/LibretroController.h
	emulated/ProController.cpp
	emulated/EmulatedController.h
	emulated/EmulatedController.cpp
	emulated/ProController.h
	emulated/WPADController.cpp
	emulated/WPADController.h
	emulated/WiimoteController.h
	emulated/VPADController.cpp
	emulated/WiimoteController.cpp
	emulated/VPADController.h
	emulated/ClassicController.cpp
	emulated/ClassicController.h
)

set_property(TARGET CemuInput PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

cemu_use_precompiled_header(CemuInput)

target_include_directories(CemuInput PUBLIC "../")

target_link_libraries(CemuInput PRIVATE
	CemuCommon
	CemuGui
)

