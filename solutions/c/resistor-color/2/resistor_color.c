#include "resistor_color.h"
#include <stdint.h>
#include <string.h>

const resistor_band_t arr[] = {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
};

int n = sizeof(arr) / sizeof(arr[0]);

uint16_t color_code(resistor_band_t code) {
    return (uint16_t)code;
}

const resistor_band_t* colors() {
    return arr;
}