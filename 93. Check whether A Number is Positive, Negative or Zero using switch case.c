#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    
    switch(num>0){
        case 0:
            printf("%d is Negative",num);
            break;
        case 1:
            printf("%d is Positive",num);
            break;
        default:
            printf("This is %d",num);
    }
}