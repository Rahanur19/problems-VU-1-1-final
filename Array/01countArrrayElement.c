//C program to count Array elements by using sizeof() operator

#include <stdio.h>

int main(){

    int count, arr[] = {10, 20, -30, 50};
    count = sizeof(arr)/ sizeof(arr[0]);

    printf("The has %d number of elelmemnts.", count);
}