#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>//only linux users

int main(){
    int fd=0;
    
    fd=open("Marvellous.txt",O_RDONLY);

    if(fd == -1){
        printf("Unable to create file\n");
    }
    else{
        printf("File gets succesfully created with fc: %d\n",fd);
        close(fd);
    }

    return 0;
}