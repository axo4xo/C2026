#include <stdio.h>
#include "../../include/ax4-02.h"
#include "../../include/ax4-01.h"
#include <stdint.h>

int32_t get_int(string input) {
    int32_t num;

    printf("%s", input);
    scanf("%i", &num);
    
    return num;
}