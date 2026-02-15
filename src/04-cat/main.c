#include <stdio.h>
#include "input_utils.h"

void meow(size_t n);

int main(void) {
    int n = get_int("Kolikrat mam zamnoukat? ");
    meow(n);
}

void meow(size_t n) {
    // size_t je tady unsigned ! lepsi
    for (size_t i = 0; i < n; i++) {
        printf("meow\n");
    }
}