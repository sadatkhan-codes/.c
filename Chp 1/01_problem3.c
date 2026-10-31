//  Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
#include <stdio.h>

int main(){
    float celcius;
    printf("Enter the celcius temp:");
    scanf("%f", &celcius);
    float fahrenheit = (celcius * 9/5) + 32;
    printf("The fahrenheit temp is %f", fahrenheit);
    return 0;
}