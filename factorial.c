#include <stdio.h>
int main() {
  int a, i, multiply = 1;
  printf("Enter a number \n");
  scanf("%d", &a);
  for (i = 1; i <= a; i++) {
    multiply = multiply * i;
  }
  printf("Factorial of %d is %d ", a, multiply);
  return 0;
}