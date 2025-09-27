#include<stdio.h>
int main(){
    int choice;
    float Celsius, Kelvin;
    printf("Temperature convertion menu. Choose option.\n");
    printf("1. Celsius to Kelvin\n");
    printf("2. Kelvin to Celsius\n\n");
    printf("Enter your choice by pressing 1 or 2: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("\nEnter Temperature in Celsius: ");
            scanf("%f",&Celsius);
            Kelvin = Celsius+273;
            printf("Temperature in Kelvin: %f",Kelvin);
            break;
        case 2:
            printf("\nEnter Temperature in Kelvin: ");
            scanf("%f",&Kelvin);
            Celsius = Kelvin-273;
            printf("Temperature in Celsius: %f",Celsius);
            break;
            
        default:
            printf("Choice is wrong or value of temperature is incorrect.");
    }
    return 0;
}