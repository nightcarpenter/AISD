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

    cout << SearchInsert({ 1, 3, 5, 6, 8, 20 }, 6) << endl;

    time.End();
    time.PrintTime();

    return 0;
}
