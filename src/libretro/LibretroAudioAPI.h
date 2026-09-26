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
	// ~341 ms at 48 kHz stereo. It has to hold everything AX may make between
	// two retro_runs, and a retro_run grants up to 250 ms (see
	// AXOut_LibretroGrantSamples). At 128 ms a slow device's frames - 8 or 9
	// a second in sco8487's heavier Deus Ex scenes - got grants the ring could
	// not take, and the rest was dropped. Drained every retro_run, so the
	// size adds no latency.
	static constexpr size_t kBufferFrames = 16384;
	static constexpr size_t kChannels = 2;
	static constexpr size_t kBufferSamples = kBufferFrames * kChannels;

	LibretroAudioRingBuffer() = default;

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
	// Callback type matches retro_audio_sample_batch_t: returns frames actually accepted.
	using AudioCallback = size_t(*)(const int16_t* data, size_t frames);

	LibretroAudioAPI(uint32 samplerate, uint32 channels, uint32 samples_per_block, uint32 bits_per_sample);
	// The ring and the flush buffer are statics that outlive any one instance,
	// and until this they were only ever put back by the next run's
	// constructor - so a closed title left its last few milliseconds of audio
	// sitting there for the next one to start with. Emptied here instead,
	// which is the end of the run that produced them: ShutdownTitle destroys
	// this object through snd_core::reset, after the scheduler has stopped, so
	// nothing is still feeding it.
	~LibretroAudioAPI() override;

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

	// Once a second, report what AX produced, what the ring had to drop and
	// what the frontend took (cemu_log_audio). Audio going missing has three
	// possible ends - AX not producing, the ring overflowing, the frontend
	// refusing - and a report that only says "too few samples" cannot tell
	// them apart.
	static void SetStatsLogging(bool enabled);
	static bool IsStatsLogging() { return s_log_stats; }

private:
	static void AccountWrite(size_t offered, size_t written);
	static void AccountFlush(size_t read, size_t sent);
	static void ReportStats();

	static AudioCallback s_audio_callback;
	static LibretroAudioRingBuffer s_ring_buffer;
	static std::vector<int16_t> s_flush_buffer;

	static bool s_log_stats;
	static uint64_t s_stat_offered;
	static uint64_t s_stat_written;
	static uint64_t s_stat_read;
	static uint64_t s_stat_sent;
	static uint64_t s_stat_flushes;
	static uint64_t s_stat_empty_flushes;
};
