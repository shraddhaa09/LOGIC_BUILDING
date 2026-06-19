#include<stdio.h>
#include<string.h>
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);//regular expression (regex) neglect
    printf("Entered string is :%s",&Arr);
    return 0;
}