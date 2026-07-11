#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo){
    UINT Mask=0X900;
    UINT iAns=0;

    iAns=iNo & Mask;
    if(iAns!=0){
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
        printf("9th or 12th is ON\n");
    }
    else{
        printf("9th or 12th is OFF\n");
    }
    

    return 0;
}
