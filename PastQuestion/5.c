// sum of 1st 10 even number using function

#include <stdio.h>
int sum(int n) {
  int i, sum = 0;
  for (i = 1; i <= n; i++) {
    if (i % 2 == 0)
      sum = sum + i;
  }
  return sum;
}

int main() {
  int n = 10;
  printf("Sum of 1st 10 even numbers is %d\n", sum(n));
  return 0;
}