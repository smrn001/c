#include <stdio.h>

int sumOfDigits(int n)
{
    if (n < 10)
        return n;

    else
        return n % 10 + sumOfDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter a nmber: ");
    scanf("%d", &n);

    printf("The sum of all digits of %d  is %d \n", n, sumOfDigits(n));

    return 0;
}