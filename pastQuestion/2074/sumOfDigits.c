#include<stdio.h>
int main()
{
int num,sum=0,a;
printf("Enter a number : ");
scanf("%d",&num);

while(num!=0){

    a=num%10;
    sum+=a;
    num/=10;
}

printf("%d\n",sum);

return 0 ;
}