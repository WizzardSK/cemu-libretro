#pragma once
#include "Cafe/OS/RPL/COSModule.h"

namespace nn 
{
	namespace erreula
	{
		void render(bool mainWindow);
		// Whether render() would draw anything, asked before the present path
		// sets up an imgui frame for it.
		bool hasVisibleDialog();

		COSModule* GetModule();
	}
}