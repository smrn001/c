#include<stdio.h>
int main()
{
int n , sum  =0;
float av;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements of the array\n");
for(int i = 0 ; i < n ; i++)
{
scanf("%d",&arr[i]);
sum+=arr[i];
}
av = sum/n;
printf("The sum of the elements of the array is %d\n",sum);
printf("The average of the elements of the array is %.2f\n",av);

return 0 ;
}