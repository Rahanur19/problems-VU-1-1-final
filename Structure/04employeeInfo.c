//Write a program to store information about employees and calculate total salary paid by a company. Each employee has an id, name, and salary. 

#include <stdio.h>
#include <string.h>

void main() {
    int i, n;
    float totalSalary = 0;

    printf("How many employee info do you want to store : ");
    scanf("%d", &n);
    getchar();
    struct employee{
        char name[30];
        int id;
        float salary;
    } employee[n];

    for (i=0; i<n; i++){
         printf("\n----------Enter Employee %d Info ----------\n",i+1);  

        printf("Enter employee %d name : ", i+1);
        gets(employee[i].name);
        printf("Enter employee %d ID : ", i+1);      
        scanf("%d", &employee[i].id);
        printf("Enter employee %d salary : ", i+1);      
        scanf("%f", &employee[i].salary);
        getchar();    
    }

    for (i=0; i<n; i++){
        totalSalary += employee[i].salary;
        }

    printf("Total salary paid by company : %.2f", totalSalary);
    
}
