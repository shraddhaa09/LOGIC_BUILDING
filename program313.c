#include<stdio.h>

typedef unsigned int UINT;
int main(){
    UINT iNo=0;
    UINT Mask=0x00010000;//hexadecimal
    UINT iAns=0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns=iNo & Mask;
    if(iAns==Mask){
        printf("17th bit is ON\n");
    }
    else{
        printf("17th bit is OFF\n");
    }
    

    return 0;
}