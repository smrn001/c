// Write a C program to print all the prime
// numbers between 1 and N, where N is taken as input from the user using a
// while loop

#include <stdio.h>

int main() {
  int N, i, j, count;

  printf("Enter the value of N: ");
  scanf("%d", &N);

  printf("Prime numbers between 1 and %d are: ", N);

  i = 2;
  while (i <= N) {
    count = 0;

    for (j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        count += 1;`
        break;
      }
    }

    if (count == 0 && i != 1) {
      printf("%d ", i);
    }

    i++;
  }

  return 0;
}
