#include<stdio.h>
#include<math.h>
int main(){
    float radius;
    printf("Enter the value of Radius: ");
    scanf("%f",&radius);

    float area = M_PI*radius*radius;
    printf("The area of a Circle is: %f",area);
}