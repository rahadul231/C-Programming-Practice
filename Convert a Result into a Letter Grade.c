#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark: ");
    scanf("%d",&mark);
    
    (mark>=80)?
        printf("The Grade is: 'A+'"):
    (mark>=75)?
        printf("The Grade is: 'A'"):
    (mark>=70)?
        printf("The Grade is: 'A-'"):
    (mark>=65)?
        printf("The Grade is: 'B+'"):
    (mark>=60)?
        printf("The Grade is: 'B'"):
    (mark>=55)?
        printf("The Grade is: 'B-'"):
    (mark>=50)?
        printf("The Grade is: 'C+'"):
    (mark>=45)?
        printf("The Grade is: 'C'"):
    (mark>=40)?
        printf("The Grade is: 'D'"):
    printf("The Grade is: 'F'");
}
