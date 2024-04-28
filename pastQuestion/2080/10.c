#include <stdio.h>

int sumOfEven(int n)
{
    int evenCount = 0, sum = 0;
    for (int i = 1; evenCount < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            evenCount++;
        }
    }
    return sum;
}

int main()
{
    printf("Sum of first 10 even numbers is %d \n", sumOfEven(10));
    return 0;
}