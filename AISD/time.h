#pragma once

#include <chrono>


class Time {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_;
    std::chrono::time_point<std::chrono::high_resolution_clock> end_;
    bool start_flag_ = false;
    bool end_flag_ = false;

public:
    void Start();
    void End();
    void PrintTime();
};