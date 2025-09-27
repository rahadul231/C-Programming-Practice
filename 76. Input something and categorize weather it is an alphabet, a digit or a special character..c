//Input something and categorize weather it is an alphabet, a digit or a special character.
#include<stdio.h>
int main(){
    char something;
    printf("Enter anything single: ");
    scanf("%c",&something);
    
    if(something>='0' && something<='9')
        printf("digit");
    else if(something>='A' && something<='Z')
        printf("letter");
    else if(something>='a' && something<='z')
        printf("letter");
    else
        printf("special character");
    return 0;
}