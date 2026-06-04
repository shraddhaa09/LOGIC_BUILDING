#include<stdio.h>
int CountOdd(int iNo)
{   
    int count=0;
    while(iNo!=0){
        if(iNo%2!=0){
            count++;
        }
        iNo=iNo/10;
    }
    return count;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=CountOdd(iValue);
    printf("%d",iRet);
    return 0;
}