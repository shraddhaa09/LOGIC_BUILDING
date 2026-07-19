#include<stdio.h>

void Display(){
    static int i=0;
    i=1;//issue ast static cant be reinalized 
    if(i<=4){
      printf("Jay ganesh..\n");  
      i++;
      Display();
    }
}

int main(){
    Display();
    return 0;
}