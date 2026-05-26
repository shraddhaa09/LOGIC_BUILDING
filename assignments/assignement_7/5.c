//time complexity O(n)

#include<stdio.h>
int factorial(int iNo){
    int evenfact=1,oddfact=1;
    if(iNo<0){
        iNo=-iNo;
    }
    for(int i=1;i<=iNo;i++){
        if(i%2==0){
            evenfact = evenfact*i;
        }
        else{
            oddfact = oddfact*i;
        }
    }
    return evenfact-oddfact;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    iRet = factorial(iValue);
    printf("Difference between even and odd factorial is %d",iRet);
    return 0;
}