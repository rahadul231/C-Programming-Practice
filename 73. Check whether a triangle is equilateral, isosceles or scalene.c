#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter three angles: ");
    scanf("%d%d%d",&a1,&a2,&a3);
    
    if(a1==12 && a2==a3)
        printf("The triangle is Equilateral.");
    else if (a1==12 || a2==a3 || a1==a3)
        printf("The triangle is Isosceles.");
    else
        printf("The triangle is Scalene.");
    return 0;
}