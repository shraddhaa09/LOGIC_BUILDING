#include<stdio.h>
void Pattern(int iNo){
    char ch;
    for(ch='A';ch<'A'+iNo;ch++){
        printf("%c\t",ch);
    }
}
int main(){
    int iValue=0;
    printf("Enter number of elements");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}






