#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkAlpha(char ch){
    if(ch>='A'&& ch<='Z'){
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

    bRet=ChkAlpha(cValue);
    
    if(bRet==TRUE){
        printf("It is capital");
    }
    else{
        printf("It is small");
    }
    return 0;
}