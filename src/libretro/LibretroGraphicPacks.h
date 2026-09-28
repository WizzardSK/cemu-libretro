#pragma once

// Unpacks the graphic packs compiled into the core (embed_graphic_packs.cmake)
// into graphicPacks, replacing what is there, when the set there is not the one
// this build carries.
void LibretroGraphicPacks_InstallBundled();
