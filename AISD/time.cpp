#include "time.h";

#include <iostream>
#include <chrono>

using namespace std;


chrono::time_point<chrono::high_resolution_clock> MarkTime() {
    return chrono::high_resolution_clock::now();
}


void PrintTime(chrono::time_point<chrono::high_resolution_clock> start,
    chrono::time_point<chrono::high_resolution_clock> end) {

    auto duration = end - start;

    cout << endl << duration.count() << endl;

    auto hours = chrono::duration_cast<chrono::hours>(duration);
    auto minutes = chrono::duration_cast<chrono::minutes>(duration);
    auto seconds = chrono::duration_cast<chrono::seconds>(duration);
    auto milliseconds = chrono::duration_cast<chrono::milliseconds>(duration);
    auto microseconds = chrono::duration_cast<chrono::microseconds>(duration);

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
