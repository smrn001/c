#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter number of element in an  array : ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements of Array  : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of elements  of array is %d  \n", sum);
    return 0;
}