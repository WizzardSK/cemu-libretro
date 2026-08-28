#pragma once

/*
 * A one-line note about what the thread was doing, printed by the crash
 * handler.
 *
 * It exists for crashes that land inside a driver, where the backtrace names
 * the vendor blob and stops being useful: seven frames of libGLES_mali say the
 * Mali driver faulted, but not which call we made into it. The string is a
 * literal, so setting it is a single store and there is nothing to free.
 */
namespace Breadcrumb
{
	extern thread_local const char* t_current;

	// Scoped so the note does not outlive the call it describes and go stale.
	class Scope
	{
	public:
		explicit Scope(const char* what) : m_previous(t_current) { t_current = what; }
		~Scope() { t_current = m_previous; }
		Scope(const Scope&) = delete;
		Scope& operator=(const Scope&) = delete;
	private:
		const char* m_previous;
	};
} // namespace Breadcrumb

// Two levels so __LINE__ expands before pasting; without it every use in a
// scope would declare the same name.
#define BREADCRUMB_CAT2(a, b) a##b
#define BREADCRUMB_CAT(a, b) BREADCRUMB_CAT2(a, b)
#define BREADCRUMB(what) Breadcrumb::Scope BREADCRUMB_CAT(_breadcrumb_, __LINE__)(what)
