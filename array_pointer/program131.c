#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//time complexity O(N)
bool linearsearch(int Arr[],int iSize,int iValue){
    int iCnt=0;
    int iCount=0;
    bool bFlag=false;
    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iValue){
            iCount++;
        }
    }
    if(iCount==0){
    return bFlag; 
    }
    else{
        return true;
    }
}
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;
    int iValue=0;
    bool bRet=false;
    
    printf("enter the number of the elements");
    scanf("%d",&iLength);

    Brr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements");
    for(iCnt=0;iCnt<iLength;iCnt++){
            scanf("%d",&Brr[iCnt]);
    }
    printf("Enter the element that you want to search:");
    scanf("%d",&iValue);

    bRet=linearsearch(Brr,iLength,iValue);

    if(bRet==true){
        printf("element is present");
    }
    else{
        printf("element is not present");
    }
    free(Brr);
    
    return 0;
}