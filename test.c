#include "test_arithmetic.h"

int main() {
    int passed = 0;
    int failed = 0;

    if (test_add_one_plus_one_is_two()) {
        passed++;
    } else {
        failed++;
    }

    if (test_add_one_plus_two_is_two()) {
        passed++;
    } else {
        failed++;
    }


    printf("Passed: %d\t Failed: %d\n", passed, failed);
}
