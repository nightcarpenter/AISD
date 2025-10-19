#include "binary_search.h"

#include <vector>

using namespace std;


// 278. First Bad Version
bool IsBadVersion(int k) {
    return (k < 1000000000) ? false : true;
}

int FirstBadVersion(int n) {
    int i = 1;
    int j = n;
    int k = (i + j) / 2;

    while (true) {
        if (IsBadVersion(k)) {
            if (!IsBadVersion(k - 1)) {
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


// 367. Valid Perfect Square
bool IsGoodSquere(unsigned k, unsigned target) {
    return k * k <= target;
}

bool IsPerfectSquare(int num) {
    unsigned l = 1;
    unsigned r = 256 * 256;

    while (r - l > 1) {
        unsigned m = (l + r) / 2;
        if (IsGoodSquere(m, num)) {
            l = m;
        }
        else {
            r = m;
        }
    }

    return (l * l == num) ? true : false;
}

// 35. Search Insert Position
bool IsLessThenTarget(int x, int target) {
    return x <= target;
}

int SearchInsert(const vector<int>& nums, int target) {
    if (target < nums[0]) {
        return 0;
    }

    int l = 0;
    int r = nums.size();
    int m = (l + r) / 2;

    while (r - l > 1) {
        if (IsLessThenTarget(nums[m], target)) {
            l = m;
        }
        else {
            r = m;
        }

        m = (l + r) / 2;
    }

    return (nums[l] == target) ? l : r;
}

// 69. Sqrt(x)
bool IsSquereLessTarget(unsigned k, unsigned target) {
    return k * k <= target;
}

int MySqrt(int x) {
    unsigned l = 0;
    unsigned r = 46341;
    unsigned m = (l + r) / 2;

    while (r - l > 1) {
        IsSquereLessTarget(m, x) ? l = m : r = m;
        m = (r + l) / 2;
    }

    return l;
}