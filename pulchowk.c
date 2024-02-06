#include <stdio.h>
int main() {
  char name[9] = "PULCHOWK";
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j <= i; j++) {
      printf("%c", name[j]);
    }
    printf("\n");
  }
  return 0;
}