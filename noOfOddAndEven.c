// find number of odd and even form n number of elements
#include <stdio.h>
int main() {
  int n, oddCount = 0, evenCount = 0;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter the element %d: ", i + 1);
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
      evenCount++;
    else
      oddCount++;
  }
  printf("Number of even elements: %d\n", evenCount);
  printf("Number of odd elements: %d\n", oddCount);
  return 0;
}