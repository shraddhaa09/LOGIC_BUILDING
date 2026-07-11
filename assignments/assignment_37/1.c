#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo,UINT iPos){
    while(iPos>1){
        iNo=iNo>>1;
        iPos--;
    }
    if((iNo&1)==1){
        return TRUE;
    }
return FALSE;

}
int main(){
    UINT iNo=0;
    UINT iPos=0;
    BOOL iAns=FALSE;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    printf("Enter the position of bit to check :\n");
    scanf("%u",&iPos);

    iAns=ChkBit(iNo,iPos);
    if(iAns==TRUE){
        printf("TRUE\n");
    }
    else{
        printf("FALSE\n");
    }
    

    return 0;
}
