#include "functions.h"
#include "time.h"
#include "n_square_sorts.h"
#include "merge_sort.h"
#include "two_pointers.h"
#include "binary_search.h"

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
    Time time;
    time.Start();

    cout << Search({5, 6, 8, 9, 12, 16, 1, 3, 4}, 9) << endl;

    time.End();
    time.PrintTime();

    return 0;
}
