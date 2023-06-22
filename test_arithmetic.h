#include <assert.h>
#include <stdio.h>
#include <stdbool.h>

#include "arithmetic.h"

bool test_add_one_plus_one_is_two() {
    int a = 1;
    int b = 1;

    if(add(a, b) != 2) {
        printf("wanted %d, got %d\n", a, b);
        return false;
    }

    return true;
}

bool test_add_one_plus_two_is_two() {
    int a = 1;
    int b = 2;

    if(add(a, b) != 2) {
        printf("wanted %d, got %d\n", a, b);
        return false;
    }

    return true;
}
