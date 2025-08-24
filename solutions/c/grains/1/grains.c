#include "grains.h"
#define MAX_SQUARES 64

// calculate no. of grains on given square; input = square number, output no. of grains = 2^(n-1)
uint64_t square(uint8_t index) {
    uint64_t square_grains = 1;
    if (index < 1 || index > MAX_SQUARES) {
        return 0;
    }
    if (index == 1) {
        return square_grains;
    }
    for (int i = 2; i <= index; i++) {
        square_grains *= 2;
    }
    return square_grains;
}

// total no. of grains on the chessboard
uint64_t total(void) {
    uint64_t sum = 0;
    for (int i = 1; i <= MAX_SQUARES; i++) {
        sum += square(i);
    }
    return sum;
}