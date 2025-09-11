//Write a program that calculates the Area of a triangle.
#include<stdio.h>
int main(){
    float base, height;
    printf("Enter base  : ");
    scanf("%f",&base);
    printf("Enter height: ");
    scanf("%f",&height);
    
    float area = .5*base*height;
    printf("Area is: %f",area);
    return 0;
}