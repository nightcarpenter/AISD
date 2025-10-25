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

    vector<int> vec1 = CreateRandomVector(10);
    vector<int> vec2 = CreateRandomVector(10'000'000);

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    time.Start();
    cout << GetCommon(vec1, vec2) << endl;
    time.End();
    time.PrintTime();
    cout << "\n" << endl;

    time.Start();
    cout << GetCommon2(vec1, vec2) << endl;
    time.End();
    time.PrintTime();

    return 0;
}
