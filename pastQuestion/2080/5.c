#include <stdio.h>
int main()
{

    int p, q;
    printf("Enter no of rows : ");
    scanf("%d", &p);
    printf("Enter no of columns  : ");
    scanf("%d", &q);

    int mat[p][q];

    printf("Enter the elements of matrix : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int largest;
    for (int i = 0; i < p; i++)
    {
        largest = mat[i][0];
        {
            for (int j = 0; j < q; j++)
            {
                if (mat[i][j] > largest)
                    largest = mat[i][j];
            }
        }
        printf("Largest of %d_row is %d \n", i + 1, largest);
    }
    return 0;
}