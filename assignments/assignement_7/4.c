//time complexity o()

#include<stdio.h>
int oddfactorial(int iNo){
    int iFact=1;
    if(iNo<0){
        iNo=-iNo;
    }
    for(int i=1;i<=iNo;i=i+2){
        iFact = iFact*i;
    }
    return iFact;
}
int main(){
    int iValue=0,iRet=0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    iRet = oddfactorial(iValue);
    printf("Odd factorial is %d",iRet);
    return 0;
}