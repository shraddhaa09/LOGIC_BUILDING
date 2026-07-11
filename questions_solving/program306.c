#include<stdio.h>
int main(){
    int iNo=0,iCount=0,iDigit=0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    while (iNo!=0)
    {
        iDigit=iNo%2;
        printf("%d",iDigit);
        printf("%d\t",iNo);
        if(iDigit==1){
            iCount++;
        }
        iNo=iNo/2;
    }
    printf("\n");
    printf("the count of 1 is %d",iCount);

    return 0;
}