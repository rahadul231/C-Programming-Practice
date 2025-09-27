#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    
    if(mark>=80)
        printf("The Grade is: 'A+'");
    else if(mark>=75)
        printf("The Grade is: 'A'");
    else if(mark>=70)
        printf("The Grade is: 'A-'");
    else if(mark>=65)
        printf("The Grade is: 'B+'");
    else if(mark>=60)
        printf("The Grade is: 'B'");
    else if(mark>=55)
        printf("The Grade is: 'B-'");
    else if(mark>=50)
        printf("The Grade is: 'C+'");
    else if(mark>=45)
        printf("The Grade is: 'C'");
    else if(mark>=40)
        printf("The Grade is: 'D'");
    else 
        printf("The Grade is: 'F'");
}