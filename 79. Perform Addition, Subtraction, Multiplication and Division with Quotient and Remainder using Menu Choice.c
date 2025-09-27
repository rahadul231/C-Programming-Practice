#include<stdio.h>
#include<math.h>
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
        else{
            int subchoice;
            printf("Enter '1' for 'Quotient' or '2' for 'Remainder': ");
            scanf("%d",&subchoice);
            
            if(subchoice==1)
            printf("Quotient: %f",num1/num2);
            else if(subchoice==2)
                printf("Remainder: %f",fmod(num1,num2));
            else
                printf("Wrong Subchoice!");
        }
    }
    else
        printf("Wrong Choice! Input correct Choice.");
    return 0;
}