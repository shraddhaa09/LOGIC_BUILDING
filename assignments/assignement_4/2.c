#include<stdio.h>
void Factrev(int iNo){
    int iFact=1;
    for(int i=iNo/2;i>=1;i--){
        if(iNo%i==0){
            printf("%d\t",i);
        }
    }

}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    Factrev(iValue);
    return 0;
}