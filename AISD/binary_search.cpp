#include "binary_search.h"

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