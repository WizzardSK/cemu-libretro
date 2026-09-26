#include "Cafe/OS/libs/snd_core/ax.h"
#include "Cafe/OS/libs/snd_core/ax_internal.h"
#include "Cafe/HW/MMU/MMU.h"
#include "audio/IAudioAPI.h"
#ifdef RETRO_CORE
#include "libretro/LibretroAudioAPI.h"

#include <atomic>
#endif
//#include "ax.h"
#include "config/CemuConfig.h"

namespace snd_core
{
	uint32 numProcessedFrames = 0;

	void resetNumProcessedFrames()
	{
		numProcessedFrames = 0;
	}

	uint32 getNumProcessedFrames()
	{
		return numProcessedFrames;
	}

	sint32 __AXMode[AX_DEV_COUNT]; // audio mode (AX_MODE_*) per device


	bool AVMGetTVAudioMode(uint32be* tvAudioMode)
	{
		// 0 -> mono
		// 1,2 -> stereo
		// 3 -> surround
		// 4 -> unknown mode
		switch (GetConfig().tv_channels)
		{
		case kMono:
			*tvAudioMode = 0;
			break;
		case kSurround:
			*tvAudioMode = 3;
			break;
		default:
			*tvAudioMode = 2;
			break;
		}

		return true;
	}

	bool AVMGetDRCSystemAudioMode(uint32be* drcAudioMode)
	{
		*drcAudioMode = 1; // apparently the default is Stereo(?), MH3U exits if AXGetDeviceMode doesn't return 0 (DRCSystemAudioMode must return 1 to set DRC mode to 0)
		return true;
	}

	sint32 __AXOutTVOutputChannelCount;
	sint32 __AXOutDRCOutputChannelCount;

	void __AXSetTVMode(sint32 mode)
	{
		cemu_assert(mode == AX_MODE_STEREO || mode == AX_MODE_6CH || mode == AX_MODE_MONO);
		__AXMode[AX_DEV_TV] = mode;
	}

	void __AXSetDeviceMode(sint32 device, sint32 mode)
	{
		if (device == AX_DEV_TV)
			__AXMode[AX_DEV_TV] = mode;
		else if (device == AX_DEV_DRC)
			__AXMode[AX_DEV_DRC] = mode;
		else if (device == AX_DEV_RMT)
			__AXMode[AX_DEV_RMT] = mode;
		else
		{
			cemu_assert_debug(false);
		}
	}

	sint32 AXGetDeviceMode(sint32 device)
	{
		if (device == AX_DEV_TV || device == AX_DEV_DRC || device == AX_DEV_RMT)
			return __AXMode[device];
		cemu_assert_debug(false);
		return 0;
	}

	void _AXOutInitDeviceModes()
	{
		// TV mode
		uint32be tvAudioMode;
		AVMGetTVAudioMode(&tvAudioMode);
		if (tvAudioMode == 0)
		{
			// mono
			__AXSetTVMode(AX_MODE_MONO);
			__AXOutTVOutputChannelCount = 1;
		}
		else if (tvAudioMode == 1 || tvAudioMode == 2)
		{
			// stereo
			__AXSetTVMode(AX_MODE_STEREO);
			__AXOutTVOutputChannelCount = 2;
		}
		else if (tvAudioMode == 3)
		{
			// surround (6ch)
			__AXSetTVMode(AX_MODE_6CH);
			__AXOutTVOutputChannelCount = 6;
		}
		else
		{
			assert_dbg();
		}
		// DRC mode
		uint32be drcAudioMode;
		AVMGetDRCSystemAudioMode(&drcAudioMode);
		if (drcAudioMode == 0)
		{
			// mono
			__AXSetDeviceMode(1, AX_MODE_MONO);
			__AXOutDRCOutputChannelCount = 1;
		}
		else if (drcAudioMode == 2)
		{
			// surround
			__AXSetDeviceMode(1, AX_MODE_SURROUND);
			__AXOutDRCOutputChannelCount = 2; // output channel count still 2 for DRC 'surround'
		}
		else if (drcAudioMode == 1)
		{
			// stereo
			__AXSetDeviceMode(1, AX_MODE_STEREO);
			__AXOutDRCOutputChannelCount = 2;
		}
		else
		{
			assert_dbg();
		}
	}

