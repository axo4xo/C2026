#include <stdio.h>
#include "input_utils.h"

int main(void) {
    char agreement = get_char("Do you agree? ");
    (agreement == 'y' || agreement == 'Y') ? printf("Agreed\n") : printf("Disagreed\n");
}