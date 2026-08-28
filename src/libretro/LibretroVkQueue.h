#pragma once

#include <shared_mutex>

/*
 * The frontend's queue lock.
 *
 * Under the libretro Vulkan interface the core does not own its VkQueue - the
 * frontend hands over the one it uses itself, and RetroArch submits its own
 * present and overlay work to it from its own thread. Vulkan requires queue
 * submission to be externally synchronised, and the interface provides
 * lock_queue/unlock_queue for exactly that. Submitting without them races the
 * frontend inside the driver, which on Mali shows up as a null dereference on
 * the driver's own worker thread, with nothing of ours in the backtrace.
 */
namespace LibretroVkQueue
{
	// The retro_hw_render_interface_vulkan, or nullptr when not running under a
	// libretro frontend. Taken as void* so the renderer needs no libretro
	// headers. Safe to call from the frontend thread while a submit is in
	// flight.
	void SetInterface(const void* hwRenderInterfaceVulkan);

	// Holds the frontend's queue lock for as long as it is in scope, and does
	// nothing at all when there is no interface. The shared lock is what stops
	// the interface being retired between taking the lock and releasing it -
	// releasing through a different interface than it was taken from is how
	// this goes wrong quietly.
	class Lock
	{
	public:
		Lock();
		~Lock();
		Lock(const Lock&) = delete;
		Lock& operator=(const Lock&) = delete;

	private:
		std::shared_lock<std::shared_timed_mutex> m_guard;
		const void* m_iface;
	};
} // namespace LibretroVkQueue
