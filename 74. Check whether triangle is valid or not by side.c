#include<stdio.h>
int main(){
    float a, b, c, flag = c;
    printf("Enter value for a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (((a+b)>c) || ((b+c)>a) || ((a+c)>b))
        printf("Valid Tringle.");
    else 
        printf("Invalid Tringle.");
    return 0;
}