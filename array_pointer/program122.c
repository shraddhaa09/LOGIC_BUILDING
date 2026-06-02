#include<stdio.h>
#include<stdlib.h>
int summation(int Arr[],int iSize){
    int iCnt=0;
    int isum=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        isum=isum+Arr[iCnt];
    }
    return isum;
}
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0,iRet=0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //allocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Brr[iCnt]);
    }

    //use the memory(logic)
    iRet=summation(Brr,iLength);

    printf("Addition is: %d\n",iRet);

    //deallocate the memory
    free(Brr);

    return 0;
}