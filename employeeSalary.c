#include <stdio.h>
int main(void) {
  int salary[10], count = 0;
  for (int i = 0; i <= 9; i++) {
    printf("Enter salary of employee_%d  :", i + 1);
    scanf("%d", &salary[i]);
  }
  for (int j = 0; j <= 9; j++) {
    if (salary[j] >= 10000 && salary[j] < 20000)
      count++;
  }
  printf("Emplayee with salary between 10k to 20k is %d", count);
  return 0;
}