#include<stdio.h>
typedef unsigned int UINT;

//Position 21 and 27

int main(){
    
    UINT iMask=0x004100000;
    UINT iNo=0;
    UINT iResult=0;

    printf("Enter number: \n");
    scanf("%d",&iNo);

    iResult=iNo^iMask;

    printf("Updated number is %d",iResult);

      
    return 0;
}
