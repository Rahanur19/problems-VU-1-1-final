//C program to calculate EvenSum and OddSum from an array. 

#include <stdio.h>

void main()
{
    int len, evensum =0, oddsum=0, i;
    int arr[] = {12, 77, 14, 16, 11};
    len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++){
        if (arr[i]%2==0){
            evensum += arr[i];
        }
        else{
            oddsum += arr[i];
        }
    }

    printf("Evensum : %d,\t Oddsum : %d", evensum, oddsum);
}