#include "binary.h"
#include <string.h>
#include <stdint.h>

int convert(const char *input) {
    int length = strlen(input);
    int power = 0;
    uint32_t sum = 0;
    for (int i = length - 1; i >= 0; i--) {
        if (input[i] == '0') {
            // do nothing
        }
        else if (input[i] == '1') {
            sum += 1 << power;
        }
        else {
            return -1;
        }
        power++;
    }
    return (int)sum;
}
