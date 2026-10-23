#pragma once

// Shared DRC (GamePad) display-layout state used by both the libretro entry
// point (CemuLibretroLinux.cpp) and the renderers that present into the
// libretro window FBO / shared Vulkan image. Defined in CemuLibretroLinux.cpp.


#include "Common/precompiled.h"

enum class LibretroScreenLayout
{
	Tv,               // TV only
	GamePad,          // GamePad only
	SideBySide,       // primary 80% + secondary 20%, side-by-side
	TopBottom,        // primary 70% on top, secondary 30% on bottom
	PictureInPicture, // primary fullscreen, secondary as small corner overlay
};

extern LibretroScreenLayout g_libretroScreenLayout;
extern bool g_libretroDRCPositionSwapped;

// Returns true when Cemu should actually present the requested screen for the
// active layout. Used both by OpenGLCanvasCallbacks::ShouldRenderScreen and
// by the Vulkan presentation blit.
bool LibretroDRC_ShouldRenderScreen(bool padView);

// Computes the destination viewport (in pixels) for the given screen inside
// a window/image of size dstWidth x dstHeight. Coordinate convention: top-left
// origin (Vulkan-style). The GL path converts to bottom-up Y at the callsite.
void LibretroDRC_ComputeViewport(bool padView,
	int dstWidth, int dstHeight,
	int& outX, int& outY, int& outWidth, int& outHeight);

// The screen whose size the frame handed to the frontend takes: the GamePad's
// with the GamePad Screen layout, the TV's with every other one.
bool LibretroDRC_OutputFollowsScreen(bool padView);

// The size the core's output started at (the Internal Resolution option),
// which the TV picture is handed over at unless a resolution pack sets it.
void LibretroDRC_DefaultOutputSize(uint32& width, uint32& height);

// The core's mouse cursor over the GamePad picture (RetroArch draws none).
// Where to draw it in an output image of width x height, top-left origin,
// and how many output pixels one cursor pixel takes; false while hidden or
// off the GamePad picture. Defined in CemuLibretro.cpp.
bool libretro_cursor_position(int width, int height, int& x, int& y, int& scale);
// The arrow, one string per row: 'B' outline, 'W' fill, '.' transparent.
extern const char* const g_libretro_cursor_shape[];
extern const int g_libretro_cursor_rows;
