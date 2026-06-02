#include<stdio.h>
int main(){
    int Arr[5]={0};
    printf("enter the elements: \n");
    for(int iCnt=0;iCnt<5;iCnt++){
    scanf("%d\n",&Arr[iCnt]);
    }

    printf("Elements of the array \n");
    for(int iCnt=0;iCnt<5;iCnt++){
    printf("%d\n",Arr[iCnt]);
    }

    return 0;
}