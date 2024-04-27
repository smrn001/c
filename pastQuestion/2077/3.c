#include<stdio.h>
struct course{
    char name[20];
    int code;
    float credit_hour;
};

int main()
{
    struct course c[2];
    for (int i=0; i<2; i++)
    {
        printf("Enter the name of course %d: ", i+1);
        scanf("%s", c[i].name);
        printf("Enter the code of course %d: ", i+1);
        scanf("%d", &c[i].code);
        printf("Enter the credit hour of course %d: ", i+1);
        scanf("%f", &c[i].credit_hour);
    }

    printf("\n\nCourses with credit hour greater than 3 are:\n");
    printf("Course Name\tCourse Code\tCredit Hour\n");
    for(int i=0; i<2; i++)
    {
        if(c[i].credit_hour > 3)
        {
            printf("%s\t\t%d\t\t%.2f\n", c[i].name, c[i].code, c[i].credit_hour);
        }
       
    }

return 0 ;
}