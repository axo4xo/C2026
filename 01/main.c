#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  printf("Hello, %s\n", argv[0]);

  for (int i = 0; i < argc; i++) {
    printf("%d: %s\n", i, argv[i]);
  }

  return 0;
}
