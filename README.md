# Cemu Libretro

Cemu (Wii U emulator) as a libretro core for RetroArch.

## Build

```bash
# Install dependencies (Ubuntu/Debian)
sudo apt install -y cmake gcc g++ ninja-build nasm libpulse-dev libgtk-3-dev \
  libsecret-1-dev libgcrypt20-dev libsystemd-dev libbluetooth-dev freeglut3-dev

# Clone with submodules - vcpkg lives in one of them, and configure fails with
# "Could not find toolchain file .../dependencies/vcpkg/..." without it. On an
# existing clone: git submodule update --init --recursive
git clone --recursive https://github.com/WizzardSK/cemu-libretro.git
cd cemu-libretro

# Configure (vcpkg handles dependencies automatically)
cmake -S . -B build -DCMAKE_BUILD_TYPE=release \
  -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
  -G Ninja -DENABLE_LIBRETRO=ON -DENABLE_WXWIDGETS=OFF \
  -DENABLE_DISCORD_RPC=OFF -DENABLE_CUBEB=OFF \
  -DCMAKE_POSITION_INDEPENDENT_CODE=ON

# Add -DENABLE_BLUEZ=OFF -DENABLE_FERAL_GAMEMODE=OFF where those dev packages
# are missing. On arm64, vcpkg needs VCPKG_FORCE_SYSTEM_BINARIES=1, and
# VCPKG_MAX_CONCURRENCY is worth capping on low-memory boards.

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
- MLC storage is at `<save_dir>/Cemu/mlc01/`
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
- The Vulkan device belongs to the frontend, so after Cemu's own feature
  detection the core reconciles the extension flags with the entry points that
  actually loaded (attachment feedback loop, dynamic rendering,
  synchronization2). An extension the GPU advertises is not necessarily enabled
  on a device RetroArch created, and `vkGetDeviceProcAddr` then returns null -
  the first draw would jump straight through it.
- When the emulated process exits, `CafePPCProcessExit` only records it; the
  `RETRO_ENVIRONMENT_SHUTDOWN` request goes out from `retro_run`, because the
  callback fires on the emulated PPC thread
- SDL3 (upstream migrated from SDL2); the core links `SDL3::SDL3` behind
  `ENABLE_SDL`

## Current Status (2026-08-21)

### Working
- Core loads in RetroArch, games boot and run with full rendering
- OpenGL 4.5 Core Profile with shared GLX context for GPU thread
- Vulkan HW context via `RETRO_HW_CONTEXT_VULKAN` + context-negotiation interface; `VulkanRenderer` built on the shared instance/device/queue from RetroArch (Linux path)
- Video output with correct orientation, and fullscreen toggles during a title
  are survivable. Three things make that work: `cache_context = true`, so
  RetroArch keeps the Vulkan context it rebuilds the video driver around -
  every object the renderer owns lives on that device, and losing it left the
  driver calling through freed memory; the present path asking the frontend for
  its render interface every frame instead of caching the one from
  `context_reset`; and the GPU thread parking at a command boundary while the
  teardown runs (`Latte_RequestGpuPause`, bounded so a stuck GPU thread cannot
  freeze the frontend)
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
- `src/libretro/CemuLibretro.cpp` - the libretro core on every platform: `retro_*` exports, GL/Vulkan context negotiation, input, video pipeline (the separate `CemuLibretroLinux.cpp` is gone, it was merged into this one)
- `src/audio/LibretroAudioAPI.{h,cpp}` - Audio backend (lock-free ring buffer)
- `src/libretro/LibretroWindowSystem.cpp` - WindowSystem without wxWidgets
- `src/Cafe/HW/Latte/Renderer/OpenGL/OpenGLRendererCore.cpp` - GL_QUADS to triangles conversion
- `src/Cafe/OS/libs/vpad/vpad.cpp` - Libretro input integration (buttons + touch)
- `src/Cafe/GraphicPack/GraphicPack2.cpp` - Symlink-aware graphic pack loading

## Syncing with upstream Cemu

Upstream is [cemu-project/Cemu](https://github.com/cemu-project/Cemu) and its
branch is `main`, not `master`:

```sh
git remote add cemuup https://github.com/cemu-project/Cemu.git   # once
git fetch cemuup main
git merge cemuup/main
```

Last sync: upstream `f6a8883` (18 Aug 2026).

The fork's own `main` is deliberately **not** kept in sync with upstream. It is
not a mirror - it carries the commits this port started from - and upstream's
`build_check.yml` triggers on pushes to `main`, which would run Cemu's whole
build matrix in the fork.

What tends to break on a sync, none of which the conflict resolution shows:

- **Precompiled headers.** Upstream force-includes `precompiled.h` per target
  via `cemu_use_precompiled_header()`. Targets this fork adds (`cemu_libretro`,
  `CemuHeadlessGui`) have to call it too, or they lose `uint32`, `std::span`
  and the `_mm_pause` shim.
- **Copied functions drifting.** The libretro `VulkanRenderer` constructor is a
  copy of upstream's adapted for the shared device; upstream keeps changing the
  original underneath it.
- **Extension gating.** See the note above - upstream adds calls guarded by
  device extension flags, and those flags cannot be trusted on a device the
  frontend created.
- **File access.** Upstream code that opens files with `FileStream` has to go
  through `VFSFileStream` here, otherwise the frontend's VFS (and Android SAF)
  is bypassed.

Debugging a crash on aarch64: `backtrace()` cannot unwind past the signal frame,
so the posix handler also records `fault/pc/lr/sp` into `<system>/Cemu/log.txt`.
Convert `lr` with the module base from that log's `cemu_libretro.so(+0xOFFSET)
[0xABSOLUTE]` line and run `addr2line -Cfie bin/cemu_libretro.so <offset>`.
