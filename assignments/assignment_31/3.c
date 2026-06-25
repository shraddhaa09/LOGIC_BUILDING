#include<stdio.h>
int CountCapital(char *str)
{
    int iCnte = 0;
    int iCnto=0;

    while(*str != '\0')     
    {
        // Filter
        if((*str >= 'A') && (*str <= 'Z'))
        {
            // Logic
            iCnte++;
        }
        else if((*str >= 'a') && (*str <= 'z')){
            iCnto++;
        }

        str++;
    }

    return iCnto-iCnte;
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