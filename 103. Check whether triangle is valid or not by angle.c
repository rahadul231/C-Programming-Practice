#include<stdio.h>
int main(){
    int a, b,c;
    scanf("%d %d %d",&a, &b, &c);
    int sum = a+b+c;
    (sum==180)?
        printf("This is a triangle."):
    printf("This is not a triangle.");
return 0;
}