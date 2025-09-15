#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    
    double result = sin(x);
    printf("sin(%d) = %lf",x,result);
}