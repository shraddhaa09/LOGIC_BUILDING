#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char ch){
    if((ch>='!' && ch<='/')||
                (ch>=':' && ch<='@')||
                (ch>='[' && ch<='`')||
                (ch>='{' && ch<='~')){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main(){
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character");
    scanf("%c",&cValue);

    bRet=Display(cValue);
    
    if(bRet==TRUE){
        printf("It is Special symbol");
    }
    else{
        printf("It is not a Special symbol");
    }

    
    return 0;
}