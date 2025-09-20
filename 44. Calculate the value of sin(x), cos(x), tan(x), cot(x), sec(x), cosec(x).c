#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);
    
    double result;
    result = sin(x);
    printf("sin(%d) = %lf\n",x,result);
    result = cos(x);
    printf("cos(%d) = %lf\n",x,result);
    result = tan(x);
    printf("tan(%d) = %lf\n",x,result);
    result = 1/sin(x);
    printf("cot(%d) = %lf\n",x,result);
    result = 1/cos(x);
    printf("sec(%d) = %lf\n",x,result);
    result = 1/tan(x);
    printf("tan(%d) = %lf\n",x,result);
    return 0;
}