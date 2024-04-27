#include<stdio.h>
int main()
{
FILE *fpt;
char text[40];
fpt=fopen("input.txt","a");
printf("Enter some thing ");
scanf("%s",text);
fprintf(fpt,"%s",text);
fclose(fpt);
return 0 ;
}