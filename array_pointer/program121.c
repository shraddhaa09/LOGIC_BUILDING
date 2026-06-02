#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize){
    int iCnt=0;
    printf("Elements of the array are : \n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }
}
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //allocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));

    printf("Enter the elements:\n");

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Brr[iCnt]);
    }

    //use the memory(logic)
    Display(Brr,iLength);

    //deallocate the memory
    free(Brr);

    return 0;
}