#include<stdio.h>
int main(){
    unsigned int iNo=0;//check why
    unsigned int Mask=4;
    unsigned int iAns=0;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    iAns=iNo & Mask;
    if(iAns==Mask){
        printf("3rd bit is ON\n");
    }
    else{
        printf("3rd bit is OFF\n");
    }
    

    return 0;
}