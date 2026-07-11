#include<stdio.h>
typedef unsigned int UINT;
int countone(UINT iNo){
    int iCount=0;
    while(iNo!=0){
        if((iNo & 1)==1){
            iCount++;
        }
        iNo=iNo>>1;
    }
    return iCount;

}
int main(){
    int iNo;
    int iRet=0;
    printf("Enter the number");
    scanf("%u",&iNo);
    iRet=countone(iNo);
    printf("%u",iRet);

     return 0;
}