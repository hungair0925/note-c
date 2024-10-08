#define ITEM_COUNT 3

#include <stdio.h>

int main() {
  int item_number;
  const int price[ITEM_COUNT] = {100, 300, 500};

  printf("Choice item number:(0 - 2) ");
  scanf("%d", &item_number);

  printf("Your choice item price is %d.\n", price[item_number]);
}