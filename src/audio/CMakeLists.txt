add_library(CemuAudio
	IAudioAPI.cpp
	IAudioAPI.h
	IAudioInputAPI.cpp
	IAudioInputAPI.h
)

set_property(TARGET CemuAudio PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# DirectSound and XAudio2 are written against the MSVC DirectX SDK: the bundled
# XAudio 2.7 headers use MSVC-only GUID macros, and DirectSoundAPI hands
# std::thread::native_handle() to a Win32 API expecting a HANDLE, which only
# holds for the MSVC standard library. Neither builds with MinGW, and the
# libretro core takes its audio from the frontend regardless.
if(WIN32 AND MSVC)
	target_sources(CemuAudio PRIVATE
		DirectSoundAPI.cpp
		DirectSoundAPI.h
		XAudio2API.cpp
		XAudio2API.h
		XAudio27API.cpp
		XAudio27API.h
	)
	target_compile_definitions(CemuAudio PUBLIC HAS_DIRECTX_AUDIO)
endif()

if(ENABLE_CUBEB)
	target_sources(CemuAudio PRIVATE
		CubebAPI.cpp
		CubebAPI.h
		CubebInputAPI.cpp
		CubebInputAPI.h
	)
	#add_compile_definitions(HAS_CUBEB)
endif()

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

if(ENABLE_CUBEB)
	# PUBLIC because cubeb.h/cubeb.h is included in CubebAPI.h
	target_link_libraries(CemuAudio PUBLIC cubeb::cubeb)
endif()
