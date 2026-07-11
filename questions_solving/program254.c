#include<stdio.h>

int CountSmall(const char *str){//
    int iCount=0;
        while(*str!='\0'){
            if(*str>=97 && *str<=122){
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
    iRet=CountSmall(Arr);
    printf("Count of vowels is :%d\n",iRet);
    return 0;
}