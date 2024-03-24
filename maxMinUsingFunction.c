#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }

int max(int a, int b) { return a > b ? a : b; }

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("The minimum of %d and %d is %d\n", a, b, min(a, b));
  printf("The maximum of %d and %d is %d\n", a, b, max(a, b));
  return 0;
}