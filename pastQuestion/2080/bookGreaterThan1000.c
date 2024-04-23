// Create a structure named Book with members Book_Name, Price and Author_Name, then take input for 10 records of Book and print the name of authors having the price of book greater than 1000
#include<stdio.h>
struct Book{
    char Book_Name[100];
    float Price;
    char Author_Name[100];
};
int main()
{
    struct Book b[10];
    for (int i=0;i<10;i++){

        printf("Enter the name of the book-%d: ",i+1);
        scanf("%s",b[i].Book_Name);
        printf("Enter the price of the book-%d: ",i+1);
        scanf("%f",&b[i].Price);
        printf("Enter the name of the author of the book-%d: ",i+1);
        scanf("%s",b[i].Author_Name);
    }
    printf("Authors having the price of book greater than 1000 are : ");
    for (int i=0;i<10;i++){
        if (b[i].Price>1000){
            printf(" %s\n",b[i].Author_Name);
        }
    }

return 0 ;
}