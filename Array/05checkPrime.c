//C program to check prime numbers in an array. 

#include <stdio.h>

void main(){
    int len, i, j, flag;
    int arr[] = {1, 12, 13, 2, 14, 16, 17};
    len = sizeof(arr) / sizeof(arr[0]);

    for (i=0; i<len; i++){
        flag =1;
        if (arr[i]<=1){
            printf("Invalid input : %d\n", arr[i]);
            
         }
        else if (arr[i]==2){
            printf("2 is a prime number.\n");
            continue;
        }
        else{
        for(j=2; j<=(arr[i]/2); j++){
            if (arr[i]%j==0){
                flag = 0;
                break;
            }
        }
        }
        if(flag){
            printf("%d is a prime number.\n", arr[i]);
        }else{
            // printf("%d is not a prime number.\n", arr[i]);
        }
    }
}