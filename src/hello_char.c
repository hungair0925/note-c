#include <stdio.h>

int main() {
  char a = 'A';
  char hex_character_code_a = 0x41;
  char deci_character_code_a = 65;

  printf("%c A (variable is assigned character)\n", a);
  printf("%c 0x41 (variable is assinged hex character code)\n",
         hex_character_code_a);
  printf("%c 65 (variable is assinged decimal character code)\n",
         deci_character_code_a);

  return 0;
}