#include<stdio.h>
int displayMultiplicationofactors(int iNo){
    int multiplication=1;
    for(int i=1;i<=iNo/2;i++){
        if(iNo%i==0){
            multiplication=multiplication*i;
        }
    }
    return multiplication;
}
int main(){
     int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    int iRet=0;
    iRet=displayMultiplicationofactors(iValue);
    printf("the multiplication of factors is %d",iRet);
    return 0;
}