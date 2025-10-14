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
    vector<int> a = {1, 2, 30, 1, 15, 2, 3, 14, 2, 7, 1, 1, 8, 1, 2, 16, 2, 11, 20, 7, 2, 1, 4};
    PrintVector(a);

    int t = 8;

    int res = TwoPointers1(a, t);

    cout << endl;
    cout << res << endl;

    assert(TwoPointers1({ 1, 2, 3, 4, 5 }, 6) == 3);
    assert(TwoPointers1({ 12, 20, 3, 4, 5 }, 3) == 1);
    assert(TwoPointers1({ 4, 20, 13, 4, 5 }, 3) == 0);
    assert(TwoPointers1({ 1, 2, 30, 4, 5, 1, 2, 1, 1, 6, 5 }, 8) == 4);

    return 0;
}
