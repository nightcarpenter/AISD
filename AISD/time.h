#pragma once

#include <chrono>

std::chrono::time_point<std::chrono::high_resolution_clock> MarkTime();

void PrintTime(std::chrono::time_point<std::chrono::high_resolution_clock> start,
    std::chrono::time_point<std::chrono::high_resolution_clock> end);