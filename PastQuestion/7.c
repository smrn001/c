// // 5/Write a program to take input of name,
// roll no and marks obtained by a student in
//  5 subjects each have its 100 full marks and
//   display the name, roll no with percentage score secured

#include <stdio.h>

int main() {
  char name[50];
  int rollNo;
  int marks[5];
  int totalMarks = 500;
  float percentage;

  printf("Enter name: ");
  scanf("%s", name);

  printf("Enter roll number: ");
  scanf("%d", &rollNo);

  printf("Enter marks obtained in 5 subjects:\n");
  int totalObtainedMarks = 0;
  for (int i = 0; i < 5; i++) {
    printf("Subject %d: ", i + 1);
    scanf("%d", &marks[i]);
    totalObtainedMarks += marks[i];
  }
  percentage = (float)totalObtainedMarks / totalMarks * 100;

  // Display the result
  printf("\nName: %s\n", name);
  printf("Roll No: %d\n", rollNo);
  printf("Percentage: %.2f%%\n", percentage);

  return 0;
}
