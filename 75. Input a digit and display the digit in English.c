//Input length of integer and display the digit in English.
#include<stdio.h>
int main(){
    int digit;
    printf("Enter a digit from 0 to 9: ");
    scanf("%d",&digit);
    
    if(digit==0)
        printf("Zero");
    else if(digit==1)
        printf("One");
    else if(digit==2)
        printf("Two");
    else if(digit==3)
        printf("Three");
    else if(digit==4)
        printf("Four");
    else if(digit==5)
        printf("Five");
    else if(digit==6)
        printf("Six");
    else if(digit==7)
        printf("Seven");
    else if(digit==8)
        printf("Eight");
    else if(digit==9)
        printf("Nine");
    else if(digit==10)
        printf("Ten");
    else
        printf("Input anyone from 0 to 10.");
    return 0;
}