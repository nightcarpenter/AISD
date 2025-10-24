#include "random_leetcode.h"
#include "functions.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


// 67. Add Binary
string AddBinary(string a, string b) {
    string result;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        result.push_back('0' + (sum % 2));
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());
    return result;
}

// 1385. Find the Distance Value Between Two Arrays (n + m) * log(m)
int FindTheDistanceValue(const vector<int>& arr1, const vector<int>& arr2, int d) {
    vector<int> sorted_arr2 = arr2;
    sort(sorted_arr2.begin(), sorted_arr2.end());

    int cnt = 0;
    for (int i = 0; i < arr1.size(); ++i) {
        int l = 0;
        int r = sorted_arr2.size();
        int m = l + (r - l) / 2;

        while (r - l > 1) {
            if (arr1[i] > sorted_arr2[m]) {
                l = m;
            }
            else {
                r = m;
            }

            m = l + (r - l) / 2;
        }

        int k;
        if (r >= sorted_arr2.size() || abs(sorted_arr2[l] - arr1[i]) <= abs(sorted_arr2[r] - arr1[i])) {
            k = l;
        }
        else {
            k = r;
        }

        if (abs(arr1[i] - sorted_arr2[k]) > d) {
            cnt += 1;
        }
    }

    return cnt;
}

// 1385. Find the Distance Value Between Two Arrays (n * m)
int FindTheDistanceValue2(const vector<int>& arr1, const vector<int>& arr2, int d) {
    int cnt = 0;
    for (int i = 0; i < arr1.size(); ++i) {
        ++cnt;
        for (int j = 0; j < arr2.size(); ++j) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                --cnt;
                break;
            }
        }
    }

    return cnt;
}

// 1351. Count Negative Numbers in a Sorted Matrix
int CountNegatives(vector<vector<int>>& grid) {
    int m = grid[0].size();
    int n = grid.size();

    int cnt = 0;
    int j = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (j == m) {
            break;
        }

        while (j < m) {
            if (grid[i][j] < 0) {
                cnt += m - j;
                break;
            }

            ++j;
        }
    }

    return cnt;
}