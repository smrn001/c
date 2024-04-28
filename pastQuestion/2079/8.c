#include <stdio.h>
#include <string.h>

struct Employee
{
    char Name[30];
    char Address[30];
    float Salary;
    int Age;
};

int main()
{

    struct Employee emp[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Enter Name: ");
        scanf("%s", emp[i].Name);
        printf("Enter Address: ");
        scanf("%s", emp[i].Address);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].Salary);
        printf("Enter Age: ");
        scanf("%d", &emp[i].Age);
    }

    printf("\nEmployees with age between 40 and 50 and address Kathmandu are:\n");
    for (int i = 0; i < 2; i++)
    {
        if (emp[i].Age >= 40 && emp[i].Age <= 50 && (strcmp(emp[i].Address, "Kathmandu") == 0))
        {
            printf(" %s\n", emp[i].Name);
        }
    }

    return 0;
}