	void AXOut_Init()
	{
		_AXOutInitDeviceModes();
	}

	extern SysAllocator<sint32, AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT> __AXTVBuffer48;
	extern SysAllocator<sint32, AX_SAMPLES_MAX* AX_DRC_CHANNEL_COUNT * 2> __AXDRCBuffer48;

	sint16 __buf_AXTVDMABuffers_0[AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT];
	sint16 __buf_AXTVDMABuffers_1[AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT];
	sint16 __buf_AXTVDMABuffers_2[AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT];
	sint16* __AXTVDMABuffers[3] = {__buf_AXTVDMABuffers_0, __buf_AXTVDMABuffers_1, __buf_AXTVDMABuffers_2};

	#define AX_FRAMES_PER_GROUP		(4)

	sint16 tempTVChannelData[AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT * AX_FRAMES_PER_GROUP] = {};
	sint32 tempAudioBlockCounter = 0;


	sint16 __buf_AXDRCDMABuffers_0[AX_SAMPLES_MAX * 6];
	sint16 __buf_AXDRCDMABuffers_1[AX_SAMPLES_MAX * 6];
	sint16 __buf_AXDRCDMABuffers_2[AX_SAMPLES_MAX * 6];
	sint16* __AXDRCDMABuffers[3] = { __buf_AXDRCDMABuffers_0, __buf_AXDRCDMABuffers_1, __buf_AXDRCDMABuffers_2 };

	sint16 tempDRCChannelData[AX_SAMPLES_MAX * 6 * AX_FRAMES_PER_GROUP] = {};
	sint32 tempDRCAudioBlockCounter = 0;

#ifdef RETRO_CORE
	static bool s_drcMixBlockReady = false;
	static sint16 s_drcMixBlock[AX_SAMPLES_MAX * AX_TV_CHANNEL_COUNT * AX_FRAMES_PER_GROUP] = {};
#endif

	void AIInitDMA(sint16* sampleData, sint32 size)
	{
		sint32 sampleCount = size / sizeof(sint16); // sample count in total (summed up for all channels)

		if (sndGeneric.initParam.frameLength != 0)
		{
			cemu_assert(false);
		}

		std::shared_lock lock(g_audioMutex);

		const uint32 channels = g_tvAudio ? g_tvAudio->GetChannels() : AX_TV_CHANNEL_COUNT;
		sint16* outputChannel = tempTVChannelData + AX_SAMPLES_PER_3MS_48KHZ * tempAudioBlockCounter * channels;
		for (sint32 i = 0; i < sampleCount; ++i)
		{
			outputChannel[i] = _swapEndianS16(sampleData[i]);
		}

		tempAudioBlockCounter++;
		if (tempAudioBlockCounter == AX_FRAMES_PER_GROUP)
		{
			if (g_tvAudio)
			{
#ifdef RETRO_CORE
				if (s_drcMixBlockReady)
				{
					constexpr size_t kChannels = 2;
					const size_t samplesToMix = (size_t)AX_SAMPLES_PER_3MS_48KHZ * (size_t)AX_FRAMES_PER_GROUP * kChannels;
					for (size_t i = 0; i < samplesToMix; ++i)
					{
						int v = (int)tempTVChannelData[i] + (int)s_drcMixBlock[i];
						if (v > 32767) v = 32767;
						else if (v < -32768) v = -32768;
						tempTVChannelData[i] = (sint16)v;
					}
					s_drcMixBlockReady = false;
				}
#endif
				g_tvAudio->FeedBlock(tempTVChannelData);
			}

			tempAudioBlockCounter = 0;
		}
	}

