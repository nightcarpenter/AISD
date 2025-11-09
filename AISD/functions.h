#pragma once

#include <vector>


std::vector<int> CreateRandomVector(size_t size);

std::vector<int> CreateRandomVectorFast(size_t size);

bool CheckSortedVector(const std::vector<int>& vec);

void PrintVectorIsSorted(const std::vector<int>& vec);

void PrintVector(const std::vector<int>& vec);
void PrintVector(const std::vector<char>& vec);
