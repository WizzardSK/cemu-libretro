# Cemu Libretro

Cemu (Wii U emulator) as a libretro core for RetroArch.

## Getting the core

Through RetroArch: **Online Updater → Core Downloader → Cemu**. The libretro buildbot builds the `libretro` branch nightly for Windows x64, Linux x64 and arm64, macOS x64 and arm64, and Android arm64-v8a and x86_64, so the downloadable core is always the current tree. The CI also builds iOS, tvOS and webOS. There are no releases here on purpose: one more place to download from is one more place to be out of date.

Build it yourself for anything else, or to test a change.

## Build

```bash
# Install dependencies (Ubuntu/Debian)
sudo apt install -y cmake gcc g++ ninja-build nasm libpulse-dev \
  libsecret-1-dev libgcrypt20-dev libsystemd-dev freeglut3-dev

# Clone with submodules - vcpkg and the community graphic packs live in them,
# and configure fails with "Could not find toolchain file
# .../dependencies/vcpkg/..." without them. On an existing clone:
# git submodule update --init --recursive
git clone --recursive https://github.com/WizzardSK/cemu-libretro.git
cd cemu-libretro

# Configure (vcpkg handles dependencies automatically)
cmake -S . -B build -DCMAKE_BUILD_TYPE=release \
  -DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++ \
  -G Ninja

# On arm64, vcpkg needs VCPKG_FORCE_SYSTEM_BINARIES=1, and
# VCPKG_MAX_CONCURRENCY is worth capping on low-memory boards.

# Build
cmake --build build --target cemu_libretro

# Result: bin/cemu_libretro.so
```

## Install

```bash
cp bin/cemu_libretro.so ~/.config/retroarch/cores/
cp cemu_libretro.info ~/.config/retroarch/info/
```

## Setup

Everything the core reads lives under `Cemu/` in RetroArch's system directory (`<system>`), except the emulated NAND, which is in the save directory.

- **Keys:** `keys.txt` in `<system>/Cemu/`. Encrypted `.wud`/`.wux` images and NUS titles need it; a disc image's key can also be kept beside it, with the same name and the extension `.key` (`game.wux`, `game.key`), 16 bytes or 32 hex digits.
- **Games:** `.wua`, `.wud`, `.wux`, `.iso`, `.rpx`, `.elf`, or `title.tmd` of an unpacked NUS title.
- **Updates and DLC:** put them in `<system>/Cemu/titles/`, one folder per update or DLC, either as downloaded (`.app`/`.h3` next to `title.tmd` and `title.tik`) or unpacked (`code`/`content`/`meta`). They are found by title id and used without being copied.
- **Graphic packs:** the community packs are built into the core and unpacked to `<system>/Cemu/graphicPacks/` when content loads. They are refreshed whenever the core is a newer build. Your own packs can go next to them. Each pack the loaded game has shows up under **Graphic Packs** in the core options, with an Enabled switch and its presets. Changes take effect the next time the game is loaded.
- **Shared fonts:** `CafeStd.ttf`, `CafeCn.ttf`, `CafeKr.ttf` and `CafeTw.ttf` in `<system>/Cemu/resources/sharedFonts/`. Games need them for Japanese and other CJK text.
- **NAND (mlc01):** `<save>/Cemu/mlc01/`, created with the default folders on first start, as standalone Cemu does.
- **Logs:** `<system>/Cemu/log.txt`. Its first lines name the build it came from, so please attach it, with the RetroArch log, to bug reports.

## Controls

Port 1 is the Wii U GamePad by default; ports 2-4 start with nothing plugged in. Pick a device type per port in **Quick Menu → Controls → Port N Controls → Device Type**:

| Port | Device types |
|---|---|
| 1 | Wii U GamePad, Wii U GamePad + Wii Remote, Wii U GamePad + Wii Remote (sideways), Wii U Pro Controller |
| 2-4 | None, Wii Remote, Wii Remote (sideways), Wii U Pro Controller, Classic Controller |

- **Touch screen:** the mouse or a touchscreen acts as the GamePad's touch screen. In the layouts that show both screens, only touches on the GamePad's part count.
- **Rumble:** the GamePad, Wii Remote and Pro Controller motors go to the frontend's rumble, scaled by **System → Rumble Strength** (100% by default).
- **Screens:** **Screen → Number of Screen Layouts** and **Layout 1-5** choose which layouts to cycle through (Default Screen, GamePad Screen, Side by Side, Top Bottom, Picture in Picture). **Next Screen Layout** picks the button combination that switches between them.
- **Portals:** Skylanders, Disney Infinity and LEGO Dimensions portals are emulated under **Add-ons**.

## Status (2026-10-03)

Games boot and run on Vulkan and on OpenGL, with sound, controllers, both screens and graphic packs. The core is synced with upstream Cemu (see below), and its options are translated through libretro's Crowdin.

Known issues:

