#include<stdio.h>
void Pattern(int iRow,int iCol){
    int i=0,j=0;
    int ENo=2,ONo=1;
    for(i=0;i<iRow;i++){
        for(j=0;j<iCol;j++){
            if(i%2==0){
                printf("%d",ENo);
                ENo=ENo+2;
            }
            else{
                printf("%d",ONo);
                ONo=ONo+2;
            }
            printf("\t");
        }
        ENo=2;
        ONo=1;
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