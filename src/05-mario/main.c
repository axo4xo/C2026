#include <stdio.h>

// size_t - signed, dává větší smysl
void print_horizontally(size_t, char);
void print_vertically(size_t, char);

int main(void) {
    print_horizontally(7, '?');
    printf("---\n");
    print_vertically(5, '#');
}

void print_horizontally(size_t n, char symbol) {
    for (size_t i = 0; i < n; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}

void print_vertically(size_t n, char symbol) {
    for (size_t i = 0; i < n; i++) {
        printf("%c\n", symbol);
    }
}