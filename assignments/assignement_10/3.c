#include<stdio.h>
int Kmtometer(int iNo){
    return iNo*1000;
}
int main(){
    int iValue=0,iRet=0;
    printf("Enter distance in kilometers:");
    scanf("%d",&iValue);
    iRet=Kmtometer(iValue);
    printf("Distance in meters: %d",iRet);
    return 0;
}