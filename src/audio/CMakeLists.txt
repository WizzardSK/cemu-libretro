add_library(CemuAudio
	IAudioAPI.cpp
	IAudioAPI.h
	IAudioInputAPI.cpp
	IAudioInputAPI.h
)

set_property(TARGET CemuAudio PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

cemu_use_precompiled_header(CemuAudio)

if(ENABLE_LIBRETRO)
	# LibretroAudioAPI lives under src/libretro/ (alongside the libretro entry
	# point). CemuAudio still needs RETRO_CORE so IAudioAPI knows which
	# backend list to expose.
	target_compile_definitions(CemuAudio PRIVATE RETRO_CORE)
endif()

target_include_directories(CemuAudio PUBLIC "../")

target_link_libraries(CemuAudio PRIVATE
	CemuCommon
	CemuGui
)

