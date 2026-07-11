#include<stdio.h>

int StrlenX(char *str){
    int iCount=0;
   while(*str!='\0'){
    iCount++;
    str++;
   }
   return iCount;
}
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    int iRet=0;
    iRet=StrlenX(Arr);
    printf("String lenght is :%d\n",iRet);
    return 0;
}