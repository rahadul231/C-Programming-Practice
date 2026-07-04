#include<stdio.h>
int main(){ 
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b = 15;
    printf("Enter a number: ");
    scanf("%d",&b);
    int c;
    
    c = a&b; 
    printf("\n\n%d AND %d = '%d'\n",a,b,c);
    c = a|b;
    printf("%d OR  %d = '%d'\n",a,b,c);
    c = a^b;
    printf("%d XOR %d = '%d'\n",a,b,c);

    return 0;
}
