#include <stdio.h>
#include <stdint.h>
#include "input_utils.h"

// prototypes
void meow(size_t n);
int get_positive_int(void);

int main(void) {
    int32_t times = get_positive_int();
    meow(times);
}

int get_positive_int(void) {
    int32_t n;
    do {
        n = get_int("Kolikrat mam zamnoukat? ");
    } while (n <= 0);
    return n;
}

void meow(size_t n) {
    // size_t je tady unsigned ! lepsi
    for (size_t i = 0; i < n; i++) {
        printf("meow\n");
    }
}