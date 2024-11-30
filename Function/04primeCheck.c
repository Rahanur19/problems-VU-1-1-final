#include <stdio.h>
#include <math.h>

void primeCheck(){
    int x, i, flag=1;
    printf("Enter a number to check prime or not :");
    scanf("%d", &x);

    if (x<=1)
        printf("Invalid Input !!");
    else if (x==2)
        printf("2 is a prime number.");
    else{
        for (i=2; i<sqrt(x); i++){
            if (x%i == 0){
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d is a prime number.", x);
        else
            printf("%d is not a prime number.", x);
    }
}

void main(){
    primeCheck();
}