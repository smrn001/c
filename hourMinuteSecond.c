// 3. Write a program which asks time in seconds and convert it into hour
// ,minute and seconds
#include <stdio.h>
int main() {
  int sec, min, hr;
  printf("Enter time in seconds :");
  scanf("%d", &sec);
  hr = sec / 3600;
  sec = sec % 3600;
  min = sec / 60;
  sec = sec % 60;
  printf("It is %d hr %d min %d sec \n", hr, min, sec);
  return 0;
}