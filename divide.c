// Write a program to read two numbers n1 and n2 from keyboard .
// calculate and display remainder obtained by dividing n1 by n2
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter n1 and n2 :");
    scanf("%d %d",&n1,&n2);
    printf("Remainder obtained by dividing %d by %d is %d",n1,n2,n1%n2);

return 0 ;
}