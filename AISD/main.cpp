#include "functions.h"
#include "time.h"
#include "n_square_sorts.h"
#include "merge_sort.h"
#include "two_pointers.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>
#include <chrono>
#include <cassert>

using namespace std;


int main() {
    vector<int> a = { 4, 20, 13, 40, 50 };
    PrintVector(a);

    MergeSortVector(a);
    PrintVector(a);

    int t = 8;

    int res = TwoPointers2(a);

    cout << endl;
    cout << res << endl;

    assert(TwoPointers2({ 4, 4, 4, 4, 4 }) == 5);
    assert(TwoPointers2({ 1, 2, 3, 4, 5 }) == 5);
    assert(TwoPointers2({ 3, 4, 5, 12, 20 }) == 3);
    assert(TwoPointers2({ 4, 13, 24, 40, 50 }) == 1);
    assert(TwoPointers2({ 1, 2, 2, 2, 3, 4, 4, 6 }) == 8);

    return 0;
}
