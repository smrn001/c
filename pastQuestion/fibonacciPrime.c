// Write a program to find out whether the nth term of the Fibonacci series is a prime number or not. Read the value of n from the user and display the result in the main function. Use separate user-defined function to generate nth Fibonacci term and to check whether that number is prime or not
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
 
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int prime(int n)
{
     if (n <= 1)
        return 0;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int fib = fibonacci(n);
    printf("%dth term of Fibonacci series  is : %d \n", n, fibonacci(n));
    if (prime(fib))
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
