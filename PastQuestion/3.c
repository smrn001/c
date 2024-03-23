// Write a program to read PxQ matrix of integers and find the largest integer
// of each row and display it
#include <stdio.h>

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int matrix[rows][cols];

  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Largest integers of each row:\n");
  for (int i = 0; i < rows; i++) {
    int max = matrix[i][0];
    for (int j = 1; j < cols; j++) {
      if (matrix[i][j] > max) {
        max = matrix[i][j];
      }
    }
    printf("%d \n", max);
  }

  return 0;
}
