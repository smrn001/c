// reverse using recursion
#include <stdio.h>

int rem, sum = 0;
int rev(int n)
{
    if (n)
    {
        rem = n % 10;
        sum = sum * 10 + rem;
        rev(n / 10);
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Reverse of %d is %d \n", n, rev(n));

    return 0;
}
