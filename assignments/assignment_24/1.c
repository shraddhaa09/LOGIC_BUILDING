#include<stdio.h>
//1:
/*
void Pattern(int iRow,int iCol){
    int i=0,j=0;
    char ch='A';
    for(i=1;i<=iRow;i++){
        for(j=1;j<=iCol;j++){
            printf("%c\t",ch);
            ch++;
        }
        ch='A' ;
        printf("\n");
    }
}*/

//2:

void Pattern(int iRow,int iCol){
    int i=0,j=0;
    char ch='A';
    for(i=1;i<=iRow;i++){
        for(j=1;j<=iCol;j++){
            printf("%c\t",ch+j-1);
        }
        printf("\n");
    }
}
int main(){
    int iValue1=0,iValue2=0;
    printf("Enter number of rows");
    scanf("%d",&iValue1);
    printf("Enter number of columns");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}