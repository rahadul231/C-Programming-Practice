#include<stdio.h>
int main(){
    int choice;
    float Celsius, Fahrenheit, Kelvin;
    printf("Temperature convertion menu. Choose option.\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n\n");
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
        case 3:
            printf("\nEnter Temperature in Celsius: ");
            scanf("%f",&Celsius);
            Kelvin = Celsius+273;
            printf("Temperature in Kelvin: %f",Kelvin);
            break;
        case 4:
            printf("\nEnter Temperature in Kelvin: ");
            scanf("%f",&Kelvin);
            Celsius = Kelvin-273;
            printf("Temperature in Celsius: %f",Celsius);
            break;
        case 5:
            printf("\nEnter Temperature in Fahrenheit: ");
            scanf("%f",&Fahrenheit);
            Kelvin = (((Fahrenheit-32)*5)/9)+273;
            printf("Temperature in Kelvin: %f",Kelvin);
            break;
        case 6:
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