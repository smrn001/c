    #include <stdio.h>

struct employee {
  char name[30];
  int id;
  float salary;
};

int main() {
  struct employee emp[100];
  int i = 0;
  char choice;
  do {
    printf("Enter name, ID, and salary of employee %d: ", i + 1);
    scanf("%s %d %f", emp[i].name, &emp[i].id, &emp[i].salary);
    printf("Do you want to enter data of next employee? (y/n): ");
    scanf(" %c", &choice);
    i++;
  } while (choice == 'y' || choice == 'Y');

  printf("\nEntered employee details:\n");
  printf("Name \tID \tSalary\n");
  for (int j = 0; j < i; j++) {
    printf("%s\t %d\t %.2f\n", emp[j].name, emp[j].id, emp[j].salary);
  }

  return 0;
}
