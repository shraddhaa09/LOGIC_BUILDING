#include<stdio.h>
#include<stdlib.h>
int CountFreq(int Arr[],int iSize){
    int iCount=0;
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==11){
            iCount++;
        }
    }
    return iCount;
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

    iRet=CountFreq(Brr,iLength);

    printf("Freq of the element 11 is: %d",iRet);

    free(Brr);
    
    return 0;
}