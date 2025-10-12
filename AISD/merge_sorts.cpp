#include "merge_sort.h"

#include <vector>

using namespace std;


vector<int> Merge(vector<int> vec1, vector<int> vec2) {
    vector<int> vec;
    size_t i = 0;
    size_t j = 0;
    while (i < vec1.size() || j < vec2.size()) {
        if (j >= vec2.size() || (i < vec1.size() && vec1[i] < vec2[j])) {
            vec.push_back(vec1[i]);
            ++i;
        }
        else {
            vec.push_back(vec2[j]);
            ++j;
        }
    }

    return vec;
}


vector<int> SortMerge(const vector<int>& vec) {
    size_t n = vec.size();
    if (n <= 1) {
        return vec;
    }

    int mid = (vec.size() + 1) / 2;
    vector<int> vec1 = SortMerge(vector<int>(vec.begin(), vec.begin() + mid));
    vector<int> vec2 = SortMerge(vector<int>(vec.begin() + mid, vec.end()));

    return Merge(vec1, vec2);
}


void MergeSortVector(vector<int>& vec) {
    vec = SortMerge(vec);
}
