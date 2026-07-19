#include<stdio.h>

int Factor(int iNo){
    int imult=1;
    while (iNo!=0)
    {
        imult=imult*iNo;
        iNo--;
    }
    return imult;
    
}

int main(){
    int iValue=0,iRet=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    iRet=Factor(iValue);
    printf("factor is:%d\n",iRet);

    printf("End of main\n");
    return 0;
}