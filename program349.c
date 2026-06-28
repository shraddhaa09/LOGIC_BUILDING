#include<stdio.h>
typedef unsigned int UINT;

//Position 3 and 8

int main(){
    
    UINT iMask1=0x1;
    UINT iMask2=0x1;
    UINT iMask=0;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iMask1=iMask1<<2;
    iMask2=iMask2<<7;

    


    printf("Updated number is %d",iResult);

      
    return 0;
}
