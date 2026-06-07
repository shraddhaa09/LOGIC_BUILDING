#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//time complexity O(N)
int Minimum(int Arr[],int iSize){
    
    int iCnt=0;
    int iMin=0;

    iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
        }
    }
    return iMin;
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

    iRet=Minimum(Brr,iLength);

    printf("the maximum element is:%d",iRet);
    free(Brr);
    
    return 0;
}
