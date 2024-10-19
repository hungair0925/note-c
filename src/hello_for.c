#include <stdio.h>

// ライプニッツ級数で円周率の近似値を求める
int main() {
  int iteration = 0;
  double pi = 0;

  printf("ライプニッツ級数の工数を入力してください: ");
  scanf("%d", &iteration);

  for (int i = 0; i < iteration; i++) {
    double value = 4 * (1.0 / (2.0 * i + 1.0));
    pi += i % 2 == 0 ? value : -value;
  }

  printf("円周率の近似値は%.15lfです。\n", pi);

  return 0;
}