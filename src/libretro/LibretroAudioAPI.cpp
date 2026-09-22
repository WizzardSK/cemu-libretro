#include "LibretroAudioAPI.h"

#include <chrono>

#include "Cemu/Logging/CemuLogging.h"

LibretroAudioAPI::AudioCallback LibretroAudioAPI::s_audio_callback = nullptr;
bool LibretroAudioAPI::s_log_stats = false;
uint64_t LibretroAudioAPI::s_stat_offered = 0;
uint64_t LibretroAudioAPI::s_stat_written = 0;
uint64_t LibretroAudioAPI::s_stat_read = 0;
uint64_t LibretroAudioAPI::s_stat_sent = 0;
uint64_t LibretroAudioAPI::s_stat_flushes = 0;
uint64_t LibretroAudioAPI::s_stat_empty_flushes = 0;
LibretroAudioRingBuffer LibretroAudioAPI::s_ring_buffer;
std::vector<int16_t> LibretroAudioAPI::s_flush_buffer;

LibretroAudioAPI::LibretroAudioAPI(uint32 samplerate, uint32 channels, uint32 samples_per_block, uint32 bits_per_sample)
	: IAudioAPI(samplerate, channels, samples_per_block, bits_per_sample)
{
	s_flush_buffer.resize(LibretroAudioRingBuffer::kBufferSamples);
	s_ring_buffer.Reset();
}

LibretroAudioAPI::~LibretroAudioAPI()
{
	m_playing = false;
	s_ring_buffer.Reset();
	s_flush_buffer.clear();
	s_flush_buffer.shrink_to_fit();
}

bool LibretroAudioAPI::NeedAdditionalBlocks() const
{
	// Match upstream behavior: ask for more blocks while the ring has less
	// than (audio_delay * samples_per_block) buffered.
	const size_t bufferedSamples = s_ring_buffer.GetReadAvailableSamples();
	const size_t targetBufferSamples = GetAudioDelay() * (m_bytesPerBlock / sizeof(int16_t));
	return bufferedSamples < targetBufferSamples;
}

bool LibretroAudioAPI::FeedBlock(sint16* data)
{
	if (!data || !m_playing)
		return false;

	const size_t sampleCount = m_bytesPerBlock / sizeof(int16_t);
	const size_t written = s_ring_buffer.Write(data, sampleCount);
	AccountWrite(sampleCount, written);
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
	// (its own buffer + DRC resampler), so capping the delivery is the wrong
	// shape: when Cemu's audio thread runs slightly faster than retro_run on
	// the host clock, the excess accumulates until FeedBlock starts dropping
	// samples, which is what shows up as crackling.
	const size_t availableSamples = s_ring_buffer.GetReadAvailableSamples();
	if (availableSamples == 0)
	{
		if (s_log_stats)
		{
			s_stat_flushes++;
			s_stat_empty_flushes++;
			ReportStats();
		}
		return;
	}

	const size_t bufferCap = s_flush_buffer.size();
	const size_t samplesToRead = (availableSamples <= bufferCap) ? availableSamples : bufferCap;
	const size_t samplesRead = s_ring_buffer.Read(s_flush_buffer.data(), samplesToRead);

	if (samplesRead == 0)
		return;

	const size_t framesRead = samplesRead / LibretroAudioRingBuffer::kChannels;

	// retro_audio_sample_batch_t may consume fewer frames than offered; loop so
	// a partial accept doesn't lose audio.
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

	AccountFlush(samplesRead, framesSent * LibretroAudioRingBuffer::kChannels);
}

void LibretroAudioAPI::SetStatsLogging(bool enabled)
{
	s_log_stats = enabled;
}

void LibretroAudioAPI::AccountWrite(size_t offered, size_t written)
{
	if (!s_log_stats)
		return;
	s_stat_offered += offered;
	s_stat_written += written;
}

void LibretroAudioAPI::AccountFlush(size_t read, size_t sent)
{
	if (!s_log_stats)
		return;
	s_stat_read += read;
	s_stat_sent += sent;
	s_stat_flushes++;
	ReportStats();
}

void LibretroAudioAPI::ReportStats()
{
	using clock = std::chrono::steady_clock;
	static clock::time_point s_last = clock::now();

	const clock::time_point now = clock::now();
	if (now - s_last < std::chrono::seconds(1))
		return;
	s_last = now;

	// 48 kHz stereo is 96000 samples a second, so "AX produced" against that
	// says whether the title is being given enough time to make audio at all;
	// dropped says the ring overflowed; the frontend line says whether what was
	// drained was actually taken.
	cemuLog_log(LogType::Force,
		"audio: AX produced {} samples, ring dropped {}, drained {}, frontend took {}, "
		"{} flushes ({} with nothing to send), ring holds {}",
		s_stat_offered, s_stat_offered - s_stat_written, s_stat_read, s_stat_sent,
		s_stat_flushes, s_stat_empty_flushes, s_ring_buffer.GetReadAvailableSamples());

	s_stat_offered = 0;
	s_stat_written = 0;
	s_stat_read = 0;
	s_stat_sent = 0;
	s_stat_flushes = 0;
	s_stat_empty_flushes = 0;
}

void LibretroAudioAPI::Reset()
{
	s_ring_buffer.Reset();
}
