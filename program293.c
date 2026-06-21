#include<stdio.h>
void ReverseDiplay(char *str){
    char *start=NULL;
    start=str;
    while(*str!='\0'){
        str++;
    }
    str--;
    while(start<=str){
        printf("%c",*str);
        str--;
    }
}
int main(){
    char Arr[50]={'\0'};
    scanf("%[^\n]s",Arr);
    ReverseDiplay(Arr);
    return 0;
}