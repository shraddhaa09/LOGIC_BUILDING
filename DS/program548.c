#include<stdio.h>


int countcaptial(char *str){
    static int iCount=0;
    if(*str!='\0'){
        if(*str>='A' && *str<='Z'){
            iCount++;
        }
        str++;
        countcaptial(str);
    }
    return iCount;
   
}
int main(){
    char Arr[20]={'\0'};
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=countcaptial(Arr);
    printf("number of capital letters are : %d\n",iRet);


    

    return 0;
}