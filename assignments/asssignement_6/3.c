//time complexity is o(n)
#include<stdio.h>
int factorial(int iNo){
    int fact=1;
    if(iNo<0){
        iNo=-iNo;
    }
    for(int i=1;i<=iNo;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=factorial(iValue);
    printf("factorial of number is %d",iRet);
    return 0;

}