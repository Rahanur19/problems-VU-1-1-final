#include <stdio.h>

void findPythagoreanTriplets(int start, int end) {
    int a, b, c;
    printf("Pythagorean Triplets within the range [%d, %d]:\n", start, end);
    for (a = start; a <= end; a++) {
        for (b = a; b <= end; b++) {
            for (c = b; c <= end; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }
}

int main() {
    int start, end;
    printf("Enter the starting point of the range: ");
    scanf("%d", &start);
    printf("Enter the ending point of the range: ");
    scanf("%d", &end);

    if (start < 1 || end < start) {
        printf("Invalid range. Please enter positive integers with start <= end.\n");
    } else {
        findPythagoreanTriplets(start, end);
    }

    return 0;
}
