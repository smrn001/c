//swap without third variable 

#include<stdio.h>
int main (){
int a , b;
printf("Enter a , b  : ");
scanf("%d %d ",&a,&b);

printf("Before swaping : a:%d b:%d \n ",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("After swaping : a:%d b:%d \n ",a,b);





}