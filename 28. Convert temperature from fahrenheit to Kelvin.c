#include<stdio.h>
int main(){
    float fahrenheit;
    printf("Enter the value of temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    float kelvin = (((fahrenheit-32)*5)/9)+273;
    printf("Temperature in kelvin: %f",kelvin);
}
