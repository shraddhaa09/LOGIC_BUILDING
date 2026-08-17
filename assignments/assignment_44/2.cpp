#include<iostream>
#include<fcntl.h>
#include<unistd.h>

using namespace std;

int main()
{
    char Filename[50];
    int fd = 0;

    cout << "Enter file name: ";
    cin >> Filename;

    fd = open(Filename, O_RDONLY);

    if(fd == -1)
    {
        fd = creat(Filename, 0777);//7 = 4 + 2 + 1
                                    // │   │   │
                                    // │   │   └── Execute
                                    // │   └────── Write
                                    // └────────── Read

        if(fd == -1)
        {
            cout << "Unable to open or create file." << endl;
            return -1;
        }

        cout << "File created successfully." << endl;
    }
    else
    {
        cout << "File opened successfully." << endl;
    }

    close(fd);

    return 0;
}