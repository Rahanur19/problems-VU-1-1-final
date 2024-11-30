//C program to find occurrence of an element in one dimensional array 

#include <stdio.h>

void main(){
    int len,i,kw, flag=0 ;
    int arr[] = {12, 14, 16, 12};
    len = sizeof(arr)/ sizeof(arr[0]);
    printf("Enter a number to find in array : ");
    scanf("%d", &kw);

    for (i=0; i<len; i++){
        if (kw == arr[i]){
            printf("The number is found at index : %d\n", i);
            flag= 1;
        }
    }
    if (!flag){
        printf("The number is not found.");
    }

   
}