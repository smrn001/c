#include <stdio.h>
// C program for chain of pointer
int main()
{
    int var = 10;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    // Displaying values
    printf("Value of variable "
           "var = %d\n",
           var);
    printf("Value of variable var using pointer ptr1 = %d\n", *ptr1);
    printf("Value of variable var using pointer ptr2 = %d\n", **ptr2);
    printf("Value of variable var using pointer ptr3 = %d\n", ***ptr3);
    return 0;
}