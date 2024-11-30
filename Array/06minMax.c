//C program to find largest and smallest elements in an array

#include <stdio.h>
void main() {
    int arr[] = {10, 20, 5, 40, 50}, i;
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];

    for (i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
            }
        if (arr[i] < min){
            min = arr[i];
        }
    }

    printf("Largest: %d, Smallest: %d\n", max, min);
}
