#include<stdio.h>

void Display(int iNo){
    if(iNo!=0){
      printf("%d\n",iNo);  
      Display(iNo-1); //as here the stack frame the iNo will not get earsed
    }

}

int main(){
    int iValue=0;
    printf("Enter frequency:\n");
    scanf("%d",&iValue);
    Display(iValue);

    printf("End of main\n");
    return 0;
}