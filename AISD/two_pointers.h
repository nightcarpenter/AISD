#pragma once

#include <vector>
#include <set>
#include <unordered_set>


std::vector<int> MergeTwo(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> MergeSortTwo(const std::vector<int>& x);

int TwoPointers1(const std::vector<int>& a, int t);

int TwoPointers2(const std::vector<int>& a);

int ThreeSums(const std::vector<int>& x);

// 26. Remove Duplicates from Sorted Array
int RemoveDuplicates(std::vector<int>& nums);

// 27. Remove Element
int RemoveElement(std::vector<int>& nums, int val);

// 88. Merge Sorted Array
void MergeSortedArray(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

// 283. Move Zeroes
void MoveZeroes(std::vector<int>& nums);

// 344. Reverse String
void ReverseString(std::vector<char>& s);

// 349. Intersection of Two Arrays
std::vector<int> Intersection(const std::vector<int>& nums1, const std::vector<int>& nums2);