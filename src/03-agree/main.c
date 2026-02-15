#include <stdio.h>
#include "input_utils.h"

int main(void) {
    char agreement = get_char("Do you agree? ");
    agreement == 'Y' ? printf(":)\n") : printf(":(\n");
}