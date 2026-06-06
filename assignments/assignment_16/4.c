#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void Digits(int Arr[],int iLength){
    int iCnt=0;
    int iDigit=0;
    int iCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        iDigit=Arr[iCnt];
        while(iDigit>0){
            iDigit=iDigit/10;
            iCount++;
        }
        if(iCount==3){
            printf("%d\t", Arr[iCnt]);
        }
        iCount=0;
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
    Digits(p,iSize);
    free(p);
    return 0;
}