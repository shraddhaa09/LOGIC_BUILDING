#include<stdio.h>
void pattern(int iNo){
    int count=0;
    int i=0;
    while(count<iNo*2){
        if(i%2==0){
            printf("$\t");
            count++;;
        }
        else {
            printf("*\t");
            count++;
        }
        i++;
    }
}
int main(){
    int iValue=0;
    printf("enter the number");
    scanf("%d",&iValue);
    pattern(iValue);
    return 0;
}