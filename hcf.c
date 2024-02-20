// Program to find HCF of two numbers
#include <stdio.h>
int main() {
  int a, b, smallest;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);
  smallest = (a < b) ? a : b;
  for (int i = smallest; i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      printf("HCF of %d and %d is %d \n", a, b, i);
      break;
    }
  }
  return 0;
}