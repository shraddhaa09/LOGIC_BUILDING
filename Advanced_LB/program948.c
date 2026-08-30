#include<stdio.h>
#include<stdlib.h>
//command line argu
//./Myexe 10 11

int main(int argc,char *argv[]){
    int Ans=0;
    if(argc!=3){
        printf("Invalid number of arguments\n");
        return -1;
    }
    Ans=atoi((int)argv[1])+atoi((int)argv[2]);//Warning
    printf("Addition of:%d\n",Ans);
    return 0;
}