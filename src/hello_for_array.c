#include <stdio.h>
#define POSTAL_CODE_NUMBERS 5
#define POSTAL_CODE_NUMBER_LENGTH 9  // null終端で+1文字

int main() {
  char postal_codes[POSTAL_CODE_NUMBERS][POSTAL_CODE_NUMBER_LENGTH] = {
      "123-4567", "987-6543", "456-7890", "111-2222", "333-4444"};
  // 配列全体のバイト数 / 最初の要素のバイト数 -> 配列長
  int postcal_codes_array_length =
      sizeof(postal_codes) / sizeof(postal_codes[0]);

  for (int i = 0; i < postcal_codes_array_length; i++) {
    printf("〒%s\n", postal_codes[i]);
  }

  return 0;
}