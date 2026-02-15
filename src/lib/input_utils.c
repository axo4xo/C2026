#include "../../include/input_utils.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

int32_t get_int(char* input) {
    int32_t num;
    int32_t status;
    
    while (1) {
        printf("%s", input);
        status = scanf("%i", &num);
        
        if (status == 1) {
            return num;
        }
        printf("To nebylo platný číslo. Znova a lépe. \n");
        while (getchar() != '\n'); // cleanup buffer
    }   
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

char get_char(char* input) {
    char letter;

    printf("%s", input);
    scanf("%c", &letter); // zapisujeme NA ADRESU

    return letter;
}