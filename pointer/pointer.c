#include <stdio.h>
int main() {
  int a = 5;                           /// a is an integer variable
  int *ptra;                           /// ptra is a pointer to an integer
  ptra = &a;                           /// ptra is assigned the address of a
  printf("The value of a is %d\n", a); /// prints the value of a

  return 0;
}