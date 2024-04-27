#include <stdio.h>

struct student
{

    char name[40];
    int roll_number;
    float percentage;
};

int main()
{
    // creating for 2 students
    struct student s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nEnter name of student-%d  : ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter Roll Number of student-%d : ", i + 1);
        scanf("%d", &s[i].roll_number);
        printf("Enter percentage of student-%d : ", i + 1);
        scanf("%f", &s[i].percentage);
    }
    printf("Students  with percentage above 60 : \n");
    for (int i = 0; i < 2; i++)
    {
        if (s[i].percentage >= 60.00)
            printf("%s\n", s[i].name);
    }

    return 0;
}