#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//test

void playGuessingGame(int A, int B) {
    int randomNumber, guess, tries = 0, maxTries = 10;

    srand(time(0)); 
    randomNumber = A + rand() % (B - A + 1);

    printf("Guess the number between %d and %d! You have %d tries.\n", A, B, maxTries);

    while (tries < maxTries) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the number!\n");
            printf("Your score is: %d\n", maxTries - tries + 1);
            return;
        } else if (guess > randomNumber) {
            printf("High! Try again.\n");
        } else {
            printf("Low! Try again.\n");
        }
    }
    printf("Sorry, you ran out of tries. The number was %d.\n", randomNumber);
}

int main() {
    int A, B;

    printf("Enter the starting point of the range (A): ");
    scanf("%d", &A);
    printf("Enter the ending point of the range (B): ");
    scanf("%d", &B);

    if (A > B) {
        printf("Invalid range. Please ensure A <= B.\n");
        return 1;
    }

    playGuessingGame(A, B);

    return 0;
}
