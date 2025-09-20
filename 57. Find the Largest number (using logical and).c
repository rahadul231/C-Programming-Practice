#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2){
        printf("Largest number is: %d",num1);
    }
    else if(num1<num2){
        printf("Largest number is: %d",num2);
    }
    else{
        printf("There are no largest number.");
    }
    return 0;
}