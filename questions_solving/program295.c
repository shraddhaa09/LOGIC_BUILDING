#include<stdio.h>
void strrev(char *str){
    char *start=NULL;
    char *end=NULL;
    
    start=str;
    while(*str!='\0'){
        str++;
    }
    str--;
    while(start<=str){
        printf("%s\n",str);
        str--;
    }
}
int main(){
    char Arr[50]={'\0'};
    scanf("%[^\n]s",Arr);
    ReverseDiplay(Arr);
    return 0;
}