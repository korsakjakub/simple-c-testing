#include "test_arithmetic.h"
#include <stdio.h>
#include "string.h"

void run(bool (*func)(char error[]), char name[], int *passed, int *failed) {
    printf("Testing: %s\n", name);
    char error[100];
    if (func(error)) {
        printf("OK\n");
        (*passed)++;
    } else {
        printf("error: %s\n", error);
        (*failed)++;
    }
}

int main() {
    int passed = 0, failed = 0;

    run(test_add_one_plus_one_is_two, "1+1=2", &passed, &failed);
    run(test_add_21_plus_21_is_42, "21+21=42", &passed, &failed);

    printf("Passed: %d\t Failed: %d\t(%.2f%%)\n", passed, failed, ((float)passed/(failed + passed) * 100.0));

    if (failed > 0) {
        return 1;
    }
    return 0;
}
