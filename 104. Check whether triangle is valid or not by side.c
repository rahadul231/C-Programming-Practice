#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter value for 3 sides: ");
    scanf("%f %f %f", &a, &b, &c);
    
    ((a+b)>c && (a+c)>b && (b+c)>a)? 
        printf("Valid Triangle.\n") : 
        printf("This is not a valid Triangle.\n");
    return 0;

}