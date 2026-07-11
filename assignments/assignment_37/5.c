#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

UINT ChkBit(UINT iNo){
    UINT iMask=0xF000000F;
    iNo=iNo^iMask;
return iNo;

}
int main(){
    UINT iNo=0;
    UINT iPos=0;
    UINT iAns=0;
    printf("Enter number :\n");
    scanf("%u",&iNo);


    iAns=ChkBit(iNo);
    printf("%u\n",iAns);
    return 0;
}
