#include <stdio.h>
#include <stdbool.h>

#include "arithmetic.h"

bool test_add_one_plus_one_is_two(char error[]) {
    int a = 1;
    int b = 1;

    if(add(a, b) != 2) {
        sprintf(error, "wanted %d, got %d\n", a, b);
        return false;
    }

    return true;
}

bool test_add_21_plus_21_is_42(char error[]) {
    int a = 21;
    int b = 21;

    if(add(a, b) != 42) {
        sprintf(error, "wanted %d, got %d\n", a, b);
        return false;
    }

    return true;
}
