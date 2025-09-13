#include<stdio.h>
int main(){
    float celsius;
    printf("Enter the value of temperature in celsius: ");
    scanf("%f",&celsius);

    float fahrenheit = (9*celsius/5)+32;
    printf("Temperature in fahrenheit: %f",fahrenheit);
}