#include<stdio.h>


int ChkChar(char *str,char ch){
    int count=0;
    while(*str!='\0')
    {
        if(*str==ch){//str is a pointer
            count++;
        }
        str++;

    }
    return count;
}
int main(){
    char arr[20];
    char cValue;
    int bRet;
    printf("Enter String");
    scanf("%[^\n]",arr);
    printf("Enter the character to check the frequency for ");
    scanf(" %c",&cValue);
    bRet=ChkChar(arr,cValue);
    printf("the frequency of the '%c' character is %d",cValue,bRet);
    return 0;
}