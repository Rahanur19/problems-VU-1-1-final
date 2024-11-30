//Write a program to calculate the distance between two points in a 2D space. Each point has x and y coordinates. 

#include <stdio.h>
#include <math.h>

void main() {
    int i;
    float distance;

    struct book{
        float x;
        float y;
    } p1, p2;

    printf("Enter point 1 coordiante (x1 & y1) : ");
    scanf("%f%f", &p1.x, &p1.y);

    printf("Enter point 2 coordiante (x1 & y1) : ");
    scanf("%f%f", &p2.x, &p2.y);

    distance = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));

    printf("Distance : %.2f", distance);
}
