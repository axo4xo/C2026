#include <stdio.h>
#include <stdint.h>

int add(int32_t x, int32_t y);
int subtract(int32_t x, int32_t y);
int multiply(int32_t x, int32_t y);
float divide(int32_t x, int32_t y);

int main(void) {
    int32_t sum = add(3, 8);
    int32_t mult = multiply(sum, 4);
    printf("%d\n", mult);
    float div = divide(mult, 5); // ???
    printf("%f\n", div);

    float test = divide(mult, 0); // safe
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