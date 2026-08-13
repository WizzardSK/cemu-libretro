#pragma once
#include "Common/VFSFileStream.h"
#include <zarchive/zarchivereader.h>

// Opens a Wii U archive the same way the rest of Cemu opens a game image:
// through VFSFileStream, so an archive the host application hands over -
// an Android content:// URI behind SAF, say - reads like any other file.
// ZArchiveReader would otherwise open the path with its own std::ifstream.
class ZArchiveVFSFileAccess : public ZArchiveFileAccess
{
public:
	ZArchiveVFSFileAccess(VFSFileStream* stream) : m_stream(stream) {}

	uint64_t GetSize() override
	{
		return m_stream->GetSize();
	}

	bool ReadBytes(uint64_t offset, void* buffer, uint32_t size) override
	{
		m_stream->SetPosition(offset);
		return m_stream->readData(buffer, size) == size;
	}

private:
	std::unique_ptr<VFSFileStream> m_stream;
};

inline ZArchiveReader* ZArchive_OpenFromPath(const fs::path& path)
{
	VFSFileStream* stream = VFSFileStream::openFile2(path);
	if (!stream)
		return nullptr;
	return ZArchiveReader::OpenFromFileAccess(std::make_unique<ZArchiveVFSFileAccess>(stream));
}
