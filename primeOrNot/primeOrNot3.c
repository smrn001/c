#include <stdio.h>
int main() {
  int n, count = 0;
  printf("Enter  a  number  :");
  scanf("%d", &n);
  for (int i = 2; i < n / 2; i++) {
    if (n % i == 0) {
      count++;
      break;
    }
  }
  if (count == 1)
    printf("Not prime \n");
  else
    printf("Prime \n");
  return 0;
}