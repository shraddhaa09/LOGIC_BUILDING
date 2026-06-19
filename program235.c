#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Jay Ganesh";
    int iRet=0;
    iRet=strlen(str);//function
    printf("Length of the string is : %d\n",iRet);

    iRet=sizeof(str);//eperator
    printf("Size of string is %d\n",iRet);

    return 0;
}