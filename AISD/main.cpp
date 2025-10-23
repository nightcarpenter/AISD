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
    vector<int> arr1 = CreateRandomVector(10);
    vector<int> arr2 = CreateRandomVector(100'000'000);
    int k = 2'000;

    Time time;

    time.Start();
    cout << "n * m" << endl;
    cout << "ans: " << FindTheDistanceValue2(arr1, arr2, k) << endl;

    time.End();
    time.PrintTime();

    time.Start();
    cout << "\n\n(n + m) * log(m)" << endl;
    cout << "ans: " << FindTheDistanceValue(arr1, arr2, k) << endl;
    time.End();
    time.PrintTime();

    return 0;
}
