#include <stdio.h>

int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  int max = (num1 > num2) ? num1 : num2;
  int lcm = max;

  while (1) {
    if (lcm % num1 == 0 && lcm % num2 == 0) {
      printf("LCM of %d and %d is %d\n", num1, num2, lcm);
      break;
    }
    lcm += max;
  }

  return 0;
}
