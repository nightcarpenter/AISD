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


int ThreeSums(const vector<int>& x) {
    int n = x.size();
    int i = 0;
    int j = n - 1;
    int res = 0;
    int sum1 = x[i];
    int sum2 = x[j];

    while (i < j) {
        if (sum1 > sum2) {
            --j;
            sum2 += x[j];
        }
        else if (sum1 < sum2) {
            ++i;
            sum1 += x[i];
        }
        else {
            res = sum1;

            ++i;
            sum1 += x[i];
        }
    }

    return res;
}

// 26. Remove Duplicates from Sorted Array
int RemoveDuplicates(vector<int>& nums) {
    int cnt = 1;
    int i = 1;
    int j = 1;

    while (i < nums.size()) {
        if (nums[i] != nums[i - 1]) {
            nums[j] = nums[i];
            ++cnt;
            ++j;
        }

        ++i;
    }

    return cnt;
}


// 27. Remove Element
int RemoveElement(vector<int>& nums, int val) {
    if (nums.empty()) {
        return 0;
    }

    int i = 0;
    int j = nums.size() - 1;

    while (i <= j) {
        if (nums[i] != val) {
            ++i;
        }
        else {
            while (i < j && nums[j] == val) {
                --j;
            }

            if (i == j) {
                break;
            }
            else {
                nums[i] = nums[j];
                --j;
                ++i;
            }
        }
    }

    return i;
}

// 88. Merge Sorted Array
void MergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = n + m - 1;

    while (k >= 0) {
        if (i < 0 || (j >= 0 && nums2[j] >= nums1[i])) {
            nums1[k--] = nums2[j--];
        }
        else {
            nums1[k--] = nums1[i--];
        }
    }
}

// 283. Move Zeroes
void MoveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = 1;

    while (i < n && j < n) {
        if (nums[i] == 0 && nums[j] != 0) {
            int buf = nums[i];
            nums[i] = nums[j];
            nums[j] = buf;
            ++i;
            ++j;
        }
        else if (nums[i] == 0 && nums[j] == 0) {
            ++j;
        }
        else {
            ++i;
            ++j;
        }
    }
}

// 344. Reverse String
void ReverseString(vector<char>& s) {
    int first = 0;
    int last = s.size() - 1;
    char buf;

    while (last - first > 0) {
        buf = s[first];
        s[first++] = s[last];
        s[last--] = buf;
    }
}

// 349. Intersection of Two Arrays
vector<int> Intersection(const vector<int>& nums1, const vector<int>& nums2) {
    unordered_set<int> s(nums2.begin(), nums2.end());
    vector<int> res;

    for (int element : nums1) {
        if (s.erase(element)) {
            res.push_back(element);
        }
    }

    return res;
}