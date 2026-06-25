#include<stdio.h>
#include<string.h>


void strlwrx(char *str){
    int i=0;

    for(i=0;i<strlen(str);i++){
    if((str[i]>='A')&&str[i]<='Z'){
        str[i]=str[i]+32;
    }
    else{
        str[i]=str[i]-32;
    }
}
}
int main(){
    char arr[20];

    printf("Enter the string");
    scanf("%[^`\n`]s",arr);
    strlwrx(arr);

    printf("Modified string is %s",arr);
    
    
    return 0;
}