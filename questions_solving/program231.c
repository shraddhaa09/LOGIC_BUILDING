#include<stdio.h>
int main(){
    char str[]={'J','a','y',' ','g','a','n','e','s','h'};//here /0 is not added at the end of the string by the compiler
    printf("%s\n",str);

    return 0;
}