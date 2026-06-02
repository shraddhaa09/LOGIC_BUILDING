#include<stdio.h>
void callByValue(int iNo){
    iNo++;
}
int main(){
    int iValue=11;
    callByValue(iValue);//callbyvalue(11)
    printf("Value after function call : %d\n",iValue);
    return 0;
}