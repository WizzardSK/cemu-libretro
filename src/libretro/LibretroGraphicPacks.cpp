// Community graphic packs for the core, fetched the way standalone Cemu's
// "Download community graphic packs" does it (wxgui/DownloadGraphicPacksWindow):
// the latest release of cemu-project/cemu_graphic_packs is unpacked into
// graphicPacks/downloadedGraphicPacks, with the release name in version.txt.
// The core has no window to ask from, so it looks on its own when content is
// loaded, at most once a day, and only when the core option allows it.

#include "LibretroGraphicPacks.h"

#include <chrono>
#include <cstring>
#include <ctime>
#include <curl/curl.h>
#include <zip.h>
#include <rapidjson/document.h>
#include <boost/algorithm/string.hpp>

#include "config/ActiveSettings.h"
#include "Common/FileStream.h"
#include "Common/version.h"

namespace
{
	constexpr const char* kLatestReleaseUrl = "https://api.github.com/repos/cemu-project/cemu_graphic_packs/releases/latest";
	constexpr std::time_t kCheckInterval = 24 * 60 * 60;

	size_t curlWrite(void* ptr, size_t size, size_t nmemb, std::vector<uint8>* data)
	{
		const size_t writeSize = size * nmemb;
		const uint8* bytes = static_cast<const uint8*>(ptr);
		data->insert(data->end(), bytes, bytes + writeSize);
		return writeSize;
	}

	// libcurl built with OpenSSL knows no certificates of its own outside
	// Windows; point it at the system's.
	void setCertificates(CURL* curl)
	{
#if defined(_WIN32)
		curl_easy_setopt(curl, CURLOPT_SSL_OPTIONS, CURLSSLOPT_NATIVE_CA);
#elif defined(__ANDROID__)
		curl_easy_setopt(curl, CURLOPT_CAPATH, "/system/etc/security/cacerts");
#else
		static const char* const bundles[] = {
			"/etc/ssl/certs/ca-certificates.crt", // Debian, Ubuntu, Arch, Alpine
			"/etc/pki/tls/certs/ca-bundle.crt",   // Fedora, RHEL
			"/etc/ssl/ca-bundle.pem",             // openSUSE
			"/etc/ssl/cert.pem",                  // macOS, BSDs
		};
		for (const char* bundle : bundles)
		{
			std::error_code ec;
			if (fs::exists(bundle, ec))
			{
				curl_easy_setopt(curl, CURLOPT_CAINFO, bundle);
				break;
			}
		}
#endif
	}

	bool download(const std::string& url, std::vector<uint8>& data)
	{
		CURL* curl = curl_easy_init();
		if (!curl)
			return false;
		data.clear();
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, curlWrite);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 2L);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 1L);
		setCertificates(curl);
		curl_easy_setopt(curl, CURLOPT_USERAGENT, BUILD_VERSION_WITH_NAME_STRING);
		// Loading waits on this; a dead network must not hold it up for long
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 5L);
		curl_easy_setopt(curl, CURLOPT_TIMEOUT, 60L);
		const CURLcode res = curl_easy_perform(curl);
		long status = 0;
		curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &status);
		curl_easy_cleanup(curl);
		if (res != CURLE_OK)
			cemuLog_log(LogType::Force, "graphic packs: {} failed: {}", url, curl_easy_strerror(res));
		return res == CURLE_OK && status == 200;
	}

	std::string readFirstLine(const fs::path& path)
	{
		std::unique_ptr<FileStream> file(FileStream::openFile2(path));
		std::string line;
		if (file)
			file->readLine(line);
		return line;
	}

	void writeString(const fs::path& path, const std::string& text)
	{
		std::unique_ptr<FileStream> file(FileStream::createFile2(path));
		if (file)
			file->writeString(text.c_str());
	}

	bool unpack(std::vector<uint8>& zipData, const fs::path& target)
	{
		zip_error_t error;
		zip_error_init(&error);
		zip_source_t* src = zip_source_buffer_create(zipData.data(), zipData.size(), 0, &error);
		if (!src)
		{
			zip_error_fini(&error);
			return false;
		}
		zip_t* za = zip_open_from_source(src, 0, &error);
		if (!za)
		{
			zip_source_free(src);
			zip_error_fini(&error);
			return false;
		}

		std::error_code ec;
		for (auto& entry : fs::directory_iterator(target, ec))
			fs::remove_all(entry.path(), ec);
		fs::create_directories(target, ec);

		const sint64 numEntries = zip_get_num_entries(za, 0);
		std::vector<uint8> buffer;
		for (sint64 i = 0; i < numEntries; i++)
		{
			zip_stat_t sb{};
			if (zip_stat_index(za, i, 0, &sb) != 0 || !sb.name)
				continue;
			if (std::strstr(sb.name, "../") || std::strstr(sb.name, "..\\"))
				continue; // would land outside the folder
			const size_t nameLen = std::strlen(sb.name);
			if (nameLen == 0)
				continue;
			const fs::path path = target / _utf8ToPath(sb.name);
			if (sb.name[nameLen - 1] == '/')
			{
				fs::create_directories(path, ec);
				continue;
			}
			if (sb.size == 0 || sb.size > 128 * 1024 * 1024)
				continue;
			zip_file_t* zipFile = zip_fopen_index(za, i, 0);
			if (!zipFile)
				continue;
			buffer.resize(sb.size);
			if (zip_fread(zipFile, buffer.data(), sb.size) == (zip_int64_t)sb.size)
			{
				fs::create_directories(path.parent_path(), ec);
				std::unique_ptr<FileStream> out(FileStream::createFile2(path));
				if (out)
					out->writeData(buffer.data(), buffer.size());
			}
			zip_fclose(zipFile);
		}
		zip_discard(za);
		zip_error_fini(&error);
		return true;
	}
}

void LibretroGraphicPacks_Update()
{
	const fs::path target = ActiveSettings::GetUserDataPath("graphicPacks/downloadedGraphicPacks");
	const fs::path versionFile = target / "version.txt";
	const fs::path checkedFile = ActiveSettings::GetUserDataPath("graphicPacks/last_update_check.txt");

	const std::time_t now = std::time(nullptr);
	const std::string lastCheck = readFirstLine(checkedFile);
	std::error_code ec;
	if (!lastCheck.empty() && fs::exists(versionFile, ec))
	{
		const std::time_t last = (std::time_t)std::strtoll(lastCheck.c_str(), nullptr, 10);
		if (last > 0 && now >= last && now - last < kCheckInterval)
			return;
	}
	fs::create_directories(checkedFile.parent_path(), ec);
	writeString(checkedFile, std::to_string((long long)now));

	std::vector<uint8> data;
	if (!download(kLatestReleaseUrl, data))
		return;

	rapidjson::Document d;
	d.Parse((const char*)data.data(), data.size());
	if (d.HasParseError() || !d.IsObject() || !d.HasMember("name") || !d["name"].IsString() ||
		!d.HasMember("assets") || !d["assets"].IsArray() || d["assets"].GetArray().Size() == 0)
	{
		cemuLog_log(LogType::Force, "graphic packs: unexpected answer from GitHub");
		return;
	}
	const std::string release = d["name"].GetString(); // the name carries the version
	const auto& asset = d["assets"].GetArray()[0];
	if (!asset.IsObject() || !asset.HasMember("browser_download_url") || !asset["browser_download_url"].IsString())
		return;
	const std::string url = asset["browser_download_url"].GetString();

	if (boost::iequals(readFirstLine(versionFile), release))
	{
		cemuLog_log(LogType::Force, "graphic packs: {} is the latest", release);
		return;
	}

	cemuLog_log(LogType::Force, "graphic packs: downloading {}", release);
	if (!download(url, data))
		return;
	if (!unpack(data, target))
	{
		cemuLog_log(LogType::Force, "graphic packs: could not open the downloaded archive");
		return;
	}
	writeString(versionFile, release);
	cemuLog_log(LogType::Force, "graphic packs: installed {}", release);
}
