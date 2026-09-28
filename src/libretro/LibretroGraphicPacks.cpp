#include "LibretroGraphicPacks.h"

#include <cstring>
#include <zip.h>

#include "config/ActiveSettings.h"
#include "Common/FileStream.h"

extern const unsigned char g_libretro_graphic_packs_zip[];
extern const std::size_t g_libretro_graphic_packs_zip_size;
extern const char g_libretro_graphic_packs_version[];

namespace
{
	std::string readFirstLine(const fs::path& path)
	{
		std::unique_ptr<FileStream> file(FileStream::openFile2(path));
		std::string line;
		if (file)
			file->readLine(line);
		return line;
	}
}

// graphicPacks holds the build's set and nothing else, with its version in
// version.txt: when it is not this build's, the folder is emptied and the set
// unpacked afresh, so a pack renamed or removed upstream does not linger next
// to its replacement. The user's own packs go in customGraphicPacks, which
// this never touches (see libretro_load_graphic_packs).
void LibretroGraphicPacks_InstallBundled()
{
	if (g_libretro_graphic_packs_zip_size == 0)
		return;

	const fs::path target = ActiveSettings::GetUserDataPath("graphicPacks");
	const fs::path versionFile = target / "version.txt";
	const std::string version = std::string("Bundled with the core: ") + g_libretro_graphic_packs_version;
	if (readFirstLine(versionFile) == version)
		return;

	zip_error_t error;
	zip_error_init(&error);
	zip_source_t* src = zip_source_buffer_create(g_libretro_graphic_packs_zip, g_libretro_graphic_packs_zip_size, 0, &error);
	zip_t* za = src ? zip_open_from_source(src, ZIP_RDONLY, &error) : nullptr;
	if (!za)
	{
		if (src)
			zip_source_free(src);
		zip_error_fini(&error);
		cemuLog_log(LogType::Force, "graphic packs: the set compiled into the core could not be opened");
		return;
	}

	std::error_code ec;
	for (auto& entry : fs::directory_iterator(target, ec))
		fs::remove_all(entry.path(), ec);
	fs::create_directories(target, ec);

	const sint64 numEntries = zip_get_num_entries(za, 0);
	std::vector<uint8> buffer;
	uint32 written = 0;
	for (sint64 i = 0; i < numEntries; i++)
	{
		zip_stat_t sb{};
		if (zip_stat_index(za, i, 0, &sb) != 0 || !sb.name)
			continue;
		if (std::strstr(sb.name, "../") || std::strstr(sb.name, "..\\") || sb.name[0] == '/')
			continue;
		const size_t nameLen = std::strlen(sb.name);
		if (nameLen == 0 || std::strcmp(sb.name, "./") == 0)
			continue;
		const fs::path path = target / _utf8ToPath(sb.name);
		if (sb.name[nameLen - 1] == '/')
		{
			fs::create_directories(path, ec);
			continue;
		}
		if (sb.size == 0)
			continue; // directories without the trailing slash, and empty files
		zip_file_t* zipFile = zip_fopen_index(za, i, 0);
		if (!zipFile)
			continue;
		buffer.resize(sb.size);
		if (zip_fread(zipFile, buffer.data(), sb.size) == (zip_int64_t)sb.size)
		{
			fs::create_directories(path.parent_path(), ec);
			std::unique_ptr<FileStream> out(FileStream::createFile2(path));
			if (out)
			{
				out->writeData(buffer.data(), buffer.size());
				written++;
			}
		}
		zip_fclose(zipFile);
	}
	zip_discard(za);
	zip_error_fini(&error);

	std::unique_ptr<FileStream> file(FileStream::createFile2(versionFile));
	if (file)
		file->writeString(version.c_str());
	cemuLog_log(LogType::Force, "graphic packs: unpacked the {} files compiled into the core into {}", written, _pathToUtf8(target));
}
