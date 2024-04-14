// // Write a C program to generate the first N
// terms of the Fibonacci sequence. The program
//  should take N as input from the user and
//  output the corresponding sequence

#include <stdio.h>

int main() {
  int n, i;
  int term1 = 0, term2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: ");

  for (i = 1; i <= n; i++) {
    printf("%d, ", term1);
    nextTerm = term1 + term2;
    term1 = term2;
    term2 = nextTerm;
  }

  return 0;
}
