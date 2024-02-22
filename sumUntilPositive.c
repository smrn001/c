// Program to calcualte the sum of maximum of 10 numbers
// Calculates sum until user enters a positive number
#include <stdio.h>
int main() {
  int n, sum = 0;
  for (int i = 1; i <= 10; i++) {
    printf("Enter a number_%d: ", i);
    scanf("%d", &n);
    if (n < 0)
      break;
    sum += n;
  }
  printf("Sum of numbers: %d\n", sum);
  return 0;
}