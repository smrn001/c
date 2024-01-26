#include <stdio.h>
#include <string.h>
int main() {
  char s1[100];
  printf("Enter a string : ");
  scanf("%s", s1);
  int n = strlen(s1), countv = 0, countc = 0;
  for (int i = 0; i < n; i++) {
    if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' ||
        s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' ||
        s1[i] == 'O' || s1[i] == 'U')
      countv++;
    else
      countc++;
  }
  printf("No. of vowels in %s is %d \n", s1, countv);
  printf("No. of consonent in %s is %d \n", s1, countc);
  return 0;
}