	sint32 AIGetSamplesPerChannel(uint32 device)
	{
		// TV and DRC output the same number of samples
		return AX_SAMPLES_PER_3MS_48KHZ;
	}

	sint32 AIGetChannelCount(uint32 device)
	{
		if (__AXMode[device] == AX_MODE_6CH)
			return 6;
		if (__AXMode[device] == AX_MODE_STEREO)
			return 2;
		// default to mono
		return 1;
	}

	sint16* AIGetCurrentDMABuffer(uint32 device)
	{
		if (device == AX_DEV_TV)
			return __AXTVDMABuffers[0];
		else if (device == AX_DEV_DRC)
			return __AXDRCDMABuffers[0];
		cemu_assert_debug(false);
		return nullptr;
	}

	void AXOut_SubmitTVFrame(sint32 frameIndex)
	{
		sint32 numSamples = AIGetSamplesPerChannel(AX_DEV_TV);
		if (__AXMode[AX_DEV_TV] == AX_MODE_6CH)
		{
			sint32* inputChannel0 = __AXTVBuffer48.GetPtr() + numSamples * 0;
			sint32* inputChannel1 = __AXTVBuffer48.GetPtr() + numSamples * 1;
			sint32* inputChannel2 = __AXTVBuffer48.GetPtr() + numSamples * 2;
			sint32* inputChannel3 = __AXTVBuffer48.GetPtr() + numSamples * 3;
			sint32* inputChannel4 = __AXTVBuffer48.GetPtr() + numSamples * 4;
			sint32* inputChannel5 = __AXTVBuffer48.GetPtr() + numSamples * 5;
			sint16* dmaOutputBuffer = AIGetCurrentDMABuffer(AX_DEV_TV);
			for (sint32 i = 0; i < numSamples; i++)
			{
				/*
				* DirectSound surround order
				LEFT				0
				RIGHT				1
				SUR_LEFT			2
				SUR_RIGHT			3
				CH_FC				4
				CH_LFE				5
				=>
				Front Left - FL			0
				Front Right - FR		1
				Front Center - FC		2
				Low Frequency - LF		3
				Back Left - BL			4
				Back Right - BR			5
				*/
				dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer[1] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel1), -32768), 32767));

				dmaOutputBuffer[4] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel2), -32768), 32767));
				dmaOutputBuffer[5] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel3), -32768), 32767));

				dmaOutputBuffer[2] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel4), -32768), 32767));
				dmaOutputBuffer[3] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel5), -32768), 32767));
				dmaOutputBuffer += 6;
				// next sample
				inputChannel0++;
				inputChannel1++;
				inputChannel2++;
				inputChannel3++;
				inputChannel4++;
				inputChannel5++;
			}
			AIInitDMA(__AXTVDMABuffers[frameIndex], numSamples * 6 * sizeof(sint16)); // 6ch output
		}
		else if (__AXMode[AX_DEV_TV] == AX_MODE_STEREO)
		{
			sint32* inputChannel0 = __AXTVBuffer48.GetPtr() + numSamples * 0;
			sint32* inputChannel1 = __AXTVBuffer48.GetPtr() + numSamples * 1;
			sint16* dmaOutputBuffer = __AXTVDMABuffers[frameIndex];
			for (sint32 i = 0; i < numSamples; i++)
			{
				dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer[1] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel1), -32768), 32767));
				dmaOutputBuffer += 2;
				// next sample
				inputChannel0++;
				inputChannel1++;
			}
			AIInitDMA(__AXTVDMABuffers[frameIndex], numSamples * 2 * sizeof(sint16)); // 2ch output
		}
		else if (__AXMode[AX_DEV_TV] == AX_MODE_MONO)
		{
			sint32* inputChannel0 = __AXTVBuffer48.GetPtr() + numSamples * 0;
			sint16* dmaOutputBuffer = __AXTVDMABuffers[frameIndex];
			for (sint32 i = 0; i < numSamples; i++)
			{
				dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer++;
				// next sample
				inputChannel0++;
			}
			AIInitDMA(__AXTVDMABuffers[frameIndex], numSamples * 1 * sizeof(sint16)); // 1ch (output as stereo)
		}
		else
			assert_dbg();
	}

	void AIInitDRCDMA(sint16* sampleData, sint32 size)
	{
		sint32 sampleCount = size / sizeof(sint16); // sample count in total (summed up for all channels)

		if (sndGeneric.initParam.frameLength != 0)
		{
			cemu_assert(false);
		}

		std::shared_lock lock(g_audioMutex);

#ifdef RETRO_CORE
		// Libretro outputs a single stereo stream. Convert DRC audio to stereo and mix into TV.
		const uint32 channelsOut = 2;
		const uint32 channelsIn = (uint32)AIGetChannelCount(AX_DEV_DRC);
		const sint32 framesIn = channelsIn ? (sampleCount / (sint32)channelsIn) : 0;
		sint16* outputChannel = tempDRCChannelData + AX_SAMPLES_PER_3MS_48KHZ * tempDRCAudioBlockCounter * (sint32)channelsOut;
		for (sint32 f = 0; f < framesIn; ++f)
		{
			const sint16 l = _swapEndianS16(sampleData[f * (sint32)channelsIn + 0]);
			const sint16 r = (channelsIn > 1) ? _swapEndianS16(sampleData[f * (sint32)channelsIn + 1]) : l;
			outputChannel[f * 2 + 0] = l;
			outputChannel[f * 2 + 1] = r;
		}
#else
		const uint32 channels = g_padAudio ? g_padAudio->GetChannels() : AX_DRC_CHANNEL_COUNT;
		sint16* outputChannel = tempDRCChannelData + AX_SAMPLES_PER_3MS_48KHZ * tempDRCAudioBlockCounter * channels;
		for (sint32 i = 0; i < sampleCount; ++i)
		{
			outputChannel[i] = _swapEndianS16(sampleData[i]);
		}
#endif

		tempDRCAudioBlockCounter++;
		if (tempDRCAudioBlockCounter == AX_FRAMES_PER_GROUP)
		{
			{
#ifdef RETRO_CORE
				constexpr size_t kChannels = 2;
				const size_t samplesToCopy = (size_t)AX_SAMPLES_PER_3MS_48KHZ * (size_t)AX_FRAMES_PER_GROUP * kChannels;
				for (size_t i = 0; i < samplesToCopy; ++i)
					s_drcMixBlock[i] = tempDRCChannelData[i];
				s_drcMixBlockReady = true;
#else
				if (g_padAudio)
					g_padAudio->FeedBlock(tempDRCChannelData);
#endif
			}

			tempDRCAudioBlockCounter = 0;
		}
	}

	void AXOut_SubmitDRCFrame(sint32 frameIndex)
	{
		sint32 numSamples = AIGetSamplesPerChannel(AX_DEV_DRC);
		if (__AXMode[AX_DEV_DRC] == AX_MODE_6CH)
		{
			sint32* inputChannel0 = __AXDRCBuffer48.GetPtr() + numSamples * 0;
			sint32* inputChannel1 = __AXDRCBuffer48.GetPtr() + numSamples * 1;
			sint32* inputChannel2 = __AXDRCBuffer48.GetPtr() + numSamples * 2;
			sint32* inputChannel3 = __AXDRCBuffer48.GetPtr() + numSamples * 3;
			sint16* dmaOutputBuffer = AIGetCurrentDMABuffer(AX_DEV_DRC);
			for (sint32 i = 0; i < numSamples; i++)
			{
				dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer[1] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel1), -32768), 32767));

				dmaOutputBuffer[4] = 0;
				dmaOutputBuffer[5] = 0;

				dmaOutputBuffer[2] = 0;
				dmaOutputBuffer[3] = 0;
				dmaOutputBuffer += 6;
				// next sample
				inputChannel0++;
				inputChannel1++;
				inputChannel2++;
				inputChannel3++;
			}
			AIInitDRCDMA(__AXDRCDMABuffers[frameIndex], numSamples * 6 * sizeof(sint16)); // 6ch output
		}
		else if (__AXMode[AX_DEV_DRC] == AX_MODE_STEREO)
		{
			sint32* inputChannel0 = __AXDRCBuffer48.GetPtr() + numSamples * 0;
			sint32* inputChannel1 = __AXDRCBuffer48.GetPtr() + numSamples * 1;
			sint16* dmaOutputBuffer = __AXDRCDMABuffers[frameIndex];
			for (sint32 i = 0; i < numSamples; i++)
			{
				dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer[1] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel1), -32768), 32767));
				dmaOutputBuffer += 2;
				// next sample
				inputChannel0++;
				inputChannel1++;
			}

			AIInitDRCDMA(__AXDRCDMABuffers[frameIndex], numSamples * 2 * sizeof(sint16)); // 2ch output
		}
		else if (__AXMode[AX_DEV_DRC] == AX_MODE_MONO)
		{
			sint32* inputChannel0 = __AXDRCBuffer48.GetPtr() + numSamples * 0;
			sint16* dmaOutputBuffer = __AXDRCDMABuffers[frameIndex];
			for (sint32 i = 0; i < numSamples; i++)
			{
				// write mono input as stereo output
				dmaOutputBuffer[1] = dmaOutputBuffer[0] = _swapEndianS16((sint16)std::min(std::max(_swapEndianS32(*inputChannel0), -32768), 32767));
				dmaOutputBuffer += 2;
				// next sample
				inputChannel0++;
			}
			AIInitDRCDMA(__AXDRCDMABuffers[frameIndex], numSamples * 2 * sizeof(sint16)); // 1ch (output as stereo)
		}
		else
			assert_dbg();
	}

	/* AX output */

	uint32 numQueuedFramesSndGeneric = 0;

	void AXOut_init()
	{

		numQueuedFramesSndGeneric = 0;

		std::unique_lock lock(g_audioMutex);
		if (!g_tvAudio)
		{
			try
			{
#ifdef RETRO_CORE
				// For libretro, use LibretroAudioAPI which routes audio to RetroArch
				g_tvAudio = std::make_unique<LibretroAudioAPI>(48000, 2, snd_core::AX_SAMPLES_PER_3MS_48KHZ * AX_FRAMES_PER_GROUP, 16);
				cemuLog_log(LogType::Force, "Initialized LibretroAudioAPI for TV audio");
#else
				g_tvAudio = IAudioAPI::CreateDeviceFromConfig(IAudioAPI::AudioType::TV, 48000, snd_core::AX_SAMPLES_PER_3MS_48KHZ * AX_FRAMES_PER_GROUP, 16);
#endif
			}
			catch (std::runtime_error& ex)
			{
				cemuLog_log(LogType::Force, "can't initialize tv audio: {}", ex.what());
			}
		}

		g_padVolume = GetConfig().pad_volume;
		if (!g_padAudio)
		{
			try
			{
#ifdef RETRO_CORE
				g_padAudio.reset();
#else
				g_padAudio = IAudioAPI::CreateDeviceFromConfig(IAudioAPI::AudioType::Gamepad, 48000, snd_core::AX_SAMPLES_PER_3MS_48KHZ * AX_FRAMES_PER_GROUP, 16);
#endif
			}
			catch (std::runtime_error& ex)
			{
				cemuLog_log(LogType::Force, "can't initialize pad audio: {}", ex.what());
			}
		}
	}

	void AXOut_reset()
	{
		std::unique_lock lock(g_audioMutex);
		if (g_tvAudio)
		{
			g_tvAudio->Stop();
			g_tvAudio.reset();
		}
		if (g_padAudio)
		{
			g_padAudio->Stop();
			g_padAudio.reset();
		}
		if (g_portalAudio)
		{
			g_portalAudio->Stop();
			g_portalAudio.reset();
		}
	}

	void AXOut_updateDevicePlayState(bool isPlaying)
	{
		std::shared_lock lock(g_audioMutex);
		if (g_tvAudio)
		{
			if (isPlaying)
				g_tvAudio->Play();
			else
				g_tvAudio->Stop();
		}

		if (g_padAudio)
		{
			if (isPlaying)
				g_padAudio->Play();
			else
				g_padAudio->Stop();
		}

		if (g_portalAudio)
		{
			if (isPlaying)
				g_portalAudio->Play();
			else
				g_portalAudio->Stop();
		}
	}

	// called periodically to check for AX updates
	// How often the gate is reached and how often it opens (cemu_log_audio).
	// "AX produced too little" has two very different causes: the scheduler not
	// reaching __OSCheckSystemEvents often enough, or it reaching it and the
	// 3 ms gate holding it shut. These two counters tell them apart.
	std::atomic<uint64_t> g_ax_update_calls{0};
	std::atomic<uint64_t> g_ax_update_passed{0};

#ifdef RETRO_CORE
	// Samples the frontend has asked for and AX has not made yet. In a libretro
	// core the audio has to follow the frames the frontend asks for, not the
	// wall clock: RetroArch blocks in the audio callback until what it was
	// given has played, so audio made by the clock turns a slow frame into a
	// longer wait in the next one, and a longer wait into more audio - NNshi's
	// 60 fps settled at 15, this machine's at 10, each retro_run spending
	// ~100 ms handing over the ring's worth of audio. Paced by frames, the
	// audio callback is what paces retro_run, at the frame rate the core
	// reports. Capped at 250 ms, so a title that stalls does not come back
	// with a long burst to catch up, while a slow device's retro_run, 100 ms
	// or more apart, still fits a grant on top of what is left of the last.
	static std::atomic<int32_t> s_libretro_ax_budget{0};

	void AXOut_LibretroGrantSamples(int32_t samples)
	{
		constexpr int32_t kCap = 15 * 800; // 250 ms
		int32_t cur = s_libretro_ax_budget.load(std::memory_order_relaxed);
		while (!s_libretro_ax_budget.compare_exchange_weak(cur, std::min(cur + samples, kCap), std::memory_order_relaxed))
			;
	}
#endif

	void AXOut_update()
	{
		g_ax_update_calls.fetch_add(1, std::memory_order_relaxed);
#ifdef RETRO_CORE
		if (s_libretro_ax_budget.load(std::memory_order_relaxed) < AX_SAMPLES_PER_3MS_48KHZ)
			return;

		// The budget says how much audio to make, not how fast. A slow device's
		// retro_run grants 100 ms or more at once, and spent as soon as it
		// arrived that is thirty-odd 3 ms frames back to back - with no time
		// between them for the title's own threads, which is when a streaming
		// voice gets its next buffer. Starved of that, the voice loops what it
		// already has: sco8487's Deus Ex repeating a line ("stand stand
		// stand") while the NPCs wait for it to end. The wall-clock path below
		// keeps frames at least 1.7 ms apart for the same reason, so this one
		// does too - fast enough to catch up on a backlog at nearly twice real
		// time, slow enough to leave the title room between frames.
		constexpr static auto kLibretroMinSpacing = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::microseconds(1700));
		// steady_clock, on every platform: it is monotonic everywhere the core
		// is built - QueryPerformanceCounter on Windows with MSVC and MinGW
		// alike, CLOCK_MONOTONIC with libstdc++, the monotonic clocks with
		// libc++. now_cached() is not: with libstdc++ (Linux, webOS, BSD) it is
		// CLOCK_REALTIME, and a system clock stepped back would have held AX
		// until it caught up with where it had been.
		const auto libretroNow = std::chrono::steady_clock::now();
		static auto s_libretro_last_frame = libretroNow - kLibretroMinSpacing;
		if ((libretroNow - s_libretro_last_frame) < kLibretroMinSpacing)
			return;

		g_ax_update_passed.fetch_add(1, std::memory_order_relaxed);
		if (snd_core::isInitialized() && numQueuedFramesSndGeneric == snd_core::getNumProcessedFrames())
		{
			AXOut_updateDevicePlayState(true);
			snd_core::AXIst_QueueFrame();
			numQueuedFramesSndGeneric++;
			s_libretro_ax_budget.fetch_sub(AX_SAMPLES_PER_3MS_48KHZ, std::memory_order_relaxed);
			s_libretro_last_frame = libretroNow;
		}
		return;
#endif
		constexpr static auto kTimeout = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::milliseconds(((IAudioAPI::kBlockCount * 3) / 4) * (AX_FRAMES_PER_GROUP * 3)));
		constexpr static auto kWaitDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::milliseconds(3));
		constexpr static auto kWaitDurationFast = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::microseconds(2900));
		constexpr static auto kWaitDurationMinimum = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::microseconds(1700));

		// if we haven't buffered any blocks, we will wait less time than usual
		bool additional_blocks_required = false;
		{
			const std::shared_lock lock(g_audioMutex, std::try_to_lock);
			if (lock)
				additional_blocks_required = (g_tvAudio && g_tvAudio->NeedAdditionalBlocks()) || (g_padAudio && g_padAudio->NeedAdditionalBlocks());
		}

		const auto wait_duration = additional_blocks_required ? kWaitDurationFast : kWaitDuration;

		// s_ax_interval_timer increases by the wait period
		// it can lag behind by multiple periods (up to kTimeout) if there is minor stutter in the CPU thread
		// s_last_check is always set to the timestamp at the time of firing
		// it's used to enforce the minimum wait delay (we want to avoid calling AX update in quick succession because other threads may need to do work first) 

		// Windows needs a different clock here, and only Windows. On a MinGW
		// build now_cached falls back to std::chrono::high_resolution_clock,
		// which is libstdc++'s system_clock and ticks with the ~15.6 ms system
		// timer rather than with QPC - a clock that coarse never opens this 3 ms
		// gate on time, so AX queues one 3 ms frame per tick instead of five,
		// which is audio at a fifth of real time. Upstream never meets it: its
		// Windows build is MSVC, where now_cached is QPC by hand.
		//
		// Everywhere else the two are not interchangeable. On Linux - Android
		// included - tick_cached reads CLOCK_MONOTONIC_RAW, which is neither
		// slewed to follow real time nor guaranteed to be in the vDSO, while
		// now_cached is CLOCK_REALTIME. Pacing audio against an unslewed clock
		// drifts against the device's own, which is what this gate exists to
		// avoid, so those platforms keep the clock they had.
#if BOOST_OS_WINDOWS
		static auto s_ax_interval_timer = tick_cached() - kWaitDuration;
		static auto s_last_check = tick_cached();

		const auto now = tick_cached();
#else
		static auto s_ax_interval_timer = now_cached() - kWaitDuration;
		static auto s_last_check = now_cached();

		const auto now = now_cached();
#endif
		const auto diff = (now - s_ax_interval_timer);

		if (diff < wait_duration)
			return;

		g_ax_update_passed.fetch_add(1, std::memory_order_relaxed);

		// handle minimum wait time (1.7MS)
		if ((now - s_last_check) < kWaitDurationMinimum)
			return;
		s_last_check = now;

		// if we're too far behind, skip forward
		if (diff >= kTimeout)
			s_ax_interval_timer = (now - wait_duration);
		else
			s_ax_interval_timer += wait_duration;


		if (snd_core::isInitialized())
		{
			if (numQueuedFramesSndGeneric == snd_core::getNumProcessedFrames())
			{
				AXOut_updateDevicePlayState(true);
				snd_core::AXIst_QueueFrame();
				numQueuedFramesSndGeneric++;
			}
		}
	}

}
