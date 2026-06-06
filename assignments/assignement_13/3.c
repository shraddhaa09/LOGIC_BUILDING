#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iNo){
    int iCnt=0;
    int divisiblebyfive=0;

    for(iCnt=0;iCnt<iNo;iCnt++){
        if(Arr[iCnt]%5==0 && Arr[iCnt]%2==0){
            printf("%d\t",Arr[iCnt]);
        }
    }
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
    Display(p, iSize);
    free(p);
    return 0;
}