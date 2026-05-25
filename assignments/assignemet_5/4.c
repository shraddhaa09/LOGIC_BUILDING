#include<stdio.h>
void oddDisplay(int iNo){
    for(int i=1;i<iNo;i++){
        if((i%2)!=0){
            printf("%d\t",i);
        }
    }
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    oddDisplay(iValue);
    return 0;
}