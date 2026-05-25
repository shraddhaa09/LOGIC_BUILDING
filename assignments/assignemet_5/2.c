#include<stdio.h>
void display(int iNo){
    for(int i=1;i<=iNo;i++){
        printf("%d\t",i);
    }

}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}