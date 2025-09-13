#include<stdio.h>
int main(){
    float fahrenheit;
    printf("Enter the value of temperature in celsius: ");
    scanf("%f",&fahrenheit);

    float celsius = ((fahrenheit-32)*5)/9;
    printf("Temperature in celsius: %f",celsius);
}