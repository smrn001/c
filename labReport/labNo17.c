// 17.Write a Program to calculate the simple interest.
#include <stdio.h>
int main() {
  float principal, time, rate, SI;
  printf("Enter Principal , time in year,rate : ");
  scanf("%f %f %f", &principal, &time, &rate);
  SI = principal * rate * time / 100;
  printf("Simple Intrest is Rs.%.2f \n", SI);
  return 0;
}