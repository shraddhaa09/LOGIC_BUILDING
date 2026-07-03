#include<stdio.h>
void StrCpyX(char *src,char *dest){
    while(*src!='\0'){
        if((*src>='A') && (*src<='Z')){
            *dest=*src;
            src++;
            dest++;
            
        }
        src++;
        dest++;
    }
    *dest='\0';
}
int main(){

    char arr[30]="Marvellous Oulti os";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    
    return 0;
}