- **Some games crash or misrender**, as in standalone Cemu, and some only in the core. Reports with `log.txt` and the RetroArch log are welcome on the issue tracker.
- **No save states.** Cemu cannot serialize its state, so `retro_serialize_size` returns 0.
- **The core stays loaded between games.** RetroArch unloads it, but the library itself stays in memory (on Linux on purpose, see `-z nodelete` below). Any state Cemu keeps for the whole process can leak from one game into the next. The known cases (DLC list, graphic pack module list, controller callbacks) are fixed.
- **OpenGL on Wayland renders black.** Use Vulkan there; OpenGL works on X11 (GLX).

Planned: a separate submenu for the Cheats graphic packs, output above 60 fps for games with high frame rate packs, and installing updates and DLC from the core options (branch `install-titles`).

## Architecture

- Vulkan renders on the frontend's device (`RETRO_HW_CONTEXT_VULKAN` with the context negotiation interface) and hands RetroArch each finished image. OpenGL uses a 4.5 Core Profile HW context, plus a shared context for Cemu's GPU thread (GLX on X11, EGL elsewhere).
- The Vulkan device belongs to the frontend, so the core asks it for the extensions and features standalone Cemu enables, and the renderer then uses only what was actually enabled. An extension the GPU advertises is not necessarily enabled on a device RetroArch created, and `vkGetDeviceProcAddr` then returns null.
- `cache_context = true` keeps the Vulkan context across fullscreen toggles and video driver reinits, the present path asks the frontend for its render interface every frame, and the GPU thread parks at a command boundary while the frontend rebuilds its driver.
- Audio goes through `LibretroAudioAPI`, a lock-free ring buffer paced by the frames the frontend asks for.
- Input: libretro joypads drive VPAD (GamePad) and WPAD/KPAD (Wii Remote, Pro Controller, Classic Controller); pointer input is the GamePad touch screen.
- When the emulated process exits, `CafePPCProcessExit` only records it; `RETRO_ENVIRONMENT_SHUTDOWN` goes out from `retro_run`, because the callback fires on the emulated PPC thread.
- RetroArch calls the core's Vulkan `destroy_device` after `dlclose`, so on Linux the core is linked with `-z nodelete`.
- The standalone's GUI, input and audio backends are removed, and `.upstream-excluded` keeps them from coming back with an upstream merge.

### Key files

- `src/libretro/CemuLibretro.cpp` - the libretro core: `retro_*` exports, GL/Vulkan context negotiation, input, video pipeline
- `src/libretro/libretro_core_options.h` - core option definitions (translations in `libretro_core_options_intl.h`, generated from Crowdin)
- `src/audio/LibretroAudioAPI.{h,cpp}` - audio backend
- `src/libretro/LibretroWindowSystem.cpp` - WindowSystem without wxWidgets
- `src/Cafe/OS/libs/vpad/vpad.cpp`, `src/Cafe/OS/libs/padscore/padscore.cpp` - GamePad and Wii Remote/Pro Controller input

## Syncing with upstream Cemu

Upstream is [cemu-project/Cemu](https://github.com/cemu-project/Cemu) and its
branch is `main`, not `master`:

```sh
git remote add cemuup https://github.com/cemu-project/Cemu.git   # once
git fetch cemuup main
git merge cemuup/main
```

Last sync: upstream `32e6628a` (2 Oct 2026). The core reports its version as `git describe --tags --match v2.6 cemuup/main` (`2.6-341-g32e6628a`), set in `retro_get_system_info` and `cemu_libretro.info`; update both on every sync.

The fork has no `main` of its own: upstream is merged straight into `libretro`,
the only long-lived branch here.

What tends to break on a sync, none of which the conflict resolution shows:

- **Precompiled headers.** Upstream force-includes `precompiled.h` per target
  via `cemu_use_precompiled_header()`. Targets this fork adds (`cemu_libretro`,
  `CemuHeadlessGui`) have to call it too, or they lose `uint32`, `std::span`
  and the `_mm_pause` shim.
- **Copied functions drifting.** The libretro `VulkanRenderer` constructor is a
  copy of upstream's adapted for the shared device; upstream keeps changing the
  original underneath it.
- **Extension gating.** See Architecture above - upstream adds calls guarded by
  device extension flags, and those flags cannot be trusted on a device the
  frontend created.
- **File access.** Upstream code that opens files with `FileStream` has to go
  through `VFSFileStream` here, otherwise the frontend's VFS (and Android SAF)
  is bypassed.

Debugging a crash on aarch64: `backtrace()` cannot unwind past the signal frame,
so the posix handler also records `fault/pc/lr/sp` into `<system>/Cemu/log.txt`.
Convert `lr` with the module base from that log's `cemu_libretro.so(+0xOFFSET)
[0xABSOLUTE]` line and run `addr2line -Cfie bin/cemu_libretro.so <offset>`.
