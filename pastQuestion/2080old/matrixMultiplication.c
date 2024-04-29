#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("Enter row of 1st matrix :");
    scanf("%d", &r1);

    printf("Enter column  of 1st matrix :");
    scanf("%d", &c1);

    printf("Enter row of 2nd matrix :");
    scanf("%d", &r2);

    printf("Enter column of 2nd matrix :");
    scanf("%d", &c2);

    if (c2 != r1)
        printf("Unable to multiply these matrix. \n");
    else
    {
        int mat1[r1][c1], mat2[r2][c2], matm[r1][c2], sum;

        printf("\nEnter elements of 1st matrix : \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }

        printf("\nEnter elements of 2nd matrix : \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        for (int i = 0; i < r1; i++)
        {

            for (int j = 0; j < c2; j++)
            {

                sum = 0;
                for (int k = 0; k < r2; k++)
                {
                    sum += mat1[i][k] * mat2[k][j];
                }
                matm[i][j] = sum;
            }
        }

        printf("The multiplied matrix is :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", matm[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}