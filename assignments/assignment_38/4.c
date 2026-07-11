#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,UINT iPos1,UINT iPos2){
    UINT iMask1=1;
    UINT iMask2=1;
    while(iPos1>1){
        iMask1=iMask1<<1;
        iPos1--;
        
    }
    //better ->iMask1 = 1 << (iPos1 - 1);
iMask2 = 1 << (iPos2 - 1);
    while(iPos2>1){
        iMask2=iMask2<<1;
        iPos2--;
    }
    //better->iMask2 = 1 << (iPos2 - 1);
    if(((iNo&iMask1)==iMask1) || ((iNo&iMask2)==iMask2)){
        return TRUE;
    }  
return FALSE;
}
int main(){
    UINT iNo=0;
    UINT iPos1=0,iPos2=0;
    BOOL iAns=FALSE;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    printf("Enter the position1 of bit to check :\n");
    scanf("%u",&iPos1);
    printf("Enter the position2 of bit to check :\n");
    scanf("%u",&iPos2);

    iAns=ChkBit(iNo,iPos1,iPos2);
    if(iAns==TRUE){
      printf("TRUE\n");  
    }
    else{
      printf("FALSE\n");  
    }   
    return 0;
}
