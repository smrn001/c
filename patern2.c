#include <stdio.h>
int main(void) {
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++)
      printf("*\a");
    printf("\n");
  }
  return 0;
}