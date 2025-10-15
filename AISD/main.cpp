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
    vector<int> x = {4, 12, 18, 2, 5, 19, 18, 4, 3, 88, 13, 1};

    vector<int> y = MergeSortTwo(x);
    
    PrintVector(y);

    return 0;
}
