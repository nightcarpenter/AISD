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
    vector<int> nums1 = { 0, 5, 27, 30, 0, 0, 0, 0, 0 };
    vector<int> nums2 = { -11, -2, 0, 21, 70 };
    MergeSortedArray(nums1, 4, nums2, 5);
    PrintVector(nums1);
    return 0;
}
