//C program to reverse a string. 

#include <stdio.h>
#include <string.h>
void main() {
    int i, m, len;
    char string[100], kw, found = 0, temp;

    printf("Enter some strings :");
    gets(string);

    len = strlen(string);
    m=len;

    for (i=0; i<=len/2; i++){
        temp = string[i];
        string[i] = string[m -1];
        string[m-1] = temp;

        m--;
    }

    printf("Reversed String : ");
    for (i=0; string[i]; i++){
        printf("%c", string[i]);
    }
}