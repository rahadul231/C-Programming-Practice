#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    (year%4==0 && year%100!=0)? 
        printf("Year '%d' is a leap year.", year):
    (year%400==0)?
        printf("Year '%d' is a leap year.", year):
    printf("Year '%d' is not a leap year.", year);
    
    return 0;
}