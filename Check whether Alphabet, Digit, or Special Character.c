#include<stdio.h>
int main(){
    char anything;
    scanf("%c",&anything);
    
    (anything>48 && anything<57)?
        printf("'%c' is a Number.",anything):
    (anything>65 && anything<90)?
        printf("'%c' is a Letter.",anything):
    (anything>97 && anything<122)?
        printf("'%c' is a Letter.",anything):
    printf("'%c' is a Special Character.",anything);
return 0;
}
