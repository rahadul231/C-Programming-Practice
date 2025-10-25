#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || 
    letter == 'a' || letter == 'e' || letter == 'i' ||letter == 'o' || letter == 'u')?
        printf("The character '%c' is vowel", letter):
    
    printf("The character '%c' is Consonant", letter);
    
    return 0;
}