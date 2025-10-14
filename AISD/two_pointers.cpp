#include "two_pointers.h"

#include <vector>
#include <iostream>

using namespace std;

int TwoPointers1(const vector<int>& a, int t) {
    int s = 0;
    int res = 0;
    int j = 0;

    for (int i = 0; i < a.size(); ++i) {
        s += a[i];

        while (s > t) {
            s -= a[j];
            ++j;
        }

        res = max(res, i - j + 1);
    }

    return res;
}