#include "binary_search.h"

#include <iostream>
#include <vector>
#include <string>

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

// 33. Search in Rotated Sorted Array
int SearchInPartArray(const vector<int>& nums, int l, int r, int target) {
    int m = (l + r) / 2;
    while (r - l > 1) {
        nums[m] <= target ? l = m : r = m;
        m = (l + r) / 2;
    }

    return nums[l] == target ? l : -1;
}

int Search(const vector<int>& nums, int target) {
    int last = nums[nums.size() - 1];
    int l = 0;
    int r = nums.size();
    int m = (l + r) / 2;

    if (last >= nums[0]) {
        return SearchInPartArray(nums, l, r, target);
    }

    while (r - l > 1) {
        nums[m] > last ? l = m : r = m;
        m = (l + r) / 2;
    }

    if (target > last) {
        return SearchInPartArray(nums, 0, l + 1, target);
    }
    else {
        return SearchInPartArray(nums, r, nums.size(), target);
    }
}

// 852. Peak Index in a Mountain Array
int PeakIndexInMountainArray(vector<int>& arr) {
    int l = 0;
    int r = arr.size();
    int m = (l + r) / 2;

    while (r - l > 1) {
        arr[m] > arr[m - 1] ? l = m : r = m;
        m = (l + r) / 2;
    }

    return l;
}

// 74. Search a 2D Matrix
bool SearchMatrix(vector<vector<int>>& matrix, int target) {
    int x = matrix.size() - 1;
    int y = matrix[0].size() - 1;

    int l = 0;
    int r = x + 1;
    int m = (l + r) / 2;

    while (r - l > 1) {
        if (matrix[m][y] < target) {
            l = m;
        }
        else if (matrix[m][0] > target) {
            r = m;
        }
        else {
            l = m;
            break;
        }
        m = (l + r) / 2;

    }

    int row = l;
    if (row < 0 || row > x) {
        return false;
    }

    l = 0;
    r = y + 1;
    m = (l + r) / 2;

    while (r - l > 1) {
        matrix[row][m] <= target ? l = m : r = m;
        m = (l + r) / 2;
    }
    int column = l;

    return matrix[row][column] == target;
}

// 658. Find K Closest Elements
vector<int> FindClosestElements(const vector<int>& arr, int k, int x) {
    int l = 0;
    int r = arr.size() - k;

    while (l < r) {
        int m = (l + r) / 2;
        if (x - arr[m] > arr[m + k] - x) {
            l = m + 1;
        }
        else {
            r = m;
        }
    }

    return vector<int>(arr.begin() + l, arr.begin() + l + k);
}
