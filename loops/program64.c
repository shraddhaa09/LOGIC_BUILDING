//input 5
//output -5 -4 -3 -2 -1 0 1 2 3 4 5
#include<stdio.h>
void disaplay(int iNo){
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++){
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