#include<stdio.h>
//iteration Only 2 stack frames (main + Display)
//New stack frame for every recursive call in resursion 
void Display(){
    int i=1;
    while(1){
      printf("Jay ganesh.. %d\n",i);  
      i++;
    }     
}

int main(){

    Display();

    return 0;
}