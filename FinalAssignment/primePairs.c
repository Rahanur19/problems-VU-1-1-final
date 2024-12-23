#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void findPrimePairs(int evenNumber) {
    printf("Prime pairs whose sum equals %d:\n", evenNumber);

    for (int i = 2; i <= evenNumber / 2; i++) {
        int complement = evenNumber - i;
        if (isPrime(i) && isPrime(complement)) {
            printf("(%d, %d)\n", i, complement);
        }
    }
}

int main() {
    int evenNumber;

    printf("Enter an even number greater than 2: ");
    scanf("%d", &evenNumber);

    if (evenNumber <= 2 || evenNumber % 2 != 0) {
        printf("Invalid input. Please enter an even number greater than 2.\n");
    } else {
        findPrimePairs(evenNumber);
    }

    return 0;
}
