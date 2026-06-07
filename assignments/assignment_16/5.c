#include<stdio.h>
#include<stdlib.h>
void Digitssum(int Arr[],int iLength){
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    int iRemainder=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        iDigit=Arr[iCnt];
        while(iDigit!=0){
            iRemainder=iDigit%10;
            iSum=iSum+iRemainder;
            iDigit=iDigit/10;
        }
        printf("%d\t", iSum);
        iSum=0;
    }
}
int main(){
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int *p=NULL;
    printf("enter the number of the elements");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL){
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter the elements");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&p[iCnt]);
    }
    Digitssum(p,iSize);
    free(p);
    return 0;
}