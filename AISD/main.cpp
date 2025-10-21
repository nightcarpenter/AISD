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

    vector<vector<int>> a{ {2, 4, 6}, {9, 80, 150}, {309, 1023, 3000} };

    cout << SearchMatrix(a, 6) << endl;

    time.End();
    time.PrintTime();

    return 0;
}
