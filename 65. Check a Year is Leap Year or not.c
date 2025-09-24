#include<stdio.h>
int main(){
    int Year;
    printf("Enter a Year: ");
    scanf("%d",&Year);
    
    if(Year%4==0 && Year%100!=0)
        printf("The year %d is a 'Leap Year'",Year);
    
    else if(Year%400==0)
        printf("The year %d is a 'Leap Year'",Year);
    
    else
        printf("This is not a 'Leap Year'.");
    
    return 0;
}