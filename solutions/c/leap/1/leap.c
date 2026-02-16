#include "leap.h"

// leap year occurs every year evenly divisible by 4 ( % 4)
// not if divisible by 100 except 400
//whether given year (parameter) is leap year (true/false)

bool leap_year(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 == 0 && year % 400 == 0) {
        return true;
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    else {
        return false;
    }
}