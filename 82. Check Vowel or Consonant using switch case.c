#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter: ");
    scanf("%c",&letter);
    
    switch(letter){
        case 'a':
            printf("%c is a Vowel.",letter);
            break;
        case 'e':
            printf("%c is a Vowel.",letter);
            break;
        case 'i':
            printf("%c is a Vowel.",letter);
            break;
        case 'o':
            printf("%c is a Vowel.",letter);
            break;
        case 'u':
            printf("%c is a Vowel.",letter);
            break;
        case 'A':
            printf("%c is a Vowel.",letter);
            break;
        case 'E':
            printf("%c is a Vowel.",letter);
            break;
        case 'I':
            printf("%c is a Vowel.",letter);
            break;
        case 'O':
            printf("%c is a Vowel.",letter);
            break;
        case 'U':
            printf("%c is a Vowel.",letter);
            break;
            
        default:
            printf("%c is not a Vowel.",letter);
    }
    return 0;
}