#include<stdio.h>
#include<math.h>
int main(){
	int x; 
	printf("Enter a number: ");
	scanf("%d",&x);
	
	double result = sqrt(x);
    printf("The result after calculating Square root: %lf",result);
	return 0;
}