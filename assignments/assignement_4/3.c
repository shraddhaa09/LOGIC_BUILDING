#include<stdio.h>
void nonFactors(int iNo){
    if(iNo<=0){
        iNo=-iNo;
    }
    int i=0;
    for(int i=1;i<=iNo;i++){
        if(iNo%i!=0 && i!=0){
            printf("%d\t",i);
        }
    }   
    }
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    nonFactors(iValue);
    return 0;

}