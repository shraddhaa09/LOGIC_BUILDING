#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str){
    int i=0;

    for(i=0;i<strlen(str);i++){
    if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')){
        return TRUE;
    }
}
return FALSE;
}
int main(){
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter the string");
    scanf("%[^`\n`]s",arr);

    bRet=ChkVowel(arr);
    
    if(bRet==TRUE){
        printf("VOWELS ARE PRESENT");
    }
    else{
        printf("VOWELS ARE NOT PRESENT");
    }

    
    return 0;
}