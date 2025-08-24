#include "darts.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

uint8_t score(coordinate_t landing_position) {
    uint8_t point;
    if (sqrt((landing_position.x*landing_position.x)+(landing_position.y*landing_position.y)) <= 0) {
        point = 0;
    }
    if (sqrt((landing_position.x*landing_position.x)+(landing_position.y*landing_position.y)) <= 1.0F) {
        point = 10;
    }
    else if (sqrt((landing_position.x*landing_position.x)+(landing_position.y*landing_position.y)) <= 5.0F) {
        point = 5;
    }
    else if (sqrt((landing_position.x*landing_position.x)+(landing_position.y*landing_position.y)) <= 10.0F) {
        point = 1;
    }
    else {
        point = 0;
    }
    return point;
}