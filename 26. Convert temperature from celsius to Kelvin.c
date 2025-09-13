#include<stdio.h>
int main(){
    float celsius;
    printf("Enter the value of temperature in celsius: ");
    scanf("%f",&celsius);

    float kelvin = celsius+273;
    printf("Temperature in kelvin: %f",kelvin);
}