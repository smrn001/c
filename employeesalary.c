#include <stdio.h>
int main()
{
    int i, count = 0, n;
    char name[30];
    char address[30];
    char telno[15];
    int salary;
    FILE *fp;
    fp = fopen("emp.txt", "a");
    printf("Enter no. of enteries :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter name :");
        scanf("%s", name);
        printf("Enter address :");
        scanf("%s", address);
        printf("Enter tel no :");
        scanf("%s", telno);
        printf("Enter salary :");
        scanf("%d", &salary);
        fprintf(fp,"\n%s\t%s\t%s\t%d",name,address,telno,salary);
        if (salary >= 10000 && salary <= 20000)
            count++;
    }
    printf("no of emplyoee with salary between 10k-20k is %d  ",count);
    fclose(fp);
    return 0;
}