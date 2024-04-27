#include<stdio.h>
int main()
{
FILE *fpt;
char f;
fpt=fopen("input.txt","r");
while(fscanf(fpt,"%c",&f)!=EOF)
    printf("%c",f);
fclose(fpt);
return 0 ;
}