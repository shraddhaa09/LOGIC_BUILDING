#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>//only linux based os

int main(){
    int fd=0;
    int iRet=0;
    
    fd=open("Marvellous.txt",O_RDWR);

    if(fd == -1){
        printf("Unable to create file\n");
    }
    else{
        printf("File gets succesfully created with fc: %d\n",fd);

        iRet=write(fd,"Jay Ganesh...",13);

        printf("%d bytes gets succesfully written \n",iRet);
        
        close(fd);
    }

    return 0;
}