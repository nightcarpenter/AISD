#pragma once

#include <chrono>

using namespace std;


chrono::time_point<chrono::high_resolution_clock> MarkTime();

void PrintTime(chrono::time_point<chrono::high_resolution_clock> start,
    chrono::time_point<chrono::high_resolution_clock> end);