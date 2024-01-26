#include <stdio.h>
int main(void) {
  int num[10], temp;
  for (int i = 0; i < 10; i++) {
    printf("Enter number_%d :", i + 1);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 9; j++) {
      if (num[j] > num[j + 1]) {
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
  printf("number in ascending order is \n");
  for (int i = 0; i < 10; i++)
    printf("%d \t", num[i]);
  printf("\n number in desending order is \n");
  for (int i = 9; i >= 0; i--)
    printf("%d \t", num[i]);
  return 0;
}