#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>//read(),write()

int countoccurrence(char Filename[],char ch){
    int iCount=0;
    int fd=0;
    char Buffer[1024];
    int i;
    int Bytesread=0;

    fd=open(Filename,O_RDONLY);

    if(fd==-1){
        printf("Unable to open file\n");
        return -1;
    }

    while ((Bytesread=read(fd,Buffer,sizeof(Buffer)))>0)
    {
        for(i=0;i<Bytesread;i++){
            if(Buffer[i]==ch){
                iCount++;
            }
        }
    }
    close(fd);

    return iCount;
}
int main(){
    char Filename[30];
    char ch;
    int iRet=0;

    printf("Enter the file name:");
    fgets(Filename,sizeof(Filename),stdin);

    // Remove newline added by fgets()
    Filename[strlen(Filename) - 1] = '\0';

    printf("Enter the character to count the occurrence of that character in the file:");
    scanf("%c",&ch);

    iRet=countoccurrence(Filename,ch);

    printf("The count of the %c is %d",ch,iRet);


    return 0;
}