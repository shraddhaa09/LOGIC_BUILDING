#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2){
    int i=1;
    printf("Common bits are at position\n");
    while((iNo1!=0) || (iNo2!=0)){
        if((iNo1 &1) &&(iNo2&1)){
            printf("%u\n",i);
        }
        i++;
        iNo1=iNo1>>1;
        iNo2=iNo2>>1;
    }
}
int main(){
    UINT iNo1=0,iNo2=0;
    int iRet=0;
    printf("Enter 2 numbers");
    scanf("%u",&iNo1);
    scanf("%u",&iNo2);
    CommonBits(iNo1,iNo2);
     return 0;
}