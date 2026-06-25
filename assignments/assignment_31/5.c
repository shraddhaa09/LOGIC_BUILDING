#include<stdio.h>
#include<string.h>


void printreverse(char *str){
    int i=0;

    for(i=strlen(str);i>=0;i--){
    printf("%c",str[i]);
}
}
int main(){
    char arr[20];

    printf("Enter the string");
    scanf("%[^`\n`]s",arr);

    ChkVowel(arr);
    return 0;
}