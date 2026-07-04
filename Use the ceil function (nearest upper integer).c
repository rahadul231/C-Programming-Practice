#include<stdio.h>
#include<math.h>
int main(){
    double x;
    printf("Enter the value: ");
    scanf("%lf",&x);
    
    double result = ceil(x);
    printf("ceil(%lf) = %lf",x,result);
}
