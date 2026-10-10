#pragma once

void KeyCache_Prepare();

uint8* KeyCache_GetAES128(sint32 index);

// A disc key kept beside its image as <image name>.key, the way a console has
// it with its disc: 16 bytes, or 32 hex digits as text. Added to the key
// cache (once), so the image is found without its key in keys.txt.
void KeyCache_AddKeyFile(const fs::path& keyPath);
