#include<stdio.h>
//error due to lib file
int main(){
    int *Brr=NULL;
    int iLength=0;
    int iCnt=0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    //allocate the memory
    Brr=(int *)malloc(iLength*sizeof(int));

    for(iCnt=0;iCnt<iLength;iCnt++){
        scanf("%d",&Brr[iCnt]);
    }

    //use the memory(logic)


    //deallocate the memory
    free(Brr);

    return 0;
}