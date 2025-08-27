#include "eliuds_eggs.h"

int egg_count(uint32_t eggs) {
    int count = 0;
    while (eggs > 0) {
        if ((eggs & 1) == 1) {
            count++;
        }
        eggs = eggs >> 1;
    }
    return count;
}