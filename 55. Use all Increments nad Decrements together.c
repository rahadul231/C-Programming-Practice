#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    printf("The input value is: %d\n\n",a);
    printf("Output after Posttfix Increment: %d\n",a++);// value no change
    printf("Output: %d\n",a);                           // 1 increment
    printf("Output after Pretfix Increment: %d\n",++a); // 1 increment
    printf("Output: %d\n",a);                           // no more increment
    printf("Output after Postfix Decrement: %d\n",a--); // no more change since it ill post Decrement
    printf("Output after Pretfix Decrement: %d\n",--a); // from previous line, value will reduce 1 and again at this line value will reduce (-1-1=-2)
    return 0;
}
