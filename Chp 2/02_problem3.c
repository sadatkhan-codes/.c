#include <stdio.h>

int main(){
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number%97 ==0){
        printf("The number is divisible by 97");
    }
    else{
        printf("The number is not divisible by 97");   
    }
    return 0;
}