#pragma once

void LatteTiming_setCustomVsyncFrequency(sint32 frequency);
void LatteTiming_disableCustomVsyncFrequency();
bool LatteTiming_getCustomVsyncFrequency(sint32& customFrequency);

void LatteTiming_EnableHostDrivenVSync();

#ifdef RETRO_CORE
void LatteTiming_EnableLibretroVSync();
void LatteTiming_TriggerVSync();
bool LatteTiming_IsUsingLibretroVSync();
#endif