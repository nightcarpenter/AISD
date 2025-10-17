#include "functions.h"
#include "time.h"
#include "n_square_sorts.h"
#include "merge_sort.h"
#include "two_pointers.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <chrono>
#include <cassert>

using namespace std;
using namespace std::chrono;


int main() {
    time_point<high_resolution_clock> start = MarkTime();

    vector<int> x = { 1, 3, 4, 1, 4, 1, 7 };

    int res = ThreeSums(x);
    cout << endl;
    cout << res << endl;

    assert(ThreeSums({1, 3, 1, 1, 4}) == 5);
    assert(ThreeSums({ 1, 3, 2, 1, 4 }) == 4);
    assert(ThreeSums({ 4, 1, 2 }) == 0);

    time_point<high_resolution_clock> end = MarkTime();

    PrintTime(start, end);

    return 0;
}
