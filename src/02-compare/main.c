#include <stdio.h>
#include "input_utils.h"

int main(void) {
    int x = get_int("Zadej x: ");
    int y = get_int("Zadej y: ");

    if (x < y) {
        printf("%i je menší než %i\n", x, y);
    } else if (x > y) {
        printf("%i je větší než %i\n", x, y);
    } else {
        printf("%i a %i jsou stejné\n", x, y);
    }
}