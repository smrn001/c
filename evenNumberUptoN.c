// Write a program that asks for a number n
// from user and then display only even numbers
// from 2 to n using continue statementt
#include <stdio.h>
int main() {
  int n;
  printf("Enter the nth number: ");
  scanf("%d", &n);
  printf("Even numbers upto %d are:\n ", n);
  for (int i = 2; i <= n; i++) {
    if (i % 2 != 0) {
      continue;
    }
    printf("%d ", i);
  }
  return 0;
}