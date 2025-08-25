#include "hamming.h"
#include <string.h>

// edge case - check if sequences are same length

int compute(const char *lhs, const char *rhs) {
    int hd = 0;
    if (strlen(lhs) != strlen(rhs)) {
        return -1;
    }
    while (*lhs != '\0') {
        if (*lhs != *rhs) {
            hd++;
        }
        lhs++;
        rhs++;
    }
    return hd;
}