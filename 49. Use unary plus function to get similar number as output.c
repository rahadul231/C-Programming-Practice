#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    int result = +a;
    printf("%d",result);
    return 0;
}