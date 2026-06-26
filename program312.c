#include<stdio.h>

typedef unsigned int UINT;
int main(){
    UINT iNo=0;
    UINT Mask=4096;
    UINT iAns=0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns=iNo & Mask;
    if(iAns==Mask){
        printf("7th bit is ON\n");
    }
    else{
        printf("7th bit is OFF\n");
    }
    

    return 0;
}