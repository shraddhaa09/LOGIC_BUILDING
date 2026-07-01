#include<stdio.h>
void strrevX(char *str){
    char *start=NULL;
    char *end=NULL;
    char temp='\0';
    
    while(*str!='\0'){
        str++;
    }
    str--;//while the loop ends the str is pointing to the null charachter not the lat character so we decrement it 
    end=str;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    char Arr[50]={'\0'};
    scanf("%[^\n]s",Arr);
    strrevX(Arr);
    printf("Updated string is : %s\n",Arr);
    return 0;
}