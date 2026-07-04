#include<stdio.h>
int main(){
    int a;
    printf("Enter a any number: ");
    scanf("%d",&a);
    
    int b = ++a;
    printf("Output: %d\n",a);
    printf("Output after Pretfix Increment: %d",b);
    return 0;
}
