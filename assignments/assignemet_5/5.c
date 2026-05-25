#include<stdio.h>
void MultipleDisplay(int iNo){
    for(int i=1;i<=iNo*5;i++){
        if(i%iNo==0){
            printf("%d\t",i);
        }
    }

}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return 0;
}