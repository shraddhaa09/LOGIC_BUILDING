#include<stdio.h>
//command line argu
//the .exe is counted
int main(int argc,char *argv[]){
    printf("%s\n",argv[0]);
    printf("Number of arguments are :%d\n",argc);
    return 0;
}