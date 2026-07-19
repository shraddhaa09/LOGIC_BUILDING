#include<stdio.h>

unsigned long int Factor(int iNo){
    unsigned long int imult=1;
    while (iNo!=0)
    {
        imult=imult*iNo;
        iNo--;
    }
    return imult;
    
}

int main(){
    int iValue=0;
    unsigned long int iRet=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);

    iRet=Factor(iValue);
    printf("factor is:%lu\n",iRet);

    printf("End of main\n");
    return 0;
}