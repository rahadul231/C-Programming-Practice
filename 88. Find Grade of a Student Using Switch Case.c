//Write a C program to enter the marks of a student and find percentage and grade. 
#include<stdio.h>
int main(){
    int marks;
    printf("Enter mark: ");
    scanf("%d",&marks);
    
    int percentage = marks;
    printf("Your got %d%% marks. ",marks);
    
    switch(marks/5){
        case 80:
        case 19:
        case 18:
        case 17:
        case 16:{
            printf("So, your Grade 'A+'");
            break;
        }
        case 15:{
            printf("So, your Grade 'A'");
            break;
        }
        case 14:{
            printf("So, your Grade 'A-'");
            break;
        }
        case 13:{
            printf("So, your Grade 'B+'");
            break;
        }
        case 12:{
            printf("So, your Grade 'B'");
            break;
        }
        case 11:{
            printf("So, your Grade 'B-'");
            break;
        }
        case 10:{
            printf("So, your Grade 'C+'");
            break;
        }
        case 9:{
            printf("So, your Grade 'C'");
            break;
        }
        case 8: {
            printf("So, your Grade 'D'");
            break;
        }
        default:{
            printf("So, your Grade 'F'");
        }
    }
    return 0;
}

