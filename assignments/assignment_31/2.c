#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')     
    {
        // Filter
        if((*str >= 'a') && (*str <= 'z'))
        {
            // Logic
            iCnt++;
        }

        str++;
    }

    return iCnt;
}
int main(){
    char arr[20];
    int iRet=0;
    printf("Enter String");
    scanf("%[^`\n`]s",arr);
    iRet=CountCapital(arr);
    printf("%d",iRet);
    return 0;

}