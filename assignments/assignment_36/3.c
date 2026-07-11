#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo){
    UINT Mask=0X40;
    UINT iAns=0;

    iAns=iNo^Mask;
    return iAns;

}
int main(){
    UINT iNo=0;
    BOOL iAns=FALSE;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    iAns=ChkBit(iNo);
    printf("%u\n",iAns);
    

    return 0;
}
