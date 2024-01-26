#include <stdio.h>
int main(void) {
  int n, reverse = 0, reminder, original;
  printf("Enter a number ");
  scanf("%d", &n);
  original = n;
  while (n != 0) {
    reminder = n % 10;
    reverse = (reverse * 10) + reminder;
    n /= 10;
  }
  if (original == reverse)
    printf("%d is a palindrome.", original);
  else
    printf("%d is not a palindrome.", original);
  return 0;
}
