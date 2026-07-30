//check code
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024


int Filecopy(char filenamesrc[],char filedest[]){
   
    char Buffer[Buffer_size]={'\0'};
    int fdsrc=0,fddest=0,iRet=0;

    fdsrc=open(filenamesrc,O_RDONLY)
    if(fdsrc==-1){
        printf("Unable to open source file");
        return;
    }

    fddest=creat(filedest,0777);

    if(fddest==-1){
        printf("Unable to create destination file");
        return;
    }

    while((iRet=read(fdsrc,BUffer,sizeof(Buffer)))!=0){
        write(fddest,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fdsrc);
    close(fddest);
    
}

int main(){
    char Fnamesrc[30]={'\0'};
    char Fnamedest[30]={'\0'};

    printf("Enter the source file name:\n");
    scanf("%[^'\n']s",Fnamesrc);

    printf("Enter the destination file name:\n");
    scanf("%[^'\n']s",Fnamedest);//ISSUE 


    Filecopy(Fnamesrc,Fnamedest);

    return 0;
}