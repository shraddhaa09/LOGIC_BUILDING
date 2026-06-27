#include<stdio.h>
typedef unsigned int UNIT;
//position->13
int main(){
    UNIT iNo=0;
    UNIT iMask=0xFFFFEFFF;
    UNIT iPos=0;

    printf("Enter number\n");
    scanf("%d",&iNo);
      
    iNo=iNo&iMask;  

    printf("Updated number is %d",iNo);
return 0;
}