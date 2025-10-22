#include "functions.h"
#include "time.h"
#include "n_square_sorts.h"
#include "merge_sort.h"
#include "two_pointers.h"
#include "binary_search.h"
#include "random_leetcode.h"

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

    //PrintVector(FindClosestElements({ 1,1,2,2,2,2,2,3,3 }, 3, 3));

    cout << AddBinary("1010", "1001") << endl;

    time.End();
    time.PrintTime();

    return 0;
}
