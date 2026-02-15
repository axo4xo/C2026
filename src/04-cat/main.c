#include <stdio.h>

void meow(void) {
    printf("meow\n");
}

int main(void) {
    // size_t je tady unsigned ! lepsi
    for (size_t i = 0; i < 3; i++)
    {
       meow();
    }
}

