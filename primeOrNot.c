#include <stdio.h>
int main() {
  int a, i, count = 0;
  printf("Enter a number \n");
  scanf("%d", &a);
  for (i = 1; i <= a; i++) {
    if (a % i == 0)
      count++;
  }
  if (count == 2)
    printf("%d is prime number", a);
  else
    printf("%d is composite number", a);
  return 0;
}