#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n, len;

    printf("Enter the length of the password: ");
    scanf("%d", &n);
    char passRef[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$&*/"; 
    len = strlen(passRef);
    char pass[n];

    if (n<=5 || n>=32) {
        printf("Pass len must be at least 6 and 32 max.\n");
    }
    else{
        srand(time(0));
        for (i = 0; i < n; i++) {
            pass[i] = passRef[rand() % len];
        }
        printf("Generated Password: %s\n", pass);   
    }


    return 0;
}
