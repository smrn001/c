#include<stdio.h>
void check(int n)
{
    if(n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    check(n);

return 0 ;
}