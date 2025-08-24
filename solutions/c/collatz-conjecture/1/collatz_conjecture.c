#include "collatz_conjecture.h"

int steps(int start) {
    int step = 0;
    if (start == 1) {
        return 0;
    }
    else if (start < 1) {
        return ERROR_VALUE;
    }
    while (start != 1) {
        if (start % 2 == 0) {
            start /= 2;
            step++;
        }
        else if (start % 2 != 0) {
            start = start * 3 + 1;
            step++;
        }
    }
    return step;
}