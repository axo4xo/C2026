#include <stdio.h> // libraries are accessed by header files
#include "input_utils.h"
#include <stdlib.h>

int main(void) { 
    char* answer = get_string("What's your name? ");
    printf("Hello, %s!\n", answer); 
    free(answer); // !!!!!
}