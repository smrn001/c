#include <stdio.h>
int main() {
  int a = 0, b = 1, c, n, i;
  printf("Enter nth term ");
  scanf("%d", &n);
  printf("%d \a %d \a", a, b);
  for (i = 2; i < n; i++) {
    c = a + b;
    a = b;
    b = c;
    printf("%d \n", c);
  }
  return 0;
}