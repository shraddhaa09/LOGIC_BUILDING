//objective-> 

#include<stdio.h>

void display(int iCnt,int n){
    //filter
    if(iCnt<0){
        printf("Invalid input\n");
        return;
    }
    for(iCnt=1;iCnt<=n;iCnt++){
        printf("Jay Ganesh..\n");
    }
}
int main(){
    int iCnt=0;
    int n;
    printf("enter number of times u want to print on the screen");
    scanf("%d",&n);
    display(iCnt,n);
}

