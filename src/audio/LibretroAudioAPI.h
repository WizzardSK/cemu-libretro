#pragma once

#ifdef RETRO_CORE

#include "IAudioAPI.h"
#include <array>
#include <atomic>
#include <vector>

// Lock-free ring buffer for audio samples
// Single producer (audio thread), single consumer (retro_run thread)
class LibretroAudioRingBuffer
{
public:
	// Buffer sized for ~100ms at 48kHz stereo - enough for smooth playback
	// 48000 * 0.1 = 4800 frames, round up to 6144 for power-of-2-ish sizing
	static constexpr size_t kBufferFrames = 6144;
	static constexpr size_t kChannels = 2;
	static constexpr size_t kBufferSamples = kBufferFrames * kChannels;

	LibretroAudioRingBuffer() = default;

	// Returns number of samples (not frames) available for writing
	size_t GetWriteAvailableSamples() const
	{
		const size_t w = m_write_pos.load(std::memory_order_relaxed);
		const size_t r = m_read_pos.load(std::memory_order_acquire);
		const size_t used = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		return kBufferSamples - used - kChannels; // Leave one frame gap
	}

	// Returns number of samples (not frames) available for reading
	size_t GetReadAvailableSamples() const
	{
		const size_t w = m_write_pos.load(std::memory_order_acquire);
		const size_t r = m_read_pos.load(std::memory_order_relaxed);
		return (w >= r) ? (w - r) : (kBufferSamples - r + w);
	}

	// Write samples (called from audio producer thread)
	// Returns number of samples actually written
	size_t Write(const int16_t* data, size_t sampleCount)
	{
		size_t w = m_write_pos.load(std::memory_order_relaxed);
		const size_t r = m_read_pos.load(std::memory_order_acquire);
		
		// Calculate available space
		const size_t used = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		const size_t available = kBufferSamples - used - kChannels; // Leave gap
		const size_t toWrite = (sampleCount <= available) ? sampleCount : available;
		
		if (toWrite == 0)
			return 0;

		// Write in up to two chunks (wrap-around)
		const size_t firstChunk = (w + toWrite <= kBufferSamples) ? toWrite : (kBufferSamples - w);
		std::memcpy(m_buffer.data() + w, data, firstChunk * sizeof(int16_t));
		
		if (firstChunk < toWrite)
		{
			const size_t secondChunk = toWrite - firstChunk;
			std::memcpy(m_buffer.data(), data + firstChunk, secondChunk * sizeof(int16_t));
		}

		m_write_pos.store((w + toWrite) % kBufferSamples, std::memory_order_release);
		return toWrite;
	}

	// Read samples into provided buffer (called from consumer thread)
	// Returns number of samples actually read
	size_t Read(int16_t* dest, size_t maxSamples)
	{
		const size_t w = m_write_pos.load(std::memory_order_acquire);
		size_t r = m_read_pos.load(std::memory_order_relaxed);
		
		// Calculate available data
		const size_t available = (w >= r) ? (w - r) : (kBufferSamples - r + w);
		const size_t toRead = (maxSamples <= available) ? maxSamples : available;
		
		if (toRead == 0)
			return 0;

		// Read in up to two chunks (wrap-around)
		const size_t firstChunk = (r + toRead <= kBufferSamples) ? toRead : (kBufferSamples - r);
		std::memcpy(dest, m_buffer.data() + r, firstChunk * sizeof(int16_t));
		
		if (firstChunk < toRead)
		{
			const size_t secondChunk = toRead - firstChunk;
			std::memcpy(dest + firstChunk, m_buffer.data(), secondChunk * sizeof(int16_t));
		}

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
	using AudioCallback = size_t(*)(const int16_t* data, size_t frames);

	LibretroAudioAPI(uint32 samplerate, uint32 channels, uint32 samples_per_block, uint32 bits_per_sample);
	~LibretroAudioAPI() override = default;

	AudioAPI GetType() const override { return AudioAPI::Cubeb; }

	bool NeedAdditionalBlocks() const override;
	bool FeedBlock(sint16* data) override;
	bool Play() override;
	bool Stop() override;

	static void SetAudioCallback(AudioCallback cb);
	static void FlushAudio();

private:
	static AudioCallback s_audio_callback;
	static LibretroAudioRingBuffer s_ring_buffer;
	static std::vector<int16_t> s_flush_buffer; // Reusable buffer for FlushAudio
	static std::atomic<uint32> s_samples_per_block;
};

#endif
