#include "n_square_sorts.h"

#include <vector>
#include <cmath>

using namespace std;


void SortInsert(vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        size_t j = i;
        while (j > 0 && vec[j - 1] > vec[j]) {
            int x = vec[j - 1];
            vec[j - 1] = vec[j];
            vec[j] = x;

            j--;
        }

    }
}


void SortBubble(vector<int>& vec) {
    for (size_t i = vec.size() - 1; i > 0; i--) {
        for (size_t j = 0; j < i; j++) {
            if (vec[j] > vec[j + 1]) {
                int x = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = x;
            }
        }
    }
}


void SortInsertModern(vector<int>& vec) {
    size_t n = vec.size();
    for (size_t i = 0; i < n; ++i) {
        int minimum = vec[i];
        size_t min_j = i;
        for (size_t j = i + 1; j < n; ++j) {
            if (vec[j] < minimum) {
                minimum = vec[j];
                min_j = j;
            }
        }

        int x = vec[i];
        vec[i] = vec[min_j];
        vec[min_j] = x;
    }
}
