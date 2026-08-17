#include<iostream>
#include<fcntl.h>
#include<unistd.h>
using namespace std;
int main(){
    char Filename[50];
    int fd=0;
    int Buffer[1024];
    int BytesRead=0;

    cout<<"Enter file name: ";
    cin>>Filename;

    fd=open(Filename,O_RDONLY);

    if(fd==-1)
        {
        cout<<"Unable to open file\n";
        return -1;
        }
    cout<<"File opened Successfully"<<endl;
    cout<<"The data from the file:"<<endl;
    while ((BytesRead=read(fd,Buffer,sizeof(Buffer)))>0){
        write(1,Buffer,BytesRead);
    }
    close(fd);

    return 0;
    
}