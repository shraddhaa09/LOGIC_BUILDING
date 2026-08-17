#include<iostream>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

using namespace std;

int main()
{
    char Filename[50];
    char String[100];
    int fd = 0;

    cout << "Enter file name: ";
    cin >> Filename;

    // Clear newline left by cin
    cin.ignore();

    cout << "Enter string: ";
    cin.getline(String, sizeof(String));

    fd = open(Filename, O_WRONLY | O_APPEND);

    if(fd == -1)
    {
        cout << "Unable to open file." << endl;
        return -1;
    }

    write(fd, String, strlen(String));

    cout << "String written successfully at the end of file." << endl;

    close(fd);

    return 0;
}