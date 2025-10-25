#include<stdio.h>
int main(){
    int num;
    printf("Enter a numbers: ");
    scanf("%d",&num);
    
    (num>0)? 
        printf("%d is a positive number.",num):
    (num<0)? 
        printf("%d is a negative number.",num):
    printf("%d is zero",num);
    return 0;
}