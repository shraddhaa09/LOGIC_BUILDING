#include<stdio.h>
#include<string.h>

int strlwrx(char *str){
    int i=0;
    int count=0;

    for(i=0;i<strlen(str);i++){
    if((str[i]==' ')){
        count++;
    }
}
return count;
}
int main(){
    char arr[20];

    printf("Enter the string");
    scanf("%[^`\n`]s",arr);
    int iRet=0;
    iRet=strlwrx(arr);

    printf("%d",iRet);
    
    
    return 0;
}