//Write a C program to Find Maximum between Two Numbers using switch case.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    
    switch(num1>num2){
        case 0:     //here 0 means false.
            printf("%d is Maximum.",num2);
            break;
        case 1:     //here 1 means true.
            printf("%d is Maximum.",num1);
            break;
        
        default:{
            printf("The numbers are equal or invalid input.");
        }
    }
    return 0;
}

