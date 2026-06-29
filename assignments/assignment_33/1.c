#include<stdio.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch){
    while(*str!='\0')
    {
        if(*str==ch){//str is a pointer
            return true;
        }
        str++;

    }
    return false;
}
int main(){
    char arr[20];
    char cValue;
    BOOL bRet=false;
    printf("Enter String");
    scanf("%[^\n]",arr);
    printf("Enter the character");
    scanf(" %c",&cValue);
    bRet=ChkChar(arr,cValue);
    if(bRet==true){
        printf("Charater found");
    }
    else{
        printf("character not found");
    }
    return 0;
}