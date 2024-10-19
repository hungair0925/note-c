#include <stdio.h>
#define POSTAL_CODE_NUMBERS 5
#define POSTAL_CODE_NUMBER_LENGTH 9  // null終端で+1文字

int main() {
  int choiced_postal_code_index;
  char postal_codes[POSTAL_CODE_NUMBERS][POSTAL_CODE_NUMBER_LENGTH] = {
      "123-4567", "987-6543", "456-7890", "111-2222", "333-4444"};

  printf("郵便番号のリストを選択してください(1 - 5)\n");
  scanf("%d", &choiced_postal_code_index);

  printf("あなたが選んだ郵便番号は%sです。\n",
         postal_codes[choiced_postal_code_index - 1]);

  return 0;
}