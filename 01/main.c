#include <stdio.h> // libraries are accessed by header files
#include "../lib/ax4-01.h"
#include <stdlib.h>

int main(void) { 
    string answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer); 
    free(answer); // !!!!!
}