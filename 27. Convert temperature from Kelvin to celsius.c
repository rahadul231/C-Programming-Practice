#include<stdio.h>
int main(){
    float kelvin;
    printf("Enter the value of temperature in kelvin: ");
    scanf("%f",&kelvin);

    float celsius = kelvin-273;
    printf("Temperature in celsius: %f",celsius);
}