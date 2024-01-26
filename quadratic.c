#include <math.h>
#include <stdio.h>

int main() {
  // Coefficients of the quadratic equation: ax^2 + bx + c = 0
  float a, b, c;

  // Get coefficients from the user
  printf("Enter the coefficients of the quadratic equation (a, b, c):\n");
  printf("a: ");
  scanf("%f", &a);
  printf("b: ");
  scanf("%f", &b);
  printf("c: ");
  scanf("%f", &c);

  // Calculate the discriminant
  float discriminant = b * b - 4 * a * c;

  // Check the nature of roots based on the discriminant
  if (discriminant > 0) {
    // Two real and distinct roots
    float root1 = (-b + sqrt(discriminant)) / (2 * a);
    float root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("Root 1: %f\n", root1);
    printf("Root 2: %f\n", root2);
  } else if (discriminant == 0) {
    // One real and repeated root
    float root = -b / (2 * a);
    printf("Root: %f\n", root);
  } else {
    // Complex roots
    float realPart = -b / (2 * a);
    float imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("Root 1: %f + %fi\n", realPart, imaginaryPart);
    printf("Root 2: %f - %fi\n", realPart, imaginaryPart);
  }

  return 0;
}
