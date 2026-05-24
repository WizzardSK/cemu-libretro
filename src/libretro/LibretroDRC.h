#pragma once

// Shared DRC (GamePad) display-layout state used by both the libretro entry
// point (CemuLibretroLinux.cpp) and the renderers that present into the
// libretro window FBO / shared Vulkan image. Defined in CemuLibretroLinux.cpp.

#ifdef RETRO_CORE

#include "Common/precompiled.h"

enum class LibretroDRCDisplayMode
{
	Disabled,         // TV only
	Toggle,           // either TV or DRC (controlled by position swap)
	SideBySide,       // primary 80% + secondary 20%, side-by-side
	TopBottom,        // primary 70% on top, secondary 30% on bottom
	PictureInPicture, // primary fullscreen, secondary as small corner overlay
};

extern LibretroDRCDisplayMode g_libretroDRCMode;
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

#endif // RETRO_CORE
