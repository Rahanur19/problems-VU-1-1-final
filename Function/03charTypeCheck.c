#include <stdio.h>

void charCheck(){
    char ch;
    printf("Enter a character to check :");
    scanf("%c", &ch);

    if (ch>='a' && ch<='z')
        printf("Small letter.");
    
    else if (ch>='A' && ch<='Z')
        printf("Capital letter.");
    
    else if (ch>='0' && ch<='9')
        printf("Number.");
    
    else 
        printf("Special character.");
    
}

void main(){
    charCheck();
}