#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x, y: ");
    scanf("%f %f", &x, &y);

    printf("x^y = %.2f ", pow(x, y));
    return 0;
}
