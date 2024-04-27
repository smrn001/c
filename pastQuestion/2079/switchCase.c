
// 3. Write a program to demonstrate the following menu driven program. The user will provide an integer and an alphabet for making a choice and corresponding task has to be performed accordingly as follows.
// A. Find Odd or Even
// B. Find Positive or Negative
// C. Find the Factorial Value
// D. Exit
// The choice will be displayed until the user give "D" as choice.

#include <stdio.h>

void oddEven(int n)
{
    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
}

void positiveNegative(int n)
{

    if (n < 0)
        printf("Negaative\n");
    else
        printf("Positive\n");
}

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial = %d\n ", fact);
}

int main()
{
    int n;
    char choice;
    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Enter \n ");
    printf(" A. Find Odd or Even\n ");
    printf("B. Find Positive or Negative\n ");
    printf("C. Find the Factorial Value\n ");
    printf("D. Exit\n\n ");

    scanf(" %c", &choice);

    switch (choice){


        case 'A':
            oddEven(n);
            break;
        
        case 'B':
            positiveNegative(n);
            break;

        case 'C':
            factorial(n);
            break;
        case 'D':
            printf("Exiting");
            break;
        default:
            printf("Invalid Input :");

    }

    return 0;
}
