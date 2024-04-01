#include <stdio.h>
int main() {
  int a;  // declearing an integer variable a
  a = 5;  // assigining 5 to integer variable a
  int *b; /// declearing pointig variable b
  b = &a; /// assigining the address of a to pointer variable b
  int **c;
  c = &b;
  int ***d;
  d = &c;

  printf(" Value of a is %d \n", a);
  printf("Address of a is %d \n", b);
  printf("Value of a by refrence is %d \n ", *b);

  return 0;
}