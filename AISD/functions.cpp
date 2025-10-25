#include "functions.h"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <random>

using namespace std;


vector<int> CreateRandomVector(size_t size) {
    vector<int> numbers(size);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, INT_MAX);
    std::generate(numbers.begin(), numbers.end(), [&]() { return dist(gen); });
    return numbers;
}





bool CheckSortedVector(const vector<int>& vec) {
    bool sorted_flag = true;
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i - 1] > vec[i]) {
            sorted_flag = false;
        }
    }
    return sorted_flag;
}


void PrintVectorIsSorted(const vector<int>& vec) {
    if (CheckSortedVector(vec)) {
        cout << "Vector is sorted!" << endl;
    }
    else {
        cout << "Not sorted..." << endl;
    }
}


void PrintVector(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << "  ";
        if (i > 5) {
            cout << "...";
            break;
        }
    }
    cout << endl;
}
