#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the value of Length: ");
    scanf("%f",&length);
    printf("Enter the value of Width: ");
    scanf("%f",&width);

    float area = length*width;
    printf("The area of a triangle is: %f",area);
}