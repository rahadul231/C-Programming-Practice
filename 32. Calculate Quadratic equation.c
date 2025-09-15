#include<stdio.h>
#include<math.h>
int main() {
	int a,b,c,X1,X2;
	printf("Enter the value of a, b, c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	X1 = (-b+sqrt(b*b-4*a*c))/2*a;
	X2 = (-b-sqrt(b*b-4*a*c))/2*a;
	
    printf("Number 1: %d\n",X1);
    printf("Number 2: %d\n",X2);
    return 0;
}