#include<stdio.h>
int KMtometer(int iNo){
    return iNo*1000;
}
int main(){
    int iValue = 0;
    int iRet = 0;
    printf("Enter the distance in KM \n");
    scanf("%d", &iValue);
    iRet = KMtometer(iValue);
    printf("Distance in meter is %d",iRet);
    return 0;
}