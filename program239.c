#include<stdio.h>
#include<string.h>
int main(){
    char *str="Ganesh";//char str[]="Ganesh"
    int iCount=0;

    printf("Length of string is : %d\n",strlen(str));

    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    printf("Lenght if the string is: %d\n",iCount);
    printf("Length of string is : %d\n",strlen(str));//0->as str++
    return 0;
}