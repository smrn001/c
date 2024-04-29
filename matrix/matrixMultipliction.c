#include <stdio.h>
int main()
{
  int r1, c1, r2, c2, i, j, k;

  printf("Enter rows and column of 1st matrix : ");
  scanf("%d %d", &r1, &c1);

  printf("Enter rows and column of 2nd matrix : ");
  scanf("%d %d", &r2, &c2);

  if (c1 != r2)
    printf("Unable to multiply such matrix : ");
  else
  {
    int mat1[r1][c1], mat2[r2][c2], matm[r1][c2];

    printf("\nFor 1st matrix :\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        printf("Enter %d%d element : ", i, j);
        scanf("%d", &mat1[i][j]);
      }
    }

    printf("\nFor 2nd matrix :\n");
    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("Enter %d%d element : ", i, j);
        scanf("%d", &mat2[i][j]);
      }
    }

    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        int sum = 0;
        for (k = 0; k < r2; k++)
        {
          sum += mat1[i][k] * mat2[k][j];
        }
        matm[i][j] = sum;
      }
    }

    printf("\n\n\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        printf("%d\t", mat1[i][j]);
      }
      printf("\n");
    }
    printf("\n\tx\n\n");

    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("%d\t", mat2[i][j]);
      }
      printf("\n");
    }

    printf("\n\t=\n\n");

    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("%d\t", matm[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}