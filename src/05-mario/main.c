#include <stdio.h>
#include <stdint.h>

void print_question_marks(int32_t);

int main(void) {
    print_question_marks(7);
}

void print_question_marks(int32_t n) {
    for (size_t i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}