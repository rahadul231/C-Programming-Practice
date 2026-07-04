#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter the value: ");
    scanf("%lf",&x);
    
    double result = floor(x);
    printf("floor(%lf) = %lf",x,result);
}
