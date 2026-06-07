#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool linearsearch(int Arr[],int iSize){
    int iCnt=0;
    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==11){
            return true;//never return a value through a loop bad pratice
        }
    }
    return false;
}
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    bool bRet=false;
    
    printf("enter the number of the elements");
    scanf("%d",&iLength);

    Brr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements");
    for(iCnt=0;iCnt<iLength;iCnt++){
            scanf("%d",&Brr[iCnt]);
    }

    bRet=linearsearch(Brr,iLength);

    if(bRet==true){
        printf("element is present");
    }
    else{
        printf("element is not present");
    }
    free(Brr);
    
    return 0;
}