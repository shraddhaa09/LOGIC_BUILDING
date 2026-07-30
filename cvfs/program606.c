#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int countsmall(char* filename){
    char Buffer[BUFFER_SIZE]={'\0'};
    int iCount=0;
    int i=0;
    int fd=0,iRet=0;

    fd=open(filename,O_RDONLY);

    if(fd==-1){
        printf("Unable to open file\n");
        return -1;
    }
    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0){
        for(i=0;i<iRet;i++){
            if(Buffer[i]>='a' && Buffer[i]<='b'){
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }
    close(fd);
    return iCount;

}

int main(){
    char Fname[30]={'\0'};
    int iRet=0;

    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

    iRet=countsmall(Fname);
    printf("The count of the small alphabates are:%d",iRet);

    return 0;
}