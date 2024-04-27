#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1, oddCount = 0; oddCount < 10; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            sum += i;
            oddCount++;
        }
    }

    printf("Sum of the first 10 odd numbers is %d\n", sum);
    return 0;
}
