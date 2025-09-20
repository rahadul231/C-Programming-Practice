#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter the value: ");
    scanf("%lf",&x);
    
    double result = trunc(x);
    printf("trunc(%lf) = %lf",x,result);
}
