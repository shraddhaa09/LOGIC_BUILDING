#include<stdio.h>
#include<string.h>
int main(){
    char *str="Ganesh";//char str[]="Ganesh"
    int iCount=0;

    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    printf("Lenght if the string is: %d\n",iCount);
    return 0;
}