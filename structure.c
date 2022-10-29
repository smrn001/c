#include <stdio.h>
// #include<conio.h>
struct std
{
    char name[30];
    unsigned int age;
    unsigned int roll;
    char address[30];
};
int main()
{
    struct std s[5];
    int count = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter your name-%d ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter your age-%d ", i + 1);
        scanf("%u", &s[i].age);
        printf("Enter roll no-%d ", i + 1);
        scanf("%u", &s[i].roll);
        printf("Enter your address-%d ", i + 1);
        scanf("%s", s[i].address);
    }
  for (i = 0; i < 5; i++){
    printf("\n Name:%s \t Age:%u \t roll No:%u \t Address:%s",s[i].name,s[i].age,s[i].roll,s[i].address);
    if(s[i].age>=10&&s[i].age<=15)
      count++;
  }
  printf(" \n No. of students with age 10-15 is %d ",count);

    return 0;
};