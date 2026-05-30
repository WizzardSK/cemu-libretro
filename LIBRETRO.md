# Cemu Libretro

Cemu (Wii U emulator) as a libretro core for RetroArch.

## Build

```bash
# Install dependencies (Ubuntu/Debian)
sudo apt install -y cmake gcc g++ ninja-build nasm libpulse-dev libgtk-3-dev \
  libsecret-1-dev libgcrypt20-dev libsystemd-dev libbluetooth-dev freeglut3-dev

# Clone with submodules
git clone --recursive https://github.com/WizzardSK/cemu-libretro.git
cd cemu-libretro

# Configure (vcpkg handles dependencies automatically)
cmake -S . -B build -DCMAKE_BUILD_TYPE=release \
  -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
  -G Ninja -DENABLE_LIBRETRO=ON -DENABLE_WXWIDGETS=OFF \
  -DENABLE_DISCORD_RPC=OFF -DENABLE_CUBEB=OFF \
  -DCMAKE_POSITION_INDEPENDENT_CODE=ON

# Build
cmake --build build --target cemu_libretro

# Result: bin/cemu_libretro.so
```

## Install

```bash
cp bin/cemu_libretro.so ~/.config/retroarch/cores/libcemu_libretro.so
cp cemu_libretro.info ~/.config/retroarch/cores/libcemu_libretro.info
```

## Setup

- Place `keys.txt` in RetroArch system directory under `Cemu/` (e.g. `~/.config/retroarch/system/Cemu/keys.txt`)
- MLC storage is at `<system_dir>/Cemu/mlc01/`
- Shared fonts: place `CafeStd.ttf`, `CafeCn.ttf`, `CafeKr.ttf`, `CafeTw.ttf` in `<system_dir>/Cemu/resources/sharedFonts/`
- Graphic packs: place in `<system_dir>/Cemu/graphicPacks/` (symlinks supported)
  - Packs with `default = 1` are auto-enabled (e.g. NSMBU crash fix)
- Supported formats: `.wud`, `.wux`, `.wua`, `.rpx`, `.elf`

## Architecture

- Uses OpenGL 4.5 Core Profile HW rendering via `RETRO_ENVIRONMENT_SET_HW_RENDER`
- Creates a separate shared GL context for Cemu's GPU thread (GLX on X11, EGL fallback on Wayland)
- Video pipeline: GPU thread renders to custom FBO -> `glReadPixels` to CPU buffer -> frontend thread uploads to texture -> `glBlitFramebuffer` to RetroArch FBO
- GL_QUADS/GL_QUAD_STRIP converted to triangles for Core Profile compatibility (indexed quads use `glMapBuffer`)
- Audio routed through `LibretroAudioAPI` (accumulates samples, flushed each frame)
- Input: libretro joypad -> VPAD (GamePad) buttons + analog sticks + touchscreen (RETRO_DEVICE_POINTER)
- Graphic packs loaded and auto-enabled (default=1) at startup

## Current Status (2026-05-25)

### Working
- Core loads in RetroArch, games boot and run with full rendering
- OpenGL 4.5 Core Profile with shared GLX context for GPU thread
- Vulkan HW context via `RETRO_HW_CONTEXT_VULKAN` + context-negotiation interface; `VulkanRenderer` built on the shared instance/device/queue from RetroArch (Linux path)
- Video output with correct orientation, survives fullscreen/windowed toggles
- GL_QUADS -> GL_TRIANGLES conversion with proper index buffer mapping
- Input: joypad buttons, analog sticks, touchscreen (mouse -> GamePad touch; in SBS/TopBottom/PiP only clicks inside the DRC sub-rect register, mapped sub-rect-relative to the GamePad's 853x479 touch space)
- Audio routing via lock-free ring-buffer `LibretroAudioAPI` (drains full ring per `retro_run` so the frontend rate-controls)
- Graphic packs loading with workaround patches (NSMBU crash fix etc.)
- Shared fonts for Japanese/CJK text
- Clean exit via Esc key
- Core options registered via `RETRO_ENVIRONMENT_SET_CORE_OPTIONS_V2` (CPU mode, internal resolution up to 4K, thread quantum, audio latency, vsync, async shader compile, upscale/downscale filter, DRC mode/position, account, network service, USB peripherals, …)
- DRC (GamePad) screen rendering with multiple layouts: disabled, toggle, side-by-side, top-bottom, picture-in-picture. The OpenGL path composites via `ShouldRenderScreen`/`AdjustScreenViewport` canvas callbacks. The Vulkan path overrides `IsPadWindowActive()` so DRC scan-outs (and the existing libretro auto-mirror fallback) reach `DrawBackbufferQuad`, then blits TV + DRC into different sub-regions of the shared present image using the same `LibretroDRC_ComputeViewport` helper. `LatteRenderTarget_itHLECopyColorBufferToScanBuffer` bypasses the standalone showDRC toggle-swap in composite modes and caches the latest TV/DRC texViews per frame so they always dispatch TV-then-DRC (PiP's DRC overlay would otherwise lose to the full-image TV blit when the game scans DRC first). `DrawBackbufferQuad` clears `m_presentImage` to opaque black on the first blit of each frame (detected via `LatteGPUState.frameCounter`) so SBS/TopBottom gaps are deterministic regardless of TV/DRC scan order.

### Known Issues
- **Some games may crash** - depends on game complexity and required HLE functions
- **Save states are not supported** - Cemu has no savestate infrastructure (no serialization of PPC/MMU/GPU/HLE state). `retro_serialize_size` returns 0 by design.
- **OpenGL path on Wayland renders black (work in progress)** - The core now has an EGL fallback for the shared GPU-thread context (GLX is still used on X11). On a Wayland/EGL session it no longer crashes and gets much further: the EGL frontend context is captured, a shared GL 4.5 context is created, and the GPU thread makes it current surfaceless (`EGL_NO_SURFACE`, since the frontend holds the window surface on another thread). However the video pipeline still produces a black screen on Wayland - frames rendered on the GPU thread aren't reaching the presented framebuffer (cross-context object sharing / blit on EGL is still being investigated). **Use the Vulkan path (`cemu_gpu_api = "Vulkan"`) on Wayland** - it is fully working. The OpenGL path works on X11 (GLX).

### TODO
1. Test with more games

### Key files
- `src/libretro/CemuLibretro.cpp` - Cross-platform libretro core (used on Windows/macOS; on Linux only its Vulkan presentation tail is exercised)
- `src/libretro/CemuLibretroLinux.cpp` - Linux libretro entry point (full reimplementation: retro_* exports, GLX/Vulkan negotiation, input, video pipeline)
- `src/audio/LibretroAudioAPI.{h,cpp}` - Audio backend (lock-free ring buffer)
- `src/libretro/LibretroWindowSystem.cpp` - WindowSystem without wxWidgets
- `src/Cafe/HW/Latte/Renderer/OpenGL/OpenGLRendererCore.cpp` - GL_QUADS to triangles conversion
- `src/Cafe/OS/libs/vpad/vpad.cpp` - Libretro input integration (buttons + touch)
- `src/Cafe/GraphicPack/GraphicPack2.cpp` - Symlink-aware graphic pack loading
