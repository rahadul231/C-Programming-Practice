#include<stdio.h>
int main(){
    float num1, num2;
    int Choice ;
    printf("Enter 2 number: ");
    scanf("%f%f",&num1,&num2);
    
    printf("Enter Choice(1=add, 2=subtract, 3=multiply or 4=divide: ");
    scanf("%d",&Choice);
    
    if(Choice==1)
        printf("Addition: %f",num1+num2);
    else if(Choice==2)
        printf("Subtract: %f",num1-num2);
    else if(Choice==3)
        printf("Multiply: %f",num1*num2);
    else if(Choice==4){
        if(num2=='0')
            printf("Using zero at number2 is wrong.");
        else
            printf("Divide: %f",num1/num2);}
    else
        printf("Wrong Choice! Input correct Choice.");
    return 0;
}