#include <stdio.h>
int main() {
  int n, ns, result;
  printf("Enter a number :");
  scanf("%d", &n);
  printf("Enter number to shift  :");
  scanf("%d", &ns);
  result = n << ns;
  printf("Left shift by %d for given number %d is %d ", ns, n, result);
  return 0;
}