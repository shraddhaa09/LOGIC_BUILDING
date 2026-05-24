#include<stdio.h>
typedef int BOOL;;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main(){
    char cValue='\0';
    BOOL bret=FALSE;
    printf("enter the character");
    scanf("%c",&cValue);
    bret=ChkVowel(cValue);
    if(bret==TRUE){
        printf("the character is a vowel");
    }
    else{
        printf("the character is not a vowel");
    }
    return 0;
}