//5. Accept one number from user and print that number of * on screen.
#include <stdio.h>
void accept(int iNo){
    int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
    printf("*");
}
}
int main(){
    int ivalue=0;
    ivalue=5;
    accept(ivalue);
    return 0;
}