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

    vector<int> vec1 = { {4, 30, 202, 1254, 1345, 1378, 2098}};
    vector<int> vec2 = { {41, 340, 2020, 1254, 13450, 14378, 26098} };



    time.Start();
    
    cout << GetCommon(vec1, vec2) << endl;

    time.End();
    time.PrintTime();

    return 0;
}
