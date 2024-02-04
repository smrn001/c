#include <stdio.h>
int main() {
  int num1, num2, temp;
  printf("Enter two numbers :  ");
  scanf("%d%d", &num1, &num2);
  printf("Before swaping : num1=%d \t  num2=%d \n", num1, num2);
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("After swaping : num1=%d \t  num2=%d \n ", num1, num2);
  return 0;
}