#include<stdio.h>
typedef unsigned int UINT;
void CommonBits(UINT iNo1,UINT iNo2){
    int iCount=0;
    int i=1;
    while(iNo1!=0 & iNo2!=0){
        printf("%u",iNo1);
        if((iNo1 & iNo2)==1){
            printf("%u",i);
        }
        i++;
        iNo1=iNo1>>1;
        iNo2=iNo2>>1;
    }
}
int main(){
    int iNo1=0,iNo2=0;
    int iRet=0;
    printf("Enter 2 numbers");
    scanf("%u",&iNo1);
    scanf("%u",&iNo2);
     return 0;
}