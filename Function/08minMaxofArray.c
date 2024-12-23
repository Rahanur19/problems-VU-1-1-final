//Write a function that will find the minimum and maximum number from an array. 

#include <stdio.h>
#include <string.h>

int findMinMax(int arr[], int x){
    int min=arr[0], max=arr[0], i;
    for (i=1; i<x; i++){
        if (min>arr[i])
            min = arr[i];
        if (max<arr[i])
            max = arr[i];      
    }

    printf("Minimum = %d\t Maximum = %d\t", min, max);
}

void main(){
    int i,n;

    printf("How many numbers do you want to input? ");
    scanf("%d", &n);

    int  numbers[n];

    printf("Enter %d numbers to find the min and max : ", n);
    for (i=0; i<n; i++){
        scanf("%d", &numbers[i]); 
    }

    findMinMax(numbers, n);
}

