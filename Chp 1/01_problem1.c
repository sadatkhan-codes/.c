// Write a C program to calculate the area of a rectangle
#include <stdio.h>

int main(){
    int lenght, breadth;
    printf("Enter lenght: ");
    scanf("%d", &lenght);
    printf("Enter breadth: ");
    scanf("%d", &breadth);
    printf("Area of rectangle is: %d", lenght * breadth);
    return 0;
}