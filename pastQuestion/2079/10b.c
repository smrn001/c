#include <stdio.h>
int main()
{
    FILE *fp, *fpprime;
    int n, count;
    fp = fopen("Num.txt", "r");
    fpprime = fopen("Prime.txt", "w");

    while (fscanf(fp, "%d", &n) != EOF)
    {
        count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            fprintf(fpprime, "%d\n", n);
        }
    }

    fclose(fp);
    fclose(fpprime);

    return 0;
}