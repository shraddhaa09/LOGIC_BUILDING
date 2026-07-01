#include<stdio.h>

void strrev(char *str){
    char *start=NULL;
    char *end=NULL;
    char temp='\0';
    while(*str!='\0'){
        str++;
    }
    str--;
    end=str;
    while(start<=*str){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    char arr[20];
    char cValue;
    printf("Enter String");
    scanf("%[^\n]",arr);
    strrev(arr);
    printf("%s",arr);
    return 0;
}