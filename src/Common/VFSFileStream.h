#pragma once
#include "Common/precompiled.h"

struct retro_vfs_interface;

class VFSFileStream
{
public:
	static void SetVFSInterface(struct retro_vfs_interface* vfs_interface);
	
	static VFSFileStream* openFile(std::string_view path);
	static VFSFileStream* openFile(const wchar_t* path, bool allowWrite = false);
	static VFSFileStream* openFile2(const fs::path& path, bool allowWrite = false);

	static VFSFileStream* createFile(const wchar_t* path);
	static VFSFileStream* createFile(std::string_view path);
	static VFSFileStream* createFile2(const fs::path& path);

	static std::optional<std::vector<uint8>> LoadIntoMemory(const fs::path& path);

	void SetPosition(uint64 pos);
	uint64 GetSize();
	bool SetEndOfFile();
	void extract(std::vector<uint8>& data);
	void Flush();

	uint32 readData(void* data, uint32 length);
	bool readU64(uint64& v);
	bool readU32(uint32& v);
	bool readU16(uint16& v);
	bool readU8(uint8& v);
	bool readLine(std::string& line);

	sint32 writeData(const void* data, sint32 length);
	void writeU64(uint64 v);
	void writeU32(uint32 v);
	void writeU16(uint16 v);
	void writeU8(uint8 v);

	void writeStringFmt(const char* format, ...);
	void writeString(const char* str);
	void writeLine(const char* str);

	~VFSFileStream();
	VFSFileStream() = default;

private:
	VFSFileStream(struct retro_vfs_file_handle* vfs_handle);
	VFSFileStream(class FileStream* native_stream);

	static struct retro_vfs_interface* s_vfs_interface;
	
	bool m_isValid{};
	bool m_useVFS{};
	struct retro_vfs_file_handle* m_vfsHandle{};
	class FileStream* m_nativeStream{};
};
