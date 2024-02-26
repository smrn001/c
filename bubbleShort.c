#include <stdio.h>
int main() {
  int num[10], temp;
  for (int i = 0; i < 10; i++) {
    printf("Enter the number %d: ", i + 1);
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
  printf("The sorted array is: ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", num[i]);
  }
  return 0;
}