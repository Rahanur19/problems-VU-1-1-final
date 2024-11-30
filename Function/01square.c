#include <stdio.h>

void square(){
    float x, sq;
    
    printf("Enter a number to get it's square value :");
    scanf("%f", &x);
    sq = x*x;
    printf("Square value : %.2f", sq);
}

void main(){
    square();
}