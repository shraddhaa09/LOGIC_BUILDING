//input 8
//output 1 3 5 7
#include<stdio.h>
void disaplay(int iNo){
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt+=1){//iCnt++->iCnt=iCnt+1->[iCnt+=1](bad practice)
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main(){
    int ivalue=0;
    printf("enter the number");
    scanf("%d",&ivalue);
    disaplay(ivalue);
    return 0;                                                                   

}