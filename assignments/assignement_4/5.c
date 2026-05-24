#include<stdio.h>
int Factorsdiff(int iNo){
    if(iNo<=0){
        iNo=-iNo;
    }
    int iCountnon=0;
    int iCount=0;
    int finalsum=0;
    for(int i=1;i<=iNo;i++){
        if(iNo%i==0 && i!=0){
            iCountnon=iCountnon+i;
        }
        else {
            iCount=iCount+i;
        }
    }  
    return (finalsum=(iCount-iCountnon));
    }
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=Factorsdiff(iValue);
    printf("%d",iRet);
    return 0;

}