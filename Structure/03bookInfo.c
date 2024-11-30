//Write a program to store information of multiple books (title, author, price) and display books that have a price above a specified value. 

#include <stdio.h>
#include <string.h>

void main() {
    int i, n;

    printf("How many book info do you want to store : ");
    scanf("%d", &n);
    getchar();
    struct book{
        char name[30];
        char author[30];
        float price;
    } book[n];

    for (i=0; i<n; i++){
        printf("Enter book %d name : ", i+1);
        gets(book[i].name);
        printf("Enter book %d Author name : ", i+1);      
        gets(book[i].author);
        printf("Enter book %d price : ", i+1);
        scanf("%f", &book[i].price);
        getchar();

        
    }


      for (i=0; i<n; i++){
        if (book[i].price >= 100){
            printf("\n----------Book %d Info ----------\n", i+1);
            printf("Book name : %s\n", book[i].name);
            printf("Author name : %d \n", book[i].author);
            printf("Price :  %.2f\n: ", book[i].price);

        }

      }
}
