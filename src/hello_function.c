#include <stdio.h>

double input_height(void) {
  double height;

  do {
    printf("身長を入力してください[cm]: ");
    scanf("%lf", &height);

    if (height < 0) {
      printf("負の値は入力できません\n");
      continue;
    }
    break;
  } while (1);

  return height;
}

double calculate_healthy_weight(double height_cm) {
  double height_m = height_cm / 100;
  double healthy_weight = 22.0 * (height_m * height_m);
  return healthy_weight;
}

void output_healthy_weight(double healthy_weight) {
  printf("あなたの適正体重は%.2f[kg]です。\n", healthy_weight);
}

int main() {
  double height_cm = input_height();
  double healthy_weight = calculate_healthy_weight(height_cm = height_cm);
  output_healthy_weight(healthy_weight);

  return 0;
}