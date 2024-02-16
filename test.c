#include <stdio.h>
int main() {
  int a = 5, b = 9;
  int decimal_num, binary_num = 0, i = 1, remainder;

  printf("a = %d, b = %d\n", a, b);
  printf("a&b = %d\n", a & b);
  printf("a|b = %d\n", a | b);
  printf("a^b = %d\n", a ^ b);
  printf("~a = %d\n", ~a);
  printf("(b<<2)+(a<<1) = %d\n", (b << 2) + (a << 1));
  printf("(b>>1)+(a>>1) = %d\n", (b >> 1) + (a >> 1));

  decimal_num = ~a;
  while (decimal_num != 0) {
    remainder = decimal_num % 2;
    decimal_num /= 2;
    binary_num += remainder * i;
    i *= 10;
  }
  printf("Binary number: %d\n", binary_num);

  return 0;
}