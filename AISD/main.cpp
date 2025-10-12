#include "functions.h"
#include "n_square_sorts.h"
#include "merge_sort.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>

using namespace std;


int main() {
    vector<int> a = CreateRandomVector(10'000);

    PrintVector(vector<int>(a.begin(), a.begin() + 3));
    PrintVectorIsSorted(a);

    MergeSortVector(a);

    PrintVector(vector<int>(a.begin(), a.begin() + 3));
    PrintVectorIsSorted(a);

    return 0;
}
