//time complexity O(1)

#include<stdio.h>
int DollarToINR(int iNo){
    return iNo*70;
}
int main(){
    int iValue = 0;
    printf("Enter the amount in USD \n");
    scanf("%d", &iValue);
    int iRet=0;
    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return 0;
}