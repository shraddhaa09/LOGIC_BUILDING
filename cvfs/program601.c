#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024


int CalculateFileSizefile(char filename[]){
   
    struct stat sobj;
    stat(filename,&sobj);
    
    
    return sobj.st_size;

}

int main(){
    char Fname[30]={'\0'};
    int iRet=0;

    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

    iRet=CalculateFileSizefile(Fname);
    printf("The size of the file is:%d bytes",iRet);

    return 0;
}