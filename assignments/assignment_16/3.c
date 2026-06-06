#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int Difference(int Arr[],int iLength){
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]>iMax){
            iMax=Arr[iCnt];
        }
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
        }
    }
    return iMax-iMin;
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
    iRet=Difference(p,iSize);
    printf("Difference between largest and smallest element is:%d",iRet);
    free(p);
    return 0;
}