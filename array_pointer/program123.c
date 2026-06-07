#include<stdio.h>
#include<stdlib.h>
int summation(int Arr[],int iSize){
    int iCnt=0;
    int iSum=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        iSum=iSum+Arr[iCnt];
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

    iRet=summation(Brr,iLength);

    printf("summaition is : %d",iRet);

    free(Brr);
    
    return 0;
}