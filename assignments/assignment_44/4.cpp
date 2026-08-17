#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main(){
    char Filename[50];
    int fd=0;
    int Filesize=0;

    cout<<"Enter file name: ";
    cin>>Filename;

    fd=open(Filename,O_RDONLY);

    if(fd==-1)
        {
        cout<<"Unable to open file\n";
        return -1;
        }
    
    Filesize=lseek(fd,0,SEEK_END);

    cout<<"Size of the file is :"<<Filesize<<"bytes"<<endl;

    close(fd);

    return 0;
    
}