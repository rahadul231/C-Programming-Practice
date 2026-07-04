#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter the value: ");
    scanf("%lf",&x);
    
    double result = round(x);
    printf("round(%lf) = %lf",x,result);
}
