#include "resistor_color_duo.h"

//need a UINT16
uint16_t color_code(resistor_band_t bands[]) {
    int result = 0;
    if (bands[0] >= 0) {
        result += 10*bands[0];
    }
    if (bands[1] >= 0) {
        result += bands[1];
    }
    return result;
}