//2.Accept one number from user and print that number of * on screen.
#include <stdio.h>
//while loop->it is used to execute a block of code repeatedly until a specified condition is true.
void accept(int iNo){
    int iCnt=0;
    while(iNo>iCnt){
        printf("*");
        iNo--;
    }
}
int main(){
    int ivalue=0;
    printf("Enter the number of * to print: ");
    scanf("%d",&ivalue);
    accept(ivalue);
    return 0;
}