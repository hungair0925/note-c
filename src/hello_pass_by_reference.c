#include <stdio.h>

void calc_rect_area_permiter(int width, int height, int *area, int *permiter) {
  *area = width * height;
  *permiter = 2 * (width + height);
}

int main() {
  int width = 5;
  int heihgt = 3;
  int area;
  int permiter;

  calc_rect_area_permiter(width, heihgt, &area, &permiter);

  printf("面積: %d\n", area);
  printf("周囲長: %d\n", permiter);

  return 0;
}