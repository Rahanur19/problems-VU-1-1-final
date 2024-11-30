//Write a function that receives a string (character array) as argument and returns the length of this array. 

#include <stdio.h>
#include <string.h>

int strLength(char ch[100]){
    return strlen(ch);
}

void main(){
    int len;
    char string[200];
    printf("Enter a string to find the length : ");
    gets(string);

    len = strLength(string);

    printf("The langth of the given string is : %d", len);
}