#include "Cafe/OS/RPL/COSModule.h"

namespace H264
{
	COSModule* GetModule();
	// Drops the decoder sessions of a title that has stopped. See the comment
	// on the definition; called from CafeSystem::ShutdownTitle.
	void ResetToDefaultState();
}