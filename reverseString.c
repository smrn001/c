#include <stdio.h>
#include <string.h>

int main(void) {
  int a;
  char string[100];
  printf("Enter a string ");
  scanf("%s", string);
  a = strlen(string);
  printf("reverse of %s is ", string);
  for (int i = a - 1; i >= 0; i--)
    printf("%c", string[i]);

  return 0;
}