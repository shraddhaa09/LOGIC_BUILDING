#include<stdio.h>
void displayfactors(int iNo){
    int i=0;
    if(iNo<=0){
        iNo=-iNo; //sign change operator
    }
    for(int i=1;i<=iNo/2;i++){
        if(iNo%i==0){//if the number is factor of iNo
            printf("%d\t",i);
        }
    }
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    displayfactors(iValue);
    return 0;
}