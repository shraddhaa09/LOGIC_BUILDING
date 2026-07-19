#include<stdio.h>


int Display(int Arr[],int iSize){
    static int i=0;
    static int iSum=0;
    if(i<iSize){
        iSum=iSum+Arr[i];
        i++;
        Display(Arr,iSize);  
    }
    return iSum;
   
}
int main(){
    char Arr[20]={'\0'};

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("%s\n",Arr);

    

    return 0;
}