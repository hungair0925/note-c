#include <stdio.h>
#define ITEM_LIST_NUM 3

typedef struct {
  int price;
  char name[10];
} Item;

void read_file(char *file_path, FILE **file_pointer) {
  *file_pointer = fopen(file_path, "r");
}

int main() {
  FILE *file_pointer;
  Item item_list[ITEM_LIST_NUM];

  read_file("item_list.csv", &file_pointer);

  if (file_pointer == NULL) {
    return -1;
  }

  for (int i = 0; i < ITEM_LIST_NUM; i++) {
    /* &item_list[i].name と書かない理由は、C言語で文字列（char
    型の配列）はすでに配列の最初の要素のアドレスを指しているから */
    fscanf(file_pointer, "%d,%s", &item_list[i].price, item_list[i].name);
  }
  fclose(file_pointer);

  for (int i = 0; i < ITEM_LIST_NUM; i++) {
    printf("name: %-10s price: %d\n", item_list[i].name, item_list[i].price);
  }

  return 0;
}