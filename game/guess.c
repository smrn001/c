#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Generate a random number between 1 and 100

    printf("Welcome to the number guessing game!\n");
    printf("Guess a number between 1 and 100:\n");

    // Game loop
    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed the number in %d attempts!\n", attempts);
        }
    } while (guess != number);

    return 0;
}