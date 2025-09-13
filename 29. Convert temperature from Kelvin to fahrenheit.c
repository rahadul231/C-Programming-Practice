#include<stdio.h>
int main(){
    float kelvin;
    printf("Enter the value of temperature in kelvin: ");
    scanf("%f",&kelvin);

    float fahrenheit = (((kelvin-273)*9)/5)+32;
    printf("Temperature in fahrenheit: %f",fahrenheit);
}