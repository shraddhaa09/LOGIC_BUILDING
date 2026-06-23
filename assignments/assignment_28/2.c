#include<stdio.h>
void Pattern(int iRow,int iCol){
    int i=0,j=0;
    for(i=0;i<iRow;i++){
        for(j=0;j<iCol;j++){
            if(j==iCol-i-1){
                printf("#\t");
            }
            else if(i+j<iCol-1){
                printf("*\t");
            }   
            else{
                printf("@\t");
            } 
        }
            printf("\n");
        }        
    }

int main(){
    int iValue1=0,iValue2=0;
    printf("Enter number of rows:");
    scanf("%d",&iValue1);
    printf("Enter number of columns:");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}