#include <stdio.h>
int main(void) {
  int num[10], smallest, largest, i;
  for (i = 0; i <= 9; i++) {
    printf("Enter number_%d :", i + 1);
    scanf("%d", &num[i]);
  }
  smallest = num[0];
  largest = num[0];
  for (i = 0; i <= 9; i++) {
    if (smallest > num[i])
      smallest = num[i];
    if (largest < num[i])
      largest = num[i];
  }
  printf("The smallest number is %d \n", smallest);
  printf("The largest number is %d", largest);
  return 0;
}