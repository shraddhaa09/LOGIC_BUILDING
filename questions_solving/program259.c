#include<stdio.h>

void Update(char *str){//here this will not work (const char *str) because we are trying to update the value of str which is not allowed in const char *str
        while(*str!='\0'){
            if(*str=='l'){
            *str='L';
        }
        str++;//str=str+1 
        }

}
int main(){
    char Arr[50]={'\0'};
    printf("Enter String: \n");
    scanf("%[^'\n']s",Arr);

    Update(Arr);//call by address
    printf("string after the update is :%s\n",Arr);
    return 0;
}