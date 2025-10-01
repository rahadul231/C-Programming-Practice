#include<stdio.h>
int main(){
    int monthNum;
    printf("Since in a year, there are 12 month. So, enter month number (1-12): ");
    scanf("%d", &monthNum);
    
    switch(monthNum){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Month %d is 31 days.",monthNum);
            break;
        case 2:
            printf("Month %d is 28/29 days.",monthNum);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Month %d is 30 days.",monthNum);
            break;
        default:{
            printf("%d is invalid input.",monthNum);
        }
    }
    return 0;
}

