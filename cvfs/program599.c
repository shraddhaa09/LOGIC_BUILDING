#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024


//change in parameter
void Displayfile(char* filename){
    char Buffer[BUFFER_SIZE]={'\0'};
    int fd=0,iRet=0;
    fd=open(filename,O_RDONLY);

    if(fd==-1){
        printf("Unable to open file\n");
        return ;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0){
        write(1,Buffer,iRet);
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fd);

}

int main(){
    char Fname[30]={'\0'};

    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

    Displayfile(Fname);

    return 0;
}