#include<stdio.h>
int main(){
    char letter;
    printf("Enter any letter: ");
    scanf("%c",&letter);
    
    if (letter>=65 && letter<=90)
        printf("%c is a 'Uppercase'.",letter);
        
    else if(letter>=97 && letter<=122)
        printf("%c is a 'Lowercase'.",letter);
    
    else 
        printf("This is not a letter.");
}