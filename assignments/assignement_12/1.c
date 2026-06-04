#include<stdio.h>
void DisplayDigit(int iValue){
    int iDigit=0;
    while(iValue!=0){
        iDigit=iValue%10;
        printf("%d\n",iDigit);
        iValue=iValue/10;
    }
}
int main(){
    int iValue=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    DisplayDigit(iValue);
    return 0;
    
}