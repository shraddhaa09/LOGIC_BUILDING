#include<stdio.h>
void Display(int Arr[]){

    for(int iCnt=0;iCnt<8;iCnt++){
        printf("%d\n",Arr[iCnt]);
    }
}
int main(){
    int Brr[4]={10,20,30,40};
    Display(Brr);
    return 0;
}