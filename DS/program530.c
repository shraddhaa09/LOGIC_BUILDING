#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo){
    static ULONG imult=1;
    if(iNo!=0)
    {
        imult=imult*iNo;
        iNo--;
        Factorial(iNo);
    }
    return imult;
    
}

int main(){
    int iValue=0;
    ULONG iRet;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);
    printf("factorial is:%lu\n",iRet);

    printf("End of main\n");
    return 0;
}