#include<stdio.h>

int Summation(int iNo){
    int iSum=0;
    int i=0;
    for (i = 0; i < iNo; i++)
    {
        iSum=iSum+i;
    }
    return iSum;
    
}

int main(){
    int iValue=0,iRet=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    iRet=Summation(iValue);
    printf("summation is:%d\n",iRet);

    printf("End of main\n");
    return 0;
}