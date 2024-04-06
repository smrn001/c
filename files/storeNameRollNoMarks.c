#include <stdio.h>
int main() {
  char name[15];
  int rollNo;
  float marks;
  printf("Enter name :");
  fgets(name, 15, stdin);
  printf("Enter Roll No. :");
  scanf("%d", &rollNo);
  printf("Enter Marks :");
  scanf("%f", &marks);
  FILE *da;
  da = fopen("student.txt", "a");
  printf("Name:%s  RollNo:%d \t  Marks:%.2f", name, rollNo, marks);
  fprintf(da, "\n Name:%s  RollNo:%d \t  Marks:%.2f\n", name, rollNo, marks);
  fclose(da);
  return 0;
}