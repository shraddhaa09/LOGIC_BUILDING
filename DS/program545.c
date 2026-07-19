#include<stdio.h>


int strlenX(char *Arr){
    int iCount=0;
    while(*Arr!='\0'){
        iCount++;
        Arr++;
    }
    return iCount;
   
}
int main(){
    char Arr[20]={'\0'};
    int iRet=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    iRet=strlenX(Arr);
    printf("Length of string is : %d\n",iRet);


    

    return 0;
}