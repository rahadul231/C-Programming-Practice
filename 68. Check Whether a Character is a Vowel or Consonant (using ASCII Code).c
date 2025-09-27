#include<stdio.h>
int main(){
    char letter;
    printf("Enter any letter: ");
    scanf("%c",&letter);
    
    if(letter==65 || letter==69 || letter==73 || letter==79 || letter==85)
        printf("'%c' is a 'Vowel'.",letter);
        
    else if(letter==97 || letter==101 || letter==105 || letter==111 || letter==117)
        printf("'%c' is a 'Vowel'.",letter);
    
    else 
        printf("This is a 'Consonant.'.");
}