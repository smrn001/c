// matrix addition of 2 matrix
#include <stdio.h>
int main() {
  int r1, r2, c1, c2, i, j, k;
  printf("Enter row of 1st matrix : ");
  scanf("%d", &r1);
  printf("Enter colum of 1st matrix : ");
  scanf("%d", &c1);
  printf("Enter row of 2nd matrix : ");
  scanf("%d", &r2);
  printf("Enter row of 2nd matrix : ");
  scanf("%d", &c2);
  if (r1 == r2 && c1 == c2) {
    int mat1[r1][c1], mat2[r1][c1], mats[r1][c1];
    for (j = 0; j < r1; j++) {
      for (k = 0; k < c1; k++) {
        printf("Enter %d%d element of 1st matrix : ", j, k);
        scanf("%d", &mat1[j][k]);
      }
    }
    for (j = 0; j < r1; j++) {
      for (k = 0; k < c1; k++) {
        printf("Enter %d%d element of 2nd matrix : ", j, k);
        scanf("%d", &mat2[j][k]);
      }
    }
    for (int j = 0; j < r1; j++) {
      for (k = 0; k < c1; k++)
        mats[j][k] = mat1[j][k] + mat2[j][k];
    }
    printf("\n\n the sum of matrix is \n ");
    for (j = 0; j < r1; j++) {
      for (k = 0; k < c1; k++)
        printf("%d\t", mats[j][k]);
      printf("\n");
    }
  } else
    printf("Unable to add matrix .");
  return 0;
}