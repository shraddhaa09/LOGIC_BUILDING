#include<stdio.h>

int StrlenX(char *str){
   *str='A';
}
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    int iRet=0;
    iRet=StrlenX(Arr);
    printf("String is:%s\n",Arr);
    return 0;
}