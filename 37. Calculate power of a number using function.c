#include<stdio.h>
#include<math.h>
int main(){
    int x, y;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    printf("Enter power: ");
    scanf("%d",&y);
    
    double result = pow(x,y);
    printf("Result is: %lf",result);
    return 0;
}