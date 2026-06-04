#include<stdio.h>
int countDiff(int iNo){
    int esumm=0;
    int osumm=0;
    int iDigit=0;
    while(iNo!=0){
        iDigit=iNo%10;
        if(iDigit%2==0){
            esumm=esumm+iDigit;
        }
        else{
            osumm=osumm+iDigit;
        }
        iNo=iNo/10;
    }
    return esumm-osumm;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=countDiff(iValue);
    printf("%d",iRet);
    return 0;
}