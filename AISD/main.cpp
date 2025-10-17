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
using namespace std::chrono;


bool isBadVersion(int k) {
    return (k < 1000000000) ? false: true;
}


int firstBadVersion(int n) {
    int i = 1;
    int j = n;
    int k = (i + j) / 2;


    while (true) {
        if (isBadVersion(k)) {
            if (!isBadVersion(k - 1)) {
                break;
            }
            j = k;
        }
        else {
            i = k;
        }

        if (k == i) {
            ++k;
        }
        else if (k == j) {
            --k;
        }
        else {
            k = (i + j) / 2;
        }
        
    }

    return k;
}


int main() {
    int k = firstBadVersion(2000000000);
    cout << k << endl;

    return 0;
}
