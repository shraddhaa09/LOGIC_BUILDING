#include<stdio.h>
typedef unsigned int UNIT;
int main(){
    UNIT iMask=0x80000000;
    int iCnt=0;

    for(iCnt=1;iCnt<=32;iCnt++){
      printf("%d : %X\n",iCnt,iMask);//
        iMask=iMask>>1;  
    }
    

    // printf("%d\n",iMask);//2
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//4
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//8
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//16
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//32
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//64
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//128
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//256
    // iMask=iMask<<1;

    // printf("%d\n",iMask);//512
    // iMask=iMask<<1;


    return 0;
}