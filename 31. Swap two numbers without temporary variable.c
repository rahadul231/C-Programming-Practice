#include<stdio.h>
int main() {
	int num1 = 10;
	int num2 = 20;
	
	num1 = num1 - num2;
	num2 = num1 + num2;
	num1 = num2 - num1;

    printf("Number 1: %d\n",num1);
    printf("Number 2: %d\n",num2);
    return 0;
}