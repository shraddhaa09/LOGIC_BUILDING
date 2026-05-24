#include<stdio.h>
void Printeven(int iNo){
    int count=0;
    int i=0;
    if(iNo<=0){
        return;
    }
    while(count<=iNo){
        if(i%2==0){
            printf("%d\t",i);
            count++;
        }
        i++;
    }
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    Printeven(iValue);
    return 0;
}