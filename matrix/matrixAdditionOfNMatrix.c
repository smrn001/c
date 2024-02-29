// matrix addition of n matrix

#include <stdio.h>
int main() {
  int n, r, c;
  printf("Enter the number of matrix : ");
  scanf("%d", &n);
  printf("Enter the row and column of matrix : ");
  scanf("%d%d", &r, &c);
  int mat[n][r][c], mats[r][c];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < r; j++) {
      for (int k = 0; k < c; k++) {
        printf("Enter %d%d element of %d matrix : ", j, k, i + 1);
        scanf("%d", &mat[i][j][k]);
      }
    }
  }
  for (int j = 0; j < r; j++) {
    for (int k = 0; k < c; k++) {
      mats[j][k] = 0;
      for (int i = 0; i < n; i++) {
        mats[j][k] += mat[i][j][k];
      }
    }
  }
  printf("\n\n the sum of matrix is \n ");
  for (int j = 0; j < r; j++) {
    for (int k = 0; k < c; k++)
      printf("%d\t", mats[j][k]);
    printf("\n");
  }
  return 0;
}