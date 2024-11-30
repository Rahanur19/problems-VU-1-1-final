//C program to find second largest elements in a one dimensional array 

#include <stdio.h>
void main() {
    int arr[] = {10, 20, 40, 30, 49, 50}, i, largest, secondLargest;
    int len = sizeof(arr) / sizeof(arr[0]);

    largest = arr[0];
    secondLargest =largest;
    for (i = 1; i < len; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest: %d\n", secondLargest);
}
