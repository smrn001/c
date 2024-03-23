// // Write a C program to find the maximum and
// minimum values in an array of integers.
//  The program should take the array size and
//  the elements as input from the user

#include <stdio.h>

int main() {
  int size, i;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter the elements of the array:\n");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];

  for (i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Maximum value: %d\n", max);
  printf("Minimum value: %d\n", min);

  return 0;
}
