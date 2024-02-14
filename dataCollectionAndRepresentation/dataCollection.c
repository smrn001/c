#include <stdio.h>
int main() {
  char name[20];
  int age;
  char number[15];
  char address[25];
  char choice;

  FILE *dc;
  dc = fopen("rec.data", "a");

  do {
    printf("\nEnter Name :");
    scanf("%s", name);
    // fgets(name, sizeof(name), stdin);
    printf("Enter age :");
    scanf("%d", &age);
    printf("Enter Phone Number  :");
    scanf("%s", number);
    printf("Enter address :");
    scanf("%s", address);
    fprintf(dc, "\n%s\t%d\t%s\t%s", name, age, number, address);
    printf("Do you want to continue ? (y,n) ");
    scanf(" %c", &choice);
  } while (choice == 'y' || choice == 'Y');
  fclose(dc);

  return 0;
}