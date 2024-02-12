#include <stdio.h>
int main() {
  int n, count = 0;
  printf("Enter  a number :");
  scanf("%d", &n);
  for (int i = 2; i < n; i++) {
    if (n % i == 0)
      count++;
  }
  if (count == 0)
    printf("Prime \n");
  else
    printf("Not prime \n ");

  return 0;
}