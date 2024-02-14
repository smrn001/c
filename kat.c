#include <stdio.h>
int main() {
  float days;
  int year, month;
  printf("Enter number of days : ");
  scanf("%f", &days);
  year = (int)(days / 365);
  days -= year * 365;
  month = (int)(days / 30);
  days -= month * 30;
  printf("It is %d year(s), %d month(s), %.2f day(s)\n", year, month, days);
  return 0;
}
