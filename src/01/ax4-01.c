#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/ax4-01.h"

string get_string(string input) {
    char *userin;
    userin = malloc(100);

    printf("%s", input);
    fgets(userin, 100, stdin);
    userin[strcspn(userin, "\n")] = '\0';
    userin = realloc(userin, strlen(userin) + 1); // + 1 being \0
    
    return userin;
}