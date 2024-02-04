#include <stdio.h>
int main() {
  int num1, num2; // num1=10  num2=20
  printf("Enter two numbers : ");
  scanf("%d%d", &num1, &num2);
  printf("Before swapping num1=%d  num2=%d \n", num1, num2);
  num1 = num1 + num2; // num1=10+20=30
  num2 = num1 - num2; // num2=30-20=10
  num1 = num1 - num2; // num1=30-10=20
  printf("After swapping num1=%d  num2=%d \n", num1, num2);
  return 0;
}