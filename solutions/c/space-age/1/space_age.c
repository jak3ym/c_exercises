#include "space_age.h"
#define EARTH_SECONDS 31557600

float period[] = {0.2408467, 0.61519726, 1.0, 1.8808158, 11.862615, 29.447498, 84.016846, 164.79132};

float age(planet_t planet, int64_t seconds) {
    if (planet > 7) {
        return -1;
    }
    float age = seconds / (period[planet] * EARTH_SECONDS);
    return age;
}