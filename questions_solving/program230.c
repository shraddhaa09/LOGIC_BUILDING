#include<stdio.h>
int main(){
    char str[]="Jay Ganesh";//here /0 is implicitly added at the end of the string by the compiler
    printf("%s\n",str);

    return 0;
}