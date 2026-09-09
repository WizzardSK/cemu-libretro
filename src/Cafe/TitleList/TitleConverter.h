#pragma once

#include "Cafe/TitleList/TitleInfo.h"

#include <atomic>
#include <functional>
#include <span>
#include <string>

// Writing a title out as a compressed Wii U archive (.wua). The wx front end
// has done this from its title manager for years; this is the same work with
// the dialog taken off it, so a front end that has no dialogs - the libretro
// core - can do it too.
namespace TitleConverter
{
	struct Progress
	{
		uint64 bytesDone{0};
		uint64 bytesTotal{0};
		uint32 filesDone{0};
		uint32 filesTotal{0};
	};

	// Writes titles (a base, and optionally its update and DLC) to outputPath.
	// The archive is built next to it under a temporary name and moved into
	// place once it is complete, so an interrupted run leaves no half-written
	// .wua behind. Returns false and fills error when it does not finish;
	// cancel is polled between files.
	bool ConvertToWUA(std::span<TitleInfo*> titles, const fs::path& outputPath,
		const std::atomic_bool& cancel,
		const std::function<void(const Progress&)>& onProgress,
		std::string& error);
}
