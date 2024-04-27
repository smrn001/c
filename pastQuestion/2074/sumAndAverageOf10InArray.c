#include<stdio.h>
int main()
{
int num[10],sum=0;;
float av;
for(int i=0;i<10;i++){
    printf("Enter %d_number  : ",i+1);
    scanf("%d",&num[i]);
    sum+=num[i];
}
av=sum/10;
printf("Sum:%d \t Average  : %.2f \n",sum,av);

return 0 ;
}