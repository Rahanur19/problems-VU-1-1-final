//C program to merge two arrays in third array. 

#include <stdio.h>
void main(){
    int arr1[] = {1, 2, 3}, arr2[]={100, 200, 300}, i, len1, len2, len;
    len1 = sizeof(arr1)/sizeof(arr1[0]);
    len2 = sizeof(arr2)/sizeof(arr2[0]);
    len = len1 + len2;

    int arr[len];

    for (i =0; i<len; i++){
        if (i< len1){
            arr[i] = arr1[i];
        }
        else{
            arr[i] = arr2[i-len1];
        }
    }

    printf("Marged array :");
    for (i=0; i<len; i++){
        printf("%d\t", arr[i]);
    }
}