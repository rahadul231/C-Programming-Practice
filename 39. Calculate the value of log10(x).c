#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    
    double result = log10(x);
    printf("Log10(%d) = %lf",x,result);
}