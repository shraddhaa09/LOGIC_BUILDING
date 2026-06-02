#include<stdio.h>
void Display(int Arr[]){//subscript->[]
    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);
    printf("%d\n",Arr[4]);
    printf("%d\n",Arr[5]);
}
int main(){
    int Brr[5]={10,20,30,40,50};
    Display(Brr);
    return 0;
}