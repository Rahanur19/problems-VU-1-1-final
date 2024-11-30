//C program to count the number of words and number of characters in a given line of text except the spaces. 

#include <stdio.h>
#include <string.h>

void main(){
    int i, charCount = 0, count;
    printf("Enter some strings :");

    char string[100];

    gets(string);

    for(i=0; string[i]; i++){
        if (string[i] != ' ')
            charCount++;
    }

    puts(string);
    printf("Character count without space : %d", charCount);
    
}