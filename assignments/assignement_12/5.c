#include<stdio.h>
int Countlsthen(int iNo){
    int iDigit=0;
    int iCount=0;
    while(iNo!=0){
        iDigit=iNo%10;
        if(iDigit<6){
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
}
int main(){
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=Countlsthen(iValue);
    printf("%d",iRet);
    return 0;
}
