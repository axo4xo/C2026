#include <stdio.h>
#include "../../include/ax4_int.h"
#include "../../include/ax4_string.h"
#include <stdint.h>

int32_t get_int(string input) {
    int32_t num;

    printf("%s", input);
    scanf("%i", &num);
    
    return num;
}