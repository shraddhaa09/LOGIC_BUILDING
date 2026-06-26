#include<stdio.h>

typedef unsigned int UINT;
int main(){
    UINT iNo=0;
    UINT Mask=0x1;
    UINT iAns=0;
    UINT iPos=0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    printf("Enter the position :\n");
    scanf("%d",&iPos);
    
    iAns=iNo & Mask;
    if(iAns==Mask){
        printf("bit is ON\n");
    }
    else{
        printf("bit is OFF\n");
    }
    

    return 0;
}