#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>//only linux based os

int main(){
    int fd=0;
    int iRet=0;
    char Data[]="Marvellous Infosystem";
    
    fd=open("Marvellous.txt",O_RDWR | O_APPEND);

    if(fd == -1){
        printf("Unable to create file\n");
    }
    else{
        printf("File gets succesfully created with fc: %d\n",fd);

        iRet=write(fd,Data,strlen(Data));

        printf("%d bytes gets succesfully written \n",iRet);
        
        close(fd);
    }

    return 0;
}