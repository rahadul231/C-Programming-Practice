#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2){
        printf("Smallest number is: %d",num2);
    }
    else if(num1<num2){
        printf("Smallest number is: %d",num1);
    }
    else{
        printf("There are no Smallest number.");
    }
    return 0;
}