#include<stdio.h>
int main(){
    int choice;
    float Fahrenheit, Kelvin;
    printf("Temperature convertion menu. Choose option.\n");
    printf("1. Fahrenheit to Kelvin\n");
    printf("2. Kelvin to Fahrenheit\n\n");
    printf("Enter your choice by pressing 1 or 2: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            printf("\nEnter Temperature in Fahrenheit: ");
            scanf("%f",&Fahrenheit);
            Kelvin = (((Fahrenheit-32)*5)/9)+273;
            printf("Temperature in Kelvin: %f",Kelvin);
            break;
        case 2:
            printf("\nEnter Temperature in Kelvin: ");
            scanf("%f",&Kelvin);
            Fahrenheit = Kelvin-273;
            printf("Temperature in Fahrenheit: %f",Fahrenheit);
            break;
            
        default:
            printf("Choice is wrong or value of temperature is incorrect.");
    }
    return 0;
}