#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n > 1)
    {
        printf("The second largest number is  :   %d \n", arr[n - 2]);
    }
    else
    {
        printf("No second largest number\n");
    }

    return 0;
}