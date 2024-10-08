#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  time_t current_time_seconds = time(NULL);
  unsigned int seed = current_time_seconds;

  const char *mikuji[] = {"大吉", "中吉", "小吉", "ちょっとだけ凶"};
  const int MAX_RANDOM = sizeof(mikuji) / sizeof(mikuji[0]);

  srand(seed);
  printf("あなたが引いたおみくじは「%s」です!\n", mikuji[rand() % MAX_RANDOM]);

  return 0;
}