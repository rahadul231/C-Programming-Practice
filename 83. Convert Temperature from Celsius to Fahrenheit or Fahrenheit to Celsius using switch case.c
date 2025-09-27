#include<stdio.h>
int main(){
    int choice;
    float Celsius, Fahrenheit;
    printf("Temperature convertion menu. Choose option.\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n\n");
    printf("Enter your choice by pressing 1 or 2: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("\nEnter Temperature in Celsius: ");
            scanf("%f",&Celsius);
            Fahrenheit = (9*Celsius/5)+32;
            printf("Temperature in Fahrenheit: %f",Celsius);
            break;
        case 2:
            printf("\nEnter Temperature in Fahrenheit: ");
            scanf("%f",&Fahrenheit);
            Celsius = ((Fahrenheit-32)*5)/9;
            printf("Temperature in Celsius: %f",Celsius);
            break;
            
        default:
            printf("Choice is wrong or value of temperature is incorrect.");
    }
    return 0;
}