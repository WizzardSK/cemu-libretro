#pragma once

#include <string>

// Sampling profiler (branch flamegraph): see LibretroProfiler.cpp
void LibretroProfiler_Start(const std::string& out_path);
void LibretroProfiler_Stop();
