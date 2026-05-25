#include<stdio.h>
void displayDigits(int iNo){
    int iDigit=0;

    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\t",iDigit);
        iNo=iNo/10;
    }

}
int main(){
    int iNo=751;
    displayDigits(iNo);
    return 0;
}