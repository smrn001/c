/// 1. Write a program to find the sum of   digits of given number using recursion

#include <stdio.h>

int sum(int a)
{

    if (a == 0)
        return 0;
    else
        return (a % 10 + sum(a / 10));
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d \n", n, sum(n));
    return 0;
}