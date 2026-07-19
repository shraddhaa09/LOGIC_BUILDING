#include<stdio.h>

int Summation(int iNo){
    int iSum=0;
    int i=0;
    i=1;
    while (i<=iNo)
    {
        iSum=iSum+i;
        i++;
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