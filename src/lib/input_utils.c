#include "../../include/input_utils.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int32_t get_int(char* input) {
    int32_t num;

    printf("%s", input);
    scanf("%i", &num);
    
    return num;
}

char* get_string(char* input) {
    char *userin;
    userin = malloc(100);

    printf("%s", input);
    fgets(userin, 100, stdin);
    userin[strcspn(userin, "\n")] = '\0';
    userin = realloc(userin, strlen(userin) + 1); // + 1 being \0
    
    return userin;
}