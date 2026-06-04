#include<stdio.h>
int RangeDisplay(int iStart,int iEnd){
    int i=0;
    int sum=0;
    for(i=iStart;i<=iEnd;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int iValue1=0,iValue2=0;
    printf("Enter starting point:");
    scanf("%d",&iValue1);
    printf("Enter ending point:");
    scanf("%d",&iValue2);
    int iRet=0;
    iRet=RangeDisplay(iValue1,iValue2);
    printf("%d",iRet);
    return 0;

}