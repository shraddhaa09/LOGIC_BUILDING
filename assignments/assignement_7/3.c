// time complexity o(n)

#include<stdio.h>
int Evenfactorial(int iNo){
    int iFact=1;
    for(int i=2;i<=iNo;i=i+2){
        iFact = iFact*i;
    }
    return iFact;

}
int main(){
    int iValue=0,iRet=0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    iRet = Evenfactorial(iValue);
    printf("Even factorial is %d",iRet);
    return 0;
}