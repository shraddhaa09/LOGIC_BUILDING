//time complexity is o(1)

#include<stdio.h>
void Number(int iNo){
    if(iNo<50 && iNo>0){
        printf("small");
    }
    else if(iNo>50 && iNo<100){
        printf("medium");
    }
    else {
        printf("large");
    }

}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}
