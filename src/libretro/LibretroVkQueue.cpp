#include "LibretroVkQueue.h"

#include <mutex>

#include "libretro.h"
#include "libretro_vulkan.h"

namespace LibretroVkQueue
{
	namespace
	{
		// Written by the frontend thread (context_reset, and again every frame
		// in retro_run), read by the GPU thread on every submit.
		const retro_hw_render_interface_vulkan* s_iface = nullptr;
		std::shared_timed_mutex s_mutex;
	} // namespace

	void SetInterface(const void* hwRenderInterfaceVulkan)
	{
		std::unique_lock<std::shared_timed_mutex> guard(s_mutex);
		s_iface = static_cast<const retro_hw_render_interface_vulkan*>(hwRenderInterfaceVulkan);
	}

	Lock::Lock() : m_guard(s_mutex), m_iface(nullptr)
	{
		const retro_hw_render_interface_vulkan* iface = s_iface;
		// Older frontends leave these null even though they hand over a queue,
		// so both have to be there before either is called.
		if (iface && iface->lock_queue && iface->unlock_queue)
		{
			iface->lock_queue(iface->handle);
			m_iface = iface;
		}
	}

	Lock::~Lock()
	{
		if (m_iface)
		{
			const auto* iface = static_cast<const retro_hw_render_interface_vulkan*>(m_iface);
			iface->unlock_queue(iface->handle);
		}
	}
} // namespace LibretroVkQueue
