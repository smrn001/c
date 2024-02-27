#include <stdio.h>
int main() {
  int n, temp;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int num[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the number %d: ", i + 1);
    scanf("%d", &num[i]);
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (num[j] > num[j + 1]) {
        temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
  printf("The sorted array is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", num[i]);
  }
  return 0;
}