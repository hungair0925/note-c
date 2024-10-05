#include <stdio.h>

int main() {
  int tax;
  // &  アドレス演算子
  // %p ポインタ(アドレス)出力用のフォーマット指定子
  printf("Memory address: %p\n", &tax);
  return 0;
}