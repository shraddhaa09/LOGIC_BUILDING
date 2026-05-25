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
    int iVlaue=0;
    printf("enter the number");
    scanf("%d",&iVlaue);
    displayDigits(iVlaue);
    return 0;
}