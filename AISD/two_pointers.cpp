#include "two_pointers.h"

#include <vector>
#include <iostream>

using namespace std;


vector<int> MergeTwo(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    int i = 0;
    int j = 0;
    while (i < a.size() || j < b.size()) {
        if (j >= b.size() || (i < a.size() && a[i] <= b[j])) {
            c.push_back(a[i]);
            ++i;
        }
        else {
            c.push_back(b[j]);
            ++j;
        }
    }

    return c;
}


vector<int> MergeSortTwo(const vector<int>& x) {
    int n = x.size();

    if (n <= 1) {
        return x;
    }

    int mid = (n + 1) / 2;

    vector<int> a = MergeSortTwo(vector<int>(x.begin(), x.begin() + mid));
    vector<int> b = MergeSortTwo(vector<int>(x.begin() + mid, x.end()));

    return MergeTwo(a, b);
}


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


int TwoPointers2(const vector<int>& a) {
    int res = 0;
    int j = 0;

    for (int i = 0; i < a.size(); ++i) {
        while (j < a.size() && (a[j] - a[i]) <= 5) {
            ++j;
        }

        res = max(res, j - i);
    }

    return res;
}