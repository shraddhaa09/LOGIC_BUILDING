#include<stdio.h>
typedef unsigned int UNIT;
//position->11
int main(){
    UNIT iNo=0;
    UNIT iMask=0;

      printf("Enter number\n");
      scanf("%d",&iNo);

    iMask=0x400;

    iNo=iNo|iMask;  

    printf("Updated number is %d",iNo);
return 0;
}