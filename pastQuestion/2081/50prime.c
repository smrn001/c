#include <stdio.h>
int main()
{
    int pcount = 0, count;

    printf("First 50 prime numbers are: ");
    for (int i = 2; pcount < 50; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", i);
            pcount++;
        }
    }

    return 0;
}