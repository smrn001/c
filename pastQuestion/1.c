// // Write a program to find out whether the nth term
// of the Fibonacci series is a prime number or not. Read
// the value of n from the user and display the result in
//  the main function. Use separete user-defined function to generate n
//  Fibonacci term and to check whether that number is prime or not.

#include <stdio.h>
void isprime(int);
int fibo(int);

int main() {
  int n, nthTerm;
  printf("Enter nth term : ");
  scanf("%d", &n);
  nthTerm = fibo(n);
  printf("Nth term  %d is ", nthTerm);
  isprime(nthTerm);
  return 0;
}

int fibo(int x) {
  if (x == 0 || x == 1)
    return 0;

  int a = 0, b = 1, c;
  for (int i = 2; i <= x; i++) {
    c = a + b;
    a = b;
    b = c;
  }
  return c;
}

void isprime(int x) {
  int i, count = 0;
  for (i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      count = 1;
      break;
    }
  }
  if (count == 0)
    printf("Prime\n");
  else
    printf("Not Prime\n");
}