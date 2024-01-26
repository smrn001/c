#include <stdio.h>
int main() {
  float m, km;
  printf("Enter length in m :");
  scanf("%f", &m);
  km = m * 0.001;
  printf("%fm is %fKm ", m, km);
  return 0;
}