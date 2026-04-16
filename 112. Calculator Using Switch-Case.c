#include <stdio.h>
int main(){
    double num1, num2, result;
    char ch;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &ch);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (ch){
        case '+':
            result = num1+num2;
            printf("Output: %.3lf\n",result);
            break;
        case '-':
            result = num1-num2;
            printf("Output: %.3lf\n",result);
            break;
        case '*':
            result = num1*num2;
            printf("Output: %.3lf\n",result);
            break;
        case '/':
            switch (num2==0){
                case 1:
                    printf("Output: Error! Division by zero\n");
                    break;
                default:
                    result = num1/num2;
                    printf("Output: %.3lf\n",result);
                    break;
            }
            break;
        case '%':{
            int a = (int)num1;
            int b = (int)num2;
            switch (b==0){
                case 1:
                    printf("Output: Error! Division by zero\n");
                    break;
                default:
                    printf("Output: %d\n",a%b);
                    break;
            }
            break;
        }
        default: printf("Output: Error! Invalid Operator\n");
            break;
    }
    return 0;
}
