#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  time_t seed = time(NULL);
  srand(seed);

  const int weather_index = rand() % 2;  // 1: 晴  0: 雨

  if (weather_index == 0) {
    printf("今日は雨の為、傘を持って外出します。");
    return 0;
  }

  printf("今日は晴れの為、そのまま外出します。");

  return 0;
}
