#include<stdio.h>
typedef unsigned int UNIT;
//position->11
int main(){
    UNIT iNo=0;
    UNIT iMask=0;
    UNIT iPos=0;

    printf("Enter number\n");
    scanf("%d",&iNo);
    printf("Enter the bit position\n");
    scanf("%d",&iPos);
    iMask=iPos-1;
    iNo=iNo|iMask;  
    printf("Updated number is %d",iNo);
  return 0;
}