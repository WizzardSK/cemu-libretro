#pragma once

void LatteOverlay_init();
void LatteOverlay_render(bool pad_view);
bool LatteOverlay_wantsToDraw();
void LatteOverlay_updateStats(double fps, sint32 drawcalls, sint32 fastDrawcalls);

void LatteOverlay_pushNotification(const std::string& text, sint32 duration);