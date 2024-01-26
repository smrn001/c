#include <stdio.h>
int main(void) {
  int num[10], largest, i;
  for (i = 0; i <= 9; i++) {
    printf("Enter number_%d :", i + 1);
    scanf("%d", &num[i]);
  }
  largest = num[0];
  for (i = 0; i <= 9; i++) {
    if (largest < num[i])
      largest = num[i];
  }
  printf("The largest number among 10 numbers is %d ", largest);
  return 0;
}