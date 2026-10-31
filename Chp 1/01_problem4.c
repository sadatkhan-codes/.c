/*Write a program to calculate simple interest for a set of values representing principal,
number of years, and rate of interest.*/

#include <stdio.h>

int main(){
    int r,t;
    float p;
    printf("Enter Princpal, No.of Years, Rate of Interest\n");
    scanf("%f, %d, %d", &p,&t,&r);
    float si = (p * r * t) / 100;
    printf("Simple Interest is %f", si);
    return 0;
}