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

    vector<int> vec1{1, 1, 1, 2, 2, 3, 3, 3, 7, 8, 8, 8, 9};

    time.Start();
    cout << RemoveDuplicates(vec1) << endl;
    time.End();
    time.PrintTime();

    PrintVector(vec1);

    return 0;
}
