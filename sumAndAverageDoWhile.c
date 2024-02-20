// A program to find the sum and average of n numbers using do while loop
#include <stdio.h>
int main() {
  float n, sum = 0, avg, i = 1, a;
  printf("Enter the number of elements:");
  scanf("%f", &n);
  do {
    printf("Enter the number%.0f:", i);
    scanf("%f", &a);
    sum += a;
    i++;
  } while (i <= n);
  avg = sum / n;
  printf("The sum of the numbers is:%.2f\n", sum);
  printf("The average of the numbers is:%.2f\n", avg);
  return 0;
}