#include "time.h"

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;


void Time::Start() {
    start_ = high_resolution_clock::now();
    start_flag_ = true;
}

void Time::End() {
    end_ = high_resolution_clock::now();
    end_flag_ = true;
}


void Time::PrintTime() {
    auto duration = end_ - start_;

    auto hours = duration_cast<chrono::hours>(duration);
    auto minutes = duration_cast<chrono::minutes>(duration);
    auto seconds = duration_cast<chrono::seconds>(duration);
    auto milliseconds = duration_cast<chrono::milliseconds>(duration);
    auto microseconds = duration_cast<chrono::microseconds>(duration);

    cout << endl;
    cout << "Execution time: ";

    if (duration >= 1h) {
        cout << hours.count() << " hours ";
    }
    if (duration >= 1min) {
        cout << minutes.count() % 60 << " min ";
    }
    if (duration >= 1s) {
        cout << seconds.count() % 60 << " sec ";
    }
    if (duration >= 1ms) {
        cout << milliseconds.count() % 1000 << " millisec ";
    }
    cout << microseconds.count() % 1000 << " microsec ";

    cout << endl;
}
