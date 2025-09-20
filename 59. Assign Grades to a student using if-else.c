#include<stdio.h>
int main(){
    int num;
    printf("Enter the numbers: ");
    scanf("%d",&num);
    
    if(num>=80){
        printf("The grade is: A+");
    }
    else if(num>=75){
        printf("The grade is: A");
    }
    else if(num>=70){
        printf("The grade is: A-");
    }
    else if(num>=65){
        printf("The grade is: B+");
    }
    else if(num>=60){
        printf("The grade is: B");
    }
    else if(num>=55){
        printf("The grade is: B-");
    }
    else if(num>=50){
        printf("The grade is: C+");
    }
    else if(num>=45){
        printf("The grade is: C");
    }
    else if(num>=40){
        printf("The grade is: D");
    }
    else{
        printf("The grade is: F");
    }
    return 0;
}