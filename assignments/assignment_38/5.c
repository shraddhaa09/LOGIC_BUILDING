#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;



UINT ChkBit(UINT iNo,UINT iPos1,UINT iPos2){
    UINT iMask=0;
    UINT i=0;
    for(i=iPos1;i<=iPos2;i++){
        iMask=iMask|(1<<(i-1));
    }
    return iNo^iMask;
}
int main(){
    UINT iNo=0;
    UINT iPos1=0,iPos2=0;
    UINT iAns=0;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    printf("Enter the range to toggle all the bits in that range :\n");
    scanf("%u",&iPos1);
    scanf("%u",&iPos2);

    iAns=ChkBit(iNo,iPos1,iPos2);
    printf("%u",iAns);
    return 0;
}
