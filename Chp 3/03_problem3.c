/*Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%*/

#include <stdio.h>

int main(){
    float income, tax;
    printf("Enter the income in lakhs: ");
    scanf("%f", &income);
    if (income >= 2.5 && income <= 5.0){
        tax = 0.05 * income;
        printf("The tax paid is %f", tax);
    }
    else if (income > 5.0 && income <= 10.0){
        tax = 0.2 * income;
        printf("The tax paid is %f", tax);
    }
    else if (income > 10.0){
        tax = 0.3 * income;
        printf("The tax paid is %f", tax);
    }
    else{
        printf("No tax to be paid");
    }

    return 0;
}