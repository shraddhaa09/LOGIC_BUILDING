#include<stdio.h>
void StrCatX(char *src,char *dest){
    while(*src!='\0'){
        src++;
    }
    *src=' ';//insert space
    src++;
    while(*dest!='\0'){
        *src=*dest;
        src++;
        dest++;
    }

    *src='\0';
}
int main(){

    char arr[30]="Marvellous OuLti os";
    char brr[30]="Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    
    return 0;
}