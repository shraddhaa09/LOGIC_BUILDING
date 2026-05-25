#include<stdio.h>
void numberline(int iNo){
    for(int i=-iNo;i<=iNo;i++){
        printf("%d\t",i);
    }
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    numberline(iValue);
    return 0;
}