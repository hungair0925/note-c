#include <stdio.h>
#define ITEM_LIST_NUMBER 3

typedef struct {
  int price;
  char name[10];
} Item;

int main() {
  Item item_list[ITEM_LIST_NUMBER] = {
      {100, "apple"}, {180000, "Mac"}, {45000, "window"}};

  for (int i = 0; i < ITEM_LIST_NUMBER; i++) {
    printf("name: %-10s price: %d\n", item_list[i].name, item_list[i].price);
  }

  return 0;
}