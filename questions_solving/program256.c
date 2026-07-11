#include<stdio.h>

int CountCapital(const char *str){//
    int iCount=0;
        while(*str!='\0'){
            if(*str>='A' && *str<='Z'){
            iCount++;  
        }
        str++;//str=str+1 
        }
   return iCount;
}
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    int iRet=0;
    iRet=CountCapital(Arr);
    printf("Count of captial letters is :%d\n",iRet);
    return 0;
}