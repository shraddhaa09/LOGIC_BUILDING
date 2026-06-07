#include<stdio.h>
#include<stdlib.h>
int SumEven(int Arr[],int iSize){
    int iSum=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]%2==0){
            iSum=iSum+Arr[iCnt];
        }
    }
    return iSum;
}
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int iRet=0;
    
    printf("enter the number of the elements");
    scanf("%d",&iLength);

    Brr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements");
    for(iCnt=0;iCnt<iLength;iCnt++){
            scanf("%d",&Brr[iCnt]);
    }

    iRet=SumEven(Brr,iLength);

    printf("the sum of even numbers : %d",iRet);

    free(Brr);
    
    return 0;
}