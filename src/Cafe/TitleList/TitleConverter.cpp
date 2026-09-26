#include "TitleConverter.h"

#include "Cafe/Filesystem/fsc.h"
#include "Cafe/Filesystem/ZArchiveVFS.h"
#include "Common/VFSFileStream.h"

#include <zarchive/zarchivereader.h>
#include <zarchive/zarchivewriter.h>

#include <algorithm>
#include <memory>
#include <vector>

namespace TitleConverter
{
	namespace
	{
		// Everything the writer needs while it runs. The archive is written
		// through two callbacks, which is why the state lives in a struct
		// rather than in locals.
		struct WriterContext
		{
			fs::path outputPath;
			// Through the frontend's file system, not the OS's: a destination
			// the host application authorised - a SAF tree on Android - is not
			// a path open() would take. VFSFileStream falls back to the native
			// file when there is no frontend to ask.
			VFSFileStream* fs{nullptr};
			ZArchiveWriter* zaWriter{nullptr};
			bool isValid{false};

			const std::atomic_bool* cancel{nullptr};
			std::function<void(const Progress&)> onProgress;
			Progress progress;
			std::vector<uint8> transferBuffer;

			~WriterContext()
			{
				delete fs;
				delete zaWriter;
			}

			bool Cancelled() const { return cancel && cancel->load(); }

			void Report()
			{
				if (onProgress)
					onProgress(progress);
			}

			static void NewOutputFile(const int32_t partIndex, void* _ctx)
			{
				WriterContext* ctx = (WriterContext*)_ctx;
				ctx->fs = VFSFileStream::createFile2(ctx->outputPath);
				if (!ctx->fs)
					ctx->isValid = false;
			}

			static void WriteOutputData(const void* data, size_t length, void* _ctx)
			{
				WriterContext* ctx = (WriterContext*)_ctx;
				if (ctx->fs)
					ctx->fs->writeData(data, length);
			}

			bool RecursivelyCountFiles(const std::string& fscPath)
			{
				sint32 fscStatus;
				std::unique_ptr<FSCVirtualFile> vfDir(fsc_openDirIterator(fscPath.c_str(), &fscStatus));
				if (!vfDir)
					return false;
				if (Cancelled())
					return false;
				FSCDirEntry dirEntry;
				while (fsc_nextDir(vfDir.get(), &dirEntry))
				{
					if (dirEntry.isFile)
					{
						progress.bytesTotal += (uint64)dirEntry.fileSize;
						progress.filesTotal++;
					}
					else if (dirEntry.isDirectory)
					{
						if (!RecursivelyCountFiles(fmt::format("{}{}/", fscPath, dirEntry.path)))
							return false;
					}
				}
				Report();
				return true;
			}

			bool RecursivelyAddFiles(std::string archivePath, std::string fscPath)
			{
				sint32 fscStatus;
				std::unique_ptr<FSCVirtualFile> vfDir(fsc_openDirIterator(fscPath.c_str(), &fscStatus));
				if (!vfDir)
					return false;
				if (Cancelled())
					return false;
				zaWriter->MakeDir(archivePath.c_str(), false);
				FSCDirEntry dirEntry;
				while (fsc_nextDir(vfDir.get(), &dirEntry))
				{
					if (dirEntry.isFile)
					{
						zaWriter->StartNewFile((archivePath + dirEntry.path).c_str());
						std::unique_ptr<FSCVirtualFile> vFile(fsc_open((fscPath + dirEntry.path).c_str(),
							FSC_ACCESS_FLAG::OPEN_FILE | FSC_ACCESS_FLAG::READ_PERMISSION, &fscStatus));
						if (!vFile)
							return false;
						transferBuffer.resize(32 * 1024);
						while (true)
						{
							uint32 readBytes = vFile->fscReadData(transferBuffer.data(), transferBuffer.size());
							if (readBytes == 0)
								break;
							zaWriter->AppendData(transferBuffer.data(), readBytes);
							if (Cancelled())
								return false;
							progress.bytesDone += readBytes;
						}
						progress.filesDone++;
						Report();
					}
					else if (dirEntry.isDirectory)
					{
						if (!RecursivelyAddFiles(fmt::format("{}{}/", archivePath, dirEntry.path),
								fmt::format("{}{}/", fscPath, dirEntry.path)))
							return false;
					}
				}
				return true;
			}

			bool CountTitle(TitleInfo* titleInfo)
			{
				std::string mountPath = TitleInfo::GetUniqueTempMountingPath();
				titleInfo->Mount(mountPath.c_str(), "", FSC_PRIORITY_BASE);
				bool r = RecursivelyCountFiles(mountPath);
				titleInfo->Unmount(mountPath.c_str());
				return r;
			}

