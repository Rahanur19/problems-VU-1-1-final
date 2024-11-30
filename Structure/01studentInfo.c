// Write a program to store and display information of multiple students. Each student has attributes: name, roll_number, and marks. 


#include <stdio.h>
void main() {
    int i;
    struct student{
        char name[30];
        int roll;
        float marks;
    } student1, student2 = {"student 2", 1002, 78.5};

    printf("Enter student name : ");
    gets(student1.name);
    printf("Enter student ID : ");
    scanf("%d", &student1.roll);
    printf("Enter student marks : ");
    scanf("%f", &student1.marks);
    


    printf("\n----------Student 1 Info ----------\n");
    printf("Student name : %s\n", student1.name);
    printf("Student ID : %d \n", student1.roll);
    printf("Student marks %.2f\n: ", student1.marks);

    printf("\n----------Student 2 Info ----------\n");

    printf("Student name : %s\n", student2.name);
    printf("Student ID : %d \n", student2.roll);
    printf("Student marks %.2f: \n", student2.marks);
}
