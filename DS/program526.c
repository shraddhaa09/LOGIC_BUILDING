#include<stdio.h>

int Summation(int iNo){
    static int iSum=0;
    if(iNo>0)
    {
        iSum=iSum+iNo;
        iNo--;
        Summation(iNo);
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