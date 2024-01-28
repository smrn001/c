// program to find percecntage of marks obtain in 5 subjects

#include <stdio.h>
int main() {
  char name[15];
  int rollNo;
  float marks[5], percentage;
  printf("Enter Name : ");
  scanf("%s", name);
  printf("Enter Roll No. : ");
  scanf("%d", &rollNo);
  for (int i = 0; i < 5; i++) {
    printf("Enter marks obtain in subject %d :", i + 1);
    scanf("%f", &marks[i]);
  }
  percentage =
      ((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 500) * 100;

  printf("Name : %s \n", name);
  printf("Roll No : %d \n", rollNo);
  printf("Percentage : %.2f \n", percentage);
  return 0;
}