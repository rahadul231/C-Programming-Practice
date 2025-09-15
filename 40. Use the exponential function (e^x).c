#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    
    double result = exp(x);
    printf("e^(%d) = %lf",x,result);
}