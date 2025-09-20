#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    
    double result = cos(x);
    printf("cos(%d) = %lf",x,result);
}