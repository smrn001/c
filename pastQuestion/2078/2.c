// program to check if two matrices are equal or not

#include <stdio.h>
int main()
{
    int r, c, equal = 1;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d", &r, &c);
    int a[r][c], b[r][c];

    printf("Enter the elements of the 1st matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the elements of the 2nd matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != b[i][j])
            {
                equal = 0;
                break;
            }
        }
    }

    if (equal)
    {
        printf("The matrices are equal\n");
    }
    else
    {
        printf("The matrices are not equal\n");
    }

    return 0;
}