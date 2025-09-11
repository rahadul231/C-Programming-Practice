//Write a program that takes two integer and display Sum, Sub, Mul, Div and Reminder.
#include<stdio.h>
int main(){
    int num1, num2, result;
    printf("Enter 2 decimal number: ");
    scanf("%d%d",&num1,&num2);
    result = num1+num2;
    printf("Sum is: %d\n",result);
    result = num1-num2;
    printf("Sub is: %d\n",result);
    result = num1*num2;
    printf("Mul is: %d\n",result);
    float div = num1/num2;
    printf("Div is: %f\n",div);
    result = num1%num2;
    printf("Reminder is: %d",result);
    return 0;
}