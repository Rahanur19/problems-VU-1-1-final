//Write a function to calculate the area of various geometrical (circle, square, rectangle, triangle, etc.). 

#include <stdio.h>

void area(){
    char ch;
    float x,y, area;
    printf("Enter a character to calculate area. \n(c for circle, s for square, r for rectangle, t for triangle):");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'c':
        printf("Enter the radius of a circle : ");
        scanf("%f", &x);
        area = 3.1416*x*x;
        printf("Area of the circle : %.2f", area);
        break;
    
    case 'r':
        printf("Enter the base of a rectangle : ");
        scanf("%f", &x);
        printf("Enter the height of a rectangle : ");
        scanf("%f", &y);
        area = x*y;
        printf("Area of the rectangle : %.2f", area);
        break;
    case 't':
        printf("Enter the base of a triangle : ");
        scanf("%f", &x);
        printf("Enter the height of a triangle : ");
        scanf("%f", &y);
        area = 0.5*x*y;
        printf("Area of the triangle : %.2f", area);
        break;
    
    case 's':
        printf("Enter the arm of a square : ");
        scanf("%f", &x);
        area = x*x;
        printf("Area of the square : %.2f", area);
        break;
    
    default:
        break;
    }

}

void main(){

    area();
    
}