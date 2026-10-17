#include "Cafe/OS/RPL/COSModule.h"

void swkbd_render(bool mainWindow);
bool swkbd_hasKeyboardInputHook();
void swkbd_keyInput(uint32 keyCode);
std::wstring swkbd_getInputText();

namespace swkbd
{
	COSModule* GetModule();
}
