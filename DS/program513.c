#include<stdio.h>

void Display(int iNo){
    auto int i=0;
    i=1;
    while(i<= iNo){
      printf("Jay ganesh..\n");  
      i++;
    }
}

int main(){
    int iValue=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}