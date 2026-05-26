#include<stdio.h>
void Display(int iNo){
    if(iNo < 0){
        iNo = -iNo;
    }
    for(int i=1;i<=iNo*2;i++){
        if(i<=iNo){
            printf("*\t");
        }
        else{
            printf("#\t");
        }
    }

}
int main(){
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}