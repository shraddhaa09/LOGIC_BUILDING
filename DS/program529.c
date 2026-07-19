#include<stdio.h>

typedef unsigned long int ULONG

ULONG Factor(int iNo){
    ULONG imult=1;
    while (iNo!=0)
    {
        imult=imult*iNo;
        iNo--;
    }
    return imult;
    
}

int main(){
    int iValue=0;
    ULONG iRet=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    iRet=Factor(iValue);
    printf("factor is:%lu\n",iRet);

    printf("End of main\n");
    return 0;
}