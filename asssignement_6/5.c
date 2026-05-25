//time complexity is o(1) ->The loop always runs exactly 10 times.
#include<stdio.h>
void Tblerev(int iNo){
    int iMult=0;
    for(int i=10;i>=1;i--){
        iMult=iNo*i;
        printf("%d\t",iMult);
    }
}

int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    Tblerev(iValue);
    return 0;
}