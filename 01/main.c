#include <stdint.h>
#include <stdio.h>

void print_hello() { printf("Hello, World!\n"); }

int main(int argc, char *argv[]) {
  printf("Hello, %s\n", argv[1]);

  for (int i = 0; i < argc; i++) {
    printf("%d: %s\n", i, argv[i]);
  }

  print_hello();

  return 0;
}
