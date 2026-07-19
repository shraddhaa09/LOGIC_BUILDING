#include<stdio.h>


int Multiply(int iNo){
    static int imul=1;
    int iDigit=0;
    if(iNo!=0){
        iDigit=iNo%10;
        imul=imul*iDigit;
        Multiply(iNo/10);
    }
    return imul;
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=Multiply(iValue);
    printf("Multiplication of digits is : %d\n",iRet);

    return 0;
}