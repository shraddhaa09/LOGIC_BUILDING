#include<stdio.h>
#include<stdlib.h>
void DisplayFrequency(int Arr[],int iLength, int start, int end){
    int iCnt=0;
    int iEvenCount=0;
    int iOddCount=0;
    int index=-1;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]>=start && Arr[iCnt]<=end){
            printf("%d\t", Arr[iCnt]);
        } 
    }
}
int main(){
    int iSize=0,iRet=0,iCnt=0;
    int *p=NULL;
    int iValue1=0,iValue2=0;
    printf("enter the number of the elements");
    scanf("%d",&iSize);
    p=(int *)malloc(iSize*sizeof(int));
    if(p==NULL){
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter starting point of range: ");
    scanf("%d", &iValue1);
    printf("Enter ending point of range: ");
    scanf("%d", &iValue2);
    printf("Enter %d elements",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&p[iCnt]);
    }
    DisplayFrequency(p,iSize, iValue1, iValue2);
    free(p);
    return 0;
}