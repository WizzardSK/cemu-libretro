#include "LibretroAudioAPI.h"

#include <algorithm>
#include <atomic>
#include <chrono>

#include "Cemu/Logging/CemuLogging.h"
#include "Cafe/OS/libs/coreinit/coreinit_Thread.h"

// Defined in snd_core/ax_out.cpp: how often the AX gate is reached and how
// often it opens.
namespace snd_core
{
	extern std::atomic<uint64_t> g_ax_update_calls;
	extern std::atomic<uint64_t> g_ax_update_passed;
	uint32 getNumProcessedFrames();
}

LibretroAudioAPI::AudioCallback LibretroAudioAPI::s_audio_callback = nullptr;
bool LibretroAudioAPI::s_log_stats = false;
uint64_t LibretroAudioAPI::s_stat_offered = 0;
uint64_t LibretroAudioAPI::s_stat_written = 0;
uint64_t LibretroAudioAPI::s_stat_read = 0;
uint64_t LibretroAudioAPI::s_stat_sent = 0;
uint64_t LibretroAudioAPI::s_stat_flushes = 0;
uint64_t LibretroAudioAPI::s_stat_empty_flushes = 0;
LibretroAudioRingBuffer LibretroAudioAPI::s_ring_buffer;
LibretroAudioAPI::MultiAudioCallback LibretroAudioAPI::s_multi_callback = nullptr;
unsigned LibretroAudioAPI::s_out_channels = 2;
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
	// In the ring's samples, which are the output's channels
	const size_t bufferedSamples = s_ring_buffer.GetReadAvailableSamples();
	const size_t targetBufferSamples = GetAudioDelay() * m_samplesPerBlock * s_out_channels;
	return bufferedSamples < targetBufferSamples;
}

bool LibretroAudioAPI::FeedBlock(sint16* data)
{
	if (!data || !m_playing)
		return false;

	// AX's channels (the TV mode: 1, 2 or 6) to the output's (2 or 6). 5.1
	// is FL FR C LFE SL SR, as standalone hands it to cubeb.
	const size_t frames = m_samplesPerBlock;
	const unsigned in = m_channels, out = s_out_channels;
	const int16_t* block = data;
	if (in != out)
	{
		m_convert.resize(frames * out);
		for (size_t f = 0; f < frames; f++)
		{
			const int16_t* s = data + f * in;
			int16_t* d = m_convert.data() + f * out;
			if (in == 1)
			{
				for (unsigned c = 0; c < out; c++)
					d[c] = c < 2 ? s[0] : 0;
			}
			else if (in == 6 && out == 2)
			{
				// Centre and surrounds at -3 dB, LFE left out
				const float c = s[2] * 0.7071f;
				const float l = s[0] + c + s[4] * 0.7071f;
				const float r = s[1] + c + s[5] * 0.7071f;
				d[0] = (int16_t)std::clamp(l, -32768.0f, 32767.0f);
				d[1] = (int16_t)std::clamp(r, -32768.0f, 32767.0f);
			}
			else
			{
				for (unsigned ch = 0; ch < out; ch++)
					d[ch] = ch < in ? s[ch] : 0;
			}
		}
		block = m_convert.data();
	}
	const size_t sampleCount = frames * out;
	const size_t written = s_ring_buffer.Write(block, sampleCount);
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

void LibretroAudioAPI::SetOutput(unsigned channels, MultiAudioCallback multi)
{
	s_out_channels = channels == 6 && multi ? 6 : 2;
	s_multi_callback = s_out_channels == 6 ? multi : nullptr;
	s_ring_buffer.Reset();
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

	const size_t channels = s_out_channels;
	const size_t framesRead = samplesRead / channels;

	// retro_audio_sample_batch_t may consume fewer frames than offered; loop so
	// a partial accept doesn't lose audio.
	size_t framesSent = 0;
	const int16_t* cursor = s_flush_buffer.data();
	while (framesSent < framesRead)
	{
		// 5.1: FL FR C LFE SL SR, as RetroArch's speaker bits run
		constexpr unsigned k51 = 0x001 | 0x002 | 0x004 | 0x008 | 0x200 | 0x400;
		const size_t accepted = channels == 6
			? s_multi_callback(cursor, framesRead - framesSent, 6, k51)
			: s_audio_callback(cursor, framesRead - framesSent);
		if (accepted == 0)
			break;
		framesSent += accepted;
		cursor += accepted * channels;
	}

	AccountFlush(samplesRead, framesSent * channels);
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
	// Where the samples would have to come from: the scheduler reaching its
	// system-event check, that check reaching the AX gate, and the gate opening.
	static uint64_t s_last_fibers[3] = {};
	static uint64_t s_last_idles[3] = {};
	static uint64_t s_last_processed = 0;
	static uint64_t s_last_events = 0;
	static uint64_t s_last_ax_calls = 0;
	static uint64_t s_last_ax_passed = 0;
	const uint64_t events = coreinit::OSSchedulerGetSystemEventCount();
	const uint64_t ax_calls = snd_core::g_ax_update_calls.load(std::memory_order_relaxed);
	const uint64_t ax_passed = snd_core::g_ax_update_passed.load(std::memory_order_relaxed);

	// And what the guest is doing with its time: how many frames its own AX
	// thread finished, and how often each emulated core came round its loop.
	// A gate that opens every time it is reached but produces one block per
	// video frame means the wait is on the guest, not on us.
	const uint64_t processed = snd_core::getNumProcessedFrames();
	uint64_t fibers[3], idles[3];
	for (int i = 0; i < 3; i++)
	{
		fibers[i] = coreinit::OSSchedulerGetPpcFiberLoopCount(i);
		idles[i] = coreinit::OSSchedulerGetIdleLoopCount(i);
	}

	cemuLog_log(LogType::Force,
		"audio: AX produced {} samples, ring dropped {}, drained {}, frontend took {}, "
		"{} flushes ({} with nothing to send), ring holds {}; "
		"scheduler events {}, AX update called {}, gate opened {}, "
		"guest AX frames {}, core loops {}/{}/{}, idle loops {}/{}/{}",
		s_stat_offered, s_stat_offered - s_stat_written, s_stat_read, s_stat_sent,
		s_stat_flushes, s_stat_empty_flushes, s_ring_buffer.GetReadAvailableSamples(),
		events - s_last_events, ax_calls - s_last_ax_calls, ax_passed - s_last_ax_passed,
		processed - s_last_processed,
		fibers[0] - s_last_fibers[0], fibers[1] - s_last_fibers[1], fibers[2] - s_last_fibers[2],
		idles[0] - s_last_idles[0], idles[1] - s_last_idles[1], idles[2] - s_last_idles[2]);

	s_last_processed = processed;
	for (int i = 0; i < 3; i++)
	{
		s_last_fibers[i] = fibers[i];
		s_last_idles[i] = idles[i];
	}

	s_last_events = events;
	s_last_ax_calls = ax_calls;
	s_last_ax_passed = ax_passed;

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
