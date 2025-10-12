#include "functions.h"
#include "time.h";
#include "n_square_sorts.h"
#include "merge_sort.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <chrono>

using namespace std;


int main() {
    vector<int> a = CreateRandomVector(100'000);

    PrintVector(vector<int>(a.begin(), a.begin() + 3));
    PrintVectorIsSorted(a);

    auto time_start = MarkTime();
    MergeSortVector(a);
    auto time_end = MarkTime();

    PrintVector(vector<int>(a.begin(), a.begin() + 3));
    PrintVectorIsSorted(a);

    PrintTime(time_start, time_end);

    return 0;
}
