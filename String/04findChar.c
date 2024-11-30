//C program to search a character in a given string.

#include <stdio.h>
void main() {
    int i;
    char string[100], kw, found = 0;

    printf("Enter some strings :");
    gets(string);

    printf("Enter a charater to search :");
    scanf(" %c", &kw);
    printf("The sting is\n :");
    puts(string);


    for (i = 0; string[i]; i++) {
        if (string[i] == kw) {
            if (!found)
                printf("The character '%c' is found at the index of : ", kw);
            printf("%d,\t", i);
            found = 1;
            
        }
    }

    
    if (!found){
        printf("The character '%c' is not found in the the string.",  kw);
    }
}
