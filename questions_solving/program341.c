#include<stdio.h>
typedef unsigned int UNIT;

int main(){
    
    UNIT iMask=0;

    printf("Before: %X\n",iMask);

    iMask=~iMask;

    printf("After: %X\n",iMask);


      
return 0;
}
