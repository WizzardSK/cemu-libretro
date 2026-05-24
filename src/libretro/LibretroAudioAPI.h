#pragma once

#include "audio/IAudioAPI.h"

#include <array>
#include <atomic>
#include <cstring>
#include <vector>

// Lock-free ring buffer for audio samples.
// Single producer (Cemu AX audio thread), single consumer (retro_run thread).
class LibretroAudioRingBuffer
{
public:
	// ~128 ms at 48 kHz stereo. Large enough to absorb host scheduling jitter
	// but small enough that draining everything per retro_run stays cheap.
	static constexpr size_t kBufferFrames = 6144;
	static constexpr size_t kChannels = 2;
	static constexpr size_t kBufferSamples = kBufferFrames * kChannels;

	LibretroAudioRingBuffer() = default;

	size_t GetWriteAvailableSamples() const
	{
		const size_t w = m_write_pos.load(std::memory_order_relaxed);
		const size_t r = m_read_pos.load(std::memory_order_acquire);
		const size_t used = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		return kBufferSamples - used - kChannels;
	}

	size_t GetReadAvailableSamples() const
	{
		const size_t w = m_write_pos.load(std::memory_order_acquire);
		const size_t r = m_read_pos.load(std::memory_order_relaxed);
		return (w >= r) ? (w - r) : (kBufferSamples - r + w);
	}

	size_t Write(const int16_t* data, size_t sampleCount)
	{
		size_t w = m_write_pos.load(std::memory_order_relaxed);
		const size_t r = m_read_pos.load(std::memory_order_acquire);

		const size_t used = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		const size_t available = kBufferSamples - used - kChannels;
		const size_t toWrite = (sampleCount <= available) ? sampleCount : available;

		if (toWrite == 0)
			return 0;

		const size_t firstChunk = (w + toWrite <= kBufferSamples) ? toWrite : (kBufferSamples - w);
		std::memcpy(m_buffer.data() + w, data, firstChunk * sizeof(int16_t));
		if (firstChunk < toWrite)
			std::memcpy(m_buffer.data(), data + firstChunk, (toWrite - firstChunk) * sizeof(int16_t));

		m_write_pos.store((w + toWrite) % kBufferSamples, std::memory_order_release);
		return toWrite;
	}

	size_t Read(int16_t* dest, size_t maxSamples)
	{
		const size_t w = m_write_pos.load(std::memory_order_acquire);
		size_t r = m_read_pos.load(std::memory_order_relaxed);

		const size_t available = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		const size_t toRead = (maxSamples <= available) ? maxSamples : available;

		if (toRead == 0)
			return 0;

		const size_t firstChunk = (r + toRead <= kBufferSamples) ? toRead : (kBufferSamples - r);
		std::memcpy(dest, m_buffer.data() + r, firstChunk * sizeof(int16_t));
		if (firstChunk < toRead)
			std::memcpy(dest + firstChunk, m_buffer.data(), (toRead - firstChunk) * sizeof(int16_t));

		m_read_pos.store((r + toRead) % kBufferSamples, std::memory_order_release);
		return toRead;
	}

	void Reset()
	{
		m_write_pos.store(0, std::memory_order_relaxed);
		m_read_pos.store(0, std::memory_order_relaxed);
	}

private:
	std::array<int16_t, kBufferSamples> m_buffer{};
	std::atomic<size_t> m_write_pos{0};
	std::atomic<size_t> m_read_pos{0};
};

class LibretroAudioAPI : public IAudioAPI
{
public:
	class LibretroDeviceDescription : public DeviceDescription
	{
	public:
		LibretroDeviceDescription()
			: DeviceDescription(L"Libretro Audio") {}

		std::wstring GetIdentifier() const override { return L"libretro"; }
	};

	// Callback type matches retro_audio_sample_batch_t: returns frames actually accepted.
	using AudioCallback = size_t(*)(const int16_t* data, size_t frames);

	LibretroAudioAPI(uint32 samplerate, uint32 channels, uint32 samples_per_block, uint32 bits_per_sample);
	~LibretroAudioAPI() override = default;

	AudioAPI GetType() const override { return Cubeb; } // pretend to be Cubeb for config compatibility

	bool NeedAdditionalBlocks() const override;
	bool FeedBlock(sint16* data) override;
	bool Play() override;
	bool Stop() override;

	// Register the frontend's audio_batch_cb (called from retro_init).
	static void SetAudioCallback(AudioCallback cb);

	// Drain whatever was produced since the last call, push to the frontend.
	// Call once per retro_run.
	static void FlushAudio();

	static void Reset();

private:
	static AudioCallback s_audio_callback;
	static LibretroAudioRingBuffer s_ring_buffer;
	static std::vector<int16_t> s_flush_buffer;
};