			bool StoreTitle(TitleInfo* titleInfo)
			{
				std::string mountPath = TitleInfo::GetUniqueTempMountingPath();
				titleInfo->Mount(mountPath.c_str(), "", FSC_PRIORITY_BASE);
				bool r = RecursivelyAddFiles(
					fmt::format("{:016x}_v{}/", titleInfo->GetAppTitleId(), titleInfo->GetAppTitleVersion()), mountPath);
				titleInfo->Unmount(mountPath.c_str());
				return r;
			}

			bool AddTitles(std::span<TitleInfo*> titles)
			{
				for (TitleInfo* title : titles)
				{
					if (!CountTitle(title) || Cancelled())
						return false;
				}
				for (TitleInfo* title : titles)
				{
					if (!StoreTitle(title))
						return false;
				}
				return true;
			}
		};
	} // namespace

	namespace
	{
		// Rename is the cheap way and the only one that is atomic, but a
		// frontend's file system does not have to implement it - Android's SAF
		// backend is one that may not - so a failure falls back to copying the
		// bytes across and dropping the temporary file afterwards.
		bool MoveIntoPlace(const fs::path& from, const fs::path& to)
		{
			// Only now, with a finished archive in hand: replacing what was
			// there is what the user chose when they picked a destination whose
			// label said it would be overwritten, but a conversion that failed
			// on the way should have left it alone.
			if (VFSFileStream::Exists(to))
				VFSFileStream::Remove(to);

			if (VFSFileStream::Rename(from, to))
				return true;

			std::unique_ptr<VFSFileStream> src(VFSFileStream::openFile2(from));
			if (!src)
				return false;
			std::unique_ptr<VFSFileStream> dst(VFSFileStream::createFile2(to));
			if (!dst)
				return false;

			std::vector<uint8> buffer(1024 * 1024);
			uint64 remaining = src->GetSize();
			while (remaining > 0)
			{
				const uint32 chunk = (uint32)std::min<uint64>(remaining, buffer.size());
				if (src->readData(buffer.data(), chunk) != chunk)
					return false;
				if (dst->writeData(buffer.data(), (sint32)chunk) != (sint32)chunk)
					return false;
				remaining -= chunk;
			}
			dst->Flush();
			dst.reset();
			src.reset();

			VFSFileStream::Remove(from);
			return true;
		}
	}

	namespace
	{
		// Copying a mounted title out file by file. Reading through the
		// emulator's file system is what makes every format the same here: a
		// NUS title is decrypted by the mount, not by this.
		struct InstallContext
		{
			const std::atomic_bool* cancel{nullptr};
			std::function<void(const Progress&)> onProgress;
			Progress progress;
			std::vector<uint8> buffer;
			std::string error;

			bool Cancelled() const { return cancel && cancel->load(); }

			void Report()
			{
				if (onProgress)
					onProgress(progress);
			}

			bool Count(const std::string& fscPath)
			{
				sint32 fscStatus;
				std::unique_ptr<FSCVirtualFile> vfDir(fsc_openDirIterator(fscPath.c_str(), &fscStatus));
				if (!vfDir || Cancelled())
					return false;
				FSCDirEntry dirEntry;
				while (fsc_nextDir(vfDir.get(), &dirEntry))
				{
					if (dirEntry.isFile)
					{
						progress.bytesTotal += (uint64)dirEntry.fileSize;
						progress.filesTotal++;
					}
					else if (dirEntry.isDirectory && !Count(fmt::format("{}{}/", fscPath, dirEntry.path)))
						return false;
				}
				return true;
			}

			bool Copy(const std::string& fscPath, const fs::path& dst)
			{
				std::error_code ec;
				fs::create_directories(dst, ec);
				if (ec)
				{
					error = fmt::format("could not create {}", _pathToUtf8(dst));
					return false;
				}
				sint32 fscStatus;
				std::unique_ptr<FSCVirtualFile> vfDir(fsc_openDirIterator(fscPath.c_str(), &fscStatus));
				if (!vfDir)
				{
					error = "could not read the title";
					return false;
				}
				FSCDirEntry dirEntry;
				while (fsc_nextDir(vfDir.get(), &dirEntry))
				{
					if (Cancelled())
					{
						error = "cancelled";
						return false;
					}
					const fs::path target = dst / _utf8ToPath(dirEntry.path);
					if (dirEntry.isDirectory)
					{
						if (!Copy(fmt::format("{}{}/", fscPath, dirEntry.path), target))
							return false;
						continue;
					}
					if (!dirEntry.isFile)
						continue;
					std::unique_ptr<FSCVirtualFile> in(fsc_open((fscPath + dirEntry.path).c_str(),
						FSC_ACCESS_FLAG::OPEN_FILE | FSC_ACCESS_FLAG::READ_PERMISSION, &fscStatus));
					if (!in)
					{
						error = fmt::format("could not read {}", dirEntry.path);
						return false;
					}
					std::unique_ptr<FileStream> out(FileStream::createFile2(target));
					if (!out)
					{
						error = fmt::format("could not create {}", _pathToUtf8(target));
						return false;
					}
					buffer.resize(1024 * 1024);
					while (true)
					{
						const uint32 readBytes = in->fscReadData(buffer.data(), (uint32)buffer.size());
						if (readBytes == 0)
							break;
						if (out->writeData(buffer.data(), (sint32)readBytes) != (sint32)readBytes)
						{
							error = fmt::format("could not write {} - is the disk full?", _pathToUtf8(target));
							return false;
						}
						progress.bytesDone += readBytes;
						if (Cancelled())
						{
							error = "cancelled";
							return false;
						}
					}
					progress.filesDone++;
					Report();
				}
				return true;
			}
		};
	}

