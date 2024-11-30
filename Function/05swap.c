//Write a program to take two numbers as input and function to swap them by passing parameters as values and also as addresses. 

#include <stdio.h>

void swapAddress(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;    
}
void swapValues(int x, int y){
    int temp;
    temp = x;
    x=y;
    y = temp;

    printf("\n Values after 'call by values' (changed only inside of function) : x = %d \t y=%d", x, y);
}

int main(){
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Enter the value of b : ");


    printf("\nPrevious values : a = %d \t b=%d", a, b);
    swapValues(a,b);
    
    printf("\n Values after 'call by values' (not changed) : a = %d \t b=%d", a, b);

    swapAddress(&a, &b);

    printf("\n Values after 'call by addrress' (swapped) : a = %d \t b=%d", a, b);
}