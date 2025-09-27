#include<stdio.h>
int main(){
    int a1,a2,a3;
    printf("Enter three angles: ");
    scanf("%d%d%d",&a1,&a2,&a3);
    
    int sum = a1+a2+a3;
    if(sum==180 && a1!=0 && a2!=0 && a3!=0)
        printf("It is a triangle.");
    else
        printf("It is not a triangle.");
    
    return 0;
}