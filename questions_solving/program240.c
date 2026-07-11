#include<stdio.h>
#include<string.h>
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%s",Arr);//ISSUE
    //&Arr is not needed, Arr is already a pointer to the first element of the array
    printf("Entered string is :%s",&Arr);
    return 0;
}