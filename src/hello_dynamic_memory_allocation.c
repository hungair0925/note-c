#include <stdio.h>
#include <stdlib.h>

void input_array_length(int *array_length) {
  printf("配列の要素数を入力: ");
  scanf("%d", array_length);
}

int *allocate_array_memory(int array_length) {
  // 確保したいメモリのバイト数 = int型のバイト数 * 要素数
  // C++では明示的にキャスト変換する必要あり
  int *array = malloc(array_length * sizeof(int));
  return array;
}

int main() {
  int array_length;

  input_array_length(&array_length);
  int *array = allocate_array_memory(array_length);

  for (int i = 0; i < array_length; i++) {
    array[i] = i * 2;
    printf("array[%d]: %d\n", i, array[i]);
  }

  free(array);

  return 0;
}