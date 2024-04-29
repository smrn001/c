#include <stdio.h>
int main()
{
    int a = 2, b = 3;
    for (int i = 1; i <= 25; i++, a++, b += 2)
    {
        if (i == 7)
            continue;
        printf("%dx%d , ", a, b);
    }
    return 0;
}