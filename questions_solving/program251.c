#include<stdio.h>

int Count(const char *str){//
    int iCount=0;
        while(*str!='\0'){
            if(*str=='a' || *str=='A'){//case insenstive
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
    iRet=Count(Arr);
    printf("Frequency is :%d\n",iRet);
    return 0;
}