#include<stdio.h>
int MultiDigits(int iNo){
    int iDigit=0;
    int multi=1;
    while(iNo!=0){
        iDigit=iNo%10;
        if(iDigit!=0){
            multi=multi*iDigit;
        }
        iNo=iNo/10; 
    }
    return multi;

}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=MultiDigits(iValue);
    printf("%d",iRet);
    return 0;
}