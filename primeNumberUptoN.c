#include <stdio.h>
int main() {
  int n, count;
  printf("Enter the nth number: ");
  scanf("%d", &n);
  printf("Prime numbers upto %d are: ", n);
  for (int i = 2; i <= n; i++) {
    count = 0;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        count++;
        break;
      }
    }
    if (count == 0 && i != 1) {
      printf("%d ", i);
    }
  }

  return 0;
}