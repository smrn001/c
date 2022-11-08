#include <stdio.h>
struct book
{
    char name[30];
    char author[30];
    int page;
    int price;
};
int main()
{
    int i, count = 0;
    struct book b[5];
    for (i = 0; i < 5; i++)
    {
        printf("\n Enter name of book(%d) :", i + 1);
        scanf("%s", b[i].name);
        printf("Enter name of author(%d) :", i + 1);
        scanf("%s", b[i].author);
        printf("Enter no. pages of book(%d) :", i + 1);
        scanf("%d", &b[i].page);
        printf("Enter name of price(%d) :", i + 1);
        scanf("%d", &b[i].price);
        if (b[i].price >= 500 && b[i].price <= 1000)
            count++;
    }
    printf("No. of books with price 500-1000 is %d ", count);
    return 0;
}