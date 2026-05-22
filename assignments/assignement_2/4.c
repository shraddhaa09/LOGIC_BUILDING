//4. Accept two numbers from user and display first number in second number of times.
#include <stdio.h>
void display(int iNo, int ifreq){
    int iCnt=0;
    for(iCnt=1;iCnt<=ifreq;iCnt++){
        printf("%d ",iNo);
    }
}
int main(){
    int ivalue=0;
    int icount=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&ivalue,&icount);
    display(ivalue, icount);
    return 0;
}