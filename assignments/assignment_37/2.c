#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

UINT ChkBit(UINT iNo,UINT iPos){
    UINT iMask=1;
    while(iPos>1){
        iMask=iMask<<1;
        iPos--;
    }
    iNo=iNo^iMask;
return iNo;

}
int main(){
    UINT iNo=0;
    UINT iPos=0;
    UINT iAns=0;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    printf("Enter the position of bit to check :\n");
    scanf("%u",&iPos);

    iAns=ChkBit(iNo,iPos);
    printf("%u\n",iAns);
    return 0;
}
