add_library(CemuLibretro SHARED
	CemuLibretro.cpp
	LibretroLogging.cpp
)

set_property(TARGET CemuLibretro PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

target_compile_definitions(CemuLibretro PRIVATE RETRO_CORE)

if(TARGET CemuCafe)
	target_compile_definitions(CemuCafe PRIVATE RETRO_CORE)
endif()

target_include_directories(CemuLibretro PRIVATE "../")

target_link_libraries(CemuLibretro PRIVATE
	CemuAudio
	CemuCafe
	CemuCommon
	CemuComponents
	CemuConfig
	CemuGui
	CemuInput
	CemuUtil
	CemuResource
	SDL2::SDL2
	CURL::libcurl
	libzip::zip
)

if(WIN32)
	target_link_libraries(CemuLibretro PRIVATE
		opengl32
		dbghelp
	)
endif()

set_target_properties(CemuLibretro PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/../../bin/$<1:>"
	OUTPUT_NAME "cemu_libretro"
)
