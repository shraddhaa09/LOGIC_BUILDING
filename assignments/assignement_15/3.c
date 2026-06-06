#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Frequency(int Arr[],int iLength, int element){
    int iCnt=0;
    int iEvenCount=0;
    int iOddCount=0;
    int index=-1;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]==element){
            index=iCnt;
        } 
    }
    return index; // Return the index of the first occurrence or -1 if not found
}
int main(){
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;
    printf("enter the number of the elements");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL){
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&p[iCnt]);
    }
    printf("Enter element that you want to find the frequency of: ");
    int element;
    scanf("%d", &element);
    iRet=Frequency(p,iSize, element);
    if(iRet!=-1){
        printf("Element %d is present in the array at index %d", element, iRet);
    } else {
        printf("Element %d is not present in the array", element);
    }
    free(p);
    return 0;
}