#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a ,b,c : \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("a is greater than b and c\n");
    }
    else if (b > a && b > c)
    {
        printf("b is greater than a and c\n");
    }
    else
    {
        printf("c is greater than a and b\n");
    }

    return 0;
}