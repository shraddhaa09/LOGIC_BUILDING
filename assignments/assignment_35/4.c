#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo){
    UINT Mask=0X1C0;//12->c in hexa
    UINT iAns=0;

    iAns=iNo & Mask;
    if(iAns==Mask){
        return TRUE;
    }
    else{
        return FALSE;
    }

}
int main(){
    UINT iNo=0;
    BOOL iAns=FALSE;
    printf("Enter number :\n");
    scanf("%u",&iNo);

    iAns=ChkBit(iNo);
    if(iAns){
        printf("7th,8th and 9th bit is ON\n");
    }
    else{
        printf("7th,8th and 9th bit is OFF\n");
    }
    

    return 0;
}
