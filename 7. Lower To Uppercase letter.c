#include<stdio.h>
int main(){
    char lower,upper;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);
    upper = lower-32;
    printf("The Upper case is: %c",upper);
    
}