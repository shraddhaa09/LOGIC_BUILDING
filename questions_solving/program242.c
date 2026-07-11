#include<stdio.h>

void Display(char *str){
    printf("Input string is:%s\n",str);
}
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);//regular expression (regex) neglect

    Display(Arr);
    return 0;
}