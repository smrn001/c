// A program to compute sum of digit of a given integer number

#include <stdio.h>

int main() {
  int number, sum = 0, digit;

  printf("Enter an integer number: ");
  scanf("%d", &number);

  while (number != 0) {
    digit = number % 10;
    sum += digit;
    number /= 10;
  }

  printf("Sum of digits: %d\n", sum);

  return 0;
}
