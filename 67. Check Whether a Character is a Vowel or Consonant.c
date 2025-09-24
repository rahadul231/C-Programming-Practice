#include<stdio.h>
int main(){
    char letter;
    printf("Enter any letter: ");
    scanf("%c",&letter);
    
    if(letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')
        printf("'%c' is a 'Vowel'.",letter);
        
    else if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u')
        printf("'%c' is a 'Vowel'.",letter);
    
    else 
        printf("This is a 'Consonant.'.");
}