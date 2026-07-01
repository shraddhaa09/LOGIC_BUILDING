#include<stdio.h>
#include<string.h>

int ChkChar(char *str,char ch){
    int i=0;
    int lastindex=-1;
    for(i=0;i<strlen(str);i++){
    if(str[i]==ch){
        lastindex=i;
    }
}
 return lastindex;
}
int main(){
    char arr[20];
    char cValue;
    int bRet;
    printf("Enter String");
    scanf("%[^\n]",arr);
    printf("Enter the character to check the first occurence of that character ");
    scanf(" %c",&cValue);
    bRet=ChkChar(arr,cValue);
    printf("%d",bRet);
    return 0;
}