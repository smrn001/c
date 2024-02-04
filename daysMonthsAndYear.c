#include <stdio.h>
int main() {
  int days, month, year;
  printf("Enter number of days : ");
  scanf("%d", &days);
  year = days / 365;
  days = days % 365;
  month = days / 30;
  days = days % 30;
  printf("It  is %d year  %d  month  %d  days \n", year, month, days);
  return 0;
}