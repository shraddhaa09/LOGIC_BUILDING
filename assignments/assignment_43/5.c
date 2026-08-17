#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>//read(),write()

void Displaycharacters(char Filename[],int n){
    int fd=0;
    char Buffer[1024];
    int i;
    int Bytesread=0;

    fd=open(Filename,O_RDONLY);

    if(fd==-1){
        printf("Unable to open file\n");
        return ;
    }

    Bytesread=read(fd,Buffer,n);
    
    if(Bytesread>0){
        write(1,Buffer,Bytesread);
    }
    close(fd);

}
int main(){
    char Filename[30];
    int x;

    printf("Enter the file name:");
    fgets(Filename,sizeof(Filename),stdin);

    // Remove newline added by fgets()
    Filename[strlen(Filename) - 1] = '\0';

    printf("Enter a number to read that number of characters from starting position of file:");
    scanf("%d",&x);

    Displaycharacters(Filename,x);



    return 0;
}