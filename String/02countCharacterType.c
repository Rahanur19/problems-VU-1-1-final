//C program to count the numbers of vowels, consonants, digits and special symbols in a given string. 

#include <stdio.h>
#include <string.h>

void main(){
    int i, charCount = 0, count, vowel=0, consonant=0, number=0, special = 0;
    char string[100], l;

    printf("Enter some strings :");

    gets(string);

    for(i=0; string[i]; i++){
        if ((string[i] >= 'A' && string[i] <= 'Z') ||  (string[i] >= 'a' && string[i] <= 'z') )
        {
        l = string[i];
        if (l=='A' ||l=='E' ||l=='I' ||l=='O' ||l=='U' ||l=='a' ||l=='e' ||l=='i' ||l=='o' ||l=='u')
            vowel++;

        else 
            consonant++; 
        }

        else if(string[i] >= '0' && string[i] <= '9')
            number++;
        else
            special++;

    }
    puts(string);
    printf("Vowel : %d\t Consonant : %d\t Number : %d\t Special Character : %d ", vowel, consonant, number, special);
    
}