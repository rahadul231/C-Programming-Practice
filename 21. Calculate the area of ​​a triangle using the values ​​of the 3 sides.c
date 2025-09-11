#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    printf("Enter the value of 1st side: ");
    scanf("%d",&a);
    printf("Enter the value of 2nd side: ");
    scanf("%d",&b);
    printf("Enter the value of 3rd side: ");
    scanf("%d",&c);
    
    int s = (a+b+c)/2;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of a triangle is: %f",area);
}