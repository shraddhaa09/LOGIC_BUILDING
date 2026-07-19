#include<stdio.h>
//stack frame foramed 
void Display(){
    static int i=1;
      printf("Jay ganesh.. %d\n",i);  
      i++;

      Display();
     
}

int main(){

    Display();

    return 0;
}