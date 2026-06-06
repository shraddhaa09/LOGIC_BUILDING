#include<stdio.h>
#include<stdlib.h>
void Productofalloddelements(int Arr[],int iLength){
    int iCnt=0;
    int iEvenCount=0;
    int iOddCount=0;
    int product=1;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if(Arr[iCnt]%2!=0){
            product=product*Arr[iCnt];
        } 
    }
    printf("Product of all odd elements is: %d", product);
}