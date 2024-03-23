// . Create a structure named Book with members Book Name, Price and
// Author_Name, then take input for 2 records of Book and print the name
// of authors having the price of book greater than 1000

#include <stdio.h>

struct Book {
  char Book_Name[40];
  int Price;
  char Author_Name[40];
};

int main() {
  struct Book b[10];
  for (int i = 0; i < 2; i++) {
    printf("\nEnter  Name of %d book  : ", i + 1);
    scanf("%s", b[i].Book_Name);
    printf("Enter Price of %d book  : ", i + 1);
    scanf("%d", &b[i].Price);
    printf("Enter Authot's name of %d book  : ", i + 1);
    scanf("%s", b[i].Author_Name);
  }

  printf(
      "The name of authors having the price of book greater than 1000 is : \n");

  for (int i = 0; i < 2; i++) {
    if (b[i].Price > 1000)
      printf("\n %s", b[i].Author_Name);
  }

  return 0;
}