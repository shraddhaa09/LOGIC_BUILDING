#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024


int DisplayFileinformation(char filename[]){
   
    struct stat sobj;
    stat(filename,&sobj);

    printf("file name: %s \n",filename);
    printf("Inode number :%llu\n",sobj.st_ino);
    printf("File size is %d\n",(long long)sobj.st_size);
    
    
    return sobj.st_size;

}

int main(){
    char Fname[30]={'\0'};

    printf("Enter the file name:\n");
    scanf("%[^'\n']s",Fname);

    DisplayFileinformation(Fname);

    return 0;
}