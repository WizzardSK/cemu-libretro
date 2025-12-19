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

	// RetroArch expects consistent audio delivery: ~800 frames per retro_run at 48kHz/60fps
	// Deliver exactly the target amount per frame for consistent timing
	// This reduces audio deviation by providing predictable sample counts
	constexpr size_t kTargetFramesPerRun = 800;  // 48000 / 60 = 800 audio frames per video frame
	constexpr size_t kTargetSamplesPerRun = kTargetFramesPerRun * LibretroAudioRingBuffer::kChannels;  // 1600 samples (stereo)
	
	const size_t availableSamples = s_ring_buffer.GetReadAvailableSamples();
	if (availableSamples == 0)
		return;

	// Read up to target samples, but don't exceed what's available
	const size_t samplesToRead = (availableSamples >= kTargetSamplesPerRun) ? kTargetSamplesPerRun : availableSamples;
	const size_t samplesRead = s_ring_buffer.Read(s_flush_buffer.data(), samplesToRead);
	
	if (samplesRead == 0)
		return;

	// Convert samples to frames (stereo = 2 samples per frame)
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

	// retro_audio_sample_batch_t expects frames (pairs of L/R samples)
	s_audio_callback(s_flush_buffer.data(), framesRead);
}

#endif