	bool InstallTitle(TitleInfo* title, const fs::path& targetDir,
		const std::atomic_bool& cancel,
		const std::function<void(const Progress&)>& onProgress,
		std::string& error)
	{
		fs::path tmpDir = targetDir;
		tmpDir += ".tmp";
		fs::path oldDir = targetDir;
		oldDir += ".old";
		std::error_code ec;
		// Left over from an install that was cut short. Neither name is eight
		// hex digits, so the title scan never took them for a title.
		fs::remove_all(tmpDir, ec);
		fs::remove_all(oldDir, ec);

		InstallContext ctx;
		ctx.cancel = &cancel;
		ctx.onProgress = onProgress;

		const std::string mountPath = TitleInfo::GetUniqueTempMountingPath();
		if (!title->Mount(mountPath.c_str(), "", FSC_PRIORITY_BASE))
		{
			error = "the title could not be opened - for a NUS download, is its title.tik there?";
			return false;
		}
		bool ok = ctx.Count(mountPath);
		if (ok)
		{
			ctx.Report();
			ok = ctx.Copy(mountPath, tmpDir);
		}
		else
			ctx.error = cancel.load() ? "cancelled" : "could not read the title";
		title->Unmount(mountPath.c_str());

		// What was written has to be a title the scan will take, or it is not
		// worth putting in place of whatever is there now.
		if (ok)
		{
			TitleInfo check(tmpDir);
			if (!check.IsValid() || !check.ParseXmlInfo())
			{
				ok = false;
				ctx.error = "what was written is not a complete title";
			}
		}
		if (!ok)
		{
			error = ctx.error;
			fs::remove_all(tmpDir, ec);
			return false;
		}

		if (fs::exists(targetDir, ec))
		{
			fs::rename(targetDir, oldDir, ec);
			if (ec)
			{
				error = fmt::format("could not move the installed version out of the way: {}", ec.message());
				fs::remove_all(tmpDir, ec);
				return false;
			}
		}
		fs::create_directories(targetDir.parent_path(), ec);
		fs::rename(tmpDir, targetDir, ec);
		if (ec)
		{
			error = fmt::format("could not move the installed title into place: {}", ec.message());
			std::error_code ec2;
			fs::rename(oldDir, targetDir, ec2);
			fs::remove_all(tmpDir, ec2);
			return false;
		}
		fs::remove_all(oldDir, ec);
		return true;
	}

	bool ConvertToWUA(std::span<TitleInfo*> titles, const fs::path& outputPath,
		const std::atomic_bool& cancel,
		const std::function<void(const Progress&)>& onProgress,
		std::string& error)
	{
		if (titles.empty())
		{
			error = "nothing to convert";
			return false;
		}

		// Built under a temporary name and moved into place at the end: an
		// interrupted run leaves no .wua that looks finished.
		fs::path outputPathTmp = outputPath;
		outputPathTmp += ".tmp";

		bool ok = false;
		{
			WriterContext ctx;
			ctx.outputPath = outputPathTmp;
			ctx.cancel = &cancel;
			ctx.onProgress = onProgress;
			ctx.isValid = true;
			ctx.zaWriter = new ZArchiveWriter(&WriterContext::NewOutputFile, &WriterContext::WriteOutputData, &ctx);
			if (!ctx.isValid)
			{
				error = "could not create the output file";
				VFSFileStream::Remove(outputPathTmp);
				return false;
			}

			if (!ctx.AddTitles(titles))
			{
				error = cancel.load() ? "cancelled" : "could not read the title";
				delete ctx.fs;
				ctx.fs = nullptr;
				VFSFileStream::Remove(outputPathTmp);
				return false;
			}

			ctx.zaWriter->Finalize();
			delete ctx.fs;
			ctx.fs = nullptr;
			ok = true;
		}

		if (!ok)
			return false;

		// The archive has to be readable back, or it is not worth keeping.
		std::unique_ptr<ZArchiveReader> reader(ZArchive_OpenFromPath(outputPathTmp));
		if (!reader)
		{
			error = "the archive could not be read back";
			VFSFileStream::Remove(outputPathTmp);
			return false;
		}
		reader.reset();

		if (!MoveIntoPlace(outputPathTmp, outputPath))
		{
			error = "could not move the archive into place";
			VFSFileStream::Remove(outputPathTmp);
			return false;
		}
		return true;
	}
} // namespace TitleConverter
