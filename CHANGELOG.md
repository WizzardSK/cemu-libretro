# Changelog of the libretro core

What changed in the libretro core of this fork, newest first. Changes that come with a merge of upstream Cemu are in upstream's own history; a merge is noted here with the upstream version it brought in.

## Unreleased

- New option Core > Audio Thread (Restart), off by default: RetroArch takes the audio on its own thread and the Wii U's audio runs by the clock, as in standalone Cemu, so it no longer breaks up while a frame is late, during loading or shader compilation (NNshi). With it on, Vertical Sync rather than Audio Sync paces the frames, and RetroArch's audio statistics stay empty.
- Vulkan: no crash when a game's shader finished compiling in the middle of a run of draws. The first draw had skipped while it compiled (Async Shader Compile), and the next one found no descriptor sets and stopped the core on an assert; it now makes them (NNshi, The Wonderful 101).
- Core options rearranged (NNshi): categories System, Graphics, Controller, Title Manager, Core, Logging, then Graphic Packs and Cheats. Video and Shaders are now Graphics, Screen is Controller (with Rumble Strength and GamePad Motion), Content and Convert to WUA are Title Manager, the accounts are under System, and the core's own options (Internal Resolution, Render Ahead One Frame, Reduce BC1 Texture Memory) are under Core. Every option that applies only once the game is started again says (Restart) in its name; Graphic Packs and Cheats say it in the category's.
- CPU Mode, Accurate Shader Multiplication and Precompiled Shaders follow the game profile on Auto, as standalone: Auto used to override the profiles, which set the CPU mode for 27 games and turn accurate multiplication off for Super Mario 3D World, Captain Toad and Xenoblade Chronicles X. Accurate Shader Multiplication now has Auto, the default.
- New option Graphics > Accurate Barriers (Vulkan), standalone's, on by default.
- The Skylanders, Disney Infinity and LEGO Dimensions add-on options are shown only while one of their games is loaded, below all categories.
- Graphics is Graphics (Restart): its options apply once the game is started again, except GX2DrawDone Sync and Accurate Barriers, whose help says they can be toggled during gameplay. An option for one graphics API says which in its name: Precompiled Shaders (OpenGL), Async Shader Compile (Vulkan), Accurate Barriers (Vulkan) (NNshi).
- Vulkan is the default graphics API, as in standalone Cemu (NNshi).
- Upscale Filter and Downscale Filter removed: they acted only on the GamePad picture in the composite screen layouts, never on the TV picture RetroArch scales (NNshi).
- Frame Wait removed: each run waits the whole frame time for the game's frame, as the default did. Waiting 72 % of it made no measurable difference on a PC or a phone (NNshi, sco8487).
- Internal Resolution is no longer hidden while a resolution graphic pack is on (NNshi).
- Show Game FPS is under Core, at the bottom: it shows the game's own frame rate where RetroArch's counter does not (NNshi).
- Options the core hides (the screen layout slots above Number of Screen Layouts) are hidden again right after the options are declared anew, which happens at a game's start; they showed in the menu until another option was changed (NNshi).
- Start Conversion to WUA is also offered for a `.wua` that lacks an installed update or DLC, or has an older version of one: a new `.wua` is written with them. Its help text says which of the three cases it is: the game alone, the game with its update and DLC, or a `.wua` to add them to. An existing file is never replaced; a taken name gets a number after it, where the conversion used to overwrite a `.wua` of the same name (sco8487).
- Sound: each frame hands RetroArch one frame's worth of audio, as other cores do, and more only to work off a backlog. It handed over whatever the game had made by the end of the frame, a different amount every frame, so RetroArch's audio buffer swung between blocking and running dry without settling (NNshi).
- Sound: the game's audio frames are made at the console's pace, one every 3 ms, and faster only to catch up. At 30 fps each frame's 33 ms of audio was made in a 19 ms burst followed by a 14 ms gap, so streaming voices were fed unevenly, with pops and crackles standalone Cemu does not have (NNshi, Wind Waker HD).

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
- A 30 fps game is reported to RetroArch as 30 fps: the core follows the game's own swap interval (GX2SetSwapInterval) once it has held for a second, where it reported 60 and showed every frame twice, unevenly (NNshi, Wind Waker HD).
- New option Video > Frame Wait: how long each run waits for the game's frame. Whole Frame, the default, gives the GPU the whole frame time as standalone Cemu does; Most of a Frame waits 72 % of it, as the core did before.
- New option Video > Render Ahead One Frame (off by default): the GPU draws the next frame while RetroArch presents the last, for one frame more latency, as standalone Cemu's swapchain has.
- Vulkan: a frame is handed to RetroArch only once its copy has been submitted; before, RetroArch could show the previous frame again (a repeated and a dropped frame, NNshi, Mario Kart 8).
- The Wii U's software keyboard (Wind Waker HD's name, for one) is typed into with RetroArch's keyboard (Game Focus on), the text shown in RetroArch's notifications; Start on the pad accepts, with the account's name when nothing was typed. Before, the game waited on a keyboard nobody could see.
- The pipeline cache keeps every pipeline compiled before the game was closed; the last ones were lost and compiled again at every start (NNshi, the same stutters in BotW and Mario Kart 8 each session).
- OpenGL shows both screens in the composite layouts.
- Android: Taiko's Don is drawn on Qualcomm's driver.

### Games and content

- New option Accounts > Rename Active Account: the account's name is entered inside the core, with a pad (Up and Down change the last character, Right adds one, Left removes one, Start accepts, Select cancels) or a keyboard, and shown as the frontend's status message while it is typed. `account_name.txt` is written with the new name. It needs the frontend's on-screen notifications on (Shoegzer, #28).
- Accounts can be named: `system/Cemu/account_name.txt` has a line per account, `<id> = <name>`, up to ten characters; the core writes the file with the accounts there are (at each title start and when an account is made or removed), each takes its name from it when a title starts, and the account lists in the options show it (Shoegzer #28, NNshi).
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
