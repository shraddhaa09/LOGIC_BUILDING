#include<stdio.h>

void DisplayASCII(char ch)
{
    int i = 0;
    for(i = 0; i <1; i++)
    {
        printf("%d\t%X\t\t%o\n", ch, ch, ch);
    }
}

int main()
{
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);
    DisplayASCII(cValue);

    return 0;
}