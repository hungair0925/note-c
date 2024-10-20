#include <stdio.h>

int main() {
  int number = 10;
  int *number_pointer;
  number_pointer = &number;

  printf("Memory Address: %p\n", number_pointer);
  printf("Value: %d\n", *number_pointer);

  return 0;
}