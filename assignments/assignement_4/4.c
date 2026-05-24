#include<stdio.h>
int nonFactors(int iNo){
    if(iNo<=0){
        iNo=-iNo;
    }
    int iCount=0;
    int i=0;
    for(int i=1;i<=iNo;i++){
        if(iNo%i!=0 && i!=0){
            iCount=iCount+i;
        }
    }  
    return iCount;
    }
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=nonFactors(iValue);
    printf("%d",iRet);
    return 0;

}