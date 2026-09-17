#include "Cafe/HW/Latte/Renderer/Metal/MetalLayer.h"

#include <TargetConditionals.h>

#if !TARGET_OS_OSX

// iOS and tvOS. MetalView is an NSView and AppKit is macOS only, so there is
// nothing here to attach a layer to - and in a libretro core there is no window
// in the first place: the frontend owns the screen and this build hands it a
// finished frame. Answer "no layer" rather than reaching for a framework the
// platform does not have.
void* CreateMetalLayer(void* handle, float& scaleX, float& scaleY)
{
	scaleX = 1.0f;
	scaleY = 1.0f;
	return nullptr;
}

#else

#include "Cafe/HW/Latte/Renderer/MetalView.h"

void* CreateMetalLayer(void* handle, float& scaleX, float& scaleY)
{
	NSView* view = (NSView*)handle;

	MetalView* childView = [[MetalView alloc] initWithFrame:view.bounds];
	childView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;
	childView.wantsLayer = YES;

	[view addSubview:childView];

	const NSRect points = [childView frame];
    const NSRect pixels = [childView convertRectToBacking:points];

	scaleX = (float)(pixels.size.width / points.size.width);
    scaleY = (float)(pixels.size.height / points.size.height);

	return childView.layer;
}

#endif // !TARGET_OS_OSX
