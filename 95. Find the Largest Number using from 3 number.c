#include<stdio.h>
int main(){
    int num1, num2, num3, large;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&num1, &num2, &num3);
    
    large = (num1>num2)? num1 : num2;
    large = (large>num3)? large : num3;
    printf("Large number is: %d",large);
    return 0;
}