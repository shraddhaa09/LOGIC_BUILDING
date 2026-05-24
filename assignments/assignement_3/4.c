#include<stdio.h>
void DisplayConvert(char ch){
    if(ch>='a' && ch<='z'){
        printf("%c",ch-32);
    }
    else if(ch>='A' && ch<='Z'){
        printf("%c",ch+32);
    }
}
int main(){
    char cValue='\0';
    printf("enter the character");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}