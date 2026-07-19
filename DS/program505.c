#include<stdio.h>

void Display(){
    auto int i=1;
      printf("Jay ganesh.. %d\n",i);  
      i++;

      Display();
     
}

int main(){

    Display();

    return 0;
}