//C program to find a number from array elements. 

#include <stdio.h>
void main() {
    int arr[] = {10, 20, 30, 40, 50}, i, num, found = 0;
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the number to search: ");
    scanf("%d", &num);

    for (i = 0; i < len; i++) {
        if (arr[i] == num) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is found at position %d.\n", num, i + 1);
    } else {
        printf("%d is not in the array.\n", num);
    }
}
