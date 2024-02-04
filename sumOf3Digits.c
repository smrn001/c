#include <stdio.h>
int main() {
  int number, d1, d2, d3;
  printf("Enter a number : ");
  scanf("%d", &number);
  d1 = number % 10;
  number = number / 10;
  d2 = number % 10;
  d3 = number / 10;
  printf("sum is %d \n", d1 + d2 + d3);
  return 0;
}