#ifdef RETRO_CORE

#include "LibretroAudioAPI.h"

#include <cstdlib>
#include <cstring>

LibretroAudioAPI::AudioCallback LibretroAudioAPI::s_audio_callback = nullptr;
LibretroAudioRingBuffer LibretroAudioAPI::s_ring_buffer;
std::vector<int16_t> LibretroAudioAPI::s_flush_buffer;
std::atomic<uint32> LibretroAudioAPI::s_samples_per_block{0};

static bool libretro_audio_debug_enabled()
{
	static int s_cached = -1;
	if (s_cached == -1)
	{
		const char* env = std::getenv("CEMU_LIBRETRO_AUDIO_DEBUG");
		s_cached = (env && env[0] != '\0' && env[0] != '0') ? 1 : 0;
	}
	return s_cached != 0;
}

LibretroAudioAPI::LibretroAudioAPI(uint32 samplerate, uint32 channels, uint32 samples_per_block, uint32 bits_per_sample)
	: IAudioAPI(samplerate, channels, samples_per_block, bits_per_sample)
{
	// Pre-allocate flush buffer to avoid allocations in hot path
	// Size it for the maximum we might read in one flush
	s_flush_buffer.resize(LibretroAudioRingBuffer::kBufferSamples);
	s_ring_buffer.Reset();
	// Store samples per block for FlushAudio to use
	// m_bytesPerBlock = samples_per_block * channels * (bits_per_sample / 8)
	// So actual sample count = samples_per_block * channels
	s_samples_per_block.store(samples_per_block * channels, std::memory_order_relaxed);
}

bool LibretroAudioAPI::NeedAdditionalBlocks() const
{
	// Match upstream behavior: check if buffer has room for more blocks
	// Upstream: m_buffer.size() < GetAudioDelay() * m_bytesPerBlock
	// We work in samples: buffered_samples < audio_delay * samples_per_block
	const size_t bufferedSamples = s_ring_buffer.GetReadAvailableSamples();
	const size_t targetBufferSamples = GetAudioDelay() * m_bytesPerBlock / sizeof(int16_t);
	return bufferedSamples < targetBufferSamples;
}

bool LibretroAudioAPI::FeedBlock(sint16* data)
{
	if (!data)
		return false;

	// m_bytesPerBlock = samples_per_block * channels * (bits_per_sample / 8)
	// For 16-bit audio: m_bytesPerBlock / 2 = total samples (L+R interleaved)
	const size_t sampleCount = m_bytesPerBlock / sizeof(int16_t);
	const size_t written = s_ring_buffer.Write(data, sampleCount);
	
	if (libretro_audio_debug_enabled())
	{
		static uint64 s_feedBlocks = 0;
		s_feedBlocks++;
		if (s_feedBlocks <= 50 || (s_feedBlocks % 200) == 0)
			cemuLog_log(LogType::Force, "[LibretroAudio] FeedBlock blocks={} samples={} written={} buffered={}", 
				(unsigned long long)s_feedBlocks, (unsigned long long)sampleCount, 
				(unsigned long long)written, (unsigned long long)s_ring_buffer.GetReadAvailableSamples());
	}
	return written > 0;
}

bool LibretroAudioAPI::Play()
{
	m_playing = true;
	return true;
}

bool LibretroAudioAPI::Stop()
{
	m_playing = false;
	return true;
}

void LibretroAudioAPI::SetAudioCallback(AudioCallback cb)
{
	s_audio_callback = cb;
}

void LibretroAudioAPI::FlushAudio()
{
	if (!s_audio_callback)
		return;

	// Drain whatever Cemu produced since the last retro_run, up to the ring's
	// capacity. RetroArch's audio driver handles variable per-call frame counts
	// (it has its own buffer + dynamic-rate-control resampler), so a fixed
	// kTargetFramesPerRun cap is the wrong shape: when Cemu's audio thread runs
	// slightly faster than retro_run on the host clock, samples accumulate in
	// the ring until FeedBlock starts dropping them, which is what shows up
	// as crackling. Delivering the actual produced count per frame keeps the
	// ring near-empty and lets the frontend do the rate-matching.
	const size_t availableSamples = s_ring_buffer.GetReadAvailableSamples();
	if (availableSamples == 0)
		return;

	const size_t bufferCap = s_flush_buffer.size();
	const size_t samplesToRead = (availableSamples <= bufferCap) ? availableSamples : bufferCap;
	const size_t samplesRead = s_ring_buffer.Read(s_flush_buffer.data(), samplesToRead);

	if (samplesRead == 0)
		return;

	// retro_audio_sample_batch_t expects frames (pairs of L/R samples)
	const size_t framesRead = samplesRead / LibretroAudioRingBuffer::kChannels;

	if (libretro_audio_debug_enabled())
	{
		static uint64 s_flushes = 0;
		s_flushes++;
		if (s_flushes <= 50 || (s_flushes % 200) == 0)
			cemuLog_log(LogType::Force, "[LibretroAudio] FlushAudio flushes={} available={} samples={} frames={}",
				(unsigned long long)s_flushes, (unsigned long long)availableSamples,
				(unsigned long long)samplesRead, (unsigned long long)framesRead);
	}

	size_t framesSent = 0;
	const int16_t* cursor = s_flush_buffer.data();
	while (framesSent < framesRead)
	{
		const size_t accepted = s_audio_callback(cursor, framesRead - framesSent);
		if (accepted == 0)
			break;
		framesSent += accepted;
		cursor += accepted * LibretroAudioRingBuffer::kChannels;
	}
}

#endif
