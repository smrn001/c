// //Write a program to initialize an array of
// dimension 10 and sent the numbers within the
// array in ascending order

#include <stdio.h>

int main() {
  int arr[10] = {5, 2, 9, 1, 7, 3, 6, 4, 8, 0};
  int i, j, temp;

  // Sorting the array in ascending order
  for (i = 0; i < 10; i++) {
    for (j = i + 1; j < 10; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Printing the sorted array
  printf("Sorted array in ascending order: ");
  for (i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
