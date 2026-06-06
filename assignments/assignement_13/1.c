#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iNo){
    int iCnt=0;
    int iEvenSum=0;
    int iOddSum=0;

    for(iCnt=0;iCnt<iNo;iCnt++){
        if(Arr[iCnt]%2==0){
            iEvenSum=iEvenSum+Arr[iCnt];
        }
        else{
            iOddSum=iOddSum+Arr[iCnt];
        }
    }
    return iEvenSum-iOddSum;
}
int main(){
    int iSize=0;
    int iCnt=0;
    int iRet=0;
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
    iRet=Difference(p, iSize);
    printf("the difference is:%d",iRet);
    free(p);
    return 0;
}