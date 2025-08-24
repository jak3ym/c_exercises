#include "queen_attack.h"
#include <stdlib.h>
#define MAX_ROW 7
#define MAX_COL 7

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    if (queen_1.row > MAX_ROW || queen_1.column > MAX_COL || queen_2.row > MAX_ROW || queen_2.column > MAX_COL || ((queen_1.row == queen_2.row) && (queen_1.column == queen_2.column))) {
        return INVALID_POSITION;
       }
    else if (queen_1.row == queen_2.row) {
        return CAN_ATTACK;
    }
    else if (queen_1.column == queen_2.column) {
        return CAN_ATTACK;
    }
    else if (abs(queen_1.column - queen_2.column) == abs(queen_1.row - queen_2.row)) {
        return CAN_ATTACK;
    }
    else {
        return CAN_NOT_ATTACK;
    }
}