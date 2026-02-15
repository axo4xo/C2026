#include <stdio.h>
#include <stdint.h>
#include "input_utils.h"

int add(int32_t x, int32_t y);
int subtract(int32_t x, int32_t y);
int multiply(int32_t x, int32_t y);
float divide(int32_t x, int32_t y);

int main(void) {
    while (1) {
        char operation = get_char("Jakou operaci dnes provedeme? (+, -, *, /, q=quit): "); 
        if (operation == 'q') break;
        int32_t user_x = get_int("Paráda! Zadej X: ");
        int32_t user_y = get_int("Skvělá volba! Zadej Y: ");

        switch (operation) {
            case '+':
                printf("%i\n", add(user_x, user_y));
                break;
            case '-':
                printf("%i\n", subtract(user_x, user_y));
                break;
            case '*':
                printf("%i\n", multiply(user_x, user_y));
                break;
            case '/':
                printf("%.2f\n", divide(user_x, user_y));
                break;
            default:
                printf("Neplatná operace.. zkus to znovu.\n");
                break;
        }
    }
    return 0;
}

int32_t add(int32_t x, int32_t y) {
    return x + y;
}

int32_t subtract(int32_t x, int32_t y) {
    return x - y;
}

int32_t multiply(int32_t x, int32_t y) {
    return x * y;
}

float divide(int32_t x, int32_t y) {
    if (y == 0) {
        printf("Still cannot divide by zero. \n");
        return -1.0F;
    }
    return (float) x / (float) y;
}
