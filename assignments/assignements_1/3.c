//3. Program to print 5 to 1 numbers on screen.
#include <stdio.h>
void display(){
    int iCnt=0;
    for(iCnt=5;iCnt>=1;iCnt--){
        printf("%d\n",iCnt);
    }
}
int main(){
    display();
    return 0;
}