# Changelog of the libretro core

What changed in the libretro core of this fork, newest first. Changes that come with a merge of upstream Cemu are in upstream's own history; a merge is noted here with the upstream version it brought in.

## October 2026

### Upstream

- Merged up to upstream Cemu 2.6-356 (aa20e2f8), after the merge of 3 October (32e6628a, Latte shader and texture fixes). The core reports upstream's version.

### Sound and pads

- GamePad Motion option (System, off by default as in standalone): the GamePad's gyroscope and accelerometer come from the sensors RetroArch reads on port 1, for games that aim or steer by tilting the GamePad. On Linux with the udev controller driver, a DualSense or DualShock 4 needs its motion sensors device made readable; the README has the rule (tested by Shoegzer, Splatoon with a DualSense).
- Audio Channels (System): Mono, Stereo or Surround 5.1 - what the console reports for the TV and AX mixes for. 5.1 goes to RetroArch's multi-channel output.
- Rumble through RetroArch's rumble interface, and a Pro Controller on port 1.

### Picture

- Internal Resolution as multiples of the game's own resolution (0.25x to 3x), with 16:9 render targets kept 16:9. The largest picture RetroArch is told to expect grows with it.
- The frame rate is always the graphic packs'; there is no Frame Rate option.
- OpenGL shows both screens in the composite layouts.
- Android: Taiko's Don is drawn on Qualcomm's driver.

### Games and content

- Accounts can be named: `system/Cemu/account_name.txt` has a line per account, `<id> = <name>`, up to ten characters; the core writes the file with the accounts there are, each takes its name from it when a title starts, and the account lists in the options show it (Shoegzer #28, NNshi).
- Manage Content: Install Game and Uninstall Game, for the running game, into mlc01. Updates and DLC are installed from `system/Cemu/titles`, and installed content can be removed.
- Disc images have their keys beside them (`<image>.key`).
- Graphic packs: an Enabled switch per pack, with preset groups shown as standalone does.

### Stability

- Linux: the core no longer links libGL and libX11, so it loads on a system without X11. The GLX functions it shares RetroArch's OpenGL context with on an X11 session are found at run time, in RetroArch's own libraries.
- RetroArch can unload the core: the audio API and the graphic pack loading run on joined threads, the GPU thread ends properly on Windows, and unloaded modules are forgotten by the graphic packs, padscore and the DLC list.

### Options and logging

- Log Thread CPU Time: how busy each emulated core's thread, the GPU thread and the frontend's thread were, once a second; on Linux and Android also each core's clock against its maximum.
- A Dump Shaders option. Logging is the last category.
- Options that need a restart say so at the end of their description.

## September 2026

### Upstream and the repository

- Merged upstream Cemu of 12 September, a month of texture correctness fixes.
- The repository builds the core only: the wx GUI application, the standalone's input, audio and other backends and its GitHub workflows are removed.
- The core option texts are translated through libretro's Crowdin project.

### Graphic packs

- The community graphic packs ship inside the core, and the loaded game's packs are offered as core options, only those for the running title. A resolution pack decides the render scale and the size the picture is presented at.
- `settings.xml` is not read.

### Picture

- The frontend decides when a frame happens: the emulated cores and the GPU thread stop with the frame, and retro_run stays at 60 Hz whatever the title renders at.
- Screen layouts for the TV and the GamePad, with a button or key that steps through them, and Picture in Picture.
- Internal Resolution changes the internal resolution, down to below 720p.
- BC textures are decoded where the device has no BC formats, in integers, optionally into 16 bits.
- The shader cache's loading progress is shown by RetroArch.

### Sound

- Audio is paced by what RetroArch asks for, and the game's frame rate can be shown.

### Pads

- Ports 2 to 4 can be a Wii Remote, a Wii Remote held sideways, a Pro Controller or a Classic Controller. Stick clicks reach the GamePad.

### Games and content

- A title can be converted to `.wua` from a menu, written through RetroArch's file system, while the title keeps running.
- A place to put updates and DLC; the default mlc01 folders and files are created as standalone Cemu does.
- Paths are read as UTF-8 on Windows.

### Stability

- Closing content stops the title's threads, the GPU thread, the IOSU services, the shader and pipeline compilers and the cache writers, and a second title can be loaded after the first.
- Reset is a reset.
- The core stays mapped when RetroArch unloads it.

### Builds

- Cores for iOS, tvOS and webOS.

## August 2026

- The core on libretro's buildbot: Linux x64, Windows (MinGW) and Android.
- Content and Wii U archives are read through RetroArch's VFS.
- Vulkan: the frontend's context is kept across a video driver rebuild, the frontend's queue lock is taken when submitting, and the first draw no longer crashes on the frontend's device. Vulkan is the default where the core has no OpenGL backend.
- Android: the core builds and starts, with fibers without ucontext, EGL and an Android Vulkan surface.
- Windows: the core builds, with a WGL path.
- Wii Remotes are driven from libretro pads.
- Closing content returns from retro_unload_game instead of ending the process, and the title is shut down first so saves reach disk; mlc01 is kept where RetroArch puts saves.
- A missing disc key is reported, and the title stops.
- A multi-core interpreter CPU mode.
- Logging options for system APIs, thread synchronisation, file access and a Wii U thread snapshot.

## March to July 2026

- Linux support for the core, and Vulkan through RetroArch's hardware render interface.
- The GamePad's display modes on Linux, composed into the Vulkan picture.
- A Linux aarch64 build; `.tmd` accepted as content; the core info file.

## December 2025

- libretro core support, and reading files through libretro's VFS, by danprice142: the original port this fork builds on.
