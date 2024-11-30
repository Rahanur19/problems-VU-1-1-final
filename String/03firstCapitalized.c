//C program to input a multi word string and produce a string in which first letter of each word is capitalized. 

#include <stdio.h>
#include <string.h>

void main(){
    int i;
    char string[100];

    printf("Enter some strings :");

    gets(string);
    printf("\nBefore : \n");
    puts(string);

    if (string[0]>= 'a' && string[0]<= 'z'){
        string[0] = (int)string[0] - 32;
    }
    for(i=1; string[i]; i++){   
        if (string[i] == ' '){
            if (string[i+1]>= 'a' && string[i+1]<= 'z'){
                string[i+1] = (int)string[i+1] - 32;
        }
        }
    }

    printf("Ater : \n");

    puts(string);    
}