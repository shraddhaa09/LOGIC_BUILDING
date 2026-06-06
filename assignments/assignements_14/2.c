#include<stdio.h>
int frequency(int Arr[],int iLength){
    int iCnt=0;
    int iEvenCount=0;
    int iOddCount=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]%2==0){
            iEvenCount++;
        } else {
            iOddCount++;
        }
    }
    return iEvenCount-iOddCount;
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
    iRet=frequency(p,iSize);
    printf("%d",iRet);
    free(p);
    return 0;
}