#include <signal.h>
#ifndef __ANDROID__
#include <execinfo.h>
#endif

// glibc only exposes TRAP_HWBKPT from 2.28 onwards, and the buildbot's x86_64
// image is older than that. The kernel constant it stands for is fixed by the
// uapi headers, so define it rather than lose hardware breakpoints there.
#ifndef TRAP_HWBKPT
#define TRAP_HWBKPT 4
#endif
#include <string.h>
#include <string>
#include "config/CemuConfig.h"
#include "util/helpers/StringHelpers.h"
#include "Cafe/HW/Espresso/PPCState.h"
#include "Cafe/HW/Espresso/PPCCallback.h"
#include "ExceptionHandler.h"

#include "Cafe/HW/Espresso/Debugger/GDBStub.h"
#include "Cafe/HW/Espresso/Debugger/GDBBreakpoints.h"

#if BOOST_OS_LINUX
#include "ELFSymbolTable.h"
#endif

#if BOOST_OS_LINUX
void DemangleAndPrintBacktrace(char** backtrace, size_t size)
{
	ELFSymbolTable symTable;
	for (char** i = backtrace; i < backtrace + size; i++)
	{
		std::string_view traceLine{*i};

		// basic check to see if the backtrace line matches expected format
		size_t parenthesesOpen = traceLine.find_last_of('(');
		size_t parenthesesClose = traceLine.find_last_of(')');
		size_t offsetPlus = traceLine.find_last_of('+');
		if (!parenthesesOpen || !parenthesesClose || !offsetPlus ||
			 offsetPlus < parenthesesOpen || offsetPlus > parenthesesClose)
		{
			// fall back to default string
            CrashLog_WriteLine(traceLine);
			continue;
		}

		// attempt to resolve symbol from regular symbol table if missing from dynamic symbol table
		uint64 newOffset = -1;
		std::string_view symbolName = traceLine.substr(parenthesesOpen+1, offsetPlus-parenthesesOpen-1);
		if (symbolName.empty())
		{
			uint64 symbolOffset = StringHelpers::ToInt64(traceLine.substr(offsetPlus+1,offsetPlus+1-parenthesesClose-1));
			symbolName = symTable.OffsetToSymbol(symbolOffset, newOffset);
		}

        CrashLog_WriteLine(traceLine.substr(0, parenthesesOpen+1), false);

        CrashLog_WriteLine(boost::core::demangle(symbolName.empty() ? "" : symbolName.data()), false);

		// print relative or existing symbol offset.
        CrashLog_WriteLine("+", false);
		if (newOffset != -1)
		{
            CrashLog_WriteLine(fmt::format("0x{:x}", newOffset), false);
            CrashLog_WriteLine(traceLine.substr(parenthesesClose));
		}
		else
		{
            CrashLog_WriteLine(traceLine.substr(offsetPlus+1));
		}
	}
}
#endif

// handle signals that would dump core, print stacktrace and then dump depending on config
void handlerDumpingSignal(int sig, siginfo_t *info, void *context)
{
#if defined(ARCH_X86_64) && BOOST_OS_LINUX
	// Check for hardware breakpoints
	if (info->si_signo == SIGTRAP && info->si_code == TRAP_HWBKPT)
	{
		uint64 dr6 = _ReadDR6();
		g_gdbstub->HandleAccessException(dr6);
		return;
	}
#endif

    if(!CrashLog_Create())
        return; // give up if crashlog was already created

#if defined(__linux__) && defined(__aarch64__)
	// backtrace() cannot unwind past the signal frame here, so record the
	// registers that actually say where this came from: lr is the return
	// address of the call that faulted.
	{
		const mcontext_t& mc = static_cast<ucontext_t*>(context)->uc_mcontext;
		CrashLog_WriteLine(fmt::format("fault={:#x} pc={:#x} lr={:#x} sp={:#x}",
			(uint64)(uintptr_t)(info ? info->si_addr : nullptr), (uint64)mc.pc,
			(uint64)mc.regs[30], (uint64)mc.sp));
	}
#endif

	// Written here for the same reason as the registers: the host backtrace
	// below can fault and take the rest of the report with it, and on a crash
	// that came out of emulated code this is the part that says where.
	if (PPCInterpreter_t* hCPU = PPCInterpreter_getCurrentInstance())
	{
		CrashLog_WriteLine(fmt::format("guest: IP {:08x} LR {:08x}",
			hCPU->instructionPointer, (uint32)hCPU->spr.LR));
	}
	else
	{
		CrashLog_WriteLine("guest: no PPC instance on this thread");
	}

    char* sigName = strsignal(sig);
	if (sigName)
	{
		printf("%s!\n", sigName);
	}
	else
	{
		// should never be the case
		printf("Unknown core dumping signal!\n");
	}

	void* backtraceArray[128];
	size_t size;

	// get void*'s for all entries on the stack
#ifdef __ANDROID__
	// bionic ships no execinfo.h - no backtrace() there.
	size = 0;
#else
	size = backtrace(backtraceArray, 128);
#endif
    // replace the deepest entry with the actual crash address
#if defined(ARCH_X86_64) && BOOST_OS_LINUX > 0
    ucontext_t *uc = (ucontext_t *)context;
    backtraceArray[0] = (void *)uc->uc_mcontext.gregs[REG_RIP];
#endif

    CrashLog_WriteLine(fmt::format("Error: signal {}:", sig));

#if defined(__ANDROID__)
	CrashLog_WriteLine("Backtrace unavailable on Android");
#elif BOOST_OS_LINUX
	char** symbol_trace = backtrace_symbols(backtraceArray, size);

	if (symbol_trace)
	{
        DemangleAndPrintBacktrace(symbol_trace, size);
		free(symbol_trace);
	}
	else
	{
        CrashLog_WriteLine("Failed to read backtrace");
	}
#else
	backtrace_symbols_fd(backtraceArray, size, STDERR_FILENO);
#endif

    std::cerr << fmt::format("\nStacktrace and additional info written to:") << std::endl;
    std::cerr << cemuLog_GetLogFilePath().generic_string() << std::endl;

    CrashLog_SetOutputChannels(false, true);
    ExceptionHandler_LogGeneralInfo();
    CrashLog_SetOutputChannels(true, true);

	if (GetConfig().crash_dump == CrashDump::Enabled)
	{
		// reset signal handler to default and re-raise signal to dump core
		signal(sig, SIG_DFL);
		raise(sig);
		return;
	}
	// exit process ignoring all issues
	_Exit(1);
}

void handler_SIGINT(int sig)
{
	/*
	 * Received when pressing CTRL + C in a console
	 * Ideally should be exiting cleanly after saving settings but currently
	 * there's no clean exit pathway (at least on linux) and exiting the app
	 * by any mean ends up with a SIGABRT from the standard library destroying
	 * threads.
	 */
	_Exit(0);
}

void ExceptionHandler_Init()
{
	struct sigaction action;
	action.sa_flags = 0;
	sigfillset(&action.sa_mask); // don't allow signals to be interrupted

	action.sa_handler = handler_SIGINT;
	sigaction(SIGINT, &action, nullptr);
	sigaction(SIGTERM, &action, nullptr);

    action.sa_flags = SA_SIGINFO;
    action.sa_handler = nullptr;
	action.sa_sigaction = handlerDumpingSignal;
	sigaction(SIGABRT, &action, nullptr);
	sigaction(SIGBUS, &action, nullptr);
	sigaction(SIGFPE, &action, nullptr);
	sigaction(SIGILL, &action, nullptr);
	sigaction(SIGIOT, &action, nullptr);
	sigaction(SIGQUIT, &action, nullptr);
	sigaction(SIGSEGV, &action, nullptr);
	sigaction(SIGSYS, &action, nullptr);
	sigaction(SIGTRAP, &action, nullptr);
}
