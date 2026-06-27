#include<stdio.h>
typedef unsigned int UNIT;
int main(){
    UNIT iMask=0x8FFFFFFFF;
    int iCnt=0;

      printf("%u\t%X\n",iMask,iMask);//
        iMask=iMask>>1;  
return 0;
}