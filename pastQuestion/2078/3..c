#include <stdio.h>
#include <string.h>

struct book
{
    char name[30];
    char author[30];
    char publisher[30];
};

int main()
{

    struct book b[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of the book: ");
        scanf("%s", b[i].name);
        printf("Enter the author of the book: ");
        scanf("%s", b[i].author);
        printf("Enter the publisher of the book: ");
        scanf("%s", b[i].publisher);
    }

    printf("Books published by  XYZ publisher are : ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(b[i].publisher, "XYZ") == 0)
        {
            printf("\n%s", b[i].name);
        }
    }
    printf("\n");
    return 0;
}
