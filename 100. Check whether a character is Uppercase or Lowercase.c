#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    (letter>=65 && letter<=90)? 
        printf("'%c' is a Uppercae.", letter):
    (letter>=97 && letter<=122)?
        printf("Year '%c' is a Lowercase .", letter):
    printf("'%d' is a wrong input.", letter);
    
    return 0;
}