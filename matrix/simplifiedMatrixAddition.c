// matrix addition of 2 matrix
#include <stdio.h>
int main() {
  int r1, r2, c1, c2, i, j;
  printf("Enter row of 1st matrix : ");
  scanf("%d", &r1);
  printf("Enter colum of 1st matrix : ");
  scanf("%d", &c1);
  printf("Enter row of 2nd matrix : ");
  scanf("%d", &r2);
  printf("Enter row of 2nd matrix : ");
  scanf("%d", &c2);
  if (r1 == r2 && c1 == c2) {
    int mat1[r1][c1], mat2[r1][c1];
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        printf("Enter %d%d element of 1st matrix : ", i, j);
        scanf("%d", &mat1[i][j]);
      }
    }
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        printf("Enter %d%d element of 2nd matrix : ", i, j);
        scanf("%d", &mat2[i][j]);
      }
    }

    printf("\n\n the sum of matrix is \n");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++)
        printf("%d\t", mat1[i][j] + mat2[i][j]);
      printf("\n");
    }
  } else
    printf("Unable to add matrix .");
  return 0;
}