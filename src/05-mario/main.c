#include <stdio.h>

// size_t - unsigned, dává větší smysl
typedef enum { HORIZONTALLY, VERTICALLY } Orientation;

void print_block(size_t x, size_t y, char);
void print_symbols(size_t x, char, Orientation);

int main(void) {
    print_symbols(7, '?', HORIZONTALLY);
    printf("\n\n");
    print_symbols(5, '#', VERTICALLY);
    printf("\n\n");
    print_block(6, 3, 'H');
}

void print_symbols(size_t n, char symbol, Orientation dir) {
    for (size_t i = 0; i < n; i++)
    {
        dir == HORIZONTALLY ? printf("%c", symbol) : printf("%c\n", symbol);
    }
    dir == HORIZONTALLY && printf("\n");
}

void print_block(size_t x, size_t y, char symbol) {
    for (size_t i = 0; i < y; i++) {
        print_symbols(x, symbol, HORIZONTALLY);
    }
}