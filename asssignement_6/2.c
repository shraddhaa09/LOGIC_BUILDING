//time complexity is o(1)
#include<stdio.h>
void displaynumberinword(int iNo){
    if(iNo==1){
        printf("one");
    }
    else if(iNo==2){
        printf("two");
    }
    else if(iNo==3){
        printf("three");
    }
    else if(iNo==4){
        printf("four");
    }
    else if(iNo==5){
        printf("five");
    }
    else if(iNo==6){
        printf("six");
    }
    else if(iNo==7){
        printf("seven");
    }
    else if(iNo==8){
        printf("eight");
    }
    else if(iNo==9){
        printf("nine");
    }
    else {
        printf("invalid number");
    }

}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    displaynumberinword(iValue);
    return 0;
}