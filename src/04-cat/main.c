#include <stdio.h>
#include "input_utils.h"

void meow(size_t n);
int get_positive_int(void);

int main(void) {
    int32_t n = get_positive_int();

    meow(n);
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