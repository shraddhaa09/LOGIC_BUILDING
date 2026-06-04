#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckZero(int iValue){
    int iDigit=0;
    while(iValue!=0){
    iDigit=iValue%10;
    if(iDigit==0){
        return TRUE;
    }
    iValue=iValue/10;
    }
    return FALSE;
}
int main(){
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number:");
    scanf("%d",&iValue);
    bRet=CheckZero(iValue);
    if(bRet==TRUE){
        printf("It contains zero");
    }
    else{
        printf("There is no zero");
    }
    return 0;
}