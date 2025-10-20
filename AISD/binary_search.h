#pragma once

#include <vector>

// 278. First Bad Version
bool IsBadVersion(int k);
int FirstBadVersion(int n);

// 367. Valid Perfect Square
bool IsGoodSquere(unsigned k, unsigned target);
bool IsPerfectSquare(int num);

// 35. Search Insert Position
bool IsLessThenTarget(int x, int target);
int SearchInsert(const std::vector<int>& nums, int target);

// 69. Sqrt(x)
bool IsSquereLessTarget(unsigned k, unsigned target);
int MySqrt(int x);

// 33. Search in Rotated Sorted Array
int SearchInPartArray(const std::vector<int>& nums, int l, int r, int target);
int Search(const std::vector<int>& nums, int target);

// 852. Peak Index in a Mountain Array
int PeakIndexInMountainArray(std::vector<int>& arr);