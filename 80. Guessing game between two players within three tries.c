//Perform Addition, Subtraction, Multiplication and Division using Menu Choice.c
#include<stdio.h>
int main(){
    int X, n1, n2, n3, n=3;
    printf("Player-1, pick a number: ");
    scanf("%d",&X);
    
    printf("Player-2, Now you guess a number: ");
    scanf("%d",&n1);
    if(n1==X)
        printf("Right, Player-2 wins!");
    else
        printf("Wrong, %d Chance(s) Left!",n=n-1);
        
    printf("\n\nPlayer-2, Now you guess a number again: ");
    scanf("%d",&n2);
    if(n2==X)
        printf("Right, Player-2 wins!");
    else
        printf("Wrong, %d Chance(s) Left!",n=n-1);
    
    printf("\n\nPlayer-2, Now you guess a number again: ");
    scanf("%d",&n3);
    if(n3==X)
        printf("Right, Player-2 wins!");
    else
        printf("\nPlayer-1 wins!");
    return 0;
}