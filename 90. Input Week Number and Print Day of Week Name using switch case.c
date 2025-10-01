#include<stdio.h>
int main(){
    int weekNum;
    printf("Enter week number (1-7): ");
    scanf("%d", &weekNum);
    
    switch(weekNum){
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:{
            printf("Wrong input.");
        }
    }
    return 0;
}

