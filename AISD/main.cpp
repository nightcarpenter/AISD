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
    vector<vector<int>> grid = { {4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3} };

    Time time;

    time.Start();
    
    cout << CountNegatives(grid) << endl;

    time.End();
    time.PrintTime();

    return 0;
}
