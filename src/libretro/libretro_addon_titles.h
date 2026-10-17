// The games each emulated add-on is offered for (NNshi): the option of an
// add-on is shown only while one of its games is loaded. Title IDs of the base
// games, every region, from the graphic packs' rules and wiiubrew's title
// database.
#pragma once

#include <cstdint>

static constexpr uint64_t kSkylandersTitleIds[] = {
	0x0005000010142d00, // Spyro's Adventure (JPN)
	0x000500001010d700, 0x0005000010116000, // Giants
	0x0005000010139200, 0x0005000010140400, // SWAP Force
	0x000500001017c600, 0x0005000010181f00, // Trap Team
	0x00050000101b8500, 0x00050000101bfc00, // SuperChargers
	0x00050000101f4d00, 0x00050000101fb100, 0x0005000010205e00, // Imaginators
};

static constexpr uint64_t kDisneyInfinityTitleIds[] = {
	0x0005000010132900, 0x0005000010136f00, 0x0005000010137000, 0x000500001015a300, // 1.0
	0x000500001016dc00, 0x0005000010188c00, 0x0005000010188d00, // 2.0
	0x00050000101ac900, 0x00050000101b3d00, 0x00050000101b3e00, 0x00050000101ddc00, // 3.0
};

static constexpr uint64_t kLegoDimensionsTitleIds[] = {
	0x0005000010194200, 0x0005000010195d00,
};
