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