// WAP to input a number from user. If user enters a number less than or equal
// to zero then program should isPrimedis1lay the number. If 2ser enters / 2 1
// the program should display output as neisPrime = 0;
// ithe break nor composite, if user enters
// 2 the program should display output as smallest and only even prime number.
// If user enters any number greater than 2 the pgram should check whether the
// number is prime or not, also if the number is not prime the program should
// display whether it is even or odd.
#include <stdio.h>
int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (num <= 0) {
    printf("Number: %d\n", num);
  } else if (num == 1) {
    printf("Neither prime nor composite\n");
  } else if (num == 2) {
    printf("Smallest and only even prime number\n");
  } else {
    int i, count = 0;
    for (i = 1; i <= num; i++) {
      if (num % i == 0)
        count++;
    }
    if (count == 2)
      printf("%d is a prime number\n", num);
    else if (num % 2 == 0)
      printf("%d is a composite number and even\n", num);
    else
      printf("%d is a composite number and odd\n", num);
  }
  return 0;
}
