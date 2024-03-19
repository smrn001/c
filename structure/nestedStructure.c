#include <stdio.h>

struct dob {
  int year;
  int month;
  int day;
};

struct student {

  char name[40];
  int id;
  struct dob dateOfBirth;
  float marks;
};

int main() {

  struct student s1;

  printf("Enter name: ");
  scanf("%s", s1.name);

  printf("Enter ID: ");
  scanf("%d", &s1.id);

  printf("Enter birth year: ");
  scanf("%d", &s1.dateOfBirth.year);

  printf("Enter birth month: ");
  scanf("%d", &s1.dateOfBirth.month);

  printf("Enter birth day: ");
  scanf("%d", &s1.dateOfBirth.day);

  printf("Enter marks: ");
  scanf("%f", &s1.marks);

  printf("\nEntered Data:\n");
  printf("Name: %s\n", s1.name);
  printf("ID: %d\n", s1.id);
  printf("Birth Year: %d\n", s1.dateOfBirth.year);
  printf("Birth Month: %d\n", s1.dateOfBirth.month);
  printf("Birth Day: %d\n", s1.dateOfBirth.day);
  printf("Marks: %.2f\n", s1.marks);

  return 0;
}