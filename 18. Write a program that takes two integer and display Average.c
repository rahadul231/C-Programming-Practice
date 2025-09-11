//Write a program that takes two integer and display Average.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter 2 decimal number: ");
    scanf("%d%d",&num1,&num2);
    int sum = num1+num2;
    float Average = sum/2;
    printf("Average is: %f",Average);
    return 0;
}