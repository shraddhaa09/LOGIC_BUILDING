#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int CountSmall(char FName[])
{
    int fd = 0;
    char Buffer[1024];
    int i;
    int count = 0;
    int bytesRead = 0;

    fd = open(FName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((bytesRead = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(i = 0; i < bytesRead; i++)
        {
            if(Buffer[i] >= 'a' && Buffer[i] <= 'z')
            {
                count++;
            }
        }
    }

    close(fd);

    return count;
}

int main()
{
    char FileName[30];
    int iRet = 0;

    printf("Enter file name : ");
    scanf("%s", FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small characters are %d\n", iRet);

    return 0;
}