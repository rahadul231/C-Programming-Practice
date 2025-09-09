#include<stdio.h>
int main(){
    char upper, lower;
    printf("Enter any Uppercase letter: ");
    scanf("%c",&upper);
    lower = upper+32;
    printf("The Upper case is: %c",lower);
    
}