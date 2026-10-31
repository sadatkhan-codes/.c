/* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user */

#include <stdio.h>

int main(){
    int sub1, sub2, sub3;
    printf("Enter the marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);
    float tot = (sub1 + sub2 + sub3)/3.0;
    // printf("%f\n",tot);

    if (tot >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33){
        printf("The student has passed");
    }
    else{
        printf("The student has failed");
    }

    return 0;

}