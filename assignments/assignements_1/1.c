//1.Program to divide two numbers
#include <stdio.h>
int Divide(int iNo1,int iNo2){
    int iAns=0;
    if(iNo2==0){
        printf("Division by zero is not allowed\n");
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}
int main(){
    int ivalue1=15;
    int ivalue2=5;
    int iret=0;
    iret=Divide(ivalue1,ivalue2);
    printf("Division is %d\n",iret);
    return 0;
}