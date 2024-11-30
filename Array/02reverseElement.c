//C program to swap first element with last, second to second last and so on (reversing elements) 

#include <stdio.h>

void main(){
    int temp, len, i, m, arr[]= {10, 20, 30, 40};

    len = sizeof(arr)/sizeof(arr[0]);

    printf("Initial array :");
    for (i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }


    m=len;
    for (i=0; i<len/2; i++){
        temp = arr[i];
        arr[i] = arr[m-1];
        arr[m-1] = temp;

        m--;
    }

    printf("\nReversed array :");
    for (i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